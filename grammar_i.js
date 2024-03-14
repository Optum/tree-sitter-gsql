// TODO
// replace caseInsensitive with the resulting regex in case.py -> make it a helper, not a converter
// meaning "CREATE" becomes "[Cc][Rr][Ee][Aa][Tt][Ee]"
module.exports = grammar({
  name: "gsql",
  // extras: ($) => [/\s/, $.line_comment, $.block_comment, $.spacing_line],
  extras: ($) => [/\s/, $.line_comment, $.block_comment],

  conflicts: ($) => [[$.integer], [$.real]],
  rules: {
    gsql: ($) => repeat($._definition),

    _definition: ($) =>
      seq(choice($.create_query, $.interpret_query), $.query_body),

    //tested
    create_query: ($) =>
      seq(
        "CREATE",
        optional(seq("OR", "REPLACE")),
        optional("DISTRIBUTED"),
        "QUERY",
        field("queryName", $.name),
        $.parameter_list,
        "FOR",
        "GRAPH",
        field("graphName", $.name),
        optional(seq("SYNTAX", choice("V2", "v2"))),
      ),

    //tested
    interpret_query: ($) =>
      seq(
        "INTERPRET",
        "QUERY",
        $.parameter_list,
        "FOR",
        "GRAPH",
        field("graphName", $.name),
        optional(seq("SYNTAX", "V2")),
      ),

    //tested
    parameter_list: ($) => seq("(", optional($.query_params), ")"),

    //tested
    query_params: ($) => seq($.query_param, repeat(seq(",", $.query_param))),

    //tested
    query_param: ($) =>
      seq(
        choice($._type, $.set_param),
        $.name,
        optional(seq("=", $._numeric)), //FIXME: this can be more than numeric
      ),

    set_param: ($) =>
      seq(
        //TODO: Check that this is right
        "SET",
        "<",
        $._type,
        ">",
      ),

    //tested
    query_body: ($) =>
      seq(
        "{",
        repeat(choice($.typedef, $.spacing_line, $.query_body_stmt)),
        "}",
      ),

    //tested
    typedef: ($) =>
      seq(
        "TYPEDEF",
        "TUPLE",
        "<",
        repeat($.tuple_fields),
        ">",
        field("tupleType", $.name),
        ";",
      ),

    //tested
    tuple_fields: ($) => seq($.tuple_field, repeat(seq(",", $.tuple_field))),

    //tested
    tuple_field: ($) =>
      choice(seq($.base_type, $.name), seq($.name, $.base_type)),

    query_body_stmt: ($) =>
      seq(
        choice(
          $.decl_stmt, // tested
          $.assign_stmt, // tested
          $.v_set_var_decl_stmt, // tested
          $.l_accum_assign_stmt, // tested
          $.g_accum_assign_stmt, // tested
          $.g_accum_accum_stmt, // tested
          $.func_call_stmt, // tested
          $._select_stmt, // tested
          $.query_body_case_stmt, //tested
          $.query_body_if_stmt, //tested
          $.query_body_while_stmt, // tested
          $.query_body_for_each_stmt, //tested
          // "BREAK",
          // "CONTINUE",
          // updateStmt ,
          // insertStmt ,
          // queryBodyDeleteStmt ,
          $.print_stmt, //tested
          // printlnStmt ,
          // logStmt ,
          // returnStmt,
          // raiseStmt ,
          // tryStmt
        ),
        ";",
      ),

    //tested
    assign_stmt: ($) =>
      choice(seq($.name, "=", $.expr), seq($.name, ".", $.name, "=", $.expr)),

    //tested
    v_set_var_decl_stmt: ($) =>
      seq(
        $.name,
        // below conflicts with a function call
        // optional(
        // 	seq("(", $.name, ")")
        // ),
        "=",
        choice($.seed_set, $.simple_set, $._select_stmt),
      ),

    //tested
    seed_set: ($) =>
      seq("{", optional(seq($.seed, repeat(seq(",", $.seed)))), "}"),

    //tested
    seed: ($) =>
      choice(
        "_",
        "ANY",
        $.name,
        $.global_accum_name,
        seq($.name, ".*"),
        // seq("SelectVertex", selectVertParams)
      ),

    //tested
    simple_set: ($) =>
      prec.left(
        1,
        choice(
          $.name,
          seq("(", $.simple_set, ")"), // this will get captured by assign instead
          seq(
            $.simple_set,
            choice(
              "UNION",
              "INTERSECT",
              "MINUS",
            ),
            $.simple_set,
          ),
        ),
      ),

    //tested
    l_accum_assign_stmt: ($) =>
      seq(
        field("vertexAlias", $.name),
        ".",
        $.local_accum_name,
        choice("+=", "="),
        $.expr,
      ),

    //tested
    g_accum_assign_stmt: ($) =>
      prec(1, seq($.global_accum_name, choice("+=", "="), $.expr)),

    //tested
    g_accum_accum_stmt: ($) =>
      seq($.global_accum_name, field("plus_equal", "+="), $.expr),

    //tested
    func_call_stmt: ($) =>
      choice(
        seq(
          $.name,
          optional(seq("<", $._type, repeat(seq(",", $._type)), ">")),
          "(",
          optional($.arg_list),
          ")",
        ),
        seq(
          choice($.name, $.local_accum_name, $.global_accum_name),
          repeat1(seq(".", $.name, "(", optional($.arg_list), ")")),
        ),
      ),

    _select_stmt: ($) =>
      choice(
        $.gsql_select_block,
        // $.sqlSelectBlock
      ),

    gsql_select_block: ($) =>
      seq(
        $.gsql_select_clause,
        $.from_clause,
        // optional($.sample_clause),
        optional($.where_clause),
        optional($.accum_clause),
        repeat($.post_accum_clause),
        // optional($.having_clause),
        // optional($.order_clause),
        optional($.limit_clause),
      ),

    gsql_select_clause: ($) =>
      seq($.name, "=", "SELECT", field("alias", $.name)),

    from_clause: ($) =>
      seq(
        "FROM",
        choice(
          $.step,
          seq($.path_pattern, repeat(seq(",", $.path_pattern))),
          $.step_v2, // this could probably be integrated into path pattern
        ),
      ),

    where_clause: ($) => seq("WHERE", $.condition),

    accum_clause: ($) =>
      seq(
        // optinal(perClauseV2),
        "ACCUM",
        $.dml_sub_stmt_list,
      ),

    dml_sub_stmt_list: ($) =>
      seq($.dml_sub_stmt, repeat(seq(",", $.dml_sub_stmt))),

    dml_sub_stmt: ($) =>
      choice(
        $.assign_stmt,
        $.func_call_stmt,
        $.g_accum_accum_stmt,
        $.l_accum_accum_stmt,
        $.attr_accum_stmt,
        $.v_accum_func_call,
        $.local_var_decl_stmt,
        $.dml_sub_case_stmt,
        $.dml_sub_if_stmt,
        $.dml_sub_while_stmt,
        $.dml_sub_for_each_stmt,
        // "BREAK",
        // "CONTINUE",
        // insertStmt,
        // dmlSubDeleteStmt,
        // printlnStmt,
        // logStmt
      ),

    l_accum_accum_stmt: ($) =>
      seq($.name, ".", $.local_accum_name, field("plus_equal", "+="), $.expr),

    attr_accum_stmt: ($) =>
      seq($.name, ".", $.name, field("plus_equal", "+="), $.expr),

    v_accum_func_call: ($) =>
      seq(
        field("vertexAlias", $.name),
        ".",
        field("localAccumName", $.local_accum_name),
        repeat(
          seq(".", field("funcName", $.name), "(", optional($.arg_list), ")"),
        ),
      ),
    local_var_decl_stmt: ($) =>
      seq($.base_type, field("varName", $.name), "=", $.expr),

    dml_sub_if_stmt: ($) =>
      seq(
        "IF",
        $.condition,
        "THEN",
        $.dml_sub_stmt_list,
        repeat(
          prec.left(
            1,
            seq(
              "ELSE",
              "IF",
              $.condition,
              "THEN",
              $.dml_sub_stmt_list,
            ),
          ),
        ),
        optional(seq("ELSE", $.dml_sub_stmt_list)),
        "END",
      ),

    dml_sub_case_stmt: (
      $, //choice(
    ) =>
      seq(
        "CASE",
        repeat1(
          seq(
            "WHEN",
            $.condition,
            "THEN",
            $.dml_sub_stmt_list,
          ),
        ),
        optional(seq("ELSE", $.dml_sub_stmt_list)),
        "END",
      ),
    // seq(
    //     "CASE",
    //     $.expr,
    //     repeat1(seq("WHEN", $.constant, "THEN", $.dml_sub_stmt_list)),
    //     optional(seq("ELSE", $.dml_sub_stmt_list)),
    //     "END"
    // )
    //),

    dml_sub_while_stmt: ($) =>
      seq(
        "WHILE",
        $.condition,
        optional(seq("LIMIT", $.simple_size)),
        "DO",
        $.dml_sub_stmt_list,
        "END",
      ),

    dml_sub_for_each_stmt: ($) =>
      seq(
        "FOREACH",
        $.for_each_control,
        "DO",
        $.dml_sub_stmt_list,
        "END",
      ),

    for_each_control: ($) =>
      choice(
        seq(
          choice(
            field(
              "iterationVar",
              choice($.name, $.local_accum_name, $.global_accum_name),
            ),
            seq(
              "(",
              field("keyVar", $.name),
              repeat1(seq(",", field("valueVar", $.name))),
              ")",
            ),
          ),
          seq(choice("IN", ":"), $.set_bag_expr),
        ),
        seq(
          field(
            "iterationVar",
            choice($.name, $.local_accum_name, $.global_accum_name),
          ),
          "IN",
          "RANGE",
          "[",
          $.expr,
          ",",
          $.expr,
          "]",
          optional(seq(".", "STEP", "(", $.expr, ")")),
        ),
      ),

    post_accum_clause: ($) =>
      seq("POST-ACCUM", $.dml_sub_stmt_list),
    limit_clause: ($) =>
      seq(
        "LIMIT",
        choice(
          $.expr,
          seq($.expr, ",", $.expr),
          seq($.expr, "OFFSET", $.expr),
        ),
      ),

    path_pattern: ($) =>
      prec(
        1,
        seq(
          $.step_source_set,
          repeat(
            seq(
              "-",
              "(",
              $.path_edge_pattern,
              optional(seq(":", field("edgeAlias", $.name))),
              ")",
              "-",
              $.step_vertex_set,
            ),
          ),
        ),
      ),

    path_edge_pattern: ($) =>
      prec(
        1,
        choice(
          $.atomic_edge_pattern,
          seq("(", $.path_edge_pattern, ")"),
          prec.left(1, seq($.path_edge_pattern, ".", $.path_edge_pattern)),
          $.disj_pattern,
          // $.starPattern
        ),
      ),

    atomic_edge_pattern: ($) =>
      prec(
        1,
        choice(
          $.atomic_edge_type,
          seq($.atomic_edge_type, ">"),
          seq("<", $.atomic_edge_type),
        ),
      ),

    disj_pattern: ($) =>
      seq($.atomic_edge_pattern, repeat(seq(" | ", $.atomic_edge_pattern))),

    step: ($) =>
      seq(
        $.step_source_set,
        repeat(
          seq(
            "-",
            "(",
            $.step_edge_set,
            ")",
            "-",
            optional(">"),
            $.step_vertex_set,
          ),
        ),
      ),

    step_v2: ($) =>
      seq(
        $.step_vertex_set,
        optional(seq("-", "(", $.step_edge_set, ")", "-", $.step_vertex_set)),
      ),

    step_source_set: ($) =>
      prec(
        1,
        seq(
          field("vertexSetName", $.name),
          optional(seq(":", field("vertexAlias", $.name))),
        ),
      ),

    step_edge_set: ($) =>
      seq($.step_edge_types, optional(seq(":", field("edgeAlias", $.name)))),

    step_edge_types: ($) =>
      prec(
        2,
        choice(
          $.atomic_edge_type,
          seq("(", $.edge_set_type, repeat(seq(" | ", $.edge_set_type)), ")"),
        ),
      ),

    atomic_edge_type: ($) =>
      choice("_", "ANY", $.edge_set_type),

    edge_set_type: ($) => choice($.name, $.global_accum_name),

    step_vertex_set: ($) =>
      seq(
        $.step_vertex_types,
        optional(seq(":", field("vertexAlias", $.name))),
      ),

    step_vertex_types: ($) =>
      choice(
        $.atomic_vertex_type,
        seq("(", $.vertex_set_type, repeat(seq("|", $.vertex_set_type)), ")"),
      ),
    atomic_vertex_type: ($) =>
      choice("_", "ANY", $.vertex_set_type),
    vertex_set_type: ($) => choice($.name, $.global_accum_name),

    query_body_case_stmt: ($) =>
      choice(
        seq(
          "CASE",
          repeat1(
            seq(
              "WHEN",
              $.condition,
              "THEN",
              $.query_body_stmt,
            ),
          ),
          optional(seq("ELSE", $.query_body_stmt)),
          "END",
        ),
        seq(
          "CASE",
          $.expr,
          repeat1(
            seq(
              "WHEN",
              $.constant,
              "THEN",
              $.query_body_stmt,
            ),
          ),
          optional(seq("ELSE", $.query_body_stmt)),
          "END",
        ),
      ),

    query_body_if_stmt: ($) =>
      prec.left(
        1,
        seq(
          "IF",
          $.condition,
          "THEN",
          $.query_body_stmt,
          repeat(
            seq(
              "ELSE",
              "IF",
              $.condition,
              "THEN",
              $.query_body_stmt,
            ),
          ),
          optional(seq("ELSE", $.query_body_stmt)),
          "END",
        ),
      ),

    query_body_while_stmt: ($) =>
      seq(
        "WHILE",
        $.condition,
        optional(seq("LIMIT", $.simple_size)),
        "DO",
        $.query_body_stmt,
        "END",
      ),

    query_body_for_each_stmt: ($) =>
      seq(
        "FOREACH",
        $.for_each_control,
        "DO",
        $.query_body_stmt,
        "END",
      ),

    install_query: ($) =>
      seq(
        "INSTALL",
        "QUERY",
        choice("*", "all", seq($.name, repeat(seq(",", $.name)))),
      ),

    //tested
    decl_stmt: ($) =>
      choice(
        $.base_decl_stmt,
        $.accum_decl_stmt,
        // $.file_decl_stmt
      ),

    //tested
    base_decl_stmt: ($) =>
      seq(
        $.base_type,
        $.name,
        optional(seq("=", $.expr)),
        repeat(seq(",", $.name, optional(seq("=", $.expr)))),
      ),

    //tested
    accum_decl_stmt: ($) =>
      seq(
        $.accum_type,
        choice($.local_accum_name, $.global_accum_name),
        optional(seq("=", $.constant)),
        repeat(
          seq(
            ",",
            choice($.local_accum_name, $.global_accum_name),
            optional(seq("=", $.constant)),
          ),
        ),
      ),

    //tested
    accum_type: ($) =>
      choice(
        seq(
          "SumAccum",
          "<",
          choice(
            "INT",
            "FLOAT",
            "DOUBLE",
            "STRING",
          ),
          ">",
        ),
        seq(
          "MaxAccum",
          "<",
          choice(
            "INT",
            "FLOAT",
            "DOUBLE",
          ),
          ">",
        ),
        seq(
          "MinAccum",
          "<",
          choice(
            "INT",
            "FLOAT",
            "DOUBLE",
          ),
          ">",
        ),
        "AvgAccum",
        "OrAccum",
        "AndAccum",
        "BitwiseorAccum",
        "BitwiseandAccum",
        seq(
          "ListAccum",
          "<",
          choice($._element_type, $.accum_type),
          ">",
        ),
        // seq("ListAccum", "<", choice($.base_type, $.accum_type, $.name), ">"),
        // seq("SetAccum", "<", choice($._element_type,$.accum_type), ">"),
        seq("SetAccum", "<", $._element_type, ">"),
        seq("BagAccum", "<", $._element_type, ">"),
        seq(
          "MapAccum",
          "<",
          $._element_type,
          ",",
          choice($.base_type, $.accum_type, $.name),
          ">",
        ),
        seq(
          "HeapAccum",
          "<",
          $.name,
          ">",
          "(",
          repeat1($.digit),
          ",",
          $.name,
          choice("ASC", "DESC"),
          repeat(
            seq(
              ",",
              $.name,
              choice("ASC", "DESC"),
            ),
          ),
          ")",
        ),
        seq(
          "GroupbyAccum",
          "<",
          $._element_type,
          $.name,
          repeat(seq(",", $._element_type, $.name)),
          ",",
          $.accum_type,
          $.name,
          repeat(seq(",", $.accum_type, $.name)),
          ">",
        ),
        seq("ArrayAccum", "<", $.name, ">"),
      ),

    //tested
    global_accum_name: ($) => seq("@@", $.name),

    //tested
    local_accum_name: ($) => seq("@", $.name),

    arg_list: ($) => seq($.expr, repeat(seq(",", $.expr))),

    simple_size: ($) => choice(repeat1($.digit), $.name),

    expr: ($) =>
      prec.left(
        5,
        choice(
          $.name,
          $.global_accum_name,
          // seq($.name, ".", $.name),
          // seq($.name, ".", $.local_accum_name),
          $.name_dot,
          seq($.name, ".", $.name, ".", $.name, "(", optional($.arg_list), ")"),
          seq(
            $.name,
            ".",
            $.name,
            "(",
            optional($.arg_list),
            ")",
            optional(
              seq(".", "FILTER", "(", $.condition, ")"),
            ),
          ),
          // seq($.name, optional(seq("<", $._type, repeat(seq(",", $._type)), ">")), "(", optional(seq($.arg_list, ")"))),
          // seq($.name, ".", $.local_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
          // seq($.global_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
          seq("COALESCE", "(", optional($.arg_list), ")"),
          seq(
            $.aggregator,
            "(",
            optional("DISTINCT"),
            $.set_bag_expr,
            ")",
          ),
          seq("ISEMPTY", "(", $.set_bag_expr, ")"),
          prec.left(2, seq($.expr, $.math_operator, $.expr)),
          prec.left(1, seq("-", $.expr)),
          seq("(", $.expr, ")"),
          seq("(", $.arg_list, "->", $.arg_list, ")"),
          seq("[", $.arg_list, "]"),
          $.constant,
          $.set_bag_expr,
          $.func_call_stmt, // seq($.name, "(", $.arg_list, ")"),
        ),
      ),

    condition: ($) =>
      prec.left(
        1,
        choice(
          $.expr,
          seq($.expr, $.comparison_operator, $.expr),
          seq(
            $.expr,
            optional("NOT"),
            "IN",
            $.set_bag_expr,
          ),
          seq(
            $.expr,
            "IS",
            optional("NOT"),
            "NULL",
          ),
          seq(
            $.expr,
            "BETWEEN",
            $.expr,
            "AND",
            $.expr,
          ),
          seq("(", $.condition, ")"),
          seq("NOT", $.condition),
          seq(
            $.condition,
            choice("AND", "OR"),
            $.condition,
          ),
          choice("TRUE", "FALSE"),
          seq(
            $.expr,
            optional("NOT"),
            "LIKE",
            $.expr,
          ),
        ),
      ),

    set_bag_expr: ($) =>
      prec.left(
        0,
        choice(
          $.name,
          $.global_accum_name,
          // seq($.name, ".", $.name),
          // seq($.name, ".", $.local_accum_name),
          $.name_dot,
          seq(
            $.name_dot,
            repeat(seq(".", $.name, "(", optional($.arg_list), ")")),
          ),
          // seq($.name, ".", $.name, "(", optional($.arg_list), ")", optional(seq(".", "FILTER", "(", $.condition, ")"))),
          // seq($.global_accum_name, repeat(seq(".", $.name, "(", optional($.arg_list), ")"))),
          seq(
            $.set_bag_expr,
            choice(
              "UNION",
              "INTERSECT",
              "MINUS",
            ),
            $.set_bag_expr,
          ),
          seq("(", $.arg_list, ")"),
          seq("(", $.set_bag_expr, ")"), // this is redundant and will get captured by "(expr)"
        ),
      ),

    name_dot: ($) =>
      prec.left(
        1,
        seq(
          $.name,
          ".",
          choice($.name, $.local_accum_name),
          repeat(seq(".", $.name)),
        ),
      ),

    aggregator: ($) =>
      seq(
        "COUNT",
        "MAX",
        "MIN",
        "AVG",
        "SUM",
      ),

    print_stmt: ($) =>
      prec(
        1,
        seq(
          "PRINT",
          $.print_expr,
          repeat(seq(",", $.print_expr)),
          optional(seq("WHERE", $.condition)),
          optional(seq("TO_CSV", choice($.file_path, $.name))),
        ),
      ),

    print_expr: ($) =>
      choice(
        seq(
          choice($.expr, $.v_expr_set),
          optional(seq("AS", $.name)),
        ),
        // tableName
      ),

    v_expr_set: ($) =>
      seq($.expr, "[", $.v_set_proj, repeat(seq(",", $.v_set_proj)), "]"),

    v_set_proj: ($) =>
      seq($.expr, optional(seq("AS", $.name))),

    file_path: ($) => choice($.name, $.string_literal),

    _type: ($) => choice($.base_type),

    _element_type: ($) => choice($.base_type, $.name),

    base_type: ($) =>
      choice(
        "BOOL",
        "INT",
        "UINT",
        "FLOAT",
        "DOUBLE",
        "STRING",
        seq("VERTEX", optional(seq("<", $.name, ">"))),
        "EDGE",
        "JSONOBJECT",
        "JSONARRAY",
        "DATETIME",
      ),

    name: ($) => /[\p{L}_$][\p{L}\p{Nd}_$]*/, // thanks, java --> https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#:~:text=%5B%5Cp%7BL%7D_%24%5D%5B%5Cp%7BL%7D%5Cp%7BNd%7D_%24%5D*
    // name: $ => { // thanks, js --> https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js
    // 	const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
    // 	const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
    // 	return token(seq(alpha, repeat(alphanumeric)))
    // },

    constant: ($) =>
      choice(
        $._numeric,
        $.string_literal,
        "TRUE",
        "FALSE",
        "GSQL_UINT_MAX",
        "GSQL_INT_MAX",
        "GSQL_UINT_MIN",
      ),

    _numeric: ($) => choice($.integer, $.real),

    integer: ($) => seq(optional("-"), $.digit),

    real: ($) =>
      choice(
        seq(optional("-"), seq(".", repeat1($.digit))),
        seq(optional("-"), $.digit, seq(".", $.digit)),
      ),

    digit: ($) => /\d+/,

    string_literal: ($) =>
      choice(seq('"', repeat(/[^"&]/), '"'), seq("'", repeat(/[^'&]/), "'")),
    math_operator: ($) =>
      choice("*", "/", "%", "+", "-", "<<", ">>", "&", " | "),

    comparison_operator: ($) => choice("<", "<=", ">", ">=", "==", "!="),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) => choice($.line_comment, $.block_comment),

    newline: ($) => "\n",
    // this is used by grommet for keeping track of user's whitespace preference (leaving it be, that is)
    // spacing_line: ($) => token("<_-_-_>"),
    spacing_line: ($) => token("\n\n"),

    comment_contents: ($) => /.*/,
    block_comment: ($) =>
      seq("/*", optional(repeat(choice($.newline, $.comment_contents))), "*/"),
    line_comment: ($) => token(seq("//", repeat(/./))),
  },
});

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((letter) => `[${letter}${letter.toUpperCase()}]`)
      .join(""),
  );
}
