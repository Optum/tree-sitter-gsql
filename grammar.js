// TODO
// replace caseInsensitive with the resulting regex in case.py -> make it a helper, not a converter
// meaning caseInsensitive("create") becomes "[Cc][Rr][Ee][Aa][Tt][Ee]"
module.exports = grammar({
  name: "gsql",
  extras: ($) => [/\s/, $.line_comment, $.block_comment, $.newline],

  conflicts: ($) => [[$.integer], [$.real]],
  rules: {
    gsql: ($) => repeat($._definition),

    _definition: ($) =>
      seq(choice($.create_query, $.interpret_query), $.query_body),

    //tested
    create_query: ($) =>
      seq(
        caseInsensitive("create"),
        optional(seq(caseInsensitive("or"), caseInsensitive("replace"))),
        optional(caseInsensitive("distributed")),
        caseInsensitive("query"),
        field("queryName", $.name),
        $.parameter_list,
        caseInsensitive("for"),
        caseInsensitive("graph"),
        field("graphName", $.name),
        optional(seq(caseInsensitive("syntax"), choice("V2", "v2"))),
      ),

    //tested
    interpret_query: ($) =>
      seq(
        caseInsensitive("interpret"),
        caseInsensitive("query"),
        $.parameter_list,
        caseInsensitive("for"),
        caseInsensitive("graph"),
        field("graphName", $.name),
        optional(seq(caseInsensitive("syntax"), caseInsensitive("v2"))),
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
        optional(seq("=", $.numeric)), //FIXME: this can be more than numeric
      ),

    set_param: ($) =>
      seq(
        //TODO: Check that this is right
        caseInsensitive("set"),
        "<",
        $._type,
        ">",
      ),

    //tested
    query_body: ($) =>
      seq(
        "{",
        repeat($.typedef),
        // optional($.declaration_except_stmts),
        repeat($.query_body_stmts),
        "}",
      ),

    //tested
    typedef: ($) =>
      seq(
        caseInsensitive("typedef"),
        caseInsensitive("tuple"),
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

    // tesing...
    query_body_stmts: ($) => seq($.query_body_stmt, ";"),

    query_body_stmt: ($) =>
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
        // caseInsensitive("break"),
        // caseInsensitive("continue"),
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
        caseInsensitive("any"),
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
          seq("(", $.simple_set, ")"),
          seq(
            $.simple_set,
            choice(
              caseInsensitive("union"),
              caseInsensitive("intersect"),
              caseInsensitive("minus"),
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
      seq($.name, "=", caseInsensitive("select"), field("alias", $.name)),

    from_clause: ($) =>
      seq(
        caseInsensitive("from"),
        choice(
          $.step,
          seq($.path_pattern, repeat(seq(",", $.path_pattern))),
          $.step_v2, // this could probably be integrated into path pattern
        ),
      ),

    where_clause: ($) => seq(caseInsensitive("where"), $.condition),

    accum_clause: ($) =>
      seq(
        // optinal(perClauseV2),
        caseInsensitive("accum"),
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
        // caseInsensitive("break"),
        // caseInsensitive("continue"),
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
        caseInsensitive("if"),
        $.condition,
        caseInsensitive("then"),
        $.dml_sub_stmt_list,
        repeat(
          prec.left(
            1,
            seq(
              caseInsensitive("else"),
              caseInsensitive("if"),
              $.condition,
              caseInsensitive("then"),
              $.dml_sub_stmt_list,
            ),
          ),
        ),
        optional(seq(caseInsensitive("else"), $.dml_sub_stmt_list)),
        caseInsensitive("end"),
      ),

    dml_sub_case_stmt: (
      $, //choice(
    ) =>
      seq(
        caseInsensitive("case"),
        repeat1(
          seq(
            caseInsensitive("when"),
            $.condition,
            caseInsensitive("then"),
            $.dml_sub_stmt_list,
          ),
        ),
        optional(seq(caseInsensitive("else"), $.dml_sub_stmt_list)),
        caseInsensitive("end"),
      ),
    // seq(
    //     caseInsensitive("case"),
    //     $.expr,
    //     repeat1(seq(caseInsensitive("when"), $.constant, caseInsensitive("then"), $.dml_sub_stmt_list)),
    //     optional(seq(caseInsensitive("else"), $.dml_sub_stmt_list)),
    //     caseInsensitive("end")
    // )
    //),

    dml_sub_while_stmt: ($) =>
      seq(
        caseInsensitive("while"),
        $.condition,
        optional(seq(caseInsensitive("limit"), $.simple_size)),
        caseInsensitive("do"),
        $.dml_sub_stmt_list,
        caseInsensitive("end"),
      ),

    dml_sub_for_each_stmt: ($) =>
      seq(
        caseInsensitive("foreach"),
        $.for_each_control,
        caseInsensitive("do"),
        $.dml_sub_stmt_list,
        caseInsensitive("end"),
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
          seq(choice(caseInsensitive("in"), ":"), $.set_bag_expr),
        ),
        seq(
          field(
            "iterationVar",
            choice($.name, $.local_accum_name, $.global_accum_name),
          ),
          caseInsensitive("in"),
          caseInsensitive("range"),
          "[",
          $.expr,
          ",",
          $.expr,
          "]",
          optional(seq(".", caseInsensitive("step"), "(", $.expr, ")")),
        ),
      ),

    post_accum_clause: ($) =>
      seq(caseInsensitive("post-accum"), $.dml_sub_stmt_list),
    limit_clause: ($) =>
      seq(
        caseInsensitive("limit"),
        choice(
          $.expr,
          seq($.expr, ",", $.expr),
          seq($.expr, caseInsensitive("offset"), $.expr),
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
      choice("_", caseInsensitive("any"), $.edge_set_type),

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
      choice("_", caseInsensitive("any"), $.vertex_set_type),
    vertex_set_type: ($) => choice($.name, $.global_accum_name),

    query_body_case_stmt: ($) =>
      choice(
        seq(
          caseInsensitive("case"),
          repeat1(
            seq(
              caseInsensitive("when"),
              $.condition,
              caseInsensitive("then"),
              $.query_body_stmts,
            ),
          ),
          optional(seq(caseInsensitive("else"), $.query_body_stmts)),
          caseInsensitive("end"),
        ),
        seq(
          caseInsensitive("case"),
          $.expr,
          repeat1(
            seq(
              caseInsensitive("when"),
              $.constant,
              caseInsensitive("then"),
              $.query_body_stmts,
            ),
          ),
          optional(seq(caseInsensitive("else"), $.query_body_stmts)),
          caseInsensitive("end"),
        ),
      ),

    query_body_if_stmt: ($) =>
      prec.left(
        1,
        seq(
          caseInsensitive("if"),
          $.condition,
          caseInsensitive("then"),
          $.query_body_stmts,
          repeat(
            seq(
              caseInsensitive("else"),
              caseInsensitive("if"),
              $.condition,
              caseInsensitive("then"),
              $.query_body_stmts,
            ),
          ),
          optional(seq(caseInsensitive("else"), $.query_body_stmts)),
          caseInsensitive("end"),
        ),
      ),

    query_body_while_stmt: ($) =>
      seq(
        caseInsensitive("while"),
        $.condition,
        optional(seq(caseInsensitive("limit"), $.simple_size)),
        caseInsensitive("do"),
        $.query_body_stmts,
        caseInsensitive("end"),
      ),

    query_body_for_each_stmt: ($) =>
      seq(
        caseInsensitive("foreach"),
        $.for_each_control,
        caseInsensitive("do"),
        $.query_body_stmts,
        caseInsensitive("end"),
      ),

    install_query: ($) =>
      seq(
        caseInsensitive("install"),
        caseInsensitive("query"),
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
          caseInsensitive("sumaccum"),
          "<",
          choice(
            caseInsensitive("int"),
            caseInsensitive("float"),
            caseInsensitive("double"),
            caseInsensitive("string"),
          ),
          ">",
        ),
        seq(
          caseInsensitive("maxaccum"),
          "<",
          choice(
            caseInsensitive("int"),
            caseInsensitive("float"),
            caseInsensitive("double"),
          ),
          ">",
        ),
        seq(
          caseInsensitive("minaccum"),
          "<",
          choice(
            caseInsensitive("int"),
            caseInsensitive("float"),
            caseInsensitive("double"),
          ),
          ">",
        ),
        caseInsensitive("avgaccum"),
        caseInsensitive("oraccum"),
        caseInsensitive("andaccum"),
        caseInsensitive("bitwiseoraccum"),
        caseInsensitive("bitwiseandaccum"),
        seq(
          caseInsensitive("listaccum"),
          "<",
          choice($._element_type, $.accum_type),
          ">",
        ),
        // seq(caseInsensitive("listaccum"), "<", choice($.base_type, $.accum_type, $.name), ">"),
        // seq(caseInsensitive("setaccum"), "<", choice($._element_type,$.accum_type), ">"),
        seq(caseInsensitive("setaccum"), "<", $._element_type, ">"),
        seq(caseInsensitive("bagaccum"), "<", $._element_type, ">"),
        seq(
          caseInsensitive("mapaccum"),
          "<",
          $._element_type,
          ",",
          choice($.base_type, $.accum_type, $.name),
          ">",
        ),
        seq(
          caseInsensitive("heapaccum"),
          "<",
          $.name,
          ">",
          "(",
          repeat1($.digit),
          ",",
          $.name,
          choice(caseInsensitive("asc"), caseInsensitive("desc")),
          repeat(
            seq(
              ",",
              $.name,
              choice(caseInsensitive("asc"), caseInsensitive("desc")),
            ),
          ),
          ")",
        ),
        seq(
          caseInsensitive("groupbyaccum"),
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
        seq(caseInsensitive("arrayaccum"), "<", $.name, ">"),
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
              seq(".", caseInsensitive("filter"), "(", $.condition, ")"),
            ),
          ),
          // seq($.name, optional(seq("<", $._type, repeat(seq(",", $._type)), ">")), "(", optional(seq($.arg_list, ")"))),
          // seq($.name, ".", $.local_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
          // seq($.global_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
          seq(caseInsensitive("coalesce"), "(", optional($.arg_list), ")"),
          seq(
            $.aggregator,
            "(",
            optional(caseInsensitive("distinct")),
            $.set_bag_expr,
            ")",
          ),
          seq(caseInsensitive("isempty"), "(", $.set_bag_expr, ")"),
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
            optional(caseInsensitive("not")),
            caseInsensitive("in"),
            $.set_bag_expr,
          ),
          seq(
            $.expr,
            caseInsensitive("is"),
            optional(caseInsensitive("not")),
            caseInsensitive("null"),
          ),
          seq(
            $.expr,
            caseInsensitive("between"),
            $.expr,
            caseInsensitive("and"),
            $.expr,
          ),
          seq("(", $.condition, ")"),
          seq(caseInsensitive("not"), $.condition),
          seq(
            $.condition,
            choice(caseInsensitive("and"), caseInsensitive("or")),
            $.condition,
          ),
          choice(caseInsensitive("true"), caseInsensitive("false")),
          seq(
            $.expr,
            optional(caseInsensitive("not")),
            caseInsensitive("like"),
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
          // seq($.name, ".", $.name, "(", optional($.arg_list), ")", optional(seq(".", caseInsensitive("filter"), "(", $.condition, ")"))),
          // seq($.global_accum_name, repeat(seq(".", $.name, "(", optional($.arg_list), ")"))),
          seq(
            $.set_bag_expr,
            choice(
              caseInsensitive("union"),
              caseInsensitive("intersect"),
              caseInsensitive("minus"),
            ),
            $.set_bag_expr,
          ),
          seq("(", $.arg_list, ")"),
          seq("(", $.set_bag_expr, ")"),
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
        caseInsensitive("count"),
        caseInsensitive("max"),
        caseInsensitive("min"),
        caseInsensitive("avg"),
        caseInsensitive("sum"),
      ),

    print_stmt: ($) =>
      prec(
        1,
        seq(
          caseInsensitive("print"),
          $.print_expr,
          repeat(seq(",", $.print_expr)),
          optional(seq(caseInsensitive("where"), $.condition)),
          optional(seq(caseInsensitive("to_csv"), choice($.file_path, $.name))),
        ),
      ),

    print_expr: ($) =>
      choice(
        seq(
          choice($.expr, $.v_expr_set),
          optional(seq(caseInsensitive("as"), $.name)),
        ),
        // tableName
      ),

    v_expr_set: ($) =>
      seq($.expr, "[", $.v_set_proj, repeat(seq(",", $.v_set_proj)), "]"),

    v_set_proj: ($) =>
      seq($.expr, optional(seq(caseInsensitive("as"), $.name))),

    file_path: ($) => choice($.name, $.string_literal),

    _type: ($) => choice($.base_type),

    _element_type: ($) => choice($.base_type, $.name),

    base_type: ($) =>
      choice(
        caseInsensitive("bool"),
        caseInsensitive("int"),
        caseInsensitive("uint"),
        caseInsensitive("float"),
        caseInsensitive("double"),
        caseInsensitive("string"),
        seq(caseInsensitive("vertex"), optional(seq("<", $.name, ">"))),
        caseInsensitive("edge"),
        caseInsensitive("jsonobject"),
        caseInsensitive("jsonarray"),
        caseInsensitive("datetime"),
      ),

    name: ($) => /[\p{L}_$][\p{L}\p{Nd}_$]*/, // thanks, java --> https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#:~:text=%5B%5Cp%7BL%7D_%24%5D%5B%5Cp%7BL%7D%5Cp%7BNd%7D_%24%5D*
    // name: $ => { // thanks, js --> https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js
    // 	const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
    // 	const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
    // 	return token(seq(alpha, repeat(alphanumeric)))
    // },

    constant: ($) =>
      choice(
        $.numeric,
        $.string_literal,
        caseInsensitive("true"),
        caseInsensitive("false"),
        caseInsensitive("gsql_uint_max"),
        caseInsensitive("gsql_int_max"),
        caseInsensitive("gsql_uint_min"),
      ),

    numeric: ($) => choice($.integer, $.real),

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

    // this is used by grommet for keeping track of user's whitespace preference (leaving it be, that is)
    newline: ($) => token(seq("<_-_-_>", "\n")),

    line_comment: ($) => token(seq("//", /.*/)),

    block_comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});

//todo return matched text instead of regex?
function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((letter) => `[${letter}${letter.toUpperCase()}]`)
      .join(""),
  );
}
