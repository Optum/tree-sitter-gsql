// TODO
// replace caseInsensitive with the resulting regex in case.py -> make it a helper, not a converter
// meaning /[Cc][Rr][Ee][Aa][Tt][Ee]/ becomes "[Cc][Rr][Ee][Aa][Tt][Ee]"
module.exports = grammar({
    name: "gsql",
    extras: $ => [
        /\s/,
        $.line_comment,
        $.block_comment,
        $.newline
    ],

    conflicts: $ => [
        [$.integer],
        [$.real]
    ],
    rules: {
        gsql: $ => repeat($._definition),

        _definition: $ => seq(
            choice(
                $.create_query,
                $.interpret_query
            ),
            $.query_body
        ),

        //tested
        create_query: $ => seq(
            /[Cc][Rr][Ee][Aa][Tt][Ee]/,
            optional(
                seq(/[Oo][Rr]/, /[Rr][Ee][Pp][Ll][Aa][Cc][Ee]/)
            ),
            optional(/[Dd][Ii][Ss][Tt][Rr][Ii][Bb][Uu][Tt][Ee][Dd]/),
            /[Qq][Uu][Ee][Rr][Yy]/,
            field("queryName", $.name),
            $.parameter_list,
            /[Ff][Oo][Rr]/,
            /[Gg][Rr][Aa][Pp][Hh]/,
            field("graphName", $.name),
            optional(
                seq(/[Ss][Yy][Nn][Tt][Aa][Xx]/, choice("V2", "v2"))
            ),
        ),


        //tested
        interpret_query: $ => seq(
            /[Ii][Nn][Tt][Ee][Rr][Pp][Rr][Ee][Tt]/,
            /[Qq][Uu][Ee][Rr][Yy]/,
            $.parameter_list,
            /[Ff][Oo][Rr]/,
            /[Gg][Rr][Aa][Pp][Hh]/,
            field("graphName", $.name),
            optional(
                seq(/[Ss][Yy][Nn][Tt][Aa][Xx]/, /[Vv][22]/)
            ),
        ),

        //tested
        parameter_list: $ => seq(
            "(",
            repeat($.query_params),
            ")"
        ),

        //tested
        query_params: $ => seq(
            $.query_param,
            optional(
                repeat(seq(",", $.query_param))
            )
        ),

        //tested
        query_param: $ => seq(
            $._type,
            $.name,
            optional(seq("=", $.numeric))
        ),

        //tested
        query_body: $ =>
            seq(
                "{",
                repeat($.typedef),
                // optional($.declaration_except_stmts),
                repeat($.query_body_stmts),
                "}"
            ),

        //tested
        typedef: $ => seq(
            /[Tt][Yy][Pp][Ee][Dd][Ee][Ff]/,
            /[Tt][Uu][Pp][Ll][Ee]/,
            "<",
            repeat($.tuple_fields),
            ">",
            field("tupleType", $.name),
            ";"
        ),

        //tested
        tuple_fields: $ => seq(
            $.tuple_field,
            repeat(
                seq(",", $.tuple_field)
            )
        ),

        //tested
        tuple_field: $ => choice(
            seq($.base_type, $.name),
            seq($.name, $.base_type)
        ),

        // tesing...
        query_body_stmts: $ => seq(
            $.query_body_stmt,
            ';'
        ),

        query_body_stmt: $ => choice(
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
            // /[Bb][Rr][Ee][Aa][Kk]/,
            // /[Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee]/,
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
        assign_stmt: $ => choice(
            seq($.name, "=", $.expr),
            seq($.name, ".", $.name, "=", $.expr)
        ),

        //tested
        v_set_var_decl_stmt: $ => seq(
            $.name,
            // below conflicts with a function call
            // optional(
            // 	seq("(", $.name, ")")
            // ),
            "=",
            choice($.seed_set,
                $.simple_set,
                $._select_stmt
            )
        ),

        //tested
        seed_set: $ => seq(
            "{",
            optional(
                seq($.seed, repeat(seq(",", $.seed)))
            ),
            "}"
        ),

        //tested
        seed: $ => choice(
            "_",
            /[Aa][Nn][Yy]/,
            $.name,
            $.global_accum_name,
            seq($.name, ".*"),
            // seq("SelectVertex", selectVertParams)
        ),

        //tested
        simple_set: $ => prec.left(1, choice(
            $.name,
            seq("(", $.simple_set, ")"),
            seq($.simple_set, choice(/[Uu][Nn][Ii][Oo][Nn]/, /[Ii][Nn][Tt][Ee][Rr][Ss][Ee][Cc][Tt]/, /[Mm][Ii][Nn][Uu][Ss]/), $.simple_set)
        )),

        //tested
        l_accum_assign_stmt: $ => seq(
            field('vertexAlias', $.name),
            ".",
            $.local_accum_name,
            choice("+=", "="),
            $.expr
        ),

        //tested
        g_accum_assign_stmt: $ => prec(1, seq(
            $.global_accum_name,
            choice("+=", "="),
            $.expr
        )),

        //tested
        g_accum_accum_stmt: $ => seq(
            $.global_accum_name,
            field("plus_equal", "+="),
            $.expr
        ),

        //tested
        func_call_stmt: $ => choice(
            seq(
                $.name,
                optional(seq(
                    "<",
                    $._type,
                    repeat(seq(",", $._type)),
                    ">"
                )),
                "(",
                optional($.arg_list),
                ")"
            ),
            seq(
                choice($.name, $.local_accum_name, $.global_accum_name),
                repeat1(seq(".", $.name, "(", optional($.arg_list), ")")
                )
            )
        ),

        _select_stmt: $ => choice(
            $.gsql_select_block,
            // $.sqlSelectBlock 
        ),

        gsql_select_block: $ => seq(
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

        gsql_select_clause: $ => seq(
            $.name,
            "=",
            /[Ss][Ee][Ll][Ee][Cc][Tt]/,
            field("alias", $.name)
        ),

        from_clause: $ => seq(
            /[Ff][Rr][Oo][Mm]/,
            choice(
                $.step,
                seq($.path_pattern, repeat(seq(",", $.path_pattern))),
                $.step_v2, // this could probably be integrated into path pattern
            )
        ),

        where_clause: $ => seq(
            /[Ww][Hh][Ee][Rr][Ee]/,
            $.condition
        ),

        accum_clause: $ => seq(
            // optinal(perClauseV2),
            /[Aa][Cc][Cc][Uu][Mm]/,
            $.dml_sub_stmt_list
        ),

        dml_sub_stmt_list: $ => seq(
            $.dml_sub_stmt,
            repeat(seq(",", $.dml_sub_stmt))
        ),

        dml_sub_stmt: $ => choice(
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
            // /[Bb][Rr][Ee][Aa][Kk]/,
            // /[Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee]/,
            // insertStmt,
            // dmlSubDeleteStmt,
            // printlnStmt,
            // logStmt
        ),

        l_accum_accum_stmt: $ => seq(
            $.name,
            ".",
            $.local_accum_name,
            field("plus_equal", "+="),
            $.expr
        ),

        attr_accum_stmt: $ => seq(
            $.name,
            ".",
            $.name,
            field("plus_equal", "+="),
            $.expr
        ),

        v_accum_func_call: $ => seq(
            field('vertexAlias', $.name),
            ".",
            field('localAccumName', $.local_accum_name),
            repeat(seq(
                ".",
                field("funcName", $.name),
                "(",
                optional($.arg_list),
                ")"
            ))
        ),
        local_var_decl_stmt: $ => seq(
            $.base_type,
            field("varName", $.name),
            "=",
            $.expr
        ),

        dml_sub_if_stmt: $ =>
            seq(
                /[Ii][Ff]/,
                $.condition,
                /[Tt][Hh][Ee][Nn]/,
                $.dml_sub_stmt_list,
                repeat(prec.left(1,
                    seq(
                        /[Ee][Ll][Ss][Ee]/,
                        /[Ii][Ff]/,
                        $.condition,
                        /[Tt][Hh][Ee][Nn]/,
                        $.dml_sub_stmt_list
                    ))),
                optional(seq(/[Ee][Ll][Ss][Ee]/, $.dml_sub_stmt_list)),
                /[Ee][Nn][Dd]/
            ),

        dml_sub_case_stmt: $ => //choice(
            seq(
                /[Cc][Aa][Ss][Ee]/,
                repeat1(seq(/[Ww][Hh][Ee][Nn]/, $.condition, /[Tt][Hh][Ee][Nn]/, $.dml_sub_stmt_list)),
                optional(seq(/[Ee][Ll][Ss][Ee]/, $.dml_sub_stmt_list)),
                /[Ee][Nn][Dd]/
            ),
        // seq(
        //     /[Cc][Aa][Ss][Ee]/,
        //     $.expr,
        //     repeat1(seq(/[Ww][Hh][Ee][Nn]/, $.constant, /[Tt][Hh][Ee][Nn]/, $.dml_sub_stmt_list)),
        //     optional(seq(/[Ee][Ll][Ss][Ee]/, $.dml_sub_stmt_list)),
        //     /[Ee][Nn][Dd]/
        // )
        //),

        dml_sub_while_stmt: $ => seq(
            /[Ww][Hh][Ii][Ll][Ee]/,
            $.condition,
            optional(seq(/[Ll][Ii][Mm][Ii][Tt]/, $.simple_size)),
            /[Dd][Oo]/,
            $.dml_sub_stmt_list,
            /[Ee][Nn][Dd]/
        ),

        dml_sub_for_each_stmt: $ => seq(
            /[Ff][Oo][Rr][Ee][Aa][Cc][Hh]/,
            $.for_each_control,
            /[Dd][Oo]/,
            $.dml_sub_stmt_list,
            /[Ee][Nn][Dd]/
        ),

        for_each_control: $ => choice(
            seq(
                choice(
                    field("iterationVar", choice($.name, $.local_accum_name, $.global_accum_name)),
                    seq("(", field("keyVar", $.name), repeat1(seq(",", field("valueVar", $.name))), ")")
                ),
                seq(choice(/[Ii][Nn]/, ":"),
                    $.set_bag_expr)
            ),
            seq(
                field("iterationVar", choice($.name, $.local_accum_name, $.global_accum_name)),
                /[Ii][Nn]/,
                /[Rr][Aa][Nn][Gg][Ee]/,
                "[",
                $.expr,
                ",",
                $.expr,
                "]",
                optional(seq(".", /[Ss][Tt][Ee][Pp]/, "(", $.expr, ")")))
        ),

        post_accum_clause: $ => seq(
            /[Pp][Oo][Ss][Tt][--][Aa][Cc][Cc][Uu][Mm]/,
            $.dml_sub_stmt_list
        ),
        limit_clause: $ => seq(
            /[Ll][Ii][Mm][Ii][Tt]/,
            choice(
                $.expr,
                seq($.expr, ",", $.expr),
                seq($.expr, /[Oo][Ff][Ff][Ss][Ee][Tt]/, $.expr)
            )
        ),

        path_pattern: $ => prec(1, seq(
            $.step_source_set,
            repeat(seq(
                "-",
                "(",
                $.path_edge_pattern,
                optional(seq(":", field("edgeAlias", $.name))),
                ")",
                "-",
                $.step_vertex_set
            ))
        )),

        path_edge_pattern: $ => prec(1, choice(
            $.atomic_edge_pattern,
            seq("(", $.path_edge_pattern, ")"),
            prec.left(1, seq($.path_edge_pattern, ".", $.path_edge_pattern)),
            $.disj_pattern,
            // $.starPattern
        )),

        atomic_edge_pattern: $ => prec(1, choice(
            $.atomic_edge_type,
            seq($.atomic_edge_type, ">"),
            seq("<", $.atomic_edge_type)
        )),

        disj_pattern: $ => seq(
            $.atomic_edge_pattern,
            repeat(seq(" | ", $.atomic_edge_pattern))
        ),


        step: $ => seq(
            $.step_source_set,
            repeat(seq(
                "-", "(",
                $.step_edge_set,
                ")", "-", optional('>'),
                $.step_vertex_set
            ))
        ),

        step_v2: $ => seq(
            $.step_vertex_set,
            optional(seq("-", "(", $.step_edge_set, ")", "-", $.step_vertex_set))
        ),

        step_source_set: $ => prec(1, seq(
            field('vertexSetName', $.name),
            optional(seq(":", field("vertexAlias", $.name)))
        )),

        step_edge_set: $ => seq(
            $.step_edge_types,
            optional(seq(":", field("edgeAlias", $.name)))
        ),

        step_edge_types: $ => prec(2, choice(
            $.atomic_edge_type,
            seq("(", $.edge_set_type, repeat(seq(" | ", $.edge_set_type)), ")")
        )),

        atomic_edge_type: $ => choice(
            "_",
            /[Aa][Nn][Yy]/,
            $.edge_set_type
        ),

        edge_set_type: $ => choice(
            $.name,
            $.global_accum_name
        ),

        step_vertex_set: $ => seq(
            $.step_vertex_types,
            optional(seq(":", field("vertexAlias", $.name)))
        ),

        step_vertex_types: $ => choice(
            $.atomic_vertex_type,
            seq("(", $.vertex_set_type, repeat(seq("|", $.vertex_set_type)), ")")
        ),
        atomic_vertex_type: $ => choice(
            "_",
            /[Aa][Nn][Yy]/,
            $.vertex_set_type
        ),
        vertex_set_type: $ => choice(
            $.name,
            $.global_accum_name
        ),

        query_body_case_stmt: $ => choice(
            seq(
                /[Cc][Aa][Ss][Ee]/,
                repeat1(seq(/[Ww][Hh][Ee][Nn]/, $.condition, /[Tt][Hh][Ee][Nn]/, $.query_body_stmts)),
                optional(seq(/[Ee][Ll][Ss][Ee]/, $.query_body_stmts)),
                /[Ee][Nn][Dd]/
            ),
            seq(
                /[Cc][Aa][Ss][Ee]/,
                $.expr,
                repeat1(seq(/[Ww][Hh][Ee][Nn]/, $.constant, /[Tt][Hh][Ee][Nn]/, $.query_body_stmts)),
                optional(seq(/[Ee][Ll][Ss][Ee]/, $.query_body_stmts)),
                /[Ee][Nn][Dd]/
            ),
        ),

        query_body_if_stmt: $ => prec.left(1, seq(
            /[Ii][Ff]/,
            $.condition,
            /[Tt][Hh][Ee][Nn]/,
            $.query_body_stmts,
            repeat(seq(
                /[Ee][Ll][Ss][Ee]/,
                /[Ii][Ff]/,
                $.condition,
                /[Tt][Hh][Ee][Nn]/,
                $.query_body_stmts
            )),
            optional(seq(/[Ee][Ll][Ss][Ee]/, $.query_body_stmts)),
            /[Ee][Nn][Dd]/
        )),

        query_body_while_stmt: $ => seq(
            /[Ww][Hh][Ii][Ll][Ee]/,
            $.condition,
            optional(seq(/[Ll][Ii][Mm][Ii][Tt]/, $.simple_size)),
            /[Dd][Oo]/,
            $.query_body_stmts,
            /[Ee][Nn][Dd]/
        ),

        query_body_for_each_stmt: $ => seq(
            /[Ff][Oo][Rr][Ee][Aa][Cc][Hh]/,
            $.for_each_control,
            /[Dd][Oo]/,
            $.query_body_stmts,
            /[Ee][Nn][Dd]/
        ),


        install_query: $ => seq(
            /[Ii][Nn][Ss][Tt][Aa][Ll][Ll]/,
            /[Qq][Uu][Ee][Rr][Yy]/,
            choice("*", "all", seq($.name, repeat(seq(",", $.name))))
        ),

        //tested
        decl_stmt: $ => choice(
            $.base_decl_stmt,
            $.accum_decl_stmt,
            // $.file_decl_stmt
        ),

        //tested
        base_decl_stmt: $ => seq(
            $.base_type,
            $.name,
            optional(seq("=", $.expr)),
            repeat(seq(",", $.name, optional(seq("=", $.expr))))
        ),

        //tested
        accum_decl_stmt: $ => seq(
            $.accum_type,
            choice($.local_accum_name, $.global_accum_name),
            optional(seq("=", $.constant)),
            repeat(
                seq(
                    ",",
                    choice($.local_accum_name, $.global_accum_name),
                    optional(seq("=", $.constant))
                )
            )
        ),

        //tested
        accum_type: $ => choice(
            seq(/[Ss][Uu][Mm][Aa][Cc][Cc][Uu][Mm]/, "<", choice(/[Ii][Nn][Tt]/, /[Ff][Ll][Oo][Aa][Tt]/, /[Dd][Oo][Uu][Bb][Ll][Ee]/, /[Ss][Tt][Rr][Ii][Nn][Gg]/), ">"),
            seq(/[Mm][Aa][Xx][Aa][Cc][Cc][Uu][Mm]/, "<", choice(/[Ii][Nn][Tt]/, /[Ff][Ll][Oo][Aa][Tt]/, /[Dd][Oo][Uu][Bb][Ll][Ee]/), ">"),
            seq(/[Mm][Ii][Nn][Aa][Cc][Cc][Uu][Mm]/, "<", choice(/[Ii][Nn][Tt]/, /[Ff][Ll][Oo][Aa][Tt]/, /[Dd][Oo][Uu][Bb][Ll][Ee]/), ">"),
            /[Aa][Vv][Gg][Aa][Cc][Cc][Uu][Mm]/,
            /[Oo][Rr][Aa][Cc][Cc][Uu][Mm]/,
            /[Aa][Nn][Dd][Aa][Cc][Cc][Uu][Mm]/,
            /[Bb][Ii][Tt][Ww][Ii][Ss][Ee][Oo][Rr][Aa][Cc][Cc][Uu][Mm]/,
            /[Bb][Ii][Tt][Ww][Ii][Ss][Ee][Aa][Nn][Dd][Aa][Cc][Cc][Uu][Mm]/,
            seq(/[Ll][Ii][Ss][Tt][Aa][Cc][Cc][Uu][Mm]/, "<", choice($._element_type, $.accum_type), ">"),
            // seq(/[Ll][Ii][Ss][Tt][Aa][Cc][Cc][Uu][Mm]/, "<", choice($.base_type, $.accum_type, $.name), ">"),
            // seq(/[Ss][Ee][Tt][Aa][Cc][Cc][Uu][Mm]/, "<", choice($._element_type,$.accum_type), ">"),
            seq(/[Ss][Ee][Tt][Aa][Cc][Cc][Uu][Mm]/, "<", $._element_type, ">"),
            seq(/[Bb][Aa][Gg][Aa][Cc][Cc][Uu][Mm]/, "<", $._element_type, ">"),
            seq(/[Mm][Aa][Pp][Aa][Cc][Cc][Uu][Mm]/, "<", $._element_type, ",", choice($.base_type, $.accum_type, $.name), ">"),
            seq(/[Hh][Ee][Aa][Pp][Aa][Cc][Cc][Uu][Mm]/, "<", $.name, ">", "(", repeat1($.digit), ",", $.name, choice(/[Aa][Ss][Cc]/, /[Dd][Ee][Ss][Cc]/), repeat(seq(",", $.name, choice(/[Aa][Ss][Cc]/, /[Dd][Ee][Ss][Cc]/))), ")"),
            seq(/[Gg][Rr][Oo][Uu][Pp][Bb][Yy][Aa][Cc][Cc][Uu][Mm]/, "<", $._element_type, $.name, repeat(seq(",", $._element_type, $.name)), ",", $.accum_type, $.name, repeat(seq(",", $.accum_type, $.name)), ">"),
            seq(/[Aa][Rr][Rr][Aa][Yy][Aa][Cc][Cc][Uu][Mm]/, "<", $.name, ">")
        ),

        //tested
        global_accum_name: $ => seq(
            "@@",
            $.name
        ),

        //tested
        local_accum_name: $ => seq(
            "@",
            $.name
        ),

        arg_list: $ => seq(
            $.expr,
            repeat(seq(",", $.expr))
        ),

        simple_size: $ => choice(
            repeat1($.digit),
            $.name
        ),

        expr: $ => prec.left(5, choice(
            $.name,
            $.global_accum_name,
            // seq($.name, ".", $.name),
            // seq($.name, ".", $.local_accum_name),
            $.name_dot,
            seq($.name, ".", $.name, ".", $.name, "(", optional($.arg_list), ")"),
            seq($.name, ".", $.name, "(", optional($.arg_list), ")", optional(seq(".", /[Ff][Ii][Ll][Tt][Ee][Rr]/, "(", $.condition, ")"))),
            // seq($.name, optional(seq("<", $._type, repeat(seq(",", $._type)), ">")), "(", optional(seq($.arg_list, ")"))),
            // seq($.name, ".", $.local_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
            // seq($.global_accum_name, repeat1(seq(".", $.name, "(", optional($.arg_list), ")")), optional(seq(".", $.name))),
            seq(/[Cc][Oo][Aa][Ll][Ee][Ss][Cc][Ee]/, "(", optional($.arg_list), ")"),
            seq($.aggregator, "(", optional(/[Dd][Ii][Ss][Tt][Ii][Nn][Cc][Tt]/), $.set_bag_expr, ")"),
            seq(/[Ii][Ss][Ee][Mm][Pp][Tt][Yy]/, "(", $.set_bag_expr, ")"),
            prec.left(2, seq($.expr, $.math_operator, $.expr)),
            prec.left(1, seq("-", $.expr)),
            seq("(", $.expr, ")"),
            seq("(", $.arg_list, "->", $.arg_list, ")"),
            seq("[", $.arg_list, "]"),
            $.constant,
            $.set_bag_expr,
            $.func_call_stmt // seq($.name, "(", $.arg_list, ")"),
        )),

        condition: $ => prec.left(1, choice(
            $.expr,
            seq($.expr, $.comparison_operator, $.expr),
            seq($.expr, optional(/[Nn][Oo][Tt]/), /[Ii][Nn]/, $.set_bag_expr),
            seq($.expr, /[Ii][Ss]/, optional(/[Nn][Oo][Tt]/), /[Nn][Uu][Ll][Ll]/),
            seq($.expr, /[Bb][Ee][Tt][Ww][Ee][Ee][Nn]/, $.expr, /[Aa][Nn][Dd]/, $.expr),
            seq("(", $.condition, ")"),
            seq(/[Nn][Oo][Tt]/, $.condition),
            seq($.condition, choice(/[Aa][Nn][Dd]/, /[Oo][Rr]/), $.condition),
            choice(/[Tt][Rr][Uu][Ee]/, /[Ff][Aa][Ll][Ss][Ee]/),
            seq($.expr, optional(/[Nn][Oo][Tt]/), /[Ll][Ii][Kk][Ee]/, $.expr)
        )),

        set_bag_expr: $ => prec.left(0, choice(
            $.name,
            $.global_accum_name,
            // seq($.name, ".", $.name),
            // seq($.name, ".", $.local_accum_name),
            $.name_dot,
            seq($.name_dot, repeat(seq(".", $.name, "(", optional($.arg_list), ")"))),
            // seq($.name, ".", $.name, "(", optional($.arg_list), ")", optional(seq(".", /[Ff][Ii][Ll][Tt][Ee][Rr]/, "(", $.condition, ")"))),
            // seq($.global_accum_name, repeat(seq(".", $.name, "(", optional($.arg_list), ")"))),
            seq($.set_bag_expr, choice(/[Uu][Nn][Ii][Oo][Nn]/, /[Ii][Nn][Tt][Ee][Rr][Ss][Ee][Cc][Tt]/, /[Mm][Ii][Nn][Uu][Ss]/), $.set_bag_expr),
            seq("(", $.arg_list, ")"),
            seq("(", $.set_bag_expr, ")")
        )),

        name_dot: $ => prec.left(1, seq(
            $.name,
            ".",
            choice($.name, $.local_accum_name),
            repeat(seq(".", $.name))
        )),

        aggregator: $ => seq(
            /[Cc][Oo][Uu][Nn][Tt]/,
            /[Mm][Aa][Xx]/,
            /[Mm][Ii][Nn]/,
            /[Aa][Vv][Gg]/,
            /[Ss][Uu][Mm]/
        ),

        print_stmt: $ => prec(1, seq(
            /[Pp][Rr][Ii][Nn][Tt]/,
            $.print_expr,
            repeat(seq(",", $.print_expr)),
            optional(seq(/[Ww][Hh][Ee][Rr][Ee]/, $.condition)),
            optional(seq(/[Tt][Oo][__][Cc][Ss][Vv]/, choice($.file_path, $.name)))
        )),

        print_expr: $ => choice(
            seq(
                choice($.expr, $.v_expr_set),
                optional(seq(/[Aa][Ss]/, $.name))
            ),
            // tableName
        ),

        v_expr_set: $ => seq(
            $.expr,
            "[",
            $.v_set_proj,
            repeat(seq(",", $.v_set_proj)),
            "]"
        ),

        v_set_proj: $ => seq(
            $.expr,
            optional(seq(/[Aa][Ss]/, $.name))
        ),

        file_path: $ => choice(
            $.name, $.string_literal
        ),

        _type: $ => choice(
            $.base_type
        ),

        _element_type: $ => choice(
            $.base_type,
            $.name
        ),

        base_type: $ => choice(
            /[Bb][Oo][Oo][Ll]/,
            /[Ii][Nn][Tt]/,
            /[Uu][Ii][Nn][Tt]/,
            /[Ff][Ll][Oo][Aa][Tt]/,
            /[Dd][Oo][Uu][Bb][Ll][Ee]/,
            /[Ss][Tt][Rr][Ii][Nn][Gg]/,
            seq(/[Vv][Ee][Rr][Tt][Ee][Xx]/, optional(seq("<", $.name, ">"))),
            /[Ee][Dd][Gg][Ee]/,
            /[Jj][Ss][Oo][Nn][Oo][Bb][Jj][Ee][Cc][Tt]/,
            /[Jj][Ss][Oo][Nn][Aa][Rr][Rr][Aa][Yy]/,
            /[Dd][Aa][Tt][Ee][Tt][Ii][Mm][Ee]/
        ),

        name: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/, // thanks, java --> https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#:~:text=%5B%5Cp%7BL%7D_%24%5D%5B%5Cp%7BL%7D%5Cp%7BNd%7D_%24%5D*
        // name: $ => { // thanks, js --> https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js
        // 	const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
        // 	const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
        // 	return token(seq(alpha, repeat(alphanumeric)))
        // },

        constant: $ => choice(
            $.numeric,
            $.string_literal,
            /[Tt][Rr][Uu][Ee]/,
            /[Ff][Aa][Ll][Ss][Ee]/,
            /[Gg][Ss][Qq][Ll][__][Uu][Ii][Nn][Tt][__][Mm][Aa][Xx]/,
            /[Gg][Ss][Qq][Ll][__][Ii][Nn][Tt][__][Mm][Aa][Xx]/,
            /[Gg][Ss][Qq][Ll][__][Uu][Ii][Nn][Tt][__][Mm][Ii][Nn]/,
        ),

        numeric: $ => choice(
            $.integer,
            $.real
        ),

        integer: $ => seq(
            optional('-'),
            $.digit
        ),

        real: $ => choice(
            seq(optional("-"), seq(".", repeat1($.digit))),
            seq(optional("-"), $.digit, seq(".", $.digit)),
        ),

        digit: $ => /\d+/,

        string_literal: $ => choice(
            seq(
                '"',
                repeat(/[^"&]/),
                '"'
            ), seq(
                '\'',
                repeat(/[^'&]/),
                '\''
            )
        ),
        math_operator: $ => choice(
            "*",
            "/",
            "%",
            "+",
            "-",
            "<<",
            ">>",
            "&",
            " | "
        ),

        comparison_operator: $ => choice(
            "<",
            "<=",
            ">",
            ">=",
            "==",
            "!="
        ),

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => choice(
            $.line_comment,
            $.block_comment,
        ),

        // this is used by grommet for keeping track of user's whitespace preference (leaving it be, that is)
        newline: $ => token(seq(
            '<_-_-_>',
            '\n'
        )),

        line_comment: $ => token(seq(
            '//', /.*/
        )),

        block_comment: $ => token(seq(
            '/*',
            /[^*]*\*+([^/*][^*]*\*+)*/,
            '/'
        )),
    },
});

//todo return matched text instead of regex?
function caseInsensitive(keyword) {
    return new RegExp(
        keyword
            .split("")
            .map((letter) => `[${letter}${letter.toUpperCase()}]`)
            .join("")
    );
}
