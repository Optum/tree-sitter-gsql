#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 887
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 261
#define ALIAS_COUNT 0
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 28

enum {
  anon_sym_CREATE = 1,
  anon_sym_OR = 2,
  anon_sym_REPLACE = 3,
  anon_sym_DISTRIBUTED = 4,
  anon_sym_QUERY = 5,
  anon_sym_FOR = 6,
  anon_sym_GRAPH = 7,
  anon_sym_SYNTAX = 8,
  anon_sym_V2 = 9,
  anon_sym_v2 = 10,
  anon_sym_INTERPRET = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ = 15,
  anon_sym_SET = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_TYPEDEF = 21,
  anon_sym_TUPLE = 22,
  anon_sym_SEMI = 23,
  anon_sym_DOT = 24,
  anon_sym__ = 25,
  anon_sym_ANY = 26,
  anon_sym_DOT_STAR = 27,
  anon_sym_UNION = 28,
  anon_sym_INTERSECT = 29,
  anon_sym_MINUS = 30,
  anon_sym_PLUS_EQ = 31,
  anon_sym_SELECT = 32,
  anon_sym_FROM = 33,
  anon_sym_WHERE = 34,
  anon_sym_ACCUM = 35,
  anon_sym_IF = 36,
  anon_sym_THEN = 37,
  anon_sym_ELSE = 38,
  anon_sym_END = 39,
  anon_sym_CASE = 40,
  anon_sym_WHEN = 41,
  anon_sym_WHILE = 42,
  anon_sym_LIMIT = 43,
  anon_sym_DO = 44,
  anon_sym_FOREACH = 45,
  anon_sym_IN = 46,
  anon_sym_COLON = 47,
  anon_sym_RANGE = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  anon_sym_STEP = 51,
  anon_sym_POST_DASHACCUM = 52,
  anon_sym_OFFSET = 53,
  anon_sym_DASH = 54,
  anon_sym_PIPE = 55,
  anon_sym_PIPE2 = 56,
  anon_sym_STAR = 57,
  anon_sym_all = 58,
  anon_sym_SumAccum = 59,
  anon_sym_INT = 60,
  anon_sym_FLOAT = 61,
  anon_sym_DOUBLE = 62,
  anon_sym_STRING = 63,
  anon_sym_MaxAccum = 64,
  anon_sym_MinAccum = 65,
  anon_sym_AvgAccum = 66,
  anon_sym_OrAccum = 67,
  anon_sym_AndAccum = 68,
  anon_sym_BitwiseorAccum = 69,
  anon_sym_BitwiseandAccum = 70,
  anon_sym_ListAccum = 71,
  anon_sym_SetAccum = 72,
  anon_sym_BagAccum = 73,
  anon_sym_MapAccum = 74,
  anon_sym_HeapAccum = 75,
  anon_sym_ASC = 76,
  anon_sym_DESC = 77,
  anon_sym_GroupbyAccum = 78,
  anon_sym_ArrayAccum = 79,
  anon_sym_AT_AT = 80,
  anon_sym_AT = 81,
  anon_sym_FILTER = 82,
  anon_sym_COALESCE = 83,
  anon_sym_DISTINCT = 84,
  anon_sym_ISEMPTY = 85,
  anon_sym_DASH_GT = 86,
  anon_sym_NOT = 87,
  anon_sym_IS = 88,
  anon_sym_NULL = 89,
  anon_sym_BETWEEN = 90,
  anon_sym_AND = 91,
  anon_sym_TRUE = 92,
  anon_sym_FALSE = 93,
  anon_sym_LIKE = 94,
  anon_sym_COUNT = 95,
  anon_sym_MAX = 96,
  anon_sym_MIN = 97,
  anon_sym_AVG = 98,
  anon_sym_SUM = 99,
  anon_sym_PRINT = 100,
  anon_sym_TO_CSV = 101,
  anon_sym_AS = 102,
  anon_sym_BOOL = 103,
  anon_sym_UINT = 104,
  anon_sym_VERTEX = 105,
  anon_sym_EDGE = 106,
  anon_sym_JSONOBJECT = 107,
  anon_sym_JSONARRAY = 108,
  anon_sym_DATETIME = 109,
  sym_name = 110,
  anon_sym_GSQL_UINT_MAX = 111,
  anon_sym_GSQL_INT_MAX = 112,
  anon_sym_GSQL_UINT_MIN = 113,
  sym_digit = 114,
  anon_sym_DQUOTE = 115,
  aux_sym_string_literal_token1 = 116,
  anon_sym_SQUOTE = 117,
  aux_sym_string_literal_token2 = 118,
  anon_sym_SLASH = 119,
  anon_sym_PERCENT = 120,
  anon_sym_PLUS = 121,
  anon_sym_LT_LT = 122,
  anon_sym_GT_GT = 123,
  anon_sym_AMP = 124,
  anon_sym_LT_EQ = 125,
  anon_sym_GT_EQ = 126,
  anon_sym_EQ_EQ = 127,
  anon_sym_BANG_EQ = 128,
  sym_newline = 129,
  sym_comment_contents = 130,
  anon_sym_SLASH_STAR = 131,
  anon_sym_STAR_SLASH = 132,
  sym_line_comment = 133,
  sym_gsql = 134,
  sym__definition = 135,
  sym_create_query = 136,
  sym_interpret_query = 137,
  sym_parameter_list = 138,
  sym_query_params = 139,
  sym_query_param = 140,
  sym_set_param = 141,
  sym_query_body = 142,
  sym_typedef = 143,
  sym_tuple_fields = 144,
  sym_tuple_field = 145,
  sym_query_body_stmts = 146,
  sym_query_body_stmt = 147,
  sym_assign_stmt = 148,
  sym_v_set_var_decl_stmt = 149,
  sym_seed_set = 150,
  sym_seed = 151,
  sym_simple_set = 152,
  sym_l_accum_assign_stmt = 153,
  sym_g_accum_assign_stmt = 154,
  sym_g_accum_accum_stmt = 155,
  sym_func_call_stmt = 156,
  sym__select_stmt = 157,
  sym_gsql_select_block = 158,
  sym_gsql_select_clause = 159,
  sym_from_clause = 160,
  sym_where_clause = 161,
  sym_accum_clause = 162,
  sym_dml_sub_stmt_list = 163,
  sym_dml_sub_stmt = 164,
  sym_l_accum_accum_stmt = 165,
  sym_attr_accum_stmt = 166,
  sym_v_accum_func_call = 167,
  sym_local_var_decl_stmt = 168,
  sym_dml_sub_if_stmt = 169,
  sym_dml_sub_case_stmt = 170,
  sym_dml_sub_while_stmt = 171,
  sym_dml_sub_for_each_stmt = 172,
  sym_for_each_control = 173,
  sym_post_accum_clause = 174,
  sym_limit_clause = 175,
  sym_path_pattern = 176,
  sym_path_edge_pattern = 177,
  sym_atomic_edge_pattern = 178,
  sym_disj_pattern = 179,
  sym_step = 180,
  sym_step_v2 = 181,
  sym_step_source_set = 182,
  sym_step_edge_set = 183,
  sym_step_edge_types = 184,
  sym_atomic_edge_type = 185,
  sym_edge_set_type = 186,
  sym_step_vertex_set = 187,
  sym_step_vertex_types = 188,
  sym_atomic_vertex_type = 189,
  sym_vertex_set_type = 190,
  sym_query_body_case_stmt = 191,
  sym_query_body_if_stmt = 192,
  sym_query_body_while_stmt = 193,
  sym_query_body_for_each_stmt = 194,
  sym_decl_stmt = 195,
  sym_base_decl_stmt = 196,
  sym_accum_decl_stmt = 197,
  sym_accum_type = 198,
  sym_global_accum_name = 199,
  sym_local_accum_name = 200,
  sym_arg_list = 201,
  sym_simple_size = 202,
  sym_expr = 203,
  sym_condition = 204,
  sym_set_bag_expr = 205,
  sym_name_dot = 206,
  sym_aggregator = 207,
  sym_print_stmt = 208,
  sym_print_expr = 209,
  sym_v_expr_set = 210,
  sym_v_set_proj = 211,
  sym_file_path = 212,
  sym__type = 213,
  sym__element_type = 214,
  sym_base_type = 215,
  sym_constant = 216,
  sym_numeric = 217,
  sym_integer = 218,
  sym_real = 219,
  sym_string_literal = 220,
  sym_math_operator = 221,
  sym_comparison_operator = 222,
  sym_block_comment = 223,
  aux_sym_gsql_repeat1 = 224,
  aux_sym_query_params_repeat1 = 225,
  aux_sym_query_body_repeat1 = 226,
  aux_sym_query_body_repeat2 = 227,
  aux_sym_typedef_repeat1 = 228,
  aux_sym_tuple_fields_repeat1 = 229,
  aux_sym_seed_set_repeat1 = 230,
  aux_sym_func_call_stmt_repeat1 = 231,
  aux_sym_func_call_stmt_repeat2 = 232,
  aux_sym_gsql_select_block_repeat1 = 233,
  aux_sym_from_clause_repeat1 = 234,
  aux_sym_dml_sub_stmt_list_repeat1 = 235,
  aux_sym_v_accum_func_call_repeat1 = 236,
  aux_sym_dml_sub_if_stmt_repeat1 = 237,
  aux_sym_dml_sub_case_stmt_repeat1 = 238,
  aux_sym_for_each_control_repeat1 = 239,
  aux_sym_path_pattern_repeat1 = 240,
  aux_sym_disj_pattern_repeat1 = 241,
  aux_sym_step_repeat1 = 242,
  aux_sym_step_edge_types_repeat1 = 243,
  aux_sym_step_vertex_types_repeat1 = 244,
  aux_sym_query_body_case_stmt_repeat1 = 245,
  aux_sym_query_body_case_stmt_repeat2 = 246,
  aux_sym_query_body_if_stmt_repeat1 = 247,
  aux_sym_base_decl_stmt_repeat1 = 248,
  aux_sym_accum_decl_stmt_repeat1 = 249,
  aux_sym_accum_type_repeat1 = 250,
  aux_sym_accum_type_repeat2 = 251,
  aux_sym_accum_type_repeat3 = 252,
  aux_sym_accum_type_repeat4 = 253,
  aux_sym_arg_list_repeat1 = 254,
  aux_sym_name_dot_repeat1 = 255,
  aux_sym_print_stmt_repeat1 = 256,
  aux_sym_v_expr_set_repeat1 = 257,
  aux_sym_string_literal_repeat1 = 258,
  aux_sym_string_literal_repeat2 = 259,
  aux_sym_block_comment_repeat1 = 260,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_OR] = "OR",
  [anon_sym_REPLACE] = "REPLACE",
  [anon_sym_DISTRIBUTED] = "DISTRIBUTED",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_FOR] = "FOR",
  [anon_sym_GRAPH] = "GRAPH",
  [anon_sym_SYNTAX] = "SYNTAX",
  [anon_sym_V2] = "V2",
  [anon_sym_v2] = "v2",
  [anon_sym_INTERPRET] = "INTERPRET",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_SET] = "SET",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TYPEDEF] = "TYPEDEF",
  [anon_sym_TUPLE] = "TUPLE",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_ANY] = "ANY",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_UNION] = "UNION",
  [anon_sym_INTERSECT] = "INTERSECT",
  [anon_sym_MINUS] = "MINUS",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_FROM] = "FROM",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_ACCUM] = "ACCUM",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END] = "END",
  [anon_sym_CASE] = "CASE",
  [anon_sym_WHEN] = "WHEN",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_LIMIT] = "LIMIT",
  [anon_sym_DO] = "DO",
  [anon_sym_FOREACH] = "FOREACH",
  [anon_sym_IN] = "IN",
  [anon_sym_COLON] = ":",
  [anon_sym_RANGE] = "RANGE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STEP] = "STEP",
  [anon_sym_POST_DASHACCUM] = "POST-ACCUM",
  [anon_sym_OFFSET] = "OFFSET",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = " | ",
  [anon_sym_PIPE2] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_all] = "all",
  [anon_sym_SumAccum] = "SumAccum",
  [anon_sym_INT] = "INT",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_STRING] = "STRING",
  [anon_sym_MaxAccum] = "MaxAccum",
  [anon_sym_MinAccum] = "MinAccum",
  [anon_sym_AvgAccum] = "AvgAccum",
  [anon_sym_OrAccum] = "OrAccum",
  [anon_sym_AndAccum] = "AndAccum",
  [anon_sym_BitwiseorAccum] = "BitwiseorAccum",
  [anon_sym_BitwiseandAccum] = "BitwiseandAccum",
  [anon_sym_ListAccum] = "ListAccum",
  [anon_sym_SetAccum] = "SetAccum",
  [anon_sym_BagAccum] = "BagAccum",
  [anon_sym_MapAccum] = "MapAccum",
  [anon_sym_HeapAccum] = "HeapAccum",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_GroupbyAccum] = "GroupbyAccum",
  [anon_sym_ArrayAccum] = "ArrayAccum",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT] = "@",
  [anon_sym_FILTER] = "FILTER",
  [anon_sym_COALESCE] = "COALESCE",
  [anon_sym_DISTINCT] = "DISTINCT",
  [anon_sym_ISEMPTY] = "ISEMPTY",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_NOT] = "NOT",
  [anon_sym_IS] = "IS",
  [anon_sym_NULL] = "NULL",
  [anon_sym_BETWEEN] = "BETWEEN",
  [anon_sym_AND] = "AND",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_LIKE] = "LIKE",
  [anon_sym_COUNT] = "COUNT",
  [anon_sym_MAX] = "MAX",
  [anon_sym_MIN] = "MIN",
  [anon_sym_AVG] = "AVG",
  [anon_sym_SUM] = "SUM",
  [anon_sym_PRINT] = "PRINT",
  [anon_sym_TO_CSV] = "TO_CSV",
  [anon_sym_AS] = "AS",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_UINT] = "UINT",
  [anon_sym_VERTEX] = "VERTEX",
  [anon_sym_EDGE] = "EDGE",
  [anon_sym_JSONOBJECT] = "JSONOBJECT",
  [anon_sym_JSONARRAY] = "JSONARRAY",
  [anon_sym_DATETIME] = "DATETIME",
  [sym_name] = "name",
  [anon_sym_GSQL_UINT_MAX] = "GSQL_UINT_MAX",
  [anon_sym_GSQL_INT_MAX] = "GSQL_INT_MAX",
  [anon_sym_GSQL_UINT_MIN] = "GSQL_UINT_MIN",
  [sym_digit] = "digit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [sym_newline] = "newline",
  [sym_comment_contents] = "comment_contents",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_line_comment] = "line_comment",
  [sym_gsql] = "gsql",
  [sym__definition] = "_definition",
  [sym_create_query] = "create_query",
  [sym_interpret_query] = "interpret_query",
  [sym_parameter_list] = "parameter_list",
  [sym_query_params] = "query_params",
  [sym_query_param] = "query_param",
  [sym_set_param] = "set_param",
  [sym_query_body] = "query_body",
  [sym_typedef] = "typedef",
  [sym_tuple_fields] = "tuple_fields",
  [sym_tuple_field] = "tuple_field",
  [sym_query_body_stmts] = "query_body_stmts",
  [sym_query_body_stmt] = "query_body_stmt",
  [sym_assign_stmt] = "assign_stmt",
  [sym_v_set_var_decl_stmt] = "v_set_var_decl_stmt",
  [sym_seed_set] = "seed_set",
  [sym_seed] = "seed",
  [sym_simple_set] = "simple_set",
  [sym_l_accum_assign_stmt] = "l_accum_assign_stmt",
  [sym_g_accum_assign_stmt] = "g_accum_assign_stmt",
  [sym_g_accum_accum_stmt] = "g_accum_accum_stmt",
  [sym_func_call_stmt] = "func_call_stmt",
  [sym__select_stmt] = "_select_stmt",
  [sym_gsql_select_block] = "gsql_select_block",
  [sym_gsql_select_clause] = "gsql_select_clause",
  [sym_from_clause] = "from_clause",
  [sym_where_clause] = "where_clause",
  [sym_accum_clause] = "accum_clause",
  [sym_dml_sub_stmt_list] = "dml_sub_stmt_list",
  [sym_dml_sub_stmt] = "dml_sub_stmt",
  [sym_l_accum_accum_stmt] = "l_accum_accum_stmt",
  [sym_attr_accum_stmt] = "attr_accum_stmt",
  [sym_v_accum_func_call] = "v_accum_func_call",
  [sym_local_var_decl_stmt] = "local_var_decl_stmt",
  [sym_dml_sub_if_stmt] = "dml_sub_if_stmt",
  [sym_dml_sub_case_stmt] = "dml_sub_case_stmt",
  [sym_dml_sub_while_stmt] = "dml_sub_while_stmt",
  [sym_dml_sub_for_each_stmt] = "dml_sub_for_each_stmt",
  [sym_for_each_control] = "for_each_control",
  [sym_post_accum_clause] = "post_accum_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_path_pattern] = "path_pattern",
  [sym_path_edge_pattern] = "path_edge_pattern",
  [sym_atomic_edge_pattern] = "atomic_edge_pattern",
  [sym_disj_pattern] = "disj_pattern",
  [sym_step] = "step",
  [sym_step_v2] = "step_v2",
  [sym_step_source_set] = "step_source_set",
  [sym_step_edge_set] = "step_edge_set",
  [sym_step_edge_types] = "step_edge_types",
  [sym_atomic_edge_type] = "atomic_edge_type",
  [sym_edge_set_type] = "edge_set_type",
  [sym_step_vertex_set] = "step_vertex_set",
  [sym_step_vertex_types] = "step_vertex_types",
  [sym_atomic_vertex_type] = "atomic_vertex_type",
  [sym_vertex_set_type] = "vertex_set_type",
  [sym_query_body_case_stmt] = "query_body_case_stmt",
  [sym_query_body_if_stmt] = "query_body_if_stmt",
  [sym_query_body_while_stmt] = "query_body_while_stmt",
  [sym_query_body_for_each_stmt] = "query_body_for_each_stmt",
  [sym_decl_stmt] = "decl_stmt",
  [sym_base_decl_stmt] = "base_decl_stmt",
  [sym_accum_decl_stmt] = "accum_decl_stmt",
  [sym_accum_type] = "accum_type",
  [sym_global_accum_name] = "global_accum_name",
  [sym_local_accum_name] = "local_accum_name",
  [sym_arg_list] = "arg_list",
  [sym_simple_size] = "simple_size",
  [sym_expr] = "expr",
  [sym_condition] = "condition",
  [sym_set_bag_expr] = "set_bag_expr",
  [sym_name_dot] = "name_dot",
  [sym_aggregator] = "aggregator",
  [sym_print_stmt] = "print_stmt",
  [sym_print_expr] = "print_expr",
  [sym_v_expr_set] = "v_expr_set",
  [sym_v_set_proj] = "v_set_proj",
  [sym_file_path] = "file_path",
  [sym__type] = "_type",
  [sym__element_type] = "_element_type",
  [sym_base_type] = "base_type",
  [sym_constant] = "constant",
  [sym_numeric] = "numeric",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_string_literal] = "string_literal",
  [sym_math_operator] = "math_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_block_comment] = "block_comment",
  [aux_sym_gsql_repeat1] = "gsql_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_query_body_repeat1] = "query_body_repeat1",
  [aux_sym_query_body_repeat2] = "query_body_repeat2",
  [aux_sym_typedef_repeat1] = "typedef_repeat1",
  [aux_sym_tuple_fields_repeat1] = "tuple_fields_repeat1",
  [aux_sym_seed_set_repeat1] = "seed_set_repeat1",
  [aux_sym_func_call_stmt_repeat1] = "func_call_stmt_repeat1",
  [aux_sym_func_call_stmt_repeat2] = "func_call_stmt_repeat2",
  [aux_sym_gsql_select_block_repeat1] = "gsql_select_block_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_dml_sub_stmt_list_repeat1] = "dml_sub_stmt_list_repeat1",
  [aux_sym_v_accum_func_call_repeat1] = "v_accum_func_call_repeat1",
  [aux_sym_dml_sub_if_stmt_repeat1] = "dml_sub_if_stmt_repeat1",
  [aux_sym_dml_sub_case_stmt_repeat1] = "dml_sub_case_stmt_repeat1",
  [aux_sym_for_each_control_repeat1] = "for_each_control_repeat1",
  [aux_sym_path_pattern_repeat1] = "path_pattern_repeat1",
  [aux_sym_disj_pattern_repeat1] = "disj_pattern_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym_step_edge_types_repeat1] = "step_edge_types_repeat1",
  [aux_sym_step_vertex_types_repeat1] = "step_vertex_types_repeat1",
  [aux_sym_query_body_case_stmt_repeat1] = "query_body_case_stmt_repeat1",
  [aux_sym_query_body_case_stmt_repeat2] = "query_body_case_stmt_repeat2",
  [aux_sym_query_body_if_stmt_repeat1] = "query_body_if_stmt_repeat1",
  [aux_sym_base_decl_stmt_repeat1] = "base_decl_stmt_repeat1",
  [aux_sym_accum_decl_stmt_repeat1] = "accum_decl_stmt_repeat1",
  [aux_sym_accum_type_repeat1] = "accum_type_repeat1",
  [aux_sym_accum_type_repeat2] = "accum_type_repeat2",
  [aux_sym_accum_type_repeat3] = "accum_type_repeat3",
  [aux_sym_accum_type_repeat4] = "accum_type_repeat4",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym_name_dot_repeat1] = "name_dot_repeat1",
  [aux_sym_print_stmt_repeat1] = "print_stmt_repeat1",
  [aux_sym_v_expr_set_repeat1] = "v_expr_set_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_REPLACE] = anon_sym_REPLACE,
  [anon_sym_DISTRIBUTED] = anon_sym_DISTRIBUTED,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
  [anon_sym_SYNTAX] = anon_sym_SYNTAX,
  [anon_sym_V2] = anon_sym_V2,
  [anon_sym_v2] = anon_sym_v2,
  [anon_sym_INTERPRET] = anon_sym_INTERPRET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TYPEDEF] = anon_sym_TYPEDEF,
  [anon_sym_TUPLE] = anon_sym_TUPLE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_UNION] = anon_sym_UNION,
  [anon_sym_INTERSECT] = anon_sym_INTERSECT,
  [anon_sym_MINUS] = anon_sym_MINUS,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_ACCUM] = anon_sym_ACCUM,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_WHEN] = anon_sym_WHEN,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_LIMIT] = anon_sym_LIMIT,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_FOREACH] = anon_sym_FOREACH,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RANGE] = anon_sym_RANGE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STEP] = anon_sym_STEP,
  [anon_sym_POST_DASHACCUM] = anon_sym_POST_DASHACCUM,
  [anon_sym_OFFSET] = anon_sym_OFFSET,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE2] = anon_sym_PIPE2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_SumAccum] = anon_sym_SumAccum,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_MaxAccum] = anon_sym_MaxAccum,
  [anon_sym_MinAccum] = anon_sym_MinAccum,
  [anon_sym_AvgAccum] = anon_sym_AvgAccum,
  [anon_sym_OrAccum] = anon_sym_OrAccum,
  [anon_sym_AndAccum] = anon_sym_AndAccum,
  [anon_sym_BitwiseorAccum] = anon_sym_BitwiseorAccum,
  [anon_sym_BitwiseandAccum] = anon_sym_BitwiseandAccum,
  [anon_sym_ListAccum] = anon_sym_ListAccum,
  [anon_sym_SetAccum] = anon_sym_SetAccum,
  [anon_sym_BagAccum] = anon_sym_BagAccum,
  [anon_sym_MapAccum] = anon_sym_MapAccum,
  [anon_sym_HeapAccum] = anon_sym_HeapAccum,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_GroupbyAccum] = anon_sym_GroupbyAccum,
  [anon_sym_ArrayAccum] = anon_sym_ArrayAccum,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_FILTER] = anon_sym_FILTER,
  [anon_sym_COALESCE] = anon_sym_COALESCE,
  [anon_sym_DISTINCT] = anon_sym_DISTINCT,
  [anon_sym_ISEMPTY] = anon_sym_ISEMPTY,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_BETWEEN] = anon_sym_BETWEEN,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_LIKE] = anon_sym_LIKE,
  [anon_sym_COUNT] = anon_sym_COUNT,
  [anon_sym_MAX] = anon_sym_MAX,
  [anon_sym_MIN] = anon_sym_MIN,
  [anon_sym_AVG] = anon_sym_AVG,
  [anon_sym_SUM] = anon_sym_SUM,
  [anon_sym_PRINT] = anon_sym_PRINT,
  [anon_sym_TO_CSV] = anon_sym_TO_CSV,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_UINT] = anon_sym_UINT,
  [anon_sym_VERTEX] = anon_sym_VERTEX,
  [anon_sym_EDGE] = anon_sym_EDGE,
  [anon_sym_JSONOBJECT] = anon_sym_JSONOBJECT,
  [anon_sym_JSONARRAY] = anon_sym_JSONARRAY,
  [anon_sym_DATETIME] = anon_sym_DATETIME,
  [sym_name] = sym_name,
  [anon_sym_GSQL_UINT_MAX] = anon_sym_GSQL_UINT_MAX,
  [anon_sym_GSQL_INT_MAX] = anon_sym_GSQL_INT_MAX,
  [anon_sym_GSQL_UINT_MIN] = anon_sym_GSQL_UINT_MIN,
  [sym_digit] = sym_digit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [sym_newline] = sym_newline,
  [sym_comment_contents] = sym_comment_contents,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_line_comment] = sym_line_comment,
  [sym_gsql] = sym_gsql,
  [sym__definition] = sym__definition,
  [sym_create_query] = sym_create_query,
  [sym_interpret_query] = sym_interpret_query,
  [sym_parameter_list] = sym_parameter_list,
  [sym_query_params] = sym_query_params,
  [sym_query_param] = sym_query_param,
  [sym_set_param] = sym_set_param,
  [sym_query_body] = sym_query_body,
  [sym_typedef] = sym_typedef,
  [sym_tuple_fields] = sym_tuple_fields,
  [sym_tuple_field] = sym_tuple_field,
  [sym_query_body_stmts] = sym_query_body_stmts,
  [sym_query_body_stmt] = sym_query_body_stmt,
  [sym_assign_stmt] = sym_assign_stmt,
  [sym_v_set_var_decl_stmt] = sym_v_set_var_decl_stmt,
  [sym_seed_set] = sym_seed_set,
  [sym_seed] = sym_seed,
  [sym_simple_set] = sym_simple_set,
  [sym_l_accum_assign_stmt] = sym_l_accum_assign_stmt,
  [sym_g_accum_assign_stmt] = sym_g_accum_assign_stmt,
  [sym_g_accum_accum_stmt] = sym_g_accum_accum_stmt,
  [sym_func_call_stmt] = sym_func_call_stmt,
  [sym__select_stmt] = sym__select_stmt,
  [sym_gsql_select_block] = sym_gsql_select_block,
  [sym_gsql_select_clause] = sym_gsql_select_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_accum_clause] = sym_accum_clause,
  [sym_dml_sub_stmt_list] = sym_dml_sub_stmt_list,
  [sym_dml_sub_stmt] = sym_dml_sub_stmt,
  [sym_l_accum_accum_stmt] = sym_l_accum_accum_stmt,
  [sym_attr_accum_stmt] = sym_attr_accum_stmt,
  [sym_v_accum_func_call] = sym_v_accum_func_call,
  [sym_local_var_decl_stmt] = sym_local_var_decl_stmt,
  [sym_dml_sub_if_stmt] = sym_dml_sub_if_stmt,
  [sym_dml_sub_case_stmt] = sym_dml_sub_case_stmt,
  [sym_dml_sub_while_stmt] = sym_dml_sub_while_stmt,
  [sym_dml_sub_for_each_stmt] = sym_dml_sub_for_each_stmt,
  [sym_for_each_control] = sym_for_each_control,
  [sym_post_accum_clause] = sym_post_accum_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_path_pattern] = sym_path_pattern,
  [sym_path_edge_pattern] = sym_path_edge_pattern,
  [sym_atomic_edge_pattern] = sym_atomic_edge_pattern,
  [sym_disj_pattern] = sym_disj_pattern,
  [sym_step] = sym_step,
  [sym_step_v2] = sym_step_v2,
  [sym_step_source_set] = sym_step_source_set,
  [sym_step_edge_set] = sym_step_edge_set,
  [sym_step_edge_types] = sym_step_edge_types,
  [sym_atomic_edge_type] = sym_atomic_edge_type,
  [sym_edge_set_type] = sym_edge_set_type,
  [sym_step_vertex_set] = sym_step_vertex_set,
  [sym_step_vertex_types] = sym_step_vertex_types,
  [sym_atomic_vertex_type] = sym_atomic_vertex_type,
  [sym_vertex_set_type] = sym_vertex_set_type,
  [sym_query_body_case_stmt] = sym_query_body_case_stmt,
  [sym_query_body_if_stmt] = sym_query_body_if_stmt,
  [sym_query_body_while_stmt] = sym_query_body_while_stmt,
  [sym_query_body_for_each_stmt] = sym_query_body_for_each_stmt,
  [sym_decl_stmt] = sym_decl_stmt,
  [sym_base_decl_stmt] = sym_base_decl_stmt,
  [sym_accum_decl_stmt] = sym_accum_decl_stmt,
  [sym_accum_type] = sym_accum_type,
  [sym_global_accum_name] = sym_global_accum_name,
  [sym_local_accum_name] = sym_local_accum_name,
  [sym_arg_list] = sym_arg_list,
  [sym_simple_size] = sym_simple_size,
  [sym_expr] = sym_expr,
  [sym_condition] = sym_condition,
  [sym_set_bag_expr] = sym_set_bag_expr,
  [sym_name_dot] = sym_name_dot,
  [sym_aggregator] = sym_aggregator,
  [sym_print_stmt] = sym_print_stmt,
  [sym_print_expr] = sym_print_expr,
  [sym_v_expr_set] = sym_v_expr_set,
  [sym_v_set_proj] = sym_v_set_proj,
  [sym_file_path] = sym_file_path,
  [sym__type] = sym__type,
  [sym__element_type] = sym__element_type,
  [sym_base_type] = sym_base_type,
  [sym_constant] = sym_constant,
  [sym_numeric] = sym_numeric,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_string_literal] = sym_string_literal,
  [sym_math_operator] = sym_math_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_gsql_repeat1] = aux_sym_gsql_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_query_body_repeat1] = aux_sym_query_body_repeat1,
  [aux_sym_query_body_repeat2] = aux_sym_query_body_repeat2,
  [aux_sym_typedef_repeat1] = aux_sym_typedef_repeat1,
  [aux_sym_tuple_fields_repeat1] = aux_sym_tuple_fields_repeat1,
  [aux_sym_seed_set_repeat1] = aux_sym_seed_set_repeat1,
  [aux_sym_func_call_stmt_repeat1] = aux_sym_func_call_stmt_repeat1,
  [aux_sym_func_call_stmt_repeat2] = aux_sym_func_call_stmt_repeat2,
  [aux_sym_gsql_select_block_repeat1] = aux_sym_gsql_select_block_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_dml_sub_stmt_list_repeat1] = aux_sym_dml_sub_stmt_list_repeat1,
  [aux_sym_v_accum_func_call_repeat1] = aux_sym_v_accum_func_call_repeat1,
  [aux_sym_dml_sub_if_stmt_repeat1] = aux_sym_dml_sub_if_stmt_repeat1,
  [aux_sym_dml_sub_case_stmt_repeat1] = aux_sym_dml_sub_case_stmt_repeat1,
  [aux_sym_for_each_control_repeat1] = aux_sym_for_each_control_repeat1,
  [aux_sym_path_pattern_repeat1] = aux_sym_path_pattern_repeat1,
  [aux_sym_disj_pattern_repeat1] = aux_sym_disj_pattern_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym_step_edge_types_repeat1] = aux_sym_step_edge_types_repeat1,
  [aux_sym_step_vertex_types_repeat1] = aux_sym_step_vertex_types_repeat1,
  [aux_sym_query_body_case_stmt_repeat1] = aux_sym_query_body_case_stmt_repeat1,
  [aux_sym_query_body_case_stmt_repeat2] = aux_sym_query_body_case_stmt_repeat2,
  [aux_sym_query_body_if_stmt_repeat1] = aux_sym_query_body_if_stmt_repeat1,
  [aux_sym_base_decl_stmt_repeat1] = aux_sym_base_decl_stmt_repeat1,
  [aux_sym_accum_decl_stmt_repeat1] = aux_sym_accum_decl_stmt_repeat1,
  [aux_sym_accum_type_repeat1] = aux_sym_accum_type_repeat1,
  [aux_sym_accum_type_repeat2] = aux_sym_accum_type_repeat2,
  [aux_sym_accum_type_repeat3] = aux_sym_accum_type_repeat3,
  [aux_sym_accum_type_repeat4] = aux_sym_accum_type_repeat4,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym_name_dot_repeat1] = aux_sym_name_dot_repeat1,
  [aux_sym_print_stmt_repeat1] = aux_sym_print_stmt_repeat1,
  [aux_sym_v_expr_set_repeat1] = aux_sym_v_expr_set_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPLACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISTRIBUTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYNTAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERPRET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPEDEF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TUPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERSECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOREACH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST_DASHACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFFSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SumAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MaxAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MinAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AvgAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AndAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BitwiseorAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BitwiseandAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ListAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BagAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MapAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HeapAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GroupbyAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ArrayAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COALESCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISTINCT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISEMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BETWEEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIKE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AVG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO_CSV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EDGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONARRAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATETIME] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GSQL_UINT_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GSQL_INT_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GSQL_UINT_MIN] = {
    .visible = true,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_contents] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_gsql] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_create_query] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_query_params] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_set_param] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_field] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_stmts] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_v_set_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_seed_set] = {
    .visible = true,
    .named = true,
  },
  [sym_seed] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_set] = {
    .visible = true,
    .named = true,
  },
  [sym_l_accum_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_g_accum_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_g_accum_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__select_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_gsql_select_block] = {
    .visible = true,
    .named = true,
  },
  [sym_gsql_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_stmt_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_l_accum_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_v_accum_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_case_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_for_each_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_each_control] = {
    .visible = true,
    .named = true,
  },
  [sym_post_accum_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_path_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_path_edge_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_edge_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_disj_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_v2] = {
    .visible = true,
    .named = true,
  },
  [sym_step_source_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_edge_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_edge_types] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_edge_type] = {
    .visible = true,
    .named = true,
  },
  [sym_edge_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_step_vertex_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_vertex_types] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_vertex_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vertex_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_case_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_for_each_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_base_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_global_accum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_accum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_size] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_set_bag_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_name_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregator] = {
    .visible = true,
    .named = true,
  },
  [sym_print_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_print_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_v_expr_set] = {
    .visible = true,
    .named = true,
  },
  [sym_v_set_proj] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__element_type] = {
    .visible = false,
    .named = true,
  },
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_math_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_gsql_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seed_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_stmt_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gsql_select_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_stmt_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_v_accum_func_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_case_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_each_control_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disj_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_edge_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_vertex_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_case_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_case_stmt_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_decl_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_decl_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_dot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_v_expr_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_edgeAlias = 2,
  field_funcName = 3,
  field_graphName = 4,
  field_iterationVar = 5,
  field_keyVar = 6,
  field_localAccumName = 7,
  field_plus_equal = 8,
  field_queryName = 9,
  field_tupleType = 10,
  field_valueVar = 11,
  field_varName = 12,
  field_vertexAlias = 13,
  field_vertexSetName = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_edgeAlias] = "edgeAlias",
  [field_funcName] = "funcName",
  [field_graphName] = "graphName",
  [field_iterationVar] = "iterationVar",
  [field_keyVar] = "keyVar",
  [field_localAccumName] = "localAccumName",
  [field_plus_equal] = "plus_equal",
  [field_queryName] = "queryName",
  [field_tupleType] = "tupleType",
  [field_valueVar] = "valueVar",
  [field_varName] = "varName",
  [field_vertexAlias] = "vertexAlias",
  [field_vertexSetName] = "vertexSetName",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 3},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 1},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 37, .length = 1},
  [27] = {.index = 38, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_vertexSetName, 0},
  [1] =
    {field_plus_equal, 1},
  [2] =
    {field_graphName, 5},
  [3] =
    {field_iterationVar, 0},
  [4] =
    {field_alias, 3},
  [5] =
    {field_edgeAlias, 1, .inherited = true},
  [6] =
    {field_graphName, 6},
    {field_queryName, 2},
  [8] =
    {field_valueVar, 1},
  [9] =
    {field_valueVar, 0, .inherited = true},
    {field_valueVar, 1, .inherited = true},
  [11] =
    {field_vertexAlias, 0},
  [12] =
    {field_vertexAlias, 2},
    {field_vertexSetName, 0},
  [14] =
    {field_edgeAlias, 0, .inherited = true},
    {field_edgeAlias, 1, .inherited = true},
  [16] =
    {field_vertexAlias, 2},
  [17] =
    {field_graphName, 7},
    {field_queryName, 3},
  [19] =
    {field_tupleType, 4},
  [20] =
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [22] =
    {field_graphName, 8},
    {field_queryName, 4},
  [24] =
    {field_tupleType, 5},
  [25] =
    {field_keyVar, 1},
    {field_valueVar, 2, .inherited = true},
  [27] =
    {field_funcName, 3, .inherited = true},
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [30] =
    {field_varName, 1},
  [31] =
    {field_graphName, 9},
    {field_queryName, 5},
  [33] =
    {field_edgeAlias, 2},
  [34] =
    {field_plus_equal, 3},
  [35] =
    {field_funcName, 0, .inherited = true},
    {field_funcName, 1, .inherited = true},
  [37] =
    {field_funcName, 1},
  [38] =
    {field_edgeAlias, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 26,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 34,
  [48] = 48,
  [49] = 32,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 72,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 94,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 98,
  [115] = 95,
  [116] = 100,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 103,
  [123] = 109,
  [124] = 104,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 119,
  [133] = 125,
  [134] = 99,
  [135] = 109,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 20,
  [142] = 72,
  [143] = 143,
  [144] = 139,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 136,
  [149] = 140,
  [150] = 24,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 160,
  [168] = 168,
  [169] = 152,
  [170] = 170,
  [171] = 159,
  [172] = 172,
  [173] = 152,
  [174] = 27,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 23,
  [179] = 179,
  [180] = 29,
  [181] = 181,
  [182] = 182,
  [183] = 21,
  [184] = 22,
  [185] = 28,
  [186] = 160,
  [187] = 25,
  [188] = 160,
  [189] = 152,
  [190] = 190,
  [191] = 26,
  [192] = 192,
  [193] = 34,
  [194] = 32,
  [195] = 146,
  [196] = 30,
  [197] = 33,
  [198] = 19,
  [199] = 31,
  [200] = 200,
  [201] = 147,
  [202] = 38,
  [203] = 203,
  [204] = 204,
  [205] = 35,
  [206] = 36,
  [207] = 37,
  [208] = 204,
  [209] = 40,
  [210] = 42,
  [211] = 43,
  [212] = 39,
  [213] = 26,
  [214] = 44,
  [215] = 50,
  [216] = 46,
  [217] = 48,
  [218] = 45,
  [219] = 34,
  [220] = 32,
  [221] = 146,
  [222] = 147,
  [223] = 192,
  [224] = 65,
  [225] = 53,
  [226] = 54,
  [227] = 58,
  [228] = 57,
  [229] = 68,
  [230] = 59,
  [231] = 56,
  [232] = 60,
  [233] = 51,
  [234] = 67,
  [235] = 66,
  [236] = 69,
  [237] = 55,
  [238] = 52,
  [239] = 61,
  [240] = 64,
  [241] = 62,
  [242] = 63,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 72,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 277,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 203,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 147,
  [289] = 286,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 287,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 146,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 31,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 353,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 381,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 389,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 386,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 19,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 439,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 19,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 264,
  [469] = 437,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 455,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 470,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 281,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 503,
  [508] = 501,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 500,
  [523] = 523,
  [524] = 499,
  [525] = 498,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 78,
  [530] = 488,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 494,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 495,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 513,
  [562] = 562,
  [563] = 486,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 278,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 603,
  [605] = 605,
  [606] = 601,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 599,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 623,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 682,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 758,
  [816] = 806,
  [817] = 805,
  [818] = 818,
  [819] = 754,
  [820] = 820,
  [821] = 821,
  [822] = 804,
  [823] = 823,
  [824] = 736,
  [825] = 735,
  [826] = 826,
  [827] = 708,
  [828] = 707,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 811,
  [834] = 834,
  [835] = 686,
  [836] = 687,
  [837] = 837,
  [838] = 838,
  [839] = 783,
  [840] = 821,
  [841] = 747,
  [842] = 842,
  [843] = 843,
  [844] = 809,
  [845] = 744,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 804,
  [851] = 805,
  [852] = 852,
  [853] = 853,
  [854] = 783,
  [855] = 804,
  [856] = 748,
  [857] = 857,
  [858] = 783,
  [859] = 859,
  [860] = 860,
  [861] = 787,
  [862] = 862,
  [863] = 772,
  [864] = 864,
  [865] = 664,
  [866] = 726,
  [867] = 867,
  [868] = 868,
  [869] = 725,
  [870] = 782,
  [871] = 871,
  [872] = 872,
  [873] = 726,
  [874] = 726,
  [875] = 786,
  [876] = 781,
  [877] = 770,
  [878] = 878,
  [879] = 879,
  [880] = 749,
  [881] = 679,
  [882] = 770,
  [883] = 770,
  [884] = 884,
  [885] = 885,
  [886] = 886,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'K'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < 'B'
                  ? c == '$'
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'C'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_name_character_set_8(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(421);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(44);
      if (lookahead == 'G') ADVANCE(254);
      if (lookahead == 'H') ADVANCE(365);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'Q') ADVANCE(308);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(156);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '_') ADVANCE(453);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '|') ADVANCE(495);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(494);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(661);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(776);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(806);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == 'T') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (sym_name_character_set_1(lookahead)) ADVANCE(833);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(661);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(776);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(806);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == 'T') ADVANCE(732);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (sym_name_character_set_1(lookahead)) ADVANCE(833);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(661);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(776);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(806);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (sym_name_character_set_1(lookahead)) ADVANCE(833);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(661);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(776);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(806);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (sym_name_character_set_1(lookahead)) ADVANCE(833);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(255);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(255);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(255);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (lookahead == 'T') ADVANCE(695);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(440);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (lookahead == 'N') ADVANCE(691);
      if (lookahead == 'T') ADVANCE(695);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (lookahead == 'S') ADVANCE(640);
      if (lookahead == 'T') ADVANCE(695);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (lookahead == 'T') ADVANCE(695);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '/') ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(842);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(846);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(440);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(678);
      if (lookahead == '_') ADVANCE(454);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (sym_name_character_set_3(lookahead)) ADVANCE(833);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'B') ADVANCE(234);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead == 'I') ADVANCE(229);
      if (lookahead == 'J') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '|') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '|') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(457);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(868);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(440);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(675);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(539);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(661);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == 'W') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (sym_name_character_set_2(lookahead)) ADVANCE(833);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(805);
      if (lookahead == 'H') ADVANCE(776);
      if (lookahead == 'I') ADVANCE(675);
      if (lookahead == 'J') ADVANCE(704);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(806);
      if (lookahead == 'S') ADVANCE(725);
      if (lookahead == 'U') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_4(lookahead)) ADVANCE(833);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(431);
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(432);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(853);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(859);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(461);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(854);
      END_STATE();
    case 43:
      if (lookahead == '@') ADVANCE(538);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'O') ADVANCE(259);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(334);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'I') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(479);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(309);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(318);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(324);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(320);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == 'U') ADVANCE(226);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'I') ADVANCE(215);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(287);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(336);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(338);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(340);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(303);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(342);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(344);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(346);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(348);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(352);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(354);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(356);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(358);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(360);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(362);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(181);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(314);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(194);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'V') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(570);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(533);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(532);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(310);
      END_STATE();
    case 87:
      if (lookahead == 'C') ADVANCE(158);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(269);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(291);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(292);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(293);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(294);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(312);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(554);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(554);
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(471);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(425);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(198);
      if (lookahead == 'Y') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'I') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(472);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(577);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(470);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(559);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(555);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(557);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(485);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(449);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(476);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(422);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(424);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(583);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(290);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(295);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(263);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 147:
      if (lookahead == 'F') ADVANCE(467);
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead == 'S') ADVANCE(551);
      END_STATE();
    case 148:
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(423);
      END_STATE();
    case 149:
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 150:
      if (lookahead == 'F') ADVANCE(447);
      END_STATE();
    case 151:
      if (lookahead == 'F') ADVANCE(277);
      END_STATE();
    case 152:
      if (lookahead == 'G') ADVANCE(565);
      END_STATE();
    case 153:
      if (lookahead == 'G') ADVANCE(506);
      END_STATE();
    case 154:
      if (lookahead == 'G') ADVANCE(109);
      END_STATE();
    case 155:
      if (lookahead == 'G') ADVANCE(114);
      END_STATE();
    case 156:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 157:
      if (lookahead == 'H') ADVANCE(429);
      END_STATE();
    case 158:
      if (lookahead == 'H') ADVANCE(480);
      END_STATE();
    case 159:
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(326);
      END_STATE();
    case 160:
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(313);
      END_STATE();
    case 161:
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(326);
      if (lookahead == 'R') ADVANCE(313);
      if (lookahead == 'U') ADVANCE(251);
      if (lookahead == 'Y') ADVANCE(248);
      END_STATE();
    case 162:
      if (lookahead == 'H') ADVANCE(106);
      END_STATE();
    case 163:
      if (lookahead == 'H') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 165:
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 166:
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 167:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 168:
      if (lookahead == 'I') ADVANCE(206);
      END_STATE();
    case 169:
      if (lookahead == 'I') ADVANCE(220);
      END_STATE();
    case 170:
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 171:
      if (lookahead == 'I') ADVANCE(203);
      END_STATE();
    case 172:
      if (lookahead == 'I') ADVANCE(288);
      END_STATE();
    case 173:
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 174:
      if (lookahead == 'I') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 'I') ADVANCE(225);
      END_STATE();
    case 176:
      if (lookahead == 'I') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'I') ADVANCE(242);
      END_STATE();
    case 178:
      if (lookahead == 'I') ADVANCE(227);
      END_STATE();
    case 179:
      if (lookahead == 'I') ADVANCE(228);
      if (lookahead == 'U') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'I') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'J') ADVANCE(146);
      END_STATE();
    case 182:
      if (lookahead == 'K') ADVANCE(111);
      END_STATE();
    case 183:
      if (lookahead == 'K') ADVANCE(111);
      if (lookahead == 'M') ADVANCE(172);
      END_STATE();
    case 184:
      if (lookahead == 'L') ADVANCE(571);
      END_STATE();
    case 185:
      if (lookahead == 'L') ADVANCE(552);
      END_STATE();
    case 186:
      if (lookahead == 'L') ADVANCE(240);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(325);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 190:
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(439);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 192:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 193:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 194:
      if (lookahead == 'L') ADVANCE(122);
      END_STATE();
    case 195:
      if (lookahead == 'L') ADVANCE(275);
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 196:
      if (lookahead == 'L') ADVANCE(306);
      END_STATE();
    case 197:
      if (lookahead == 'L') ADVANCE(276);
      END_STATE();
    case 198:
      if (lookahead == 'M') ADVANCE(566);
      END_STATE();
    case 199:
      if (lookahead == 'M') ADVANCE(464);
      END_STATE();
    case 200:
      if (lookahead == 'M') ADVANCE(466);
      END_STATE();
    case 201:
      if (lookahead == 'M') ADVANCE(490);
      END_STATE();
    case 202:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 203:
      if (lookahead == 'M') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'M') ADVANCE(250);
      END_STATE();
    case 205:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 206:
      if (lookahead == 'M') ADVANCE(121);
      END_STATE();
    case 207:
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead == 'S') ADVANCE(550);
      END_STATE();
    case 208:
      if (lookahead == 'N') ADVANCE(564);
      END_STATE();
    case 209:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 210:
      if (lookahead == 'N') ADVANCE(469);
      END_STATE();
    case 211:
      if (lookahead == 'N') ADVANCE(474);
      END_STATE();
    case 212:
      if (lookahead == 'N') ADVANCE(474);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 213:
      if (lookahead == 'N') ADVANCE(458);
      END_STATE();
    case 214:
      if (lookahead == 'N') ADVANCE(553);
      END_STATE();
    case 215:
      if (lookahead == 'N') ADVANCE(838);
      END_STATE();
    case 216:
      if (lookahead == 'N') ADVANCE(482);
      END_STATE();
    case 217:
      if (lookahead == 'N') ADVANCE(482);
      if (lookahead == 'S') ADVANCE(550);
      END_STATE();
    case 218:
      if (lookahead == 'N') ADVANCE(563);
      END_STATE();
    case 219:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 220:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 221:
      if (lookahead == 'N') ADVANCE(311);
      END_STATE();
    case 222:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 223:
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 224:
      if (lookahead == 'N') ADVANCE(301);
      END_STATE();
    case 225:
      if (lookahead == 'N') ADVANCE(285);
      END_STATE();
    case 226:
      if (lookahead == 'N') ADVANCE(286);
      END_STATE();
    case 227:
      if (lookahead == 'N') ADVANCE(289);
      END_STATE();
    case 228:
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 229:
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 230:
      if (lookahead == 'N') ADVANCE(155);
      END_STATE();
    case 231:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 232:
      if (lookahead == 'N') ADVANCE(305);
      END_STATE();
    case 233:
      if (lookahead == 'N') ADVANCE(307);
      END_STATE();
    case 234:
      if (lookahead == 'O') ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == 'O') ADVANCE(479);
      END_STATE();
    case 236:
      if (lookahead == 'O') ADVANCE(199);
      END_STATE();
    case 237:
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 238:
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(189);
      END_STATE();
    case 239:
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 240:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 241:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'O') ADVANCE(213);
      END_STATE();
    case 243:
      if (lookahead == 'O') ADVANCE(274);
      END_STATE();
    case 244:
      if (lookahead == 'O') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 245:
      if (lookahead == 'P') ADVANCE(489);
      END_STATE();
    case 246:
      if (lookahead == 'P') ADVANCE(157);
      END_STATE();
    case 247:
      if (lookahead == 'P') ADVANCE(188);
      END_STATE();
    case 248:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 249:
      if (lookahead == 'P') ADVANCE(265);
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 250:
      if (lookahead == 'P') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == 'P') ADVANCE(192);
      END_STATE();
    case 252:
      if (lookahead == 'Q') ADVANCE(187);
      END_STATE();
    case 253:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(423);
      END_STATE();
    case 256:
      if (lookahead == 'R') ADVANCE(428);
      END_STATE();
    case 257:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 258:
      if (lookahead == 'R') ADVANCE(540);
      END_STATE();
    case 259:
      if (lookahead == 'R') ADVANCE(427);
      END_STATE();
    case 260:
      if (lookahead == 'R') ADVANCE(249);
      END_STATE();
    case 261:
      if (lookahead == 'R') ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 263:
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 264:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 265:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 266:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 267:
      if (lookahead == 'S') ADVANCE(252);
      END_STATE();
    case 268:
      if (lookahead == 'S') ADVANCE(460);
      END_STATE();
    case 269:
      if (lookahead == 'S') ADVANCE(315);
      END_STATE();
    case 270:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 271:
      if (lookahead == 'S') ADVANCE(283);
      END_STATE();
    case 272:
      if (lookahead == 'S') ADVANCE(241);
      END_STATE();
    case 273:
      if (lookahead == 'S') ADVANCE(108);
      END_STATE();
    case 274:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 275:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 276:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(140);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(548);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(439);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(573);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(560);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(502);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(567);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(491);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(462);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(459);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(579);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(433);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(500);
      END_STATE();
    case 297:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 299:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 300:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 301:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 302:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 304:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 305:
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 306:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 307:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 308:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 309:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 310:
      if (lookahead == 'U') ADVANCE(200);
      END_STATE();
    case 311:
      if (lookahead == 'U') ADVANCE(268);
      END_STATE();
    case 312:
      if (lookahead == 'U') ADVANCE(201);
      END_STATE();
    case 313:
      if (lookahead == 'U') ADVANCE(112);
      END_STATE();
    case 314:
      if (lookahead == 'U') ADVANCE(304);
      END_STATE();
    case 315:
      if (lookahead == 'V') ADVANCE(569);
      END_STATE();
    case 316:
      if (lookahead == 'W') ADVANCE(144);
      END_STATE();
    case 317:
      if (lookahead == 'X') ADVANCE(562);
      END_STATE();
    case 318:
      if (lookahead == 'X') ADVANCE(430);
      END_STATE();
    case 319:
      if (lookahead == 'X') ADVANCE(575);
      END_STATE();
    case 320:
      if (lookahead == 'X') ADVANCE(836);
      END_STATE();
    case 321:
      if (lookahead == 'X') ADVANCE(834);
      END_STATE();
    case 322:
      if (lookahead == 'Y') ADVANCE(426);
      END_STATE();
    case 323:
      if (lookahead == 'Y') ADVANCE(545);
      END_STATE();
    case 324:
      if (lookahead == 'Y') ADVANCE(581);
      END_STATE();
    case 325:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 326:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 327:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 328:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 372:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 373:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 374:
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 375:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(528);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(524);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(498);
      END_STATE();
    case 381:
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 383:
      if (lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 391:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 392:
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 393:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 404:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 405:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 406:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 407:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 408:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 410:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 411:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 413:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 414:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 415:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 416:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 417:
      if (lookahead == 'w') ADVANCE(369);
      END_STATE();
    case 418:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 419:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 420:
      if (eof) ADVANCE(421);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(841);
      if (lookahead == '%') ADVANCE(850);
      if (lookahead == '&') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '+') ADVANCE(851);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(849);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead == 'D') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(267);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'W') ADVANCE(162);
      if (lookahead == '[') ADVANCE(487);
      if (lookahead == ']') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(420)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_V2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(853);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(853);
      if (lookahead == '=') ADVANCE(856);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(857);
      if (lookahead == '>') ADVANCE(854);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(457);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_POST_DASHACCUM);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(547);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(538);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(268);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_TO_CSV);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(721);
      if (lookahead == 'O') ADVANCE(727);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(745);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(613);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(703);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(733);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(730);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(667);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(731);
      if (lookahead == 'I') ADVANCE(672);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(697);
      if (lookahead == 'O') ADVANCE(611);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(711);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(682);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(747);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(749);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(751);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(680);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(753);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(755);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(757);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(759);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(761);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(763);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(765);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(767);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(769);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(771);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(773);
      if (sym_name_character_set_6(lookahead)) ADVANCE(833);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(713);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(473);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(578);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(477);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(505);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(584);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(556);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(558);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(486);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(669);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(587);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(673);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(468);
      if (lookahead == 'N') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(448);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(507);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(481);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(677);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(671);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(676);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(679);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(681);
      if (lookahead == 'U') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(683);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(572);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(690);
      if (lookahead == 'O') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(592);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(590);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(475);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(593);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(687);
      if (lookahead == 'a') ADVANCE(779);
      if (lookahead == 'i') ADVANCE(811);
      if (sym_name_character_set_7(lookahead)) ADVANCE(833);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(687);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(599);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(674);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(594);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(589);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(722);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(501);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(574);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(503);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(568);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(580);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(561);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(463);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(549);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(699);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == 'u') ADVANCE(797);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(582);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(456);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(656);
      if (sym_name_character_set_8(lookahead)) ADVANCE(833);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(670);
      if (sym_name_character_set_8(lookahead)) ADVANCE(833);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(668);
      if (sym_name_character_set_8(lookahead)) ADVANCE(833);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'i') ADVANCE(799);
      if (sym_name_character_set_7(lookahead)) ADVANCE(833);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(804);
      if (sym_name_character_set_7(lookahead)) ADVANCE(833);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(831);
      if (sym_name_character_set_7(lookahead)) ADVANCE(833);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'o') ADVANCE(808);
      if (sym_name_character_set_7(lookahead)) ADVANCE(833);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(752);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(760);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(766);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(770);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(772);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(596);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(610);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(597);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(515);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(517);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(513);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(527);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(529);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(509);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(511);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(525);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(499);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(531);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(523);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(537);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(535);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(519);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(521);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead == 'r') ADVANCE(807);
      if (lookahead == 'v') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(775);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == 'x') ADVANCE(601);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(801);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(586);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(603);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(791);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(796);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(781);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(833);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(868);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(842);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(868);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(846);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(868);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(461);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '\n') ADVANCE(860);
      if (lookahead == '*') ADVANCE(863);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(861);
      if (lookahead != 0) ADVANCE(864);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '/') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(868);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 420},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 420},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 34},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 34},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 18},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 18},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 15},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 18},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 18},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 18},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 35},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 420},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 35},
  [201] = {.lex_state = 420},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 420},
  [244] = {.lex_state = 420},
  [245] = {.lex_state = 420},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 420},
  [252] = {.lex_state = 32},
  [253] = {.lex_state = 420},
  [254] = {.lex_state = 420},
  [255] = {.lex_state = 420},
  [256] = {.lex_state = 420},
  [257] = {.lex_state = 32},
  [258] = {.lex_state = 420},
  [259] = {.lex_state = 420},
  [260] = {.lex_state = 32},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 420},
  [264] = {.lex_state = 32},
  [265] = {.lex_state = 32},
  [266] = {.lex_state = 420},
  [267] = {.lex_state = 32},
  [268] = {.lex_state = 420},
  [269] = {.lex_state = 32},
  [270] = {.lex_state = 420},
  [271] = {.lex_state = 32},
  [272] = {.lex_state = 32},
  [273] = {.lex_state = 420},
  [274] = {.lex_state = 32},
  [275] = {.lex_state = 32},
  [276] = {.lex_state = 32},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 32},
  [279] = {.lex_state = 32},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 32},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 420},
  [285] = {.lex_state = 32},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 420},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 420},
  [291] = {.lex_state = 420},
  [292] = {.lex_state = 420},
  [293] = {.lex_state = 32},
  [294] = {.lex_state = 420},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 28},
  [297] = {.lex_state = 28},
  [298] = {.lex_state = 420},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 420},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 420},
  [304] = {.lex_state = 28},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 25},
  [308] = {.lex_state = 420},
  [309] = {.lex_state = 420},
  [310] = {.lex_state = 420},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 420},
  [313] = {.lex_state = 420},
  [314] = {.lex_state = 420},
  [315] = {.lex_state = 420},
  [316] = {.lex_state = 420},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 25},
  [322] = {.lex_state = 25},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 25},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 28},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 28},
  [330] = {.lex_state = 25},
  [331] = {.lex_state = 420},
  [332] = {.lex_state = 420},
  [333] = {.lex_state = 420},
  [334] = {.lex_state = 420},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 420},
  [337] = {.lex_state = 420},
  [338] = {.lex_state = 420},
  [339] = {.lex_state = 420},
  [340] = {.lex_state = 420},
  [341] = {.lex_state = 420},
  [342] = {.lex_state = 420},
  [343] = {.lex_state = 420},
  [344] = {.lex_state = 420},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 420},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 420},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 420},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 26},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 19},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 420},
  [360] = {.lex_state = 19},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 25},
  [363] = {.lex_state = 420},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 420},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 25},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 420},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 420},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 420},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 420},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 19},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 25},
  [385] = {.lex_state = 420},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 19},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 420},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 420},
  [396] = {.lex_state = 19},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 19},
  [401] = {.lex_state = 420},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 7},
  [404] = {.lex_state = 420},
  [405] = {.lex_state = 420},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 420},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 420},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 420},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 420},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 420},
  [420] = {.lex_state = 7},
  [421] = {.lex_state = 7},
  [422] = {.lex_state = 420},
  [423] = {.lex_state = 420},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 19},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 7},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 7},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 420},
  [432] = {.lex_state = 420},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 420},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 861},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 19},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 19},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 420},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 28},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 420},
  [452] = {.lex_state = 19},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 420},
  [455] = {.lex_state = 420},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 19},
  [459] = {.lex_state = 29},
  [460] = {.lex_state = 19},
  [461] = {.lex_state = 420},
  [462] = {.lex_state = 19},
  [463] = {.lex_state = 7},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 19},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 420},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 420},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 861},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 861},
  [479] = {.lex_state = 420},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 420},
  [482] = {.lex_state = 420},
  [483] = {.lex_state = 7},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 7},
  [487] = {.lex_state = 19},
  [488] = {.lex_state = 7},
  [489] = {.lex_state = 420},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 861},
  [493] = {.lex_state = 420},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 420},
  [497] = {.lex_state = 19},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 23},
  [500] = {.lex_state = 19},
  [501] = {.lex_state = 24},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 19},
  [507] = {.lex_state = 23},
  [508] = {.lex_state = 24},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 28},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 19},
  [515] = {.lex_state = 420},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 420},
  [519] = {.lex_state = 19},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 19},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 23},
  [525] = {.lex_state = 24},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 19},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 7},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 420},
  [539] = {.lex_state = 420},
  [540] = {.lex_state = 420},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 23},
  [548] = {.lex_state = 24},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 420},
  [557] = {.lex_state = 7},
  [558] = {.lex_state = 7},
  [559] = {.lex_state = 7},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 19},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 7},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 5},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 420},
  [573] = {.lex_state = 420},
  [574] = {.lex_state = 420},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 19},
  [577] = {.lex_state = 7},
  [578] = {.lex_state = 7},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 19},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 420},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 7},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 420},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 7},
  [590] = {.lex_state = 420},
  [591] = {.lex_state = 420},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 420},
  [603] = {.lex_state = 420},
  [604] = {.lex_state = 420},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 13},
  [608] = {.lex_state = 7},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 23},
  [617] = {.lex_state = 24},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 13},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 420},
  [628] = {.lex_state = 7},
  [629] = {.lex_state = 15},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 15},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 420},
  [646] = {.lex_state = 7},
  [647] = {.lex_state = 13},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 420},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 19},
  [657] = {.lex_state = 420},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 19},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 19},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 19},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 19},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 19},
  [687] = {.lex_state = 19},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 420},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 19},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 19},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 7},
  [716] = {.lex_state = 19},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 420},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 7},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 19},
  [723] = {.lex_state = 19},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 19},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 19},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 19},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 19},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 7},
  [737] = {.lex_state = 19},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 7},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 19},
  [743] = {.lex_state = 7},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 19},
  [756] = {.lex_state = 13},
  [757] = {.lex_state = 19},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 19},
  [761] = {.lex_state = 19},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 420},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 420},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 19},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 19},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 19},
  [775] = {.lex_state = 19},
  [776] = {.lex_state = 19},
  [777] = {.lex_state = 19},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 19},
  [780] = {.lex_state = 19},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 420},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 19},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 420},
  [797] = {.lex_state = 420},
  [798] = {.lex_state = 19},
  [799] = {.lex_state = 19},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 19},
  [802] = {.lex_state = 19},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 19},
  [805] = {.lex_state = 19},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 420},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 19},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 19},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 7},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 19},
  [836] = {.lex_state = 19},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 420},
  [849] = {.lex_state = 420},
  [850] = {.lex_state = 19},
  [851] = {.lex_state = 19},
  [852] = {.lex_state = 19},
  [853] = {.lex_state = 19},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 19},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 19},
  [860] = {.lex_state = 19},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 19},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 19},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 19},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 420},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 19},
  [883] = {.lex_state = 19},
  [884] = {.lex_state = 0},
  [885] = {(TSStateId)(-1)},
  [886] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_REPLACE] = ACTIONS(1),
    [anon_sym_DISTRIBUTED] = ACTIONS(1),
    [anon_sym_QUERY] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_GRAPH] = ACTIONS(1),
    [anon_sym_SYNTAX] = ACTIONS(1),
    [anon_sym_V2] = ACTIONS(1),
    [anon_sym_v2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TYPEDEF] = ACTIONS(1),
    [anon_sym_TUPLE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_UNION] = ACTIONS(1),
    [anon_sym_INTERSECT] = ACTIONS(1),
    [anon_sym_MINUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_ACCUM] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_WHEN] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_LIMIT] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_FOREACH] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RANGE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STEP] = ACTIONS(1),
    [anon_sym_POST_DASHACCUM] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_SumAccum] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_MaxAccum] = ACTIONS(1),
    [anon_sym_MinAccum] = ACTIONS(1),
    [anon_sym_AvgAccum] = ACTIONS(1),
    [anon_sym_OrAccum] = ACTIONS(1),
    [anon_sym_AndAccum] = ACTIONS(1),
    [anon_sym_BitwiseorAccum] = ACTIONS(1),
    [anon_sym_BitwiseandAccum] = ACTIONS(1),
    [anon_sym_ListAccum] = ACTIONS(1),
    [anon_sym_SetAccum] = ACTIONS(1),
    [anon_sym_BagAccum] = ACTIONS(1),
    [anon_sym_MapAccum] = ACTIONS(1),
    [anon_sym_HeapAccum] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_GroupbyAccum] = ACTIONS(1),
    [anon_sym_ArrayAccum] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_FILTER] = ACTIONS(1),
    [anon_sym_COALESCE] = ACTIONS(1),
    [anon_sym_DISTINCT] = ACTIONS(1),
    [anon_sym_ISEMPTY] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_BETWEEN] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_LIKE] = ACTIONS(1),
    [anon_sym_COUNT] = ACTIONS(1),
    [anon_sym_MAX] = ACTIONS(1),
    [anon_sym_MIN] = ACTIONS(1),
    [anon_sym_AVG] = ACTIONS(1),
    [anon_sym_SUM] = ACTIONS(1),
    [anon_sym_PRINT] = ACTIONS(1),
    [anon_sym_TO_CSV] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_UINT] = ACTIONS(1),
    [anon_sym_VERTEX] = ACTIONS(1),
    [anon_sym_EDGE] = ACTIONS(1),
    [anon_sym_JSONOBJECT] = ACTIONS(1),
    [anon_sym_JSONARRAY] = ACTIONS(1),
    [anon_sym_DATETIME] = ACTIONS(1),
    [anon_sym_GSQL_UINT_MAX] = ACTIONS(1),
    [anon_sym_GSQL_INT_MAX] = ACTIONS(1),
    [anon_sym_GSQL_UINT_MIN] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_gsql] = STATE(872),
    [sym__definition] = STATE(489),
    [sym_create_query] = STATE(593),
    [sym_interpret_query] = STATE(593),
    [sym_block_comment] = STATE(1),
    [aux_sym_gsql_repeat1] = STATE(350),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_INTERPRET] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_typedef] = STATE(74),
    [sym_query_body_stmts] = STATE(77),
    [sym_query_body_stmt] = STATE(816),
    [sym_assign_stmt] = STATE(814),
    [sym_v_set_var_decl_stmt] = STATE(814),
    [sym_l_accum_assign_stmt] = STATE(814),
    [sym_g_accum_assign_stmt] = STATE(814),
    [sym_g_accum_accum_stmt] = STATE(814),
    [sym_func_call_stmt] = STATE(814),
    [sym__select_stmt] = STATE(814),
    [sym_gsql_select_block] = STATE(812),
    [sym_gsql_select_clause] = STATE(600),
    [sym_query_body_case_stmt] = STATE(814),
    [sym_query_body_if_stmt] = STATE(814),
    [sym_query_body_while_stmt] = STATE(814),
    [sym_query_body_for_each_stmt] = STATE(814),
    [sym_decl_stmt] = STATE(814),
    [sym_base_decl_stmt] = STATE(803),
    [sym_accum_decl_stmt] = STATE(803),
    [sym_accum_type] = STATE(464),
    [sym_global_accum_name] = STATE(463),
    [sym_local_accum_name] = STATE(604),
    [sym_print_stmt] = STATE(814),
    [sym_base_type] = STATE(801),
    [sym_block_comment] = STATE(2),
    [aux_sym_query_body_repeat1] = STATE(70),
    [aux_sym_query_body_repeat2] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_TYPEDEF] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_SumAccum] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MaxAccum] = ACTIONS(29),
    [anon_sym_MinAccum] = ACTIONS(29),
    [anon_sym_AvgAccum] = ACTIONS(31),
    [anon_sym_OrAccum] = ACTIONS(31),
    [anon_sym_AndAccum] = ACTIONS(31),
    [anon_sym_BitwiseorAccum] = ACTIONS(31),
    [anon_sym_BitwiseandAccum] = ACTIONS(31),
    [anon_sym_ListAccum] = ACTIONS(33),
    [anon_sym_SetAccum] = ACTIONS(35),
    [anon_sym_BagAccum] = ACTIONS(35),
    [anon_sym_MapAccum] = ACTIONS(37),
    [anon_sym_HeapAccum] = ACTIONS(39),
    [anon_sym_GroupbyAccum] = ACTIONS(41),
    [anon_sym_ArrayAccum] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_PRINT] = ACTIONS(49),
    [anon_sym_BOOL] = ACTIONS(27),
    [anon_sym_UINT] = ACTIONS(27),
    [anon_sym_VERTEX] = ACTIONS(51),
    [anon_sym_EDGE] = ACTIONS(27),
    [anon_sym_JSONOBJECT] = ACTIONS(27),
    [anon_sym_JSONARRAY] = ACTIONS(27),
    [anon_sym_DATETIME] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_typedef] = STATE(74),
    [sym_query_body_stmts] = STATE(77),
    [sym_query_body_stmt] = STATE(816),
    [sym_assign_stmt] = STATE(814),
    [sym_v_set_var_decl_stmt] = STATE(814),
    [sym_l_accum_assign_stmt] = STATE(814),
    [sym_g_accum_assign_stmt] = STATE(814),
    [sym_g_accum_accum_stmt] = STATE(814),
    [sym_func_call_stmt] = STATE(814),
    [sym__select_stmt] = STATE(814),
    [sym_gsql_select_block] = STATE(812),
    [sym_gsql_select_clause] = STATE(600),
    [sym_query_body_case_stmt] = STATE(814),
    [sym_query_body_if_stmt] = STATE(814),
    [sym_query_body_while_stmt] = STATE(814),
    [sym_query_body_for_each_stmt] = STATE(814),
    [sym_decl_stmt] = STATE(814),
    [sym_base_decl_stmt] = STATE(803),
    [sym_accum_decl_stmt] = STATE(803),
    [sym_accum_type] = STATE(464),
    [sym_global_accum_name] = STATE(463),
    [sym_local_accum_name] = STATE(604),
    [sym_print_stmt] = STATE(814),
    [sym_base_type] = STATE(801),
    [sym_block_comment] = STATE(3),
    [aux_sym_query_body_repeat1] = STATE(2),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_TYPEDEF] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_SumAccum] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MaxAccum] = ACTIONS(29),
    [anon_sym_MinAccum] = ACTIONS(29),
    [anon_sym_AvgAccum] = ACTIONS(31),
    [anon_sym_OrAccum] = ACTIONS(31),
    [anon_sym_AndAccum] = ACTIONS(31),
    [anon_sym_BitwiseorAccum] = ACTIONS(31),
    [anon_sym_BitwiseandAccum] = ACTIONS(31),
    [anon_sym_ListAccum] = ACTIONS(33),
    [anon_sym_SetAccum] = ACTIONS(35),
    [anon_sym_BagAccum] = ACTIONS(35),
    [anon_sym_MapAccum] = ACTIONS(37),
    [anon_sym_HeapAccum] = ACTIONS(39),
    [anon_sym_GroupbyAccum] = ACTIONS(41),
    [anon_sym_ArrayAccum] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_PRINT] = ACTIONS(49),
    [anon_sym_BOOL] = ACTIONS(27),
    [anon_sym_UINT] = ACTIONS(27),
    [anon_sym_VERTEX] = ACTIONS(51),
    [anon_sym_EDGE] = ACTIONS(27),
    [anon_sym_JSONOBJECT] = ACTIONS(27),
    [anon_sym_JSONARRAY] = ACTIONS(27),
    [anon_sym_DATETIME] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(4), 1,
      sym_block_comment,
    STATE(6), 1,
      aux_sym_query_body_repeat2,
    STATE(77), 1,
      sym_query_body_stmts,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(812), 1,
      sym_gsql_select_block,
    STATE(816), 1,
      sym_query_body_stmt,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [131] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_block_comment,
    STATE(6), 1,
      aux_sym_query_body_repeat2,
    STATE(77), 1,
      sym_query_body_stmts,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(812), 1,
      sym_gsql_select_block,
    STATE(816), 1,
      sym_query_body_stmt,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [262] = 33,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_CASE,
    ACTIONS(67), 1,
      anon_sym_WHILE,
    ACTIONS(70), 1,
      anon_sym_FOREACH,
    ACTIONS(73), 1,
      anon_sym_SumAccum,
    ACTIONS(85), 1,
      anon_sym_ListAccum,
    ACTIONS(91), 1,
      anon_sym_MapAccum,
    ACTIONS(94), 1,
      anon_sym_HeapAccum,
    ACTIONS(97), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(100), 1,
      anon_sym_ArrayAccum,
    ACTIONS(103), 1,
      anon_sym_AT_AT,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(109), 1,
      anon_sym_PRINT,
    ACTIONS(112), 1,
      anon_sym_VERTEX,
    ACTIONS(115), 1,
      sym_name,
    STATE(77), 1,
      sym_query_body_stmts,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(812), 1,
      sym_gsql_select_block,
    STATE(816), 1,
      sym_query_body_stmt,
    ACTIONS(79), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(88), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(6), 2,
      sym_block_comment,
      aux_sym_query_body_repeat2,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(82), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(76), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [391] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(7), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(551), 1,
      sym_query_body_stmts,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [516] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(118), 1,
      anon_sym_IF,
    STATE(8), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(658), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [641] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(9), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(675), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [766] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(10), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(564), 1,
      sym_query_body_stmts,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [891] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(118), 1,
      anon_sym_IF,
    STATE(11), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    STATE(820), 1,
      sym_query_body_stmts,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1016] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(12), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(684), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1141] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(13), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(505), 1,
      sym_query_body_stmts,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1266] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(14), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(698), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1391] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(15), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(554), 1,
      sym_query_body_stmts,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1516] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(16), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(692), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1641] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(17), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(651), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1766] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(18), 1,
      sym_block_comment,
    STATE(463), 1,
      sym_global_accum_name,
    STATE(464), 1,
      sym_accum_type,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(791), 1,
      sym_query_body_stmts,
    STATE(801), 1,
      sym_base_type,
    STATE(806), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(803), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(814), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(19), 1,
      sym_block_comment,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(120), 41,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PLUS_EQ,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1952] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_block_comment,
    STATE(27), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(128), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(124), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2017] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_block_comment,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(132), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2081] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(22), 1,
      sym_block_comment,
    STATE(27), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(128), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(124), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2141] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_block_comment,
    STATE(24), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(140), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(138), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2203] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(24), 1,
      sym_block_comment,
    STATE(26), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(146), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(144), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2265] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(25), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(132), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2329] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(26), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(150), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(148), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2389] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(27), 1,
      sym_block_comment,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2449] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(28), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(159), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2509] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(159), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2569] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(140), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(138), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2628] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(170), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(174), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2742] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(159), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(180), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(178), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2856] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(132), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(140), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(138), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(37), 1,
      sym_block_comment,
    ACTIONS(186), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(184), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(186), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(184), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3082] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(39), 1,
      sym_block_comment,
    STATE(41), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(190), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3141] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(40), 1,
      sym_block_comment,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(194), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3200] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(41), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(148), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3257] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      sym_digit,
    STATE(42), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3314] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(211), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(208), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3373] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3429] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(224), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(222), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3485] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(230), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(47), 1,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3595] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_block_comment,
    ACTIONS(236), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(234), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3651] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(49), 1,
      sym_block_comment,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(174), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3705] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(50), 1,
      sym_block_comment,
    ACTIONS(242), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(240), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      sym_digit,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(51), 1,
      sym_block_comment,
    ACTIONS(246), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(244), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(248), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3865] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_block_comment,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(252), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(259), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(256), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(264), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(262), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4024] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(268), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(266), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4077] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(57), 1,
      sym_block_comment,
    ACTIONS(272), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(270), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(58), 1,
      sym_block_comment,
    ACTIONS(230), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(59), 1,
      sym_block_comment,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(132), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(60), 1,
      sym_block_comment,
    ACTIONS(276), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(274), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_block_comment,
    ACTIONS(280), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(278), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4342] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(62), 1,
      sym_block_comment,
    ACTIONS(284), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(282), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4395] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(63), 1,
      sym_block_comment,
    ACTIONS(288), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(286), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4448] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(64), 1,
      sym_block_comment,
    ACTIONS(292), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(290), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_block_comment,
    ACTIONS(296), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(294), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4554] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_block_comment,
    ACTIONS(300), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(298), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4607] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(304), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(302), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(68), 1,
      sym_block_comment,
    ACTIONS(308), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(306), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4713] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(69), 1,
      sym_block_comment,
    ACTIONS(312), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(310), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4766] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_TYPEDEF,
    STATE(74), 1,
      sym_typedef,
    ACTIONS(314), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(70), 2,
      sym_block_comment,
      aux_sym_query_body_repeat1,
    ACTIONS(319), 33,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [4822] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_SELECT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(341), 1,
      sym_name,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(71), 1,
      sym_block_comment,
    STATE(254), 1,
      sym_expr,
    STATE(461), 1,
      sym_simple_set,
    STATE(600), 1,
      sym_gsql_select_clause,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(812), 1,
      sym_gsql_select_block,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(733), 2,
      sym_seed_set,
      sym__select_stmt,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [4927] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(72), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(132), 26,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(73), 1,
      sym_block_comment,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(355), 34,
      anon_sym_TYPEDEF,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [5035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_block_comment,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(359), 34,
      anon_sym_TYPEDEF,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [5085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(75), 1,
      sym_block_comment,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(363), 34,
      anon_sym_TYPEDEF,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [5135] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(76), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [5194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(77), 1,
      sym_block_comment,
    ACTIONS(367), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(369), 33,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [5243] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(78), 1,
      sym_block_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(373), 33,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
      anon_sym_ListAccum,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
      anon_sym_MapAccum,
      anon_sym_HeapAccum,
      anon_sym_GroupbyAccum,
      anon_sym_ArrayAccum,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [5292] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(79), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(763), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5366] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    ACTIONS(385), 1,
      anon_sym_IF,
    STATE(80), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(709), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5440] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(81), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(588), 1,
      sym_dml_sub_stmt_list,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5514] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(82), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(769), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5588] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(83), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(767), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5662] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(84), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(537), 1,
      sym_dml_sub_stmt_list,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5736] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(85), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(630), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5810] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(86), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(697), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5884] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    ACTIONS(385), 1,
      anon_sym_IF,
    STATE(87), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(694), 1,
      sym_dml_sub_stmt_list,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5958] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(88), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(567), 1,
      sym_dml_sub_stmt_list,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [6032] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(89), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(581), 1,
      sym_dml_sub_stmt_list,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [6106] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(90), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(583), 1,
      sym_dml_sub_stmt_list,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [6180] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(204), 1,
      sym_expr,
    STATE(521), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_arg_list,
    STATE(876), 1,
      sym_aggregator,
    ACTIONS(403), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6277] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(375), 1,
      anon_sym_IF,
    ACTIONS(377), 1,
      anon_sym_CASE,
    ACTIONS(379), 1,
      anon_sym_WHILE,
    ACTIONS(381), 1,
      anon_sym_FOREACH,
    ACTIONS(383), 1,
      sym_name,
    STATE(92), 1,
      sym_block_comment,
    STATE(378), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(798), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [6348] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(208), 1,
      sym_expr,
    STATE(521), 1,
      sym_condition,
    STATE(599), 1,
      sym_arg_list,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    ACTIONS(403), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6445] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(707), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6537] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(95), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(845), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6629] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_expr,
    STATE(474), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6723] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(97), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_expr,
    STATE(320), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6817] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym_name,
    STATE(98), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(280), 1,
      sym_expr,
    STATE(454), 1,
      sym_simple_set,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_arg_list,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6909] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(99), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_expr,
    STATE(494), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7003] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_expr,
    STATE(495), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7097] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_IN,
    ACTIONS(445), 1,
      anon_sym_NOT,
    ACTIONS(447), 1,
      anon_sym_IS,
    ACTIONS(449), 1,
      anon_sym_BETWEEN,
    ACTIONS(451), 1,
      anon_sym_LIKE,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comparison_operator,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(437), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [7163] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(102), 1,
      sym_block_comment,
    STATE(562), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7257] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(103), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(825), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7349] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(104), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7441] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(105), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7535] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(106), 1,
      sym_block_comment,
    STATE(550), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7629] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(107), 1,
      sym_block_comment,
    STATE(263), 1,
      sym_expr,
    STATE(412), 1,
      sym_print_expr,
    STATE(428), 1,
      sym_v_expr_set,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7721] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(108), 1,
      sym_block_comment,
    STATE(379), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7815] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(109), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(783), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7907] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(110), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(828), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7999] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(111), 1,
      sym_block_comment,
    STATE(323), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8093] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(112), 1,
      sym_block_comment,
    STATE(575), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8187] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(113), 1,
      sym_block_comment,
    STATE(435), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8281] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym_name,
    STATE(114), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(277), 1,
      sym_expr,
    STATE(454), 1,
      sym_simple_set,
    STATE(599), 1,
      sym_arg_list,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8373] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(115), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(744), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8465] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(116), 1,
      sym_block_comment,
    STATE(549), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8559] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(117), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(839), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8651] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(118), 1,
      sym_block_comment,
    STATE(263), 1,
      sym_expr,
    STATE(428), 1,
      sym_v_expr_set,
    STATE(477), 1,
      sym_print_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8743] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(119), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8835] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(120), 1,
      sym_block_comment,
    STATE(536), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8929] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(121), 1,
      sym_block_comment,
    STATE(545), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9023] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(122), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(735), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9115] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(123), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(858), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9207] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(124), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(840), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9299] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(125), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(809), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9391] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(126), 1,
      sym_block_comment,
    STATE(485), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9485] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(127), 1,
      sym_block_comment,
    STATE(466), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9579] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(128), 1,
      sym_block_comment,
    STATE(446), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9673] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(479), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(129), 1,
      sym_block_comment,
    STATE(303), 1,
      sym_expr,
    STATE(456), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9765] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(130), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9857] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(131), 1,
      sym_block_comment,
    STATE(510), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9951] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(132), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(841), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10043] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(133), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(844), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10135] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_NOT,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_expr,
    STATE(134), 1,
      sym_block_comment,
    STATE(543), 1,
      sym_condition,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(427), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10229] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(135), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(854), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10321] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(815), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10410] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(137), 1,
      sym_block_comment,
    STATE(291), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(612), 1,
      sym_v_set_proj,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10499] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(138), 1,
      sym_block_comment,
    STATE(291), 1,
      sym_expr,
    STATE(566), 1,
      sym_v_set_proj,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10588] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_name,
    STATE(139), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(280), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_arg_list,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10677] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(140), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(833), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10766] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(141), 1,
      sym_block_comment,
    STATE(174), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(128), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(124), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(142), 1,
      sym_block_comment,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10870] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(143), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(284), 1,
      sym_set_bag_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(682), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10959] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_name,
    STATE(144), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      sym_set_bag_expr,
    STATE(277), 1,
      sym_expr,
    STATE(599), 1,
      sym_arg_list,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11048] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(145), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(284), 1,
      sym_set_bag_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(773), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11137] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(146), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(308), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(306), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11184] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(503), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(501), 19,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_POST_DASHACCUM,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_TO_CSV,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11235] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(148), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11324] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(149), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(811), 1,
      sym_arg_list,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11413] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_block_comment,
    STATE(191), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(146), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(144), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11461] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(151), 1,
      sym_block_comment,
    STATE(316), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11547] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(221), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11633] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(153), 1,
      sym_block_comment,
    STATE(258), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11719] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(154), 1,
      sym_block_comment,
    STATE(310), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11805] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(155), 1,
      sym_block_comment,
    STATE(256), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11891] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(156), 1,
      sym_block_comment,
    STATE(308), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11977] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(157), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(774), 1,
      sym__element_type,
    STATE(777), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [12047] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(158), 1,
      sym_block_comment,
    STATE(314), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12133] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(159), 1,
      sym_block_comment,
    STATE(287), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12219] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_name,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(160), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(288), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12305] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(161), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(774), 1,
      sym__element_type,
    STATE(853), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [12375] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(162), 1,
      sym_block_comment,
    STATE(312), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12461] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(163), 1,
      sym_block_comment,
    STATE(292), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12547] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(164), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12633] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(165), 1,
      sym_block_comment,
    STATE(244), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12719] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(166), 1,
      sym_block_comment,
    STATE(309), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12805] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    ACTIONS(513), 1,
      anon_sym_DOT,
    ACTIONS(515), 1,
      sym_digit,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(147), 1,
      sym_expr,
    STATE(167), 1,
      sym_block_comment,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12891] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(168), 1,
      sym_block_comment,
    STATE(300), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12977] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(169), 1,
      sym_block_comment,
    STATE(195), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13063] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(170), 1,
      sym_block_comment,
    STATE(254), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13149] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_name,
    STATE(171), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(295), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13235] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(172), 1,
      sym_block_comment,
    STATE(243), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13321] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(146), 1,
      sym_expr,
    STATE(173), 1,
      sym_block_comment,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13407] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(174), 1,
      sym_block_comment,
    STATE(185), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13453] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(175), 1,
      sym_block_comment,
    STATE(259), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13539] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(176), 1,
      sym_block_comment,
    STATE(298), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13625] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(177), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(743), 2,
      sym_accum_type,
      sym__element_type,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [13693] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(178), 1,
      sym_block_comment,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13741] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(179), 1,
      sym_block_comment,
    STATE(253), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13827] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_block_comment,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(159), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13873] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(181), 1,
      sym_block_comment,
    STATE(255), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13959] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(182), 1,
      sym_block_comment,
    STATE(315), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14045] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(183), 1,
      sym_block_comment,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14095] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(174), 1,
      aux_sym_name_dot_repeat1,
    STATE(184), 1,
      sym_block_comment,
    ACTIONS(128), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(124), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14141] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_DOT,
    STATE(185), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(159), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14187] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(513), 1,
      anon_sym_DOT,
    ACTIONS(515), 1,
      sym_digit,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(186), 1,
      sym_block_comment,
    STATE(201), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14273] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(187), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14323] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_DASH,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(188), 1,
      sym_block_comment,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(222), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14409] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(397), 1,
      anon_sym_COALESCE,
    ACTIONS(399), 1,
      anon_sym_ISEMPTY,
    ACTIONS(409), 1,
      sym_digit,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(189), 1,
      sym_block_comment,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(299), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(876), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(237), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14495] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_COALESCE,
    ACTIONS(335), 1,
      anon_sym_ISEMPTY,
    ACTIONS(339), 1,
      anon_sym_COUNT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(190), 1,
      sym_block_comment,
    STATE(245), 1,
      sym_expr,
    STATE(604), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14581] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
    STATE(191), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(150), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14627] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(192), 1,
      sym_block_comment,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(437), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
    ACTIONS(248), 17,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(193), 1,
      sym_block_comment,
    ACTIONS(180), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(178), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(194), 1,
      sym_block_comment,
    ACTIONS(176), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(174), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14759] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(195), 1,
      sym_block_comment,
    ACTIONS(306), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_block_comment,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(197), 1,
      sym_block_comment,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(159), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(198), 1,
      sym_block_comment,
    ACTIONS(122), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(120), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(199), 1,
      sym_block_comment,
    ACTIONS(172), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(170), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14978] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_SumAccum,
    ACTIONS(33), 1,
      anon_sym_ListAccum,
    ACTIONS(37), 1,
      anon_sym_MapAccum,
    ACTIONS(39), 1,
      anon_sym_HeapAccum,
    ACTIONS(41), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(43), 1,
      anon_sym_ArrayAccum,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(529), 1,
      sym_name,
    STATE(200), 1,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(720), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(31), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [15043] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(201), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(501), 19,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_AND,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [15090] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(202), 1,
      sym_block_comment,
    ACTIONS(186), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(184), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15132] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(203), 1,
      sym_block_comment,
    ACTIONS(531), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15176] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_IN,
    ACTIONS(445), 1,
      anon_sym_NOT,
    ACTIONS(447), 1,
      anon_sym_IS,
    ACTIONS(449), 1,
      anon_sym_BETWEEN,
    ACTIONS(451), 1,
      anon_sym_LIKE,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(152), 1,
      sym_math_operator,
    STATE(172), 1,
      sym_comparison_operator,
    STATE(204), 1,
      sym_block_comment,
    STATE(439), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(437), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(455), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15246] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(205), 1,
      sym_block_comment,
    ACTIONS(531), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(206), 1,
      sym_block_comment,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(207), 1,
      sym_block_comment,
    ACTIONS(186), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(184), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15374] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_IN,
    ACTIONS(445), 1,
      anon_sym_NOT,
    ACTIONS(447), 1,
      anon_sym_IS,
    ACTIONS(449), 1,
      anon_sym_BETWEEN,
    ACTIONS(451), 1,
      anon_sym_LIKE,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(152), 1,
      sym_math_operator,
    STATE(172), 1,
      sym_comparison_operator,
    STATE(208), 1,
      sym_block_comment,
    STATE(439), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(437), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(455), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15444] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(209), 1,
      sym_block_comment,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(194), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(192), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15489] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      sym_digit,
    STATE(210), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(203), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(201), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15532] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    STATE(211), 1,
      sym_block_comment,
    ACTIONS(211), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(208), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15577] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(212), 1,
      sym_block_comment,
    STATE(213), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(190), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(188), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15622] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_DOT,
    STATE(213), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(150), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    STATE(214), 1,
      sym_block_comment,
    ACTIONS(217), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(214), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(215), 1,
      sym_block_comment,
    ACTIONS(242), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(240), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      sym_digit,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15747] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(216), 1,
      sym_block_comment,
    ACTIONS(230), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(228), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15789] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(217), 1,
      sym_block_comment,
    ACTIONS(236), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(234), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15831] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_DOT,
    STATE(218), 1,
      sym_block_comment,
    ACTIONS(224), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(222), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15873] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(219), 1,
      sym_block_comment,
    ACTIONS(180), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(178), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(220), 1,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(174), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15953] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(152), 1,
      sym_math_operator,
    STATE(221), 1,
      sym_block_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(306), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15995] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(152), 1,
      sym_math_operator,
    STATE(222), 1,
      sym_block_comment,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(503), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(501), 14,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16041] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(223), 1,
      sym_block_comment,
    ACTIONS(437), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(250), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(248), 18,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16082] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(224), 1,
      sym_block_comment,
    ACTIONS(296), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(294), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16121] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(225), 1,
      sym_block_comment,
    ACTIONS(254), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(252), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16160] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(226), 1,
      sym_block_comment,
    ACTIONS(259), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(256), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16199] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(227), 1,
      sym_block_comment,
    ACTIONS(230), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(228), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16238] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(228), 1,
      sym_block_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(270), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(229), 1,
      sym_block_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(306), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16316] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(230), 1,
      sym_block_comment,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(231), 1,
      sym_block_comment,
    ACTIONS(268), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(266), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(232), 1,
      sym_block_comment,
    ACTIONS(276), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(274), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(233), 1,
      sym_block_comment,
    ACTIONS(246), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(244), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16472] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(234), 1,
      sym_block_comment,
    ACTIONS(304), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(302), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16511] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(235), 1,
      sym_block_comment,
    ACTIONS(300), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(298), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16550] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(236), 1,
      sym_block_comment,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(310), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(237), 1,
      sym_block_comment,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(262), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16628] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(238), 1,
      sym_block_comment,
    ACTIONS(250), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(248), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(239), 1,
      sym_block_comment,
    ACTIONS(280), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(278), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(240), 1,
      sym_block_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(290), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(241), 1,
      sym_block_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(282), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16784] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(242), 1,
      sym_block_comment,
    ACTIONS(288), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(286), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16823] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(243), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(553), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [16861] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(244), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(555), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [16899] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(245), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(557), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [16937] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_LT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(246), 1,
      sym_block_comment,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16980] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_LT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(247), 1,
      sym_block_comment,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(561), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17023] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(248), 1,
      sym_block_comment,
    ACTIONS(563), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(565), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17055] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_SET,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(249), 1,
      sym_block_comment,
    STATE(504), 1,
      sym_query_param,
    STATE(506), 1,
      sym_base_type,
    STATE(794), 1,
      sym_query_params,
    STATE(792), 2,
      sym_set_param,
      sym__type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17099] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(250), 1,
      sym_block_comment,
    ACTIONS(575), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(577), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17131] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LT,
    ACTIONS(579), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(251), 1,
      sym_block_comment,
    ACTIONS(561), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17175] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_GT,
    ACTIONS(586), 1,
      anon_sym_VERTEX,
    ACTIONS(589), 1,
      sym_name,
    STATE(265), 1,
      sym_tuple_field,
    STATE(293), 1,
      sym_tuple_fields,
    STATE(730), 1,
      sym_base_type,
    STATE(252), 2,
      sym_block_comment,
      aux_sym_typedef_repeat1,
    ACTIONS(583), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17216] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(253), 1,
      sym_block_comment,
    ACTIONS(592), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17251] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(254), 1,
      sym_block_comment,
    ACTIONS(594), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17286] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(255), 1,
      sym_block_comment,
    ACTIONS(596), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17321] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(256), 1,
      sym_block_comment,
    ACTIONS(598), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17356] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(600), 1,
      anon_sym_GT,
    ACTIONS(602), 1,
      sym_name,
    STATE(252), 1,
      aux_sym_typedef_repeat1,
    STATE(257), 1,
      sym_block_comment,
    STATE(265), 1,
      sym_tuple_field,
    STATE(293), 1,
      sym_tuple_fields,
    STATE(730), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17399] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(258), 1,
      sym_block_comment,
    ACTIONS(604), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17434] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(259), 1,
      sym_block_comment,
    ACTIONS(606), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17469] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(602), 1,
      sym_name,
    ACTIONS(608), 1,
      anon_sym_GT,
    STATE(257), 1,
      aux_sym_typedef_repeat1,
    STATE(260), 1,
      sym_block_comment,
    STATE(265), 1,
      sym_tuple_field,
    STATE(293), 1,
      sym_tuple_fields,
    STATE(730), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17512] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(610), 1,
      anon_sym_SumAccum,
    ACTIONS(616), 1,
      anon_sym_ListAccum,
    ACTIONS(620), 1,
      anon_sym_MapAccum,
    ACTIONS(622), 1,
      anon_sym_HeapAccum,
    ACTIONS(624), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(626), 1,
      anon_sym_ArrayAccum,
    STATE(261), 1,
      sym_block_comment,
    STATE(683), 1,
      sym_accum_type,
    ACTIONS(612), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(618), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(614), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
  [17558] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_SET,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(262), 1,
      sym_block_comment,
    STATE(506), 1,
      sym_base_type,
    STATE(641), 1,
      sym_query_param,
    STATE(792), 2,
      sym_set_param,
      sym__type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17596] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_AS,
    STATE(169), 1,
      sym_math_operator,
    STATE(263), 1,
      sym_block_comment,
    ACTIONS(628), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17634] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(636), 1,
      anon_sym_LT,
    STATE(264), 1,
      sym_block_comment,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(638), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17665] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_GT,
    STATE(265), 1,
      sym_block_comment,
    STATE(267), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(644), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17698] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(646), 1,
      anon_sym_DASH,
    STATE(266), 1,
      sym_block_comment,
    STATE(695), 1,
      sym_constant,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    ACTIONS(648), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17741] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(267), 1,
      sym_block_comment,
    STATE(269), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(652), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17774] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(646), 1,
      anon_sym_DASH,
    STATE(268), 1,
      sym_block_comment,
    STATE(642), 1,
      sym_constant,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    ACTIONS(648), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17817] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_GT,
    STATE(269), 2,
      sym_block_comment,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(659), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17848] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(646), 1,
      anon_sym_DASH,
    STATE(270), 1,
      sym_block_comment,
    STATE(586), 1,
      sym_constant,
    STATE(52), 2,
      sym_numeric,
      sym_string_literal,
    STATE(55), 2,
      sym_integer,
      sym_real,
    ACTIONS(648), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17891] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(271), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(774), 1,
      sym__element_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17925] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(272), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(656), 1,
      sym__element_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17959] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      sym_math_operator,
    STATE(273), 1,
      sym_block_comment,
    STATE(441), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17995] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(274), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(743), 1,
      sym__element_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18029] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(275), 1,
      sym_block_comment,
    STATE(528), 1,
      sym_base_type,
    STATE(741), 1,
      sym__element_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18063] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(602), 1,
      sym_name,
    STATE(276), 1,
      sym_block_comment,
    STATE(279), 1,
      sym_tuple_field,
    STATE(730), 1,
      sym_base_type,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18097] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(189), 1,
      sym_math_operator,
    STATE(277), 1,
      sym_block_comment,
    STATE(439), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18135] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(278), 1,
      sym_block_comment,
    ACTIONS(663), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(665), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [18163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(279), 1,
      sym_block_comment,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(659), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [18191] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(189), 1,
      sym_math_operator,
    STATE(280), 1,
      sym_block_comment,
    STATE(439), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(281), 1,
      sym_block_comment,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(638), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [18257] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(282), 1,
      sym_block_comment,
    STATE(403), 1,
      sym_atomic_edge_type,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(538), 1,
      sym_path_edge_pattern,
    STATE(540), 1,
      sym_disj_pattern,
    STATE(639), 1,
      sym_step_edge_types,
    STATE(719), 1,
      sym_step_edge_set,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [18307] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(681), 1,
      sym_name,
    STATE(283), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_step_source_set,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(361), 1,
      sym_path_pattern,
    STATE(392), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(418), 2,
      sym_step,
      sym_step_v2,
  [18355] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    STATE(284), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18385] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(285), 1,
      sym_block_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(685), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [18413] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(286), 1,
      sym_block_comment,
    STATE(506), 1,
      sym_base_type,
    STATE(530), 1,
      sym__type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18444] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(287), 1,
      sym_block_comment,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18475] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(189), 1,
      sym_math_operator,
    STATE(288), 1,
      sym_block_comment,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(501), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18506] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(289), 1,
      sym_block_comment,
    STATE(488), 1,
      sym__type,
    STATE(506), 1,
      sym_base_type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18537] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(290), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(553), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [18564] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(691), 1,
      anon_sym_AS,
    STATE(169), 1,
      sym_math_operator,
    STATE(291), 1,
      sym_block_comment,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18597] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(292), 1,
      sym_block_comment,
    STATE(491), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_GT,
    STATE(293), 1,
      sym_block_comment,
    ACTIONS(699), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [18659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(294), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(555), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [18686] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(189), 1,
      sym_math_operator,
    STATE(295), 1,
      sym_block_comment,
    ACTIONS(453), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(687), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(443), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18717] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(296), 1,
      sym_block_comment,
    STATE(506), 1,
      sym_base_type,
    STATE(715), 1,
      sym__type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18748] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_VERTEX,
    STATE(297), 1,
      sym_block_comment,
    STATE(506), 1,
      sym_base_type,
    STATE(608), 1,
      sym__type,
    ACTIONS(571), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18779] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(298), 1,
      sym_block_comment,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18812] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(189), 1,
      sym_math_operator,
    STATE(299), 1,
      sym_block_comment,
    ACTIONS(308), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(306), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18841] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_math_operator,
    STATE(300), 1,
      sym_block_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18871] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(540), 1,
      sym_disj_pattern,
    STATE(572), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [18915] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(540), 1,
      sym_disj_pattern,
    STATE(602), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [18959] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(709), 1,
      anon_sym_WHEN,
    STATE(169), 1,
      sym_math_operator,
    STATE(303), 1,
      sym_block_comment,
    STATE(445), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_VERTEX,
    STATE(285), 1,
      sym_base_type,
    STATE(304), 1,
      sym_block_comment,
    ACTIONS(711), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [19019] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(538), 1,
      sym_path_edge_pattern,
    STATE(540), 1,
      sym_disj_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [19063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(306), 1,
      sym_block_comment,
    ACTIONS(170), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PLUS_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
  [19087] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(540), 1,
      sym_disj_pattern,
    STATE(602), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [19131] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(308), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19160] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_math_operator,
    STATE(309), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19189] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(310), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19218] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 1,
      anon_sym_GT,
    ACTIONS(721), 1,
      sym_name,
    STATE(311), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(385), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
  [19259] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_math_operator,
    STATE(312), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19288] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(313), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19317] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      sym_math_operator,
    STATE(314), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19346] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_math_operator,
    STATE(315), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19375] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_SLASH,
    ACTIONS(731), 1,
      anon_sym_AND,
    STATE(169), 1,
      sym_math_operator,
    STATE(316), 1,
      sym_block_comment,
    ACTIONS(443), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(317), 1,
      sym_block_comment,
    ACTIONS(553), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [19426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(318), 1,
      sym_block_comment,
    ACTIONS(555), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [19448] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(639), 1,
      sym_step_edge_types,
    STATE(640), 1,
      sym_atomic_edge_type,
    STATE(719), 1,
      sym_step_edge_set,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [19486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(320), 1,
      sym_block_comment,
    ACTIONS(735), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [19508] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(321), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(372), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
  [19546] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(639), 1,
      sym_step_edge_types,
    STATE(640), 1,
      sym_atomic_edge_type,
    STATE(705), 1,
      sym_step_edge_set,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [19584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(323), 1,
      sym_block_comment,
    ACTIONS(553), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [19606] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(324), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(370), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
  [19644] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(325), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(414), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
  [19682] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    ACTIONS(741), 1,
      anon_sym_PLUS_EQ,
    STATE(326), 1,
      sym_block_comment,
    STATE(333), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(737), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19710] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    ACTIONS(745), 1,
      anon_sym_WHERE,
    ACTIONS(747), 1,
      anon_sym_ACCUM,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    STATE(327), 1,
      sym_block_comment,
    STATE(345), 1,
      sym_where_clause,
    STATE(390), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(391), 1,
      sym_accum_clause,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(728), 1,
      sym_limit_clause,
  [19750] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(328), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(337), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(395), 1,
      sym_step_vertex_set,
    ACTIONS(679), 2,
      anon_sym__,
      anon_sym_ANY,
  [19788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(329), 1,
      sym_block_comment,
    ACTIONS(753), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
      anon_sym_PIPE2,
  [19810] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(330), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(451), 1,
      sym_atomic_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [19845] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_DASH,
    STATE(331), 1,
      sym_block_comment,
    STATE(348), 1,
      aux_sym_path_pattern_repeat1,
    STATE(365), 1,
      aux_sym_step_repeat1,
    ACTIONS(755), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(761), 1,
      anon_sym_DOT,
    STATE(332), 2,
      sym_block_comment,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(759), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19895] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    STATE(332), 1,
      aux_sym_v_accum_func_call_repeat1,
    STATE(333), 1,
      sym_block_comment,
    ACTIONS(764), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(334), 1,
      sym_block_comment,
    ACTIONS(766), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(335), 2,
      sym_block_comment,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(771), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19962] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_DASH,
    STATE(336), 2,
      sym_block_comment,
      aux_sym_path_pattern_repeat1,
    ACTIONS(773), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(337), 1,
      sym_block_comment,
    ACTIONS(778), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20004] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_DASH,
    STATE(338), 1,
      sym_block_comment,
    STATE(348), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(755), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_COLON,
    STATE(339), 1,
      sym_block_comment,
    ACTIONS(782), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(340), 1,
      sym_block_comment,
    ACTIONS(786), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(341), 1,
      sym_block_comment,
    ACTIONS(788), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(342), 1,
      sym_block_comment,
    ACTIONS(790), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_COLON,
    STATE(343), 1,
      sym_block_comment,
    ACTIONS(792), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(344), 1,
      sym_block_comment,
    ACTIONS(796), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20152] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_ACCUM,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(345), 1,
      sym_block_comment,
    STATE(382), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(383), 1,
      sym_accum_clause,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(807), 1,
      sym_limit_clause,
  [20186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_COLON,
    STATE(346), 1,
      sym_block_comment,
    ACTIONS(782), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      sym_block_comment,
    STATE(349), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(802), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20232] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_DASH,
    STATE(336), 1,
      aux_sym_path_pattern_repeat1,
    STATE(348), 1,
      sym_block_comment,
    ACTIONS(804), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20256] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    STATE(349), 1,
      sym_block_comment,
    ACTIONS(806), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20280] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_CREATE,
    ACTIONS(11), 1,
      anon_sym_INTERPRET,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
    STATE(350), 1,
      sym_block_comment,
    STATE(363), 1,
      aux_sym_gsql_repeat1,
    STATE(489), 1,
      sym__definition,
    STATE(593), 2,
      sym_create_query,
      sym_interpret_query,
  [20309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(351), 1,
      sym_block_comment,
    ACTIONS(810), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(352), 1,
      sym_block_comment,
    ACTIONS(812), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20347] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      anon_sym_DISTINCT,
    ACTIONS(818), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(353), 1,
      sym_block_comment,
    STATE(481), 1,
      sym_set_bag_expr,
  [20378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(354), 1,
      sym_block_comment,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20397] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_AT_AT,
    ACTIONS(826), 1,
      sym_name,
    STATE(355), 1,
      sym_block_comment,
    STATE(752), 1,
      sym_for_each_control,
    STATE(607), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(356), 1,
      sym_block_comment,
    ACTIONS(828), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(357), 1,
      sym_block_comment,
    ACTIONS(830), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20464] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_name,
    ACTIONS(832), 1,
      anon_sym_RANGE,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(358), 1,
      sym_block_comment,
    STATE(442), 1,
      sym_set_bag_expr,
  [20495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(359), 1,
      sym_block_comment,
    ACTIONS(834), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20514] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_AT_AT,
    ACTIONS(826), 1,
      sym_name,
    STATE(360), 1,
      sym_block_comment,
    STATE(778), 1,
      sym_for_each_control,
    STATE(607), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20543] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      sym_block_comment,
    STATE(364), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20566] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    ACTIONS(844), 1,
      sym_name,
    STATE(362), 1,
      sym_block_comment,
    STATE(571), 1,
      sym_seed,
    STATE(644), 1,
      sym_global_accum_name,
    ACTIONS(842), 2,
      anon_sym__,
      anon_sym_ANY,
  [20595] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 1,
      anon_sym_CREATE,
    ACTIONS(851), 1,
      anon_sym_INTERPRET,
    STATE(489), 1,
      sym__definition,
    STATE(363), 2,
      sym_block_comment,
      aux_sym_gsql_repeat1,
    STATE(593), 2,
      sym_create_query,
      sym_interpret_query,
  [20622] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      sym_block_comment,
    STATE(376), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(854), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(858), 1,
      anon_sym_DASH,
    STATE(365), 1,
      sym_block_comment,
    STATE(377), 1,
      aux_sym_step_repeat1,
    ACTIONS(856), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20668] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_name,
    ACTIONS(860), 1,
      anon_sym_DISTINCT,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(366), 1,
      sym_block_comment,
    STATE(470), 1,
      sym_set_bag_expr,
  [20699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(367), 1,
      sym_block_comment,
    ACTIONS(862), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20718] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(368), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(432), 1,
      sym_atomic_edge_type,
    ACTIONS(671), 2,
      anon_sym__,
      anon_sym_ANY,
  [20747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(369), 1,
      sym_block_comment,
    ACTIONS(864), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(370), 1,
      sym_block_comment,
    ACTIONS(866), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(371), 1,
      sym_block_comment,
    ACTIONS(868), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(372), 1,
      sym_block_comment,
    ACTIONS(870), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(373), 1,
      sym_block_comment,
    ACTIONS(872), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(374), 1,
      sym_block_comment,
    ACTIONS(874), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(375), 1,
      sym_block_comment,
    ACTIONS(876), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(376), 2,
      sym_block_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(881), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(885), 1,
      anon_sym_DASH,
    STATE(377), 2,
      sym_block_comment,
      aux_sym_step_repeat1,
    ACTIONS(883), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(378), 1,
      sym_block_comment,
    ACTIONS(771), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(379), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(890), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20961] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(294), 1,
      sym_set_bag_expr,
    STATE(380), 1,
      sym_block_comment,
  [20989] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(381), 1,
      sym_block_comment,
    STATE(473), 1,
      sym_set_bag_expr,
  [21017] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      sym_block_comment,
    STATE(430), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(878), 1,
      sym_limit_clause,
  [21045] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      sym_block_comment,
    STATE(387), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(878), 1,
      sym_limit_clause,
  [21073] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(844), 1,
      sym_name,
    STATE(384), 1,
      sym_block_comment,
    STATE(614), 1,
      sym_seed,
    STATE(644), 1,
      sym_global_accum_name,
    ACTIONS(842), 2,
      anon_sym__,
      anon_sym_ANY,
  [21099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(385), 1,
      sym_block_comment,
    ACTIONS(896), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21117] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(386), 1,
      sym_block_comment,
    STATE(470), 1,
      sym_set_bag_expr,
  [21145] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(387), 1,
      sym_block_comment,
    STATE(430), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(681), 1,
      sym_limit_clause,
  [21173] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(388), 1,
      sym_block_comment,
    STATE(455), 1,
      sym_set_bag_expr,
  [21201] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(206), 1,
      sym_global_accum_name,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(389), 1,
      sym_block_comment,
  [21229] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(390), 1,
      sym_block_comment,
    STATE(430), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(807), 1,
      sym_limit_clause,
  [21257] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LIMIT,
    ACTIONS(751), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(391), 1,
      sym_block_comment,
    STATE(531), 1,
      sym_post_accum_clause,
    STATE(807), 1,
      sym_limit_clause,
  [21285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(906), 1,
      anon_sym_DASH,
    STATE(392), 1,
      sym_block_comment,
    ACTIONS(904), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21305] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(290), 1,
      sym_set_bag_expr,
    STATE(393), 1,
      sym_block_comment,
  [21333] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(394), 1,
      sym_block_comment,
  [21361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(395), 1,
      sym_block_comment,
    ACTIONS(908), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21379] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(396), 1,
      sym_block_comment,
    STATE(482), 1,
      sym_set_bag_expr,
  [21407] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(397), 1,
      sym_block_comment,
    STATE(479), 1,
      sym_set_bag_expr,
  [21435] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(398), 1,
      sym_block_comment,
    STATE(481), 1,
      sym_set_bag_expr,
  [21463] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(399), 1,
      sym_block_comment,
    ACTIONS(881), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21481] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(892), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(400), 1,
      sym_block_comment,
    STATE(442), 1,
      sym_set_bag_expr,
  [21509] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(646), 1,
      anon_sym_DASH,
    STATE(401), 1,
      sym_block_comment,
    STATE(638), 1,
      sym_numeric,
    STATE(55), 2,
      sym_integer,
      sym_real,
  [21535] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    STATE(402), 1,
      sym_block_comment,
    ACTIONS(310), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21557] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      anon_sym_GT,
    STATE(403), 1,
      sym_block_comment,
    ACTIONS(910), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(914), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
  [21578] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(916), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_LT,
    ACTIONS(920), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(404), 1,
      sym_block_comment,
  [21603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(405), 1,
      sym_block_comment,
    ACTIONS(922), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21620] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_SEMI,
    ACTIONS(928), 1,
      anon_sym_WHERE,
    ACTIONS(930), 1,
      anon_sym_TO_CSV,
    STATE(406), 1,
      sym_block_comment,
    STATE(410), 1,
      aux_sym_print_stmt_repeat1,
  [21645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      anon_sym_PIPE,
    STATE(407), 2,
      sym_block_comment,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(932), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(408), 1,
      sym_block_comment,
    ACTIONS(120), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21681] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      anon_sym_DOT,
    STATE(409), 1,
      sym_block_comment,
    ACTIONS(937), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(410), 2,
      sym_block_comment,
      aux_sym_print_stmt_repeat1,
    ACTIONS(944), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21719] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(946), 1,
      sym_name,
    STATE(411), 1,
      sym_block_comment,
    STATE(669), 1,
      sym_string_literal,
    STATE(740), 1,
      sym_file_path,
  [21744] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      anon_sym_WHERE,
    ACTIONS(952), 1,
      anon_sym_TO_CSV,
    STATE(406), 1,
      aux_sym_print_stmt_repeat1,
    STATE(412), 1,
      sym_block_comment,
  [21769] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LT,
    ACTIONS(954), 1,
      anon_sym_EQ,
    ACTIONS(956), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(413), 1,
      sym_block_comment,
  [21794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(414), 1,
      sym_block_comment,
    ACTIONS(958), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21811] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(960), 1,
      sym_name,
    STATE(415), 1,
      sym_block_comment,
    STATE(669), 1,
      sym_string_literal,
    STATE(759), 1,
      sym_file_path,
  [21836] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(962), 1,
      sym_name,
    STATE(416), 1,
      sym_block_comment,
    STATE(669), 1,
      sym_string_literal,
    STATE(670), 1,
      sym_file_path,
  [21861] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(966), 1,
      anon_sym_PIPE,
    STATE(407), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(417), 1,
      sym_block_comment,
    ACTIONS(964), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(418), 1,
      sym_block_comment,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21899] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(966), 1,
      anon_sym_PIPE,
    STATE(417), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(419), 1,
      sym_block_comment,
    ACTIONS(968), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(420), 1,
      sym_block_comment,
    ACTIONS(970), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(421), 1,
      sym_block_comment,
    ACTIONS(972), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(422), 1,
      sym_block_comment,
    ACTIONS(922), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(423), 1,
      sym_block_comment,
    ACTIONS(561), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(424), 1,
      sym_block_comment,
    ACTIONS(974), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [22005] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(976), 1,
      sym_name,
    STATE(425), 1,
      sym_block_comment,
    STATE(669), 1,
      sym_string_literal,
    STATE(813), 1,
      sym_file_path,
  [22030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(426), 1,
      sym_block_comment,
    ACTIONS(978), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [22047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      anon_sym_GT,
    STATE(427), 1,
      sym_block_comment,
    ACTIONS(914), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22066] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      anon_sym_AS,
    STATE(428), 1,
      sym_block_comment,
    ACTIONS(628), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [22085] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      anon_sym_PIPE,
    STATE(429), 1,
      sym_block_comment,
    STATE(573), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(972), 2,
      anon_sym_GT,
      anon_sym_DOT,
  [22108] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_POST_DASHACCUM,
    STATE(531), 1,
      sym_post_accum_clause,
    ACTIONS(984), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(430), 2,
      sym_block_comment,
      aux_sym_gsql_select_block_repeat1,
  [22129] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_EQ,
    ACTIONS(991), 1,
      anon_sym_SEMI,
    STATE(431), 1,
      sym_block_comment,
    STATE(535), 1,
      aux_sym_base_decl_stmt_repeat1,
  [22151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(432), 1,
      sym_block_comment,
    ACTIONS(993), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22167] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_WHEN,
    ACTIONS(995), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(433), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat2,
  [22185] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(434), 1,
      sym_block_comment,
    STATE(532), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [22207] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    ACTIONS(1008), 1,
      anon_sym_TO_CSV,
    STATE(435), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22227] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1014), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1016), 1,
      sym_line_comment,
    STATE(436), 1,
      sym_block_comment,
    STATE(478), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(1010), 2,
      sym_newline,
      sym_comment_contents,
  [22247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(687), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(437), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_AT,
    STATE(438), 1,
      sym_block_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22283] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      sym_block_comment,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1025), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [22303] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1029), 1,
      anon_sym_AT,
    STATE(440), 1,
      sym_block_comment,
    ACTIONS(1027), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22321] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_arg_list_repeat1,
    STATE(441), 1,
      sym_block_comment,
    ACTIONS(1025), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [22341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1031), 1,
      anon_sym_DO,
    STATE(442), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22359] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1033), 1,
      sym_name,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(443), 1,
      sym_block_comment,
    STATE(590), 1,
      sym_edge_set_type,
  [22381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(444), 1,
      sym_block_comment,
    ACTIONS(1035), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [22397] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(709), 1,
      anon_sym_WHEN,
    ACTIONS(1037), 1,
      anon_sym_ELSE,
    ACTIONS(1039), 1,
      anon_sym_END,
    STATE(433), 1,
      aux_sym_query_body_case_stmt_repeat2,
    STATE(445), 1,
      sym_block_comment,
  [22419] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1041), 1,
      anon_sym_LIMIT,
    ACTIONS(1043), 1,
      anon_sym_DO,
    STATE(446), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      anon_sym_AT,
    STATE(447), 1,
      sym_block_comment,
    ACTIONS(1045), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22457] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1033), 1,
      sym_name,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(448), 1,
      sym_block_comment,
    STATE(653), 1,
      sym_edge_set_type,
  [22479] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_AT_AT,
    ACTIONS(1049), 1,
      sym_name,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(449), 1,
      sym_block_comment,
    STATE(626), 1,
      sym_vertex_set_type,
  [22501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1053), 1,
      anon_sym_WHEN,
    ACTIONS(1051), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(450), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat1,
  [22519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(451), 1,
      sym_block_comment,
    ACTIONS(932), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22535] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    ACTIONS(1056), 1,
      sym_name,
    STATE(452), 1,
      sym_block_comment,
    STATE(553), 1,
      aux_sym_accum_type_repeat1,
    STATE(690), 1,
      sym_simple_size,
  [22557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1060), 1,
      anon_sym_WHEN,
    ACTIONS(1058), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(453), 2,
      sym_block_comment,
      aux_sym_dml_sub_case_stmt_repeat1,
  [22575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym_block_comment,
    ACTIONS(1065), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22593] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22611] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_ELSE,
    ACTIONS(1071), 1,
      anon_sym_END,
    ACTIONS(1073), 1,
      anon_sym_WHEN,
    STATE(450), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(456), 1,
      sym_block_comment,
  [22633] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    ACTIONS(1056), 1,
      sym_name,
    STATE(457), 1,
      sym_block_comment,
    STATE(553), 1,
      aux_sym_accum_type_repeat1,
    STATE(768), 1,
      sym_simple_size,
  [22655] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1077), 1,
      anon_sym_AT,
    STATE(458), 1,
      sym_block_comment,
    ACTIONS(1075), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(459), 1,
      sym_block_comment,
    ACTIONS(120), 4,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [22689] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      anon_sym_AT,
    STATE(460), 1,
      sym_block_comment,
    ACTIONS(1079), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    STATE(461), 1,
      sym_block_comment,
    ACTIONS(1065), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22725] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1087), 1,
      anon_sym_AT,
    STATE(462), 1,
      sym_block_comment,
    ACTIONS(1085), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22743] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      anon_sym_EQ,
    ACTIONS(1091), 1,
      anon_sym_PLUS_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(463), 1,
      sym_block_comment,
  [22765] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(464), 1,
      sym_block_comment,
    STATE(434), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22785] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_ELSE,
    ACTIONS(1095), 1,
      anon_sym_END,
    ACTIONS(1097), 1,
      anon_sym_WHEN,
    STATE(453), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(465), 1,
      sym_block_comment,
  [22807] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      anon_sym_LIMIT,
    ACTIONS(1101), 1,
      anon_sym_DO,
    STATE(466), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22827] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_AT_AT,
    ACTIONS(1049), 1,
      sym_name,
    STATE(329), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_block_comment,
    STATE(579), 1,
      sym_vertex_set_type,
  [22849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1103), 1,
      anon_sym_LT,
    STATE(468), 1,
      sym_block_comment,
    ACTIONS(634), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22867] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    ACTIONS(687), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    STATE(469), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22903] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(471), 1,
      sym_block_comment,
    STATE(587), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1112), 1,
      anon_sym_AT,
    STATE(472), 1,
      sym_block_comment,
    ACTIONS(1110), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22959] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_TO_CSV,
    STATE(474), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22979] = 5,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1123), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1120), 2,
      sym_newline,
      sym_comment_contents,
    STATE(475), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [22997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(476), 1,
      sym_block_comment,
    ACTIONS(1125), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [23013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(477), 1,
      sym_block_comment,
    ACTIONS(944), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [23029] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1127), 1,
      anon_sym_STAR_SLASH,
    STATE(475), 1,
      aux_sym_block_comment_repeat1,
    STATE(478), 1,
      sym_block_comment,
    ACTIONS(1010), 2,
      sym_newline,
      sym_comment_contents,
  [23049] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1129), 1,
      anon_sym_DO,
    STATE(479), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(480), 1,
      sym_block_comment,
    ACTIONS(1131), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [23083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23101] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1129), 1,
      anon_sym_DO,
    STATE(482), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_GT,
    STATE(483), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat1,
  [23136] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    STATE(484), 2,
      sym_block_comment,
      aux_sym_base_decl_stmt_repeat1,
  [23153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1145), 1,
      anon_sym_THEN,
    STATE(485), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(486), 1,
      sym_block_comment,
  [23189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1151), 1,
      anon_sym_AT,
    ACTIONS(1153), 1,
      sym_name,
    STATE(326), 1,
      sym_local_accum_name,
    STATE(487), 1,
      sym_block_comment,
  [23208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_GT,
    STATE(486), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(488), 1,
      sym_block_comment,
  [23227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(489), 1,
      sym_block_comment,
    ACTIONS(1157), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23242] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_block_comment,
    STATE(584), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [23261] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    STATE(484), 1,
      aux_sym_base_decl_stmt_repeat1,
    STATE(491), 1,
      sym_block_comment,
  [23280] = 4,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    STATE(492), 1,
      sym_block_comment,
    ACTIONS(1163), 3,
      sym_newline,
      sym_comment_contents,
      anon_sym_STAR_SLASH,
  [23295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(493), 1,
      sym_block_comment,
    ACTIONS(1165), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(496), 1,
      sym_block_comment,
    ACTIONS(1171), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23359] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(497), 1,
      sym_block_comment,
    ACTIONS(634), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23374] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1173), 1,
      anon_sym_SQUOTE,
    ACTIONS(1175), 1,
      aux_sym_string_literal_token2,
    STATE(498), 1,
      sym_block_comment,
    STATE(548), 1,
      aux_sym_string_literal_repeat2,
  [23393] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
    ACTIONS(1177), 1,
      aux_sym_string_literal_token1,
    STATE(499), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_string_literal_repeat1,
  [23412] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1179), 1,
      anon_sym_AT,
    ACTIONS(1181), 1,
      sym_name,
    STATE(184), 1,
      sym_local_accum_name,
    STATE(500), 1,
      sym_block_comment,
  [23431] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1175), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1183), 1,
      anon_sym_SQUOTE,
    STATE(498), 1,
      aux_sym_string_literal_repeat2,
    STATE(501), 1,
      sym_block_comment,
  [23450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1185), 1,
      anon_sym_ELSE,
    ACTIONS(1188), 1,
      anon_sym_END,
    STATE(502), 2,
      sym_block_comment,
      aux_sym_query_body_if_stmt_repeat1,
  [23467] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1177), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1183), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      aux_sym_string_literal_repeat1,
    STATE(503), 1,
      sym_block_comment,
  [23486] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      sym_block_comment,
    STATE(517), 1,
      aux_sym_query_params_repeat1,
  [23505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(505), 1,
      sym_block_comment,
    ACTIONS(1194), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(506), 1,
      sym_block_comment,
    ACTIONS(1196), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23535] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1177), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_block_comment,
    STATE(524), 1,
      aux_sym_string_literal_repeat1,
  [23554] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1175), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1198), 1,
      anon_sym_SQUOTE,
    STATE(508), 1,
      sym_block_comment,
    STATE(525), 1,
      aux_sym_string_literal_repeat2,
  [23573] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    ACTIONS(1202), 1,
      anon_sym_PIPE2,
    STATE(509), 1,
      sym_block_comment,
    STATE(533), 1,
      aux_sym_step_vertex_types_repeat1,
  [23592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1204), 1,
      anon_sym_THEN,
    STATE(510), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(511), 1,
      sym_block_comment,
    ACTIONS(1035), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [23624] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    STATE(512), 1,
      sym_block_comment,
  [23643] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1179), 1,
      anon_sym_AT,
    ACTIONS(1208), 1,
      sym_name,
    STATE(184), 1,
      sym_local_accum_name,
    STATE(513), 1,
      sym_block_comment,
  [23662] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1151), 1,
      anon_sym_AT,
    ACTIONS(1210), 1,
      sym_name,
    STATE(514), 1,
      sym_block_comment,
    STATE(628), 1,
      sym_local_accum_name,
  [23681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(515), 1,
      sym_block_comment,
    ACTIONS(1212), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23696] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      anon_sym_OR,
    ACTIONS(1216), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1218), 1,
      anon_sym_QUERY,
    STATE(516), 1,
      sym_block_comment,
  [23715] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      sym_block_comment,
    STATE(542), 1,
      aux_sym_query_params_repeat1,
  [23734] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1224), 1,
      anon_sym_EQ,
    STATE(518), 1,
      sym_block_comment,
    ACTIONS(1222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23751] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1226), 1,
      anon_sym_LPAREN,
    ACTIONS(1228), 1,
      sym_name,
    STATE(454), 1,
      sym_simple_set,
    STATE(519), 1,
      sym_block_comment,
  [23770] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    STATE(520), 2,
      sym_block_comment,
      aux_sym_v_expr_set_repeat1,
  [23787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1237), 1,
      anon_sym_AT,
    ACTIONS(1239), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    STATE(522), 1,
      sym_block_comment,
  [23823] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
    STATE(523), 1,
      sym_block_comment,
    STATE(526), 1,
      aux_sym_seed_set_repeat1,
  [23842] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1177), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE,
    STATE(524), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_string_literal_repeat1,
  [23861] = 6,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1175), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1245), 1,
      anon_sym_SQUOTE,
    STATE(525), 1,
      sym_block_comment,
    STATE(548), 1,
      aux_sym_string_literal_repeat2,
  [23880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    STATE(526), 2,
      sym_block_comment,
      aux_sym_seed_set_repeat1,
  [23897] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1252), 1,
      anon_sym_THEN,
    STATE(527), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(528), 1,
      sym_block_comment,
    ACTIONS(1254), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(529), 1,
      sym_block_comment,
    ACTIONS(371), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23944] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_GT,
    STATE(530), 1,
      sym_block_comment,
    STATE(563), 1,
      aux_sym_func_call_stmt_repeat1,
  [23963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(531), 1,
      sym_block_comment,
    ACTIONS(1258), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [23978] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    STATE(532), 1,
      sym_block_comment,
    STATE(584), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [23997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(1264), 1,
      anon_sym_PIPE2,
    STATE(533), 2,
      sym_block_comment,
      aux_sym_step_vertex_types_repeat1,
  [24014] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RBRACK,
    STATE(520), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(534), 1,
      sym_block_comment,
  [24033] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_SEMI,
    STATE(484), 1,
      aux_sym_base_decl_stmt_repeat1,
    STATE(535), 1,
      sym_block_comment,
  [24052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1273), 1,
      anon_sym_THEN,
    STATE(536), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24069] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(537), 1,
      sym_block_comment,
    STATE(568), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1275), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [24086] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    ACTIONS(1279), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    STATE(538), 1,
      sym_block_comment,
  [24105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(539), 1,
      sym_block_comment,
    ACTIONS(1283), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24120] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(540), 1,
      sym_block_comment,
    ACTIONS(968), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [24135] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    STATE(541), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat2,
  [24152] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    STATE(542), 2,
      sym_block_comment,
      aux_sym_query_params_repeat1,
  [24169] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    STATE(544), 2,
      sym_block_comment,
      aux_sym_for_each_control_repeat1,
  [24203] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1302), 1,
      anon_sym_THEN,
    STATE(545), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24220] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym_accum_type_repeat2,
    STATE(546), 1,
      sym_block_comment,
  [24239] = 5,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    ACTIONS(1310), 1,
      aux_sym_string_literal_token1,
    STATE(547), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [24256] = 5,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    ACTIONS(1313), 1,
      anon_sym_SQUOTE,
    ACTIONS(1315), 1,
      aux_sym_string_literal_token2,
    STATE(548), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat2,
  [24273] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1320), 1,
      anon_sym_THEN,
    STATE(550), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24307] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1322), 1,
      anon_sym_ELSE,
    ACTIONS(1324), 1,
      anon_sym_END,
    STATE(551), 1,
      sym_block_comment,
    STATE(555), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [24326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1326), 1,
      anon_sym_ELSE,
    ACTIONS(1329), 1,
      anon_sym_END,
    STATE(552), 2,
      sym_block_comment,
      aux_sym_dml_sub_if_stmt_repeat1,
  [24343] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    ACTIONS(1331), 1,
      anon_sym_DO,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    STATE(553), 1,
      sym_block_comment,
  [24362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(554), 1,
      sym_block_comment,
    ACTIONS(1333), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1335), 1,
      anon_sym_ELSE,
    ACTIONS(1337), 1,
      anon_sym_END,
    STATE(502), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(555), 1,
      sym_block_comment,
  [24396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(1341), 1,
      anon_sym_PIPE,
    STATE(556), 2,
      sym_block_comment,
      aux_sym_step_edge_types_repeat1,
  [24413] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1344), 1,
      anon_sym_LPAREN,
    ACTIONS(1346), 1,
      anon_sym_EQ,
    ACTIONS(1348), 1,
      anon_sym_PLUS_EQ,
    STATE(557), 1,
      sym_block_comment,
  [24432] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_GT,
    STATE(558), 1,
      sym_block_comment,
    STATE(559), 1,
      aux_sym_accum_type_repeat4,
  [24451] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1357), 1,
      anon_sym_GT,
    STATE(559), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat4,
  [24468] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_accum_type_repeat2,
    STATE(560), 1,
      sym_block_comment,
  [24487] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1237), 1,
      anon_sym_AT,
    ACTIONS(1359), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    STATE(561), 1,
      sym_block_comment,
  [24506] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1361), 1,
      anon_sym_THEN,
    STATE(562), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24523] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(563), 1,
      sym_block_comment,
  [24542] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1322), 1,
      anon_sym_ELSE,
    ACTIONS(1324), 1,
      anon_sym_END,
    STATE(555), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(564), 1,
      sym_block_comment,
  [24561] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym_for_each_control_repeat1,
    STATE(565), 1,
      sym_block_comment,
  [24580] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RBRACK,
    STATE(534), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(566), 1,
      sym_block_comment,
  [24599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(567), 1,
      sym_block_comment,
    ACTIONS(1371), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24614] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1373), 1,
      anon_sym_ELSE,
    ACTIONS(1375), 1,
      anon_sym_END,
    STATE(552), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(568), 1,
      sym_block_comment,
  [24633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(569), 1,
      sym_block_comment,
    ACTIONS(663), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24648] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1379), 1,
      anon_sym_DOT_STAR,
    STATE(570), 1,
      sym_block_comment,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [24665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_RBRACE,
    STATE(523), 1,
      aux_sym_seed_set_repeat1,
    STATE(571), 1,
      sym_block_comment,
  [24684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(572), 1,
      sym_block_comment,
    ACTIONS(1383), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [24699] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_PIPE,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_step_edge_types_repeat1,
    STATE(573), 1,
      sym_block_comment,
  [24718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(574), 1,
      sym_block_comment,
    ACTIONS(1383), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [24733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1387), 1,
      anon_sym_THEN,
    STATE(575), 1,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24750] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1226), 1,
      anon_sym_LPAREN,
    ACTIONS(1228), 1,
      sym_name,
    STATE(422), 1,
      sym_simple_set,
    STATE(576), 1,
      sym_block_comment,
  [24769] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_GT,
    STATE(558), 1,
      aux_sym_accum_type_repeat4,
    STATE(577), 1,
      sym_block_comment,
  [24788] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_GT,
    STATE(559), 1,
      aux_sym_accum_type_repeat4,
    STATE(578), 1,
      sym_block_comment,
  [24807] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1202), 1,
      anon_sym_PIPE2,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_step_vertex_types_repeat1,
    STATE(579), 1,
      sym_block_comment,
  [24826] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1393), 1,
      sym_name,
    STATE(338), 1,
      sym_step_source_set,
    STATE(399), 1,
      sym_path_pattern,
    STATE(580), 1,
      sym_block_comment,
  [24845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(581), 1,
      sym_block_comment,
    ACTIONS(1395), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1397), 1,
      anon_sym_EQ,
    STATE(582), 1,
      sym_block_comment,
    ACTIONS(1143), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(583), 1,
      sym_block_comment,
    ACTIONS(1399), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_SEMI,
    STATE(584), 2,
      sym_block_comment,
      aux_sym_accum_decl_stmt_repeat1,
  [24909] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_GT,
    STATE(578), 1,
      aux_sym_accum_type_repeat4,
    STATE(585), 1,
      sym_block_comment,
  [24928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      aux_sym_accum_decl_stmt_repeat1,
    STATE(586), 1,
      sym_block_comment,
  [24947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1410), 1,
      anon_sym_EQ,
    STATE(587), 1,
      sym_block_comment,
    ACTIONS(1404), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24964] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1412), 1,
      anon_sym_ELSE,
    ACTIONS(1414), 1,
      anon_sym_END,
    STATE(568), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(588), 1,
      sym_block_comment,
  [24983] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(1416), 1,
      anon_sym_PLUS_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(589), 1,
      sym_block_comment,
  [25002] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(982), 1,
      anon_sym_PIPE,
    STATE(573), 1,
      aux_sym_step_edge_types_repeat1,
    STATE(590), 1,
      sym_block_comment,
  [25021] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1418), 1,
      anon_sym_DOT,
    ACTIONS(1420), 1,
      sym_digit,
    STATE(591), 1,
      sym_block_comment,
  [25037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(592), 1,
      sym_block_comment,
    STATE(849), 1,
      sym_parameter_list,
  [25053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1424), 1,
      anon_sym_LBRACE,
    STATE(493), 1,
      sym_query_body,
    STATE(593), 1,
      sym_block_comment,
  [25069] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_block_comment,
    STATE(848), 1,
      sym_parameter_list,
  [25085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1426), 1,
      anon_sym_SYNTAX,
    ACTIONS(1428), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_block_comment,
  [25101] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1430), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1432), 1,
      anon_sym_QUERY,
    STATE(596), 1,
      sym_block_comment,
  [25117] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(597), 1,
      sym_block_comment,
    STATE(797), 1,
      sym_parameter_list,
  [25133] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(598), 1,
      sym_block_comment,
    ACTIONS(1434), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25147] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(1438), 1,
      anon_sym_DASH_GT,
    STATE(599), 1,
      sym_block_comment,
  [25163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1440), 1,
      anon_sym_FROM,
    STATE(327), 1,
      sym_from_clause,
    STATE(600), 1,
      sym_block_comment,
  [25179] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(209), 1,
      aux_sym_accum_type_repeat1,
    STATE(601), 1,
      sym_block_comment,
  [25195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1279), 1,
      anon_sym_DOT,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_block_comment,
  [25211] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(603), 1,
      sym_block_comment,
  [25227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(604), 1,
      sym_block_comment,
  [25243] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(605), 1,
      sym_block_comment,
    STATE(766), 1,
      sym_parameter_list,
  [25259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(40), 1,
      aux_sym_accum_type_repeat1,
    STATE(606), 1,
      sym_block_comment,
  [25275] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1444), 1,
      anon_sym_IN,
    ACTIONS(1446), 1,
      anon_sym_COLON,
    STATE(607), 1,
      sym_block_comment,
  [25291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(608), 1,
      sym_block_comment,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [25305] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(609), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat3,
  [25319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(610), 1,
      sym_block_comment,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(611), 1,
      sym_block_comment,
    STATE(718), 1,
      sym_parameter_list,
  [25349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(612), 1,
      sym_block_comment,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25363] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(1455), 1,
      anon_sym_DASH_GT,
    STATE(613), 1,
      sym_block_comment,
  [25379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(614), 1,
      sym_block_comment,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25393] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1097), 1,
      anon_sym_WHEN,
    STATE(465), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(615), 1,
      sym_block_comment,
  [25409] = 4,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    STATE(616), 1,
      sym_block_comment,
    ACTIONS(1457), 2,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
  [25423] = 4,
    ACTIONS(1012), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      sym_line_comment,
    STATE(617), 1,
      sym_block_comment,
    ACTIONS(1459), 2,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token2,
  [25437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1461), 1,
      anon_sym_SYNTAX,
    ACTIONS(1463), 1,
      anon_sym_LBRACE,
    STATE(618), 1,
      sym_block_comment,
  [25453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(619), 1,
      sym_block_comment,
    ACTIONS(1465), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      anon_sym_IN,
    ACTIONS(1469), 1,
      anon_sym_LIKE,
    STATE(620), 1,
      sym_block_comment,
  [25483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1235), 1,
      anon_sym_NULL,
    ACTIONS(1471), 1,
      anon_sym_NOT,
    STATE(621), 1,
      sym_block_comment,
  [25499] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(565), 1,
      aux_sym_for_each_control_repeat1,
    STATE(622), 1,
      sym_block_comment,
  [25515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(211), 1,
      aux_sym_accum_type_repeat1,
    STATE(623), 1,
      sym_block_comment,
  [25531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(624), 1,
      sym_block_comment,
    ACTIONS(1473), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1475), 1,
      anon_sym_SYNTAX,
    ACTIONS(1477), 1,
      anon_sym_LBRACE,
    STATE(625), 1,
      sym_block_comment,
  [25561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(626), 1,
      sym_block_comment,
    ACTIONS(1262), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
  [25575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1344), 1,
      anon_sym_LPAREN,
    ACTIONS(1346), 1,
      anon_sym_EQ,
    STATE(627), 1,
      sym_block_comment,
  [25591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(628), 1,
      sym_block_comment,
    ACTIONS(1479), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [25605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(629), 1,
      sym_block_comment,
    ACTIONS(1481), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(630), 1,
      sym_block_comment,
    ACTIONS(1275), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym_accum_type_repeat3,
    STATE(631), 1,
      sym_block_comment,
  [25649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(512), 1,
      aux_sym_accum_type_repeat1,
    STATE(632), 1,
      sym_block_comment,
  [25665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(633), 1,
      sym_block_comment,
    ACTIONS(1485), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(634), 1,
      sym_block_comment,
    ACTIONS(1487), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(635), 1,
      sym_block_comment,
    ACTIONS(1489), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(636), 1,
      sym_block_comment,
    ACTIONS(1491), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    STATE(637), 1,
      sym_block_comment,
  [25737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(638), 1,
      sym_block_comment,
    ACTIONS(1493), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25751] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(1497), 1,
      anon_sym_COLON,
    STATE(639), 1,
      sym_block_comment,
  [25767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(640), 1,
      sym_block_comment,
    ACTIONS(910), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(641), 1,
      sym_block_comment,
    ACTIONS(1290), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25795] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(642), 1,
      sym_block_comment,
    ACTIONS(1499), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [25809] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1501), 1,
      anon_sym_SYNTAX,
    ACTIONS(1503), 1,
      anon_sym_LBRACE,
    STATE(643), 1,
      sym_block_comment,
  [25825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(644), 1,
      sym_block_comment,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25839] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1505), 1,
      anon_sym_DOT,
    ACTIONS(1507), 1,
      anon_sym_DO,
    STATE(645), 1,
      sym_block_comment,
  [25855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(646), 1,
      sym_block_comment,
    ACTIONS(1509), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [25869] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1511), 1,
      anon_sym_IN,
    ACTIONS(1513), 1,
      anon_sym_COLON,
    STATE(647), 1,
      sym_block_comment,
  [25885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_digit,
    STATE(402), 1,
      aux_sym_accum_type_repeat1,
    STATE(648), 1,
      sym_block_comment,
  [25901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(649), 1,
      sym_block_comment,
    ACTIONS(1515), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25915] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1517), 1,
      anon_sym_SYNTAX,
    ACTIONS(1519), 1,
      anon_sym_LBRACE,
    STATE(650), 1,
      sym_block_comment,
  [25931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(651), 1,
      sym_block_comment,
    ACTIONS(1521), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(652), 1,
      sym_block_comment,
    ACTIONS(1523), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(653), 1,
      sym_block_comment,
    ACTIONS(1339), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [25973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1525), 1,
      anon_sym_COMMA,
    STATE(631), 1,
      aux_sym_accum_type_repeat3,
    STATE(654), 1,
      sym_block_comment,
  [25989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(655), 1,
      sym_block_comment,
    ACTIONS(1527), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [26003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1529), 1,
      sym_name,
    STATE(656), 1,
      sym_block_comment,
  [26016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1531), 1,
      anon_sym_DASH,
    STATE(657), 1,
      sym_block_comment,
  [26029] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1533), 1,
      anon_sym_END,
    STATE(658), 1,
      sym_block_comment,
  [26042] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1535), 1,
      anon_sym_SEMI,
    STATE(659), 1,
      sym_block_comment,
  [26055] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1537), 1,
      anon_sym_SELECT,
    STATE(660), 1,
      sym_block_comment,
  [26068] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1539), 1,
      anon_sym_FROM,
    STATE(661), 1,
      sym_block_comment,
  [26081] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1541), 1,
      anon_sym_V2,
    STATE(662), 1,
      sym_block_comment,
  [26094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_block_comment,
  [26107] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1545), 1,
      anon_sym_FILTER,
    STATE(664), 1,
      sym_block_comment,
  [26120] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_block_comment,
  [26133] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_block_comment,
  [26146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1551), 1,
      anon_sym_SEMI,
    STATE(667), 1,
      sym_block_comment,
  [26159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1553), 1,
      anon_sym_LBRACE,
    STATE(668), 1,
      sym_block_comment,
  [26172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1555), 1,
      anon_sym_SEMI,
    STATE(669), 1,
      sym_block_comment,
  [26185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    STATE(670), 1,
      sym_block_comment,
  [26198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_block_comment,
  [26211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1557), 1,
      sym_name,
    STATE(672), 1,
      sym_block_comment,
  [26224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1559), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_block_comment,
  [26237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_block_comment,
  [26250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1563), 1,
      anon_sym_END,
    STATE(675), 1,
      sym_block_comment,
  [26263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1565), 1,
      anon_sym_LBRACK,
    STATE(676), 1,
      sym_block_comment,
  [26276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1567), 1,
      anon_sym_LBRACE,
    STATE(677), 1,
      sym_block_comment,
  [26289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1569), 1,
      sym_name,
    STATE(678), 1,
      sym_block_comment,
  [26302] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1571), 1,
      anon_sym_LPAREN,
    STATE(679), 1,
      sym_block_comment,
  [26315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1573), 1,
      sym_name,
    STATE(680), 1,
      sym_block_comment,
  [26328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1575), 1,
      anon_sym_SEMI,
    STATE(681), 1,
      sym_block_comment,
  [26341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      sym_block_comment,
  [26354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1577), 1,
      sym_name,
    STATE(683), 1,
      sym_block_comment,
  [26367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1579), 1,
      anon_sym_END,
    STATE(684), 1,
      sym_block_comment,
  [26380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1581), 1,
      anon_sym_SUM,
    STATE(685), 1,
      sym_block_comment,
  [26393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1583), 1,
      sym_name,
    STATE(686), 1,
      sym_block_comment,
  [26406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1585), 1,
      sym_name,
    STATE(687), 1,
      sym_block_comment,
  [26419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1587), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_block_comment,
  [26432] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1589), 1,
      anon_sym_DASH,
    STATE(689), 1,
      sym_block_comment,
  [26445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1591), 1,
      anon_sym_DO,
    STATE(690), 1,
      sym_block_comment,
  [26458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1331), 1,
      anon_sym_DO,
    STATE(691), 1,
      sym_block_comment,
  [26471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1593), 1,
      anon_sym_END,
    STATE(692), 1,
      sym_block_comment,
  [26484] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1595), 1,
      anon_sym_SEMI,
    STATE(693), 1,
      sym_block_comment,
  [26497] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1597), 1,
      anon_sym_END,
    STATE(694), 1,
      sym_block_comment,
  [26510] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1599), 1,
      anon_sym_THEN,
    STATE(695), 1,
      sym_block_comment,
  [26523] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1601), 1,
      anon_sym_LPAREN,
    STATE(696), 1,
      sym_block_comment,
  [26536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1603), 1,
      anon_sym_END,
    STATE(697), 1,
      sym_block_comment,
  [26549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1605), 1,
      anon_sym_END,
    STATE(698), 1,
      sym_block_comment,
  [26562] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1607), 1,
      anon_sym_LBRACE,
    STATE(699), 1,
      sym_block_comment,
  [26575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1609), 1,
      anon_sym_SEMI,
    STATE(700), 1,
      sym_block_comment,
  [26588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1611), 1,
      anon_sym_NULL,
    STATE(701), 1,
      sym_block_comment,
  [26601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1613), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_block_comment,
  [26614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1615), 1,
      anon_sym_STEP,
    STATE(703), 1,
      sym_block_comment,
  [26627] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1617), 1,
      sym_name,
    STATE(704), 1,
      sym_block_comment,
  [26640] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      sym_block_comment,
  [26653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1621), 1,
      anon_sym_AVG,
    STATE(706), 1,
      sym_block_comment,
  [26666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      sym_block_comment,
  [26679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1623), 1,
      sym_digit,
    STATE(708), 1,
      sym_block_comment,
  [26692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1625), 1,
      anon_sym_END,
    STATE(709), 1,
      sym_block_comment,
  [26705] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1627), 1,
      anon_sym_IF,
    STATE(710), 1,
      sym_block_comment,
  [26718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1629), 1,
      sym_name,
    STATE(711), 1,
      sym_block_comment,
  [26731] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1631), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      sym_block_comment,
  [26744] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1633), 1,
      anon_sym_LPAREN,
    STATE(713), 1,
      sym_block_comment,
  [26757] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1635), 1,
      anon_sym_SEMI,
    STATE(714), 1,
      sym_block_comment,
  [26770] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1637), 1,
      anon_sym_GT,
    STATE(715), 1,
      sym_block_comment,
  [26783] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1639), 1,
      sym_name,
    STATE(716), 1,
      sym_block_comment,
  [26796] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1641), 1,
      anon_sym_GRAPH,
    STATE(717), 1,
      sym_block_comment,
  [26809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1643), 1,
      anon_sym_FOR,
    STATE(718), 1,
      sym_block_comment,
  [26822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      sym_block_comment,
  [26835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1647), 1,
      anon_sym_GT,
    STATE(720), 1,
      sym_block_comment,
  [26848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_block_comment,
  [26861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1651), 1,
      sym_name,
    STATE(722), 1,
      sym_block_comment,
  [26874] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1653), 1,
      sym_name,
    STATE(723), 1,
      sym_block_comment,
  [26887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1655), 1,
      anon_sym_DO,
    STATE(724), 1,
      sym_block_comment,
  [26900] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
    STATE(725), 1,
      sym_block_comment,
  [26913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1344), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_block_comment,
  [26926] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1659), 1,
      sym_name,
    STATE(727), 1,
      sym_block_comment,
  [26939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(728), 1,
      sym_block_comment,
  [26952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      sym_block_comment,
  [26965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1661), 1,
      sym_name,
    STATE(730), 1,
      sym_block_comment,
  [26978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1663), 1,
      anon_sym_SEMI,
    STATE(731), 1,
      sym_block_comment,
  [26991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1665), 1,
      sym_name,
    STATE(732), 1,
      sym_block_comment,
  [27004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    STATE(733), 1,
      sym_block_comment,
  [27017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1667), 1,
      sym_name,
    STATE(734), 1,
      sym_block_comment,
  [27030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      sym_block_comment,
  [27043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1671), 1,
      anon_sym_GT,
    STATE(736), 1,
      sym_block_comment,
  [27056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1673), 1,
      sym_name,
    STATE(737), 1,
      sym_block_comment,
  [27069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1675), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_block_comment,
  [27082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1677), 1,
      anon_sym_GT,
    STATE(739), 1,
      sym_block_comment,
  [27095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
    STATE(740), 1,
      sym_block_comment,
  [27108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1679), 1,
      anon_sym_COMMA,
    STATE(741), 1,
      sym_block_comment,
  [27121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1681), 1,
      sym_name,
    STATE(742), 1,
      sym_block_comment,
  [27134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1683), 1,
      anon_sym_GT,
    STATE(743), 1,
      sym_block_comment,
  [27147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
    STATE(744), 1,
      sym_block_comment,
  [27160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
    STATE(745), 1,
      sym_block_comment,
  [27173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1689), 1,
      anon_sym_SEMI,
    STATE(746), 1,
      sym_block_comment,
  [27186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(747), 1,
      sym_block_comment,
  [27199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1691), 1,
      anon_sym_FILTER,
    STATE(748), 1,
      sym_block_comment,
  [27212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1693), 1,
      anon_sym_LPAREN,
    STATE(749), 1,
      sym_block_comment,
  [27225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1695), 1,
      anon_sym_SEMI,
    STATE(750), 1,
      sym_block_comment,
  [27238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1697), 1,
      anon_sym_LBRACE,
    STATE(751), 1,
      sym_block_comment,
  [27251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1699), 1,
      anon_sym_DO,
    STATE(752), 1,
      sym_block_comment,
  [27264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
    STATE(753), 1,
      sym_block_comment,
  [27277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1703), 1,
      sym_digit,
    STATE(754), 1,
      sym_block_comment,
  [27290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1705), 1,
      sym_name,
    STATE(755), 1,
      sym_block_comment,
  [27303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1707), 1,
      anon_sym_MIN,
    STATE(756), 1,
      sym_block_comment,
  [27316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1709), 1,
      sym_name,
    STATE(757), 1,
      sym_block_comment,
  [27329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(758), 1,
      sym_block_comment,
  [27342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      anon_sym_SEMI,
    STATE(759), 1,
      sym_block_comment,
  [27355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1713), 1,
      sym_name,
    STATE(760), 1,
      sym_block_comment,
  [27368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1715), 1,
      sym_name,
    STATE(761), 1,
      sym_block_comment,
  [27381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_block_comment,
  [27394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      anon_sym_END,
    STATE(763), 1,
      sym_block_comment,
  [27407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1719), 1,
      anon_sym_FOR,
    STATE(764), 1,
      sym_block_comment,
  [27420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1721), 1,
      anon_sym_GRAPH,
    STATE(765), 1,
      sym_block_comment,
  [27433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1723), 1,
      anon_sym_FOR,
    STATE(766), 1,
      sym_block_comment,
  [27446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      anon_sym_END,
    STATE(767), 1,
      sym_block_comment,
  [27459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1727), 1,
      anon_sym_DO,
    STATE(768), 1,
      sym_block_comment,
  [27472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1729), 1,
      anon_sym_END,
    STATE(769), 1,
      sym_block_comment,
  [27485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1731), 1,
      sym_name,
    STATE(770), 1,
      sym_block_comment,
  [27498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1733), 1,
      anon_sym_IF,
    STATE(771), 1,
      sym_block_comment,
  [27511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1735), 1,
      sym_name,
    STATE(772), 1,
      sym_block_comment,
  [27524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_block_comment,
  [27537] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1737), 1,
      sym_name,
    STATE(774), 1,
      sym_block_comment,
  [27550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_name,
    STATE(775), 1,
      sym_block_comment,
  [27563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1739), 1,
      sym_name,
    STATE(776), 1,
      sym_block_comment,
  [27576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1741), 1,
      sym_name,
    STATE(777), 1,
      sym_block_comment,
  [27589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1743), 1,
      anon_sym_DO,
    STATE(778), 1,
      sym_block_comment,
  [27602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1745), 1,
      sym_name,
    STATE(779), 1,
      sym_block_comment,
  [27615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1747), 1,
      sym_name,
    STATE(780), 1,
      sym_block_comment,
  [27628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1749), 1,
      anon_sym_LPAREN,
    STATE(781), 1,
      sym_block_comment,
  [27641] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
    STATE(782), 1,
      sym_block_comment,
  [27654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1753), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      sym_block_comment,
  [27667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1755), 1,
      anon_sym_LPAREN,
    STATE(784), 1,
      sym_block_comment,
  [27680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1757), 1,
      anon_sym_MAX,
    STATE(785), 1,
      sym_block_comment,
  [27693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
    STATE(786), 1,
      sym_block_comment,
  [27706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1761), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym_block_comment,
  [27719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1763), 1,
      anon_sym_DASH,
    STATE(788), 1,
      sym_block_comment,
  [27732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1765), 1,
      anon_sym_LT,
    STATE(789), 1,
      sym_block_comment,
  [27745] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1767), 1,
      anon_sym_GRAPH,
    STATE(790), 1,
      sym_block_comment,
  [27758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1769), 1,
      anon_sym_END,
    STATE(791), 1,
      sym_block_comment,
  [27771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1771), 1,
      sym_name,
    STATE(792), 1,
      sym_block_comment,
  [27784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1773), 1,
      anon_sym_SEMI,
    STATE(793), 1,
      sym_block_comment,
  [27797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1775), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_block_comment,
  [27810] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1777), 1,
      anon_sym_LT,
    STATE(795), 1,
      sym_block_comment,
  [27823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1779), 1,
      anon_sym_FOR,
    STATE(796), 1,
      sym_block_comment,
  [27836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1781), 1,
      anon_sym_FOR,
    STATE(797), 1,
      sym_block_comment,
  [27849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1783), 1,
      sym_name,
    STATE(798), 1,
      sym_block_comment,
  [27862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1785), 1,
      sym_name,
    STATE(799), 1,
      sym_block_comment,
  [27875] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1787), 1,
      anon_sym_QUERY,
    STATE(800), 1,
      sym_block_comment,
  [27888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1789), 1,
      sym_name,
    STATE(801), 1,
      sym_block_comment,
  [27901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1791), 1,
      sym_name,
    STATE(802), 1,
      sym_block_comment,
  [27914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1793), 1,
      anon_sym_SEMI,
    STATE(803), 1,
      sym_block_comment,
  [27927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1795), 1,
      sym_name,
    STATE(804), 1,
      sym_block_comment,
  [27940] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1797), 1,
      sym_name,
    STATE(805), 1,
      sym_block_comment,
  [27953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1799), 1,
      anon_sym_SEMI,
    STATE(806), 1,
      sym_block_comment,
  [27966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(807), 1,
      sym_block_comment,
  [27979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1801), 1,
      anon_sym_DASH,
    STATE(808), 1,
      sym_block_comment,
  [27992] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1803), 1,
      anon_sym_RPAREN,
    STATE(809), 1,
      sym_block_comment,
  [28005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1805), 1,
      sym_digit,
    STATE(810), 1,
      sym_block_comment,
  [28018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(811), 1,
      sym_block_comment,
  [28031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1807), 1,
      anon_sym_SEMI,
    STATE(812), 1,
      sym_block_comment,
  [28044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      anon_sym_SEMI,
    STATE(813), 1,
      sym_block_comment,
  [28057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1811), 1,
      anon_sym_SEMI,
    STATE(814), 1,
      sym_block_comment,
  [28070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(815), 1,
      sym_block_comment,
  [28083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1813), 1,
      anon_sym_SEMI,
    STATE(816), 1,
      sym_block_comment,
  [28096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1815), 1,
      sym_name,
    STATE(817), 1,
      sym_block_comment,
  [28109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      anon_sym_SEMI,
    STATE(818), 1,
      sym_block_comment,
  [28122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1819), 1,
      sym_digit,
    STATE(819), 1,
      sym_block_comment,
  [28135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1821), 1,
      anon_sym_END,
    STATE(820), 1,
      sym_block_comment,
  [28148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
    STATE(821), 1,
      sym_block_comment,
  [28161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1825), 1,
      sym_name,
    STATE(822), 1,
      sym_block_comment,
  [28174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1827), 1,
      anon_sym_LT,
    STATE(823), 1,
      sym_block_comment,
  [28187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1829), 1,
      anon_sym_GT,
    STATE(824), 1,
      sym_block_comment,
  [28200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1831), 1,
      anon_sym_RPAREN,
    STATE(825), 1,
      sym_block_comment,
  [28213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      anon_sym_LT,
    STATE(826), 1,
      sym_block_comment,
  [28226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1835), 1,
      sym_digit,
    STATE(827), 1,
      sym_block_comment,
  [28239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(828), 1,
      sym_block_comment,
  [28252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1837), 1,
      anon_sym_LT,
    STATE(829), 1,
      sym_block_comment,
  [28265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      anon_sym_LT,
    STATE(830), 1,
      sym_block_comment,
  [28278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1841), 1,
      anon_sym_LT,
    STATE(831), 1,
      sym_block_comment,
  [28291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1843), 1,
      anon_sym_LT,
    STATE(832), 1,
      sym_block_comment,
  [28304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(833), 1,
      sym_block_comment,
  [28317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1845), 1,
      anon_sym_LT,
    STATE(834), 1,
      sym_block_comment,
  [28330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1847), 1,
      sym_name,
    STATE(835), 1,
      sym_block_comment,
  [28343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1849), 1,
      sym_name,
    STATE(836), 1,
      sym_block_comment,
  [28356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1851), 1,
      anon_sym_LPAREN,
    STATE(837), 1,
      sym_block_comment,
  [28369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      anon_sym_LT,
    STATE(838), 1,
      sym_block_comment,
  [28382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym_block_comment,
  [28395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1857), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym_block_comment,
  [28408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(841), 1,
      sym_block_comment,
  [28421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1859), 1,
      anon_sym_TUPLE,
    STATE(842), 1,
      sym_block_comment,
  [28434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1861), 1,
      anon_sym_SEMI,
    STATE(843), 1,
      sym_block_comment,
  [28447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      anon_sym_RPAREN,
    STATE(844), 1,
      sym_block_comment,
  [28460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1865), 1,
      anon_sym_RPAREN,
    STATE(845), 1,
      sym_block_comment,
  [28473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1867), 1,
      anon_sym_LBRACE,
    STATE(846), 1,
      sym_block_comment,
  [28486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      anon_sym_SEMI,
    STATE(847), 1,
      sym_block_comment,
  [28499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      anon_sym_FOR,
    STATE(848), 1,
      sym_block_comment,
  [28512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1871), 1,
      anon_sym_FOR,
    STATE(849), 1,
      sym_block_comment,
  [28525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1873), 1,
      sym_name,
    STATE(850), 1,
      sym_block_comment,
  [28538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1875), 1,
      sym_name,
    STATE(851), 1,
      sym_block_comment,
  [28551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1877), 1,
      sym_name,
    STATE(852), 1,
      sym_block_comment,
  [28564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1879), 1,
      sym_name,
    STATE(853), 1,
      sym_block_comment,
  [28577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1881), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      sym_block_comment,
  [28590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1883), 1,
      sym_name,
    STATE(855), 1,
      sym_block_comment,
  [28603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1885), 1,
      anon_sym_FILTER,
    STATE(856), 1,
      sym_block_comment,
  [28616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1887), 1,
      anon_sym_COMMA,
    STATE(857), 1,
      sym_block_comment,
  [28629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1889), 1,
      anon_sym_RPAREN,
    STATE(858), 1,
      sym_block_comment,
  [28642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1891), 1,
      sym_name,
    STATE(859), 1,
      sym_block_comment,
  [28655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1893), 1,
      sym_name,
    STATE(860), 1,
      sym_block_comment,
  [28668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1895), 1,
      anon_sym_LPAREN,
    STATE(861), 1,
      sym_block_comment,
  [28681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1897), 1,
      anon_sym_QUERY,
    STATE(862), 1,
      sym_block_comment,
  [28694] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1899), 1,
      sym_name,
    STATE(863), 1,
      sym_block_comment,
  [28707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1901), 1,
      anon_sym_REPLACE,
    STATE(864), 1,
      sym_block_comment,
  [28720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1903), 1,
      anon_sym_FILTER,
    STATE(865), 1,
      sym_block_comment,
  [28733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1905), 1,
      anon_sym_LPAREN,
    STATE(866), 1,
      sym_block_comment,
  [28746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1907), 1,
      sym_name,
    STATE(867), 1,
      sym_block_comment,
  [28759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1909), 1,
      anon_sym_GRAPH,
    STATE(868), 1,
      sym_block_comment,
  [28772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1911), 1,
      anon_sym_LPAREN,
    STATE(869), 1,
      sym_block_comment,
  [28785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1913), 1,
      anon_sym_LPAREN,
    STATE(870), 1,
      sym_block_comment,
  [28798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1915), 1,
      anon_sym_GRAPH,
    STATE(871), 1,
      sym_block_comment,
  [28811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1917), 1,
      ts_builtin_sym_end,
    STATE(872), 1,
      sym_block_comment,
  [28824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1919), 1,
      anon_sym_LPAREN,
    STATE(873), 1,
      sym_block_comment,
  [28837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1921), 1,
      anon_sym_LPAREN,
    STATE(874), 1,
      sym_block_comment,
  [28850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1923), 1,
      anon_sym_LPAREN,
    STATE(875), 1,
      sym_block_comment,
  [28863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1925), 1,
      anon_sym_LPAREN,
    STATE(876), 1,
      sym_block_comment,
  [28876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1927), 1,
      sym_name,
    STATE(877), 1,
      sym_block_comment,
  [28889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(878), 1,
      sym_block_comment,
  [28902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1929), 1,
      anon_sym_EQ,
    STATE(879), 1,
      sym_block_comment,
  [28915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1931), 1,
      anon_sym_LPAREN,
    STATE(880), 1,
      sym_block_comment,
  [28928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1933), 1,
      anon_sym_LPAREN,
    STATE(881), 1,
      sym_block_comment,
  [28941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1935), 1,
      sym_name,
    STATE(882), 1,
      sym_block_comment,
  [28954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1937), 1,
      sym_name,
    STATE(883), 1,
      sym_block_comment,
  [28967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1939), 1,
      anon_sym_QUERY,
    STATE(884), 1,
      sym_block_comment,
  [28980] = 1,
    ACTIONS(1941), 1,
      ts_builtin_sym_end,
  [28984] = 1,
    ACTIONS(1943), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 262,
  [SMALL_STATE(7)] = 391,
  [SMALL_STATE(8)] = 516,
  [SMALL_STATE(9)] = 641,
  [SMALL_STATE(10)] = 766,
  [SMALL_STATE(11)] = 891,
  [SMALL_STATE(12)] = 1016,
  [SMALL_STATE(13)] = 1141,
  [SMALL_STATE(14)] = 1266,
  [SMALL_STATE(15)] = 1391,
  [SMALL_STATE(16)] = 1516,
  [SMALL_STATE(17)] = 1641,
  [SMALL_STATE(18)] = 1766,
  [SMALL_STATE(19)] = 1891,
  [SMALL_STATE(20)] = 1952,
  [SMALL_STATE(21)] = 2017,
  [SMALL_STATE(22)] = 2081,
  [SMALL_STATE(23)] = 2141,
  [SMALL_STATE(24)] = 2203,
  [SMALL_STATE(25)] = 2265,
  [SMALL_STATE(26)] = 2329,
  [SMALL_STATE(27)] = 2389,
  [SMALL_STATE(28)] = 2449,
  [SMALL_STATE(29)] = 2509,
  [SMALL_STATE(30)] = 2569,
  [SMALL_STATE(31)] = 2628,
  [SMALL_STATE(32)] = 2685,
  [SMALL_STATE(33)] = 2742,
  [SMALL_STATE(34)] = 2799,
  [SMALL_STATE(35)] = 2856,
  [SMALL_STATE(36)] = 2914,
  [SMALL_STATE(37)] = 2970,
  [SMALL_STATE(38)] = 3026,
  [SMALL_STATE(39)] = 3082,
  [SMALL_STATE(40)] = 3141,
  [SMALL_STATE(41)] = 3200,
  [SMALL_STATE(42)] = 3257,
  [SMALL_STATE(43)] = 3314,
  [SMALL_STATE(44)] = 3373,
  [SMALL_STATE(45)] = 3429,
  [SMALL_STATE(46)] = 3485,
  [SMALL_STATE(47)] = 3541,
  [SMALL_STATE(48)] = 3595,
  [SMALL_STATE(49)] = 3651,
  [SMALL_STATE(50)] = 3705,
  [SMALL_STATE(51)] = 3759,
  [SMALL_STATE(52)] = 3812,
  [SMALL_STATE(53)] = 3865,
  [SMALL_STATE(54)] = 3918,
  [SMALL_STATE(55)] = 3971,
  [SMALL_STATE(56)] = 4024,
  [SMALL_STATE(57)] = 4077,
  [SMALL_STATE(58)] = 4130,
  [SMALL_STATE(59)] = 4183,
  [SMALL_STATE(60)] = 4236,
  [SMALL_STATE(61)] = 4289,
  [SMALL_STATE(62)] = 4342,
  [SMALL_STATE(63)] = 4395,
  [SMALL_STATE(64)] = 4448,
  [SMALL_STATE(65)] = 4501,
  [SMALL_STATE(66)] = 4554,
  [SMALL_STATE(67)] = 4607,
  [SMALL_STATE(68)] = 4660,
  [SMALL_STATE(69)] = 4713,
  [SMALL_STATE(70)] = 4766,
  [SMALL_STATE(71)] = 4822,
  [SMALL_STATE(72)] = 4927,
  [SMALL_STATE(73)] = 4985,
  [SMALL_STATE(74)] = 5035,
  [SMALL_STATE(75)] = 5085,
  [SMALL_STATE(76)] = 5135,
  [SMALL_STATE(77)] = 5194,
  [SMALL_STATE(78)] = 5243,
  [SMALL_STATE(79)] = 5292,
  [SMALL_STATE(80)] = 5366,
  [SMALL_STATE(81)] = 5440,
  [SMALL_STATE(82)] = 5514,
  [SMALL_STATE(83)] = 5588,
  [SMALL_STATE(84)] = 5662,
  [SMALL_STATE(85)] = 5736,
  [SMALL_STATE(86)] = 5810,
  [SMALL_STATE(87)] = 5884,
  [SMALL_STATE(88)] = 5958,
  [SMALL_STATE(89)] = 6032,
  [SMALL_STATE(90)] = 6106,
  [SMALL_STATE(91)] = 6180,
  [SMALL_STATE(92)] = 6277,
  [SMALL_STATE(93)] = 6348,
  [SMALL_STATE(94)] = 6445,
  [SMALL_STATE(95)] = 6537,
  [SMALL_STATE(96)] = 6629,
  [SMALL_STATE(97)] = 6723,
  [SMALL_STATE(98)] = 6817,
  [SMALL_STATE(99)] = 6909,
  [SMALL_STATE(100)] = 7003,
  [SMALL_STATE(101)] = 7097,
  [SMALL_STATE(102)] = 7163,
  [SMALL_STATE(103)] = 7257,
  [SMALL_STATE(104)] = 7349,
  [SMALL_STATE(105)] = 7441,
  [SMALL_STATE(106)] = 7535,
  [SMALL_STATE(107)] = 7629,
  [SMALL_STATE(108)] = 7721,
  [SMALL_STATE(109)] = 7815,
  [SMALL_STATE(110)] = 7907,
  [SMALL_STATE(111)] = 7999,
  [SMALL_STATE(112)] = 8093,
  [SMALL_STATE(113)] = 8187,
  [SMALL_STATE(114)] = 8281,
  [SMALL_STATE(115)] = 8373,
  [SMALL_STATE(116)] = 8465,
  [SMALL_STATE(117)] = 8559,
  [SMALL_STATE(118)] = 8651,
  [SMALL_STATE(119)] = 8743,
  [SMALL_STATE(120)] = 8835,
  [SMALL_STATE(121)] = 8929,
  [SMALL_STATE(122)] = 9023,
  [SMALL_STATE(123)] = 9115,
  [SMALL_STATE(124)] = 9207,
  [SMALL_STATE(125)] = 9299,
  [SMALL_STATE(126)] = 9391,
  [SMALL_STATE(127)] = 9485,
  [SMALL_STATE(128)] = 9579,
  [SMALL_STATE(129)] = 9673,
  [SMALL_STATE(130)] = 9765,
  [SMALL_STATE(131)] = 9857,
  [SMALL_STATE(132)] = 9951,
  [SMALL_STATE(133)] = 10043,
  [SMALL_STATE(134)] = 10135,
  [SMALL_STATE(135)] = 10229,
  [SMALL_STATE(136)] = 10321,
  [SMALL_STATE(137)] = 10410,
  [SMALL_STATE(138)] = 10499,
  [SMALL_STATE(139)] = 10588,
  [SMALL_STATE(140)] = 10677,
  [SMALL_STATE(141)] = 10766,
  [SMALL_STATE(142)] = 10817,
  [SMALL_STATE(143)] = 10870,
  [SMALL_STATE(144)] = 10959,
  [SMALL_STATE(145)] = 11048,
  [SMALL_STATE(146)] = 11137,
  [SMALL_STATE(147)] = 11184,
  [SMALL_STATE(148)] = 11235,
  [SMALL_STATE(149)] = 11324,
  [SMALL_STATE(150)] = 11413,
  [SMALL_STATE(151)] = 11461,
  [SMALL_STATE(152)] = 11547,
  [SMALL_STATE(153)] = 11633,
  [SMALL_STATE(154)] = 11719,
  [SMALL_STATE(155)] = 11805,
  [SMALL_STATE(156)] = 11891,
  [SMALL_STATE(157)] = 11977,
  [SMALL_STATE(158)] = 12047,
  [SMALL_STATE(159)] = 12133,
  [SMALL_STATE(160)] = 12219,
  [SMALL_STATE(161)] = 12305,
  [SMALL_STATE(162)] = 12375,
  [SMALL_STATE(163)] = 12461,
  [SMALL_STATE(164)] = 12547,
  [SMALL_STATE(165)] = 12633,
  [SMALL_STATE(166)] = 12719,
  [SMALL_STATE(167)] = 12805,
  [SMALL_STATE(168)] = 12891,
  [SMALL_STATE(169)] = 12977,
  [SMALL_STATE(170)] = 13063,
  [SMALL_STATE(171)] = 13149,
  [SMALL_STATE(172)] = 13235,
  [SMALL_STATE(173)] = 13321,
  [SMALL_STATE(174)] = 13407,
  [SMALL_STATE(175)] = 13453,
  [SMALL_STATE(176)] = 13539,
  [SMALL_STATE(177)] = 13625,
  [SMALL_STATE(178)] = 13693,
  [SMALL_STATE(179)] = 13741,
  [SMALL_STATE(180)] = 13827,
  [SMALL_STATE(181)] = 13873,
  [SMALL_STATE(182)] = 13959,
  [SMALL_STATE(183)] = 14045,
  [SMALL_STATE(184)] = 14095,
  [SMALL_STATE(185)] = 14141,
  [SMALL_STATE(186)] = 14187,
  [SMALL_STATE(187)] = 14273,
  [SMALL_STATE(188)] = 14323,
  [SMALL_STATE(189)] = 14409,
  [SMALL_STATE(190)] = 14495,
  [SMALL_STATE(191)] = 14581,
  [SMALL_STATE(192)] = 14627,
  [SMALL_STATE(193)] = 14673,
  [SMALL_STATE(194)] = 14716,
  [SMALL_STATE(195)] = 14759,
  [SMALL_STATE(196)] = 14804,
  [SMALL_STATE(197)] = 14849,
  [SMALL_STATE(198)] = 14892,
  [SMALL_STATE(199)] = 14935,
  [SMALL_STATE(200)] = 14978,
  [SMALL_STATE(201)] = 15043,
  [SMALL_STATE(202)] = 15090,
  [SMALL_STATE(203)] = 15132,
  [SMALL_STATE(204)] = 15176,
  [SMALL_STATE(205)] = 15246,
  [SMALL_STATE(206)] = 15290,
  [SMALL_STATE(207)] = 15332,
  [SMALL_STATE(208)] = 15374,
  [SMALL_STATE(209)] = 15444,
  [SMALL_STATE(210)] = 15489,
  [SMALL_STATE(211)] = 15532,
  [SMALL_STATE(212)] = 15577,
  [SMALL_STATE(213)] = 15622,
  [SMALL_STATE(214)] = 15665,
  [SMALL_STATE(215)] = 15707,
  [SMALL_STATE(216)] = 15747,
  [SMALL_STATE(217)] = 15789,
  [SMALL_STATE(218)] = 15831,
  [SMALL_STATE(219)] = 15873,
  [SMALL_STATE(220)] = 15913,
  [SMALL_STATE(221)] = 15953,
  [SMALL_STATE(222)] = 15995,
  [SMALL_STATE(223)] = 16041,
  [SMALL_STATE(224)] = 16082,
  [SMALL_STATE(225)] = 16121,
  [SMALL_STATE(226)] = 16160,
  [SMALL_STATE(227)] = 16199,
  [SMALL_STATE(228)] = 16238,
  [SMALL_STATE(229)] = 16277,
  [SMALL_STATE(230)] = 16316,
  [SMALL_STATE(231)] = 16355,
  [SMALL_STATE(232)] = 16394,
  [SMALL_STATE(233)] = 16433,
  [SMALL_STATE(234)] = 16472,
  [SMALL_STATE(235)] = 16511,
  [SMALL_STATE(236)] = 16550,
  [SMALL_STATE(237)] = 16589,
  [SMALL_STATE(238)] = 16628,
  [SMALL_STATE(239)] = 16667,
  [SMALL_STATE(240)] = 16706,
  [SMALL_STATE(241)] = 16745,
  [SMALL_STATE(242)] = 16784,
  [SMALL_STATE(243)] = 16823,
  [SMALL_STATE(244)] = 16861,
  [SMALL_STATE(245)] = 16899,
  [SMALL_STATE(246)] = 16937,
  [SMALL_STATE(247)] = 16980,
  [SMALL_STATE(248)] = 17023,
  [SMALL_STATE(249)] = 17055,
  [SMALL_STATE(250)] = 17099,
  [SMALL_STATE(251)] = 17131,
  [SMALL_STATE(252)] = 17175,
  [SMALL_STATE(253)] = 17216,
  [SMALL_STATE(254)] = 17251,
  [SMALL_STATE(255)] = 17286,
  [SMALL_STATE(256)] = 17321,
  [SMALL_STATE(257)] = 17356,
  [SMALL_STATE(258)] = 17399,
  [SMALL_STATE(259)] = 17434,
  [SMALL_STATE(260)] = 17469,
  [SMALL_STATE(261)] = 17512,
  [SMALL_STATE(262)] = 17558,
  [SMALL_STATE(263)] = 17596,
  [SMALL_STATE(264)] = 17634,
  [SMALL_STATE(265)] = 17665,
  [SMALL_STATE(266)] = 17698,
  [SMALL_STATE(267)] = 17741,
  [SMALL_STATE(268)] = 17774,
  [SMALL_STATE(269)] = 17817,
  [SMALL_STATE(270)] = 17848,
  [SMALL_STATE(271)] = 17891,
  [SMALL_STATE(272)] = 17925,
  [SMALL_STATE(273)] = 17959,
  [SMALL_STATE(274)] = 17995,
  [SMALL_STATE(275)] = 18029,
  [SMALL_STATE(276)] = 18063,
  [SMALL_STATE(277)] = 18097,
  [SMALL_STATE(278)] = 18135,
  [SMALL_STATE(279)] = 18163,
  [SMALL_STATE(280)] = 18191,
  [SMALL_STATE(281)] = 18229,
  [SMALL_STATE(282)] = 18257,
  [SMALL_STATE(283)] = 18307,
  [SMALL_STATE(284)] = 18355,
  [SMALL_STATE(285)] = 18385,
  [SMALL_STATE(286)] = 18413,
  [SMALL_STATE(287)] = 18444,
  [SMALL_STATE(288)] = 18475,
  [SMALL_STATE(289)] = 18506,
  [SMALL_STATE(290)] = 18537,
  [SMALL_STATE(291)] = 18564,
  [SMALL_STATE(292)] = 18597,
  [SMALL_STATE(293)] = 18632,
  [SMALL_STATE(294)] = 18659,
  [SMALL_STATE(295)] = 18686,
  [SMALL_STATE(296)] = 18717,
  [SMALL_STATE(297)] = 18748,
  [SMALL_STATE(298)] = 18779,
  [SMALL_STATE(299)] = 18812,
  [SMALL_STATE(300)] = 18841,
  [SMALL_STATE(301)] = 18871,
  [SMALL_STATE(302)] = 18915,
  [SMALL_STATE(303)] = 18959,
  [SMALL_STATE(304)] = 18991,
  [SMALL_STATE(305)] = 19019,
  [SMALL_STATE(306)] = 19063,
  [SMALL_STATE(307)] = 19087,
  [SMALL_STATE(308)] = 19131,
  [SMALL_STATE(309)] = 19160,
  [SMALL_STATE(310)] = 19189,
  [SMALL_STATE(311)] = 19218,
  [SMALL_STATE(312)] = 19259,
  [SMALL_STATE(313)] = 19288,
  [SMALL_STATE(314)] = 19317,
  [SMALL_STATE(315)] = 19346,
  [SMALL_STATE(316)] = 19375,
  [SMALL_STATE(317)] = 19404,
  [SMALL_STATE(318)] = 19426,
  [SMALL_STATE(319)] = 19448,
  [SMALL_STATE(320)] = 19486,
  [SMALL_STATE(321)] = 19508,
  [SMALL_STATE(322)] = 19546,
  [SMALL_STATE(323)] = 19584,
  [SMALL_STATE(324)] = 19606,
  [SMALL_STATE(325)] = 19644,
  [SMALL_STATE(326)] = 19682,
  [SMALL_STATE(327)] = 19710,
  [SMALL_STATE(328)] = 19750,
  [SMALL_STATE(329)] = 19788,
  [SMALL_STATE(330)] = 19810,
  [SMALL_STATE(331)] = 19845,
  [SMALL_STATE(332)] = 19872,
  [SMALL_STATE(333)] = 19895,
  [SMALL_STATE(334)] = 19920,
  [SMALL_STATE(335)] = 19940,
  [SMALL_STATE(336)] = 19962,
  [SMALL_STATE(337)] = 19984,
  [SMALL_STATE(338)] = 20004,
  [SMALL_STATE(339)] = 20028,
  [SMALL_STATE(340)] = 20050,
  [SMALL_STATE(341)] = 20070,
  [SMALL_STATE(342)] = 20090,
  [SMALL_STATE(343)] = 20110,
  [SMALL_STATE(344)] = 20132,
  [SMALL_STATE(345)] = 20152,
  [SMALL_STATE(346)] = 20186,
  [SMALL_STATE(347)] = 20208,
  [SMALL_STATE(348)] = 20232,
  [SMALL_STATE(349)] = 20256,
  [SMALL_STATE(350)] = 20280,
  [SMALL_STATE(351)] = 20309,
  [SMALL_STATE(352)] = 20328,
  [SMALL_STATE(353)] = 20347,
  [SMALL_STATE(354)] = 20378,
  [SMALL_STATE(355)] = 20397,
  [SMALL_STATE(356)] = 20426,
  [SMALL_STATE(357)] = 20445,
  [SMALL_STATE(358)] = 20464,
  [SMALL_STATE(359)] = 20495,
  [SMALL_STATE(360)] = 20514,
  [SMALL_STATE(361)] = 20543,
  [SMALL_STATE(362)] = 20566,
  [SMALL_STATE(363)] = 20595,
  [SMALL_STATE(364)] = 20622,
  [SMALL_STATE(365)] = 20645,
  [SMALL_STATE(366)] = 20668,
  [SMALL_STATE(367)] = 20699,
  [SMALL_STATE(368)] = 20718,
  [SMALL_STATE(369)] = 20747,
  [SMALL_STATE(370)] = 20766,
  [SMALL_STATE(371)] = 20785,
  [SMALL_STATE(372)] = 20804,
  [SMALL_STATE(373)] = 20823,
  [SMALL_STATE(374)] = 20842,
  [SMALL_STATE(375)] = 20861,
  [SMALL_STATE(376)] = 20880,
  [SMALL_STATE(377)] = 20901,
  [SMALL_STATE(378)] = 20922,
  [SMALL_STATE(379)] = 20941,
  [SMALL_STATE(380)] = 20961,
  [SMALL_STATE(381)] = 20989,
  [SMALL_STATE(382)] = 21017,
  [SMALL_STATE(383)] = 21045,
  [SMALL_STATE(384)] = 21073,
  [SMALL_STATE(385)] = 21099,
  [SMALL_STATE(386)] = 21117,
  [SMALL_STATE(387)] = 21145,
  [SMALL_STATE(388)] = 21173,
  [SMALL_STATE(389)] = 21201,
  [SMALL_STATE(390)] = 21229,
  [SMALL_STATE(391)] = 21257,
  [SMALL_STATE(392)] = 21285,
  [SMALL_STATE(393)] = 21305,
  [SMALL_STATE(394)] = 21333,
  [SMALL_STATE(395)] = 21361,
  [SMALL_STATE(396)] = 21379,
  [SMALL_STATE(397)] = 21407,
  [SMALL_STATE(398)] = 21435,
  [SMALL_STATE(399)] = 21463,
  [SMALL_STATE(400)] = 21481,
  [SMALL_STATE(401)] = 21509,
  [SMALL_STATE(402)] = 21535,
  [SMALL_STATE(403)] = 21557,
  [SMALL_STATE(404)] = 21578,
  [SMALL_STATE(405)] = 21603,
  [SMALL_STATE(406)] = 21620,
  [SMALL_STATE(407)] = 21645,
  [SMALL_STATE(408)] = 21664,
  [SMALL_STATE(409)] = 21681,
  [SMALL_STATE(410)] = 21700,
  [SMALL_STATE(411)] = 21719,
  [SMALL_STATE(412)] = 21744,
  [SMALL_STATE(413)] = 21769,
  [SMALL_STATE(414)] = 21794,
  [SMALL_STATE(415)] = 21811,
  [SMALL_STATE(416)] = 21836,
  [SMALL_STATE(417)] = 21861,
  [SMALL_STATE(418)] = 21882,
  [SMALL_STATE(419)] = 21899,
  [SMALL_STATE(420)] = 21920,
  [SMALL_STATE(421)] = 21937,
  [SMALL_STATE(422)] = 21954,
  [SMALL_STATE(423)] = 21971,
  [SMALL_STATE(424)] = 21988,
  [SMALL_STATE(425)] = 22005,
  [SMALL_STATE(426)] = 22030,
  [SMALL_STATE(427)] = 22047,
  [SMALL_STATE(428)] = 22066,
  [SMALL_STATE(429)] = 22085,
  [SMALL_STATE(430)] = 22108,
  [SMALL_STATE(431)] = 22129,
  [SMALL_STATE(432)] = 22151,
  [SMALL_STATE(433)] = 22167,
  [SMALL_STATE(434)] = 22185,
  [SMALL_STATE(435)] = 22207,
  [SMALL_STATE(436)] = 22227,
  [SMALL_STATE(437)] = 22247,
  [SMALL_STATE(438)] = 22265,
  [SMALL_STATE(439)] = 22283,
  [SMALL_STATE(440)] = 22303,
  [SMALL_STATE(441)] = 22321,
  [SMALL_STATE(442)] = 22341,
  [SMALL_STATE(443)] = 22359,
  [SMALL_STATE(444)] = 22381,
  [SMALL_STATE(445)] = 22397,
  [SMALL_STATE(446)] = 22419,
  [SMALL_STATE(447)] = 22439,
  [SMALL_STATE(448)] = 22457,
  [SMALL_STATE(449)] = 22479,
  [SMALL_STATE(450)] = 22501,
  [SMALL_STATE(451)] = 22519,
  [SMALL_STATE(452)] = 22535,
  [SMALL_STATE(453)] = 22557,
  [SMALL_STATE(454)] = 22575,
  [SMALL_STATE(455)] = 22593,
  [SMALL_STATE(456)] = 22611,
  [SMALL_STATE(457)] = 22633,
  [SMALL_STATE(458)] = 22655,
  [SMALL_STATE(459)] = 22673,
  [SMALL_STATE(460)] = 22689,
  [SMALL_STATE(461)] = 22707,
  [SMALL_STATE(462)] = 22725,
  [SMALL_STATE(463)] = 22743,
  [SMALL_STATE(464)] = 22765,
  [SMALL_STATE(465)] = 22785,
  [SMALL_STATE(466)] = 22807,
  [SMALL_STATE(467)] = 22827,
  [SMALL_STATE(468)] = 22849,
  [SMALL_STATE(469)] = 22867,
  [SMALL_STATE(470)] = 22885,
  [SMALL_STATE(471)] = 22903,
  [SMALL_STATE(472)] = 22923,
  [SMALL_STATE(473)] = 22941,
  [SMALL_STATE(474)] = 22959,
  [SMALL_STATE(475)] = 22979,
  [SMALL_STATE(476)] = 22997,
  [SMALL_STATE(477)] = 23013,
  [SMALL_STATE(478)] = 23029,
  [SMALL_STATE(479)] = 23049,
  [SMALL_STATE(480)] = 23067,
  [SMALL_STATE(481)] = 23083,
  [SMALL_STATE(482)] = 23101,
  [SMALL_STATE(483)] = 23119,
  [SMALL_STATE(484)] = 23136,
  [SMALL_STATE(485)] = 23153,
  [SMALL_STATE(486)] = 23170,
  [SMALL_STATE(487)] = 23189,
  [SMALL_STATE(488)] = 23208,
  [SMALL_STATE(489)] = 23227,
  [SMALL_STATE(490)] = 23242,
  [SMALL_STATE(491)] = 23261,
  [SMALL_STATE(492)] = 23280,
  [SMALL_STATE(493)] = 23295,
  [SMALL_STATE(494)] = 23310,
  [SMALL_STATE(495)] = 23327,
  [SMALL_STATE(496)] = 23344,
  [SMALL_STATE(497)] = 23359,
  [SMALL_STATE(498)] = 23374,
  [SMALL_STATE(499)] = 23393,
  [SMALL_STATE(500)] = 23412,
  [SMALL_STATE(501)] = 23431,
  [SMALL_STATE(502)] = 23450,
  [SMALL_STATE(503)] = 23467,
  [SMALL_STATE(504)] = 23486,
  [SMALL_STATE(505)] = 23505,
  [SMALL_STATE(506)] = 23520,
  [SMALL_STATE(507)] = 23535,
  [SMALL_STATE(508)] = 23554,
  [SMALL_STATE(509)] = 23573,
  [SMALL_STATE(510)] = 23592,
  [SMALL_STATE(511)] = 23609,
  [SMALL_STATE(512)] = 23624,
  [SMALL_STATE(513)] = 23643,
  [SMALL_STATE(514)] = 23662,
  [SMALL_STATE(515)] = 23681,
  [SMALL_STATE(516)] = 23696,
  [SMALL_STATE(517)] = 23715,
  [SMALL_STATE(518)] = 23734,
  [SMALL_STATE(519)] = 23751,
  [SMALL_STATE(520)] = 23770,
  [SMALL_STATE(521)] = 23787,
  [SMALL_STATE(522)] = 23804,
  [SMALL_STATE(523)] = 23823,
  [SMALL_STATE(524)] = 23842,
  [SMALL_STATE(525)] = 23861,
  [SMALL_STATE(526)] = 23880,
  [SMALL_STATE(527)] = 23897,
  [SMALL_STATE(528)] = 23914,
  [SMALL_STATE(529)] = 23929,
  [SMALL_STATE(530)] = 23944,
  [SMALL_STATE(531)] = 23963,
  [SMALL_STATE(532)] = 23978,
  [SMALL_STATE(533)] = 23997,
  [SMALL_STATE(534)] = 24014,
  [SMALL_STATE(535)] = 24033,
  [SMALL_STATE(536)] = 24052,
  [SMALL_STATE(537)] = 24069,
  [SMALL_STATE(538)] = 24086,
  [SMALL_STATE(539)] = 24105,
  [SMALL_STATE(540)] = 24120,
  [SMALL_STATE(541)] = 24135,
  [SMALL_STATE(542)] = 24152,
  [SMALL_STATE(543)] = 24169,
  [SMALL_STATE(544)] = 24186,
  [SMALL_STATE(545)] = 24203,
  [SMALL_STATE(546)] = 24220,
  [SMALL_STATE(547)] = 24239,
  [SMALL_STATE(548)] = 24256,
  [SMALL_STATE(549)] = 24273,
  [SMALL_STATE(550)] = 24290,
  [SMALL_STATE(551)] = 24307,
  [SMALL_STATE(552)] = 24326,
  [SMALL_STATE(553)] = 24343,
  [SMALL_STATE(554)] = 24362,
  [SMALL_STATE(555)] = 24377,
  [SMALL_STATE(556)] = 24396,
  [SMALL_STATE(557)] = 24413,
  [SMALL_STATE(558)] = 24432,
  [SMALL_STATE(559)] = 24451,
  [SMALL_STATE(560)] = 24468,
  [SMALL_STATE(561)] = 24487,
  [SMALL_STATE(562)] = 24506,
  [SMALL_STATE(563)] = 24523,
  [SMALL_STATE(564)] = 24542,
  [SMALL_STATE(565)] = 24561,
  [SMALL_STATE(566)] = 24580,
  [SMALL_STATE(567)] = 24599,
  [SMALL_STATE(568)] = 24614,
  [SMALL_STATE(569)] = 24633,
  [SMALL_STATE(570)] = 24648,
  [SMALL_STATE(571)] = 24665,
  [SMALL_STATE(572)] = 24684,
  [SMALL_STATE(573)] = 24699,
  [SMALL_STATE(574)] = 24718,
  [SMALL_STATE(575)] = 24733,
  [SMALL_STATE(576)] = 24750,
  [SMALL_STATE(577)] = 24769,
  [SMALL_STATE(578)] = 24788,
  [SMALL_STATE(579)] = 24807,
  [SMALL_STATE(580)] = 24826,
  [SMALL_STATE(581)] = 24845,
  [SMALL_STATE(582)] = 24860,
  [SMALL_STATE(583)] = 24877,
  [SMALL_STATE(584)] = 24892,
  [SMALL_STATE(585)] = 24909,
  [SMALL_STATE(586)] = 24928,
  [SMALL_STATE(587)] = 24947,
  [SMALL_STATE(588)] = 24964,
  [SMALL_STATE(589)] = 24983,
  [SMALL_STATE(590)] = 25002,
  [SMALL_STATE(591)] = 25021,
  [SMALL_STATE(592)] = 25037,
  [SMALL_STATE(593)] = 25053,
  [SMALL_STATE(594)] = 25069,
  [SMALL_STATE(595)] = 25085,
  [SMALL_STATE(596)] = 25101,
  [SMALL_STATE(597)] = 25117,
  [SMALL_STATE(598)] = 25133,
  [SMALL_STATE(599)] = 25147,
  [SMALL_STATE(600)] = 25163,
  [SMALL_STATE(601)] = 25179,
  [SMALL_STATE(602)] = 25195,
  [SMALL_STATE(603)] = 25211,
  [SMALL_STATE(604)] = 25227,
  [SMALL_STATE(605)] = 25243,
  [SMALL_STATE(606)] = 25259,
  [SMALL_STATE(607)] = 25275,
  [SMALL_STATE(608)] = 25291,
  [SMALL_STATE(609)] = 25305,
  [SMALL_STATE(610)] = 25319,
  [SMALL_STATE(611)] = 25333,
  [SMALL_STATE(612)] = 25349,
  [SMALL_STATE(613)] = 25363,
  [SMALL_STATE(614)] = 25379,
  [SMALL_STATE(615)] = 25393,
  [SMALL_STATE(616)] = 25409,
  [SMALL_STATE(617)] = 25423,
  [SMALL_STATE(618)] = 25437,
  [SMALL_STATE(619)] = 25453,
  [SMALL_STATE(620)] = 25467,
  [SMALL_STATE(621)] = 25483,
  [SMALL_STATE(622)] = 25499,
  [SMALL_STATE(623)] = 25515,
  [SMALL_STATE(624)] = 25531,
  [SMALL_STATE(625)] = 25545,
  [SMALL_STATE(626)] = 25561,
  [SMALL_STATE(627)] = 25575,
  [SMALL_STATE(628)] = 25591,
  [SMALL_STATE(629)] = 25605,
  [SMALL_STATE(630)] = 25619,
  [SMALL_STATE(631)] = 25633,
  [SMALL_STATE(632)] = 25649,
  [SMALL_STATE(633)] = 25665,
  [SMALL_STATE(634)] = 25679,
  [SMALL_STATE(635)] = 25693,
  [SMALL_STATE(636)] = 25707,
  [SMALL_STATE(637)] = 25721,
  [SMALL_STATE(638)] = 25737,
  [SMALL_STATE(639)] = 25751,
  [SMALL_STATE(640)] = 25767,
  [SMALL_STATE(641)] = 25781,
  [SMALL_STATE(642)] = 25795,
  [SMALL_STATE(643)] = 25809,
  [SMALL_STATE(644)] = 25825,
  [SMALL_STATE(645)] = 25839,
  [SMALL_STATE(646)] = 25855,
  [SMALL_STATE(647)] = 25869,
  [SMALL_STATE(648)] = 25885,
  [SMALL_STATE(649)] = 25901,
  [SMALL_STATE(650)] = 25915,
  [SMALL_STATE(651)] = 25931,
  [SMALL_STATE(652)] = 25945,
  [SMALL_STATE(653)] = 25959,
  [SMALL_STATE(654)] = 25973,
  [SMALL_STATE(655)] = 25989,
  [SMALL_STATE(656)] = 26003,
  [SMALL_STATE(657)] = 26016,
  [SMALL_STATE(658)] = 26029,
  [SMALL_STATE(659)] = 26042,
  [SMALL_STATE(660)] = 26055,
  [SMALL_STATE(661)] = 26068,
  [SMALL_STATE(662)] = 26081,
  [SMALL_STATE(663)] = 26094,
  [SMALL_STATE(664)] = 26107,
  [SMALL_STATE(665)] = 26120,
  [SMALL_STATE(666)] = 26133,
  [SMALL_STATE(667)] = 26146,
  [SMALL_STATE(668)] = 26159,
  [SMALL_STATE(669)] = 26172,
  [SMALL_STATE(670)] = 26185,
  [SMALL_STATE(671)] = 26198,
  [SMALL_STATE(672)] = 26211,
  [SMALL_STATE(673)] = 26224,
  [SMALL_STATE(674)] = 26237,
  [SMALL_STATE(675)] = 26250,
  [SMALL_STATE(676)] = 26263,
  [SMALL_STATE(677)] = 26276,
  [SMALL_STATE(678)] = 26289,
  [SMALL_STATE(679)] = 26302,
  [SMALL_STATE(680)] = 26315,
  [SMALL_STATE(681)] = 26328,
  [SMALL_STATE(682)] = 26341,
  [SMALL_STATE(683)] = 26354,
  [SMALL_STATE(684)] = 26367,
  [SMALL_STATE(685)] = 26380,
  [SMALL_STATE(686)] = 26393,
  [SMALL_STATE(687)] = 26406,
  [SMALL_STATE(688)] = 26419,
  [SMALL_STATE(689)] = 26432,
  [SMALL_STATE(690)] = 26445,
  [SMALL_STATE(691)] = 26458,
  [SMALL_STATE(692)] = 26471,
  [SMALL_STATE(693)] = 26484,
  [SMALL_STATE(694)] = 26497,
  [SMALL_STATE(695)] = 26510,
  [SMALL_STATE(696)] = 26523,
  [SMALL_STATE(697)] = 26536,
  [SMALL_STATE(698)] = 26549,
  [SMALL_STATE(699)] = 26562,
  [SMALL_STATE(700)] = 26575,
  [SMALL_STATE(701)] = 26588,
  [SMALL_STATE(702)] = 26601,
  [SMALL_STATE(703)] = 26614,
  [SMALL_STATE(704)] = 26627,
  [SMALL_STATE(705)] = 26640,
  [SMALL_STATE(706)] = 26653,
  [SMALL_STATE(707)] = 26666,
  [SMALL_STATE(708)] = 26679,
  [SMALL_STATE(709)] = 26692,
  [SMALL_STATE(710)] = 26705,
  [SMALL_STATE(711)] = 26718,
  [SMALL_STATE(712)] = 26731,
  [SMALL_STATE(713)] = 26744,
  [SMALL_STATE(714)] = 26757,
  [SMALL_STATE(715)] = 26770,
  [SMALL_STATE(716)] = 26783,
  [SMALL_STATE(717)] = 26796,
  [SMALL_STATE(718)] = 26809,
  [SMALL_STATE(719)] = 26822,
  [SMALL_STATE(720)] = 26835,
  [SMALL_STATE(721)] = 26848,
  [SMALL_STATE(722)] = 26861,
  [SMALL_STATE(723)] = 26874,
  [SMALL_STATE(724)] = 26887,
  [SMALL_STATE(725)] = 26900,
  [SMALL_STATE(726)] = 26913,
  [SMALL_STATE(727)] = 26926,
  [SMALL_STATE(728)] = 26939,
  [SMALL_STATE(729)] = 26952,
  [SMALL_STATE(730)] = 26965,
  [SMALL_STATE(731)] = 26978,
  [SMALL_STATE(732)] = 26991,
  [SMALL_STATE(733)] = 27004,
  [SMALL_STATE(734)] = 27017,
  [SMALL_STATE(735)] = 27030,
  [SMALL_STATE(736)] = 27043,
  [SMALL_STATE(737)] = 27056,
  [SMALL_STATE(738)] = 27069,
  [SMALL_STATE(739)] = 27082,
  [SMALL_STATE(740)] = 27095,
  [SMALL_STATE(741)] = 27108,
  [SMALL_STATE(742)] = 27121,
  [SMALL_STATE(743)] = 27134,
  [SMALL_STATE(744)] = 27147,
  [SMALL_STATE(745)] = 27160,
  [SMALL_STATE(746)] = 27173,
  [SMALL_STATE(747)] = 27186,
  [SMALL_STATE(748)] = 27199,
  [SMALL_STATE(749)] = 27212,
  [SMALL_STATE(750)] = 27225,
  [SMALL_STATE(751)] = 27238,
  [SMALL_STATE(752)] = 27251,
  [SMALL_STATE(753)] = 27264,
  [SMALL_STATE(754)] = 27277,
  [SMALL_STATE(755)] = 27290,
  [SMALL_STATE(756)] = 27303,
  [SMALL_STATE(757)] = 27316,
  [SMALL_STATE(758)] = 27329,
  [SMALL_STATE(759)] = 27342,
  [SMALL_STATE(760)] = 27355,
  [SMALL_STATE(761)] = 27368,
  [SMALL_STATE(762)] = 27381,
  [SMALL_STATE(763)] = 27394,
  [SMALL_STATE(764)] = 27407,
  [SMALL_STATE(765)] = 27420,
  [SMALL_STATE(766)] = 27433,
  [SMALL_STATE(767)] = 27446,
  [SMALL_STATE(768)] = 27459,
  [SMALL_STATE(769)] = 27472,
  [SMALL_STATE(770)] = 27485,
  [SMALL_STATE(771)] = 27498,
  [SMALL_STATE(772)] = 27511,
  [SMALL_STATE(773)] = 27524,
  [SMALL_STATE(774)] = 27537,
  [SMALL_STATE(775)] = 27550,
  [SMALL_STATE(776)] = 27563,
  [SMALL_STATE(777)] = 27576,
  [SMALL_STATE(778)] = 27589,
  [SMALL_STATE(779)] = 27602,
  [SMALL_STATE(780)] = 27615,
  [SMALL_STATE(781)] = 27628,
  [SMALL_STATE(782)] = 27641,
  [SMALL_STATE(783)] = 27654,
  [SMALL_STATE(784)] = 27667,
  [SMALL_STATE(785)] = 27680,
  [SMALL_STATE(786)] = 27693,
  [SMALL_STATE(787)] = 27706,
  [SMALL_STATE(788)] = 27719,
  [SMALL_STATE(789)] = 27732,
  [SMALL_STATE(790)] = 27745,
  [SMALL_STATE(791)] = 27758,
  [SMALL_STATE(792)] = 27771,
  [SMALL_STATE(793)] = 27784,
  [SMALL_STATE(794)] = 27797,
  [SMALL_STATE(795)] = 27810,
  [SMALL_STATE(796)] = 27823,
  [SMALL_STATE(797)] = 27836,
  [SMALL_STATE(798)] = 27849,
  [SMALL_STATE(799)] = 27862,
  [SMALL_STATE(800)] = 27875,
  [SMALL_STATE(801)] = 27888,
  [SMALL_STATE(802)] = 27901,
  [SMALL_STATE(803)] = 27914,
  [SMALL_STATE(804)] = 27927,
  [SMALL_STATE(805)] = 27940,
  [SMALL_STATE(806)] = 27953,
  [SMALL_STATE(807)] = 27966,
  [SMALL_STATE(808)] = 27979,
  [SMALL_STATE(809)] = 27992,
  [SMALL_STATE(810)] = 28005,
  [SMALL_STATE(811)] = 28018,
  [SMALL_STATE(812)] = 28031,
  [SMALL_STATE(813)] = 28044,
  [SMALL_STATE(814)] = 28057,
  [SMALL_STATE(815)] = 28070,
  [SMALL_STATE(816)] = 28083,
  [SMALL_STATE(817)] = 28096,
  [SMALL_STATE(818)] = 28109,
  [SMALL_STATE(819)] = 28122,
  [SMALL_STATE(820)] = 28135,
  [SMALL_STATE(821)] = 28148,
  [SMALL_STATE(822)] = 28161,
  [SMALL_STATE(823)] = 28174,
  [SMALL_STATE(824)] = 28187,
  [SMALL_STATE(825)] = 28200,
  [SMALL_STATE(826)] = 28213,
  [SMALL_STATE(827)] = 28226,
  [SMALL_STATE(828)] = 28239,
  [SMALL_STATE(829)] = 28252,
  [SMALL_STATE(830)] = 28265,
  [SMALL_STATE(831)] = 28278,
  [SMALL_STATE(832)] = 28291,
  [SMALL_STATE(833)] = 28304,
  [SMALL_STATE(834)] = 28317,
  [SMALL_STATE(835)] = 28330,
  [SMALL_STATE(836)] = 28343,
  [SMALL_STATE(837)] = 28356,
  [SMALL_STATE(838)] = 28369,
  [SMALL_STATE(839)] = 28382,
  [SMALL_STATE(840)] = 28395,
  [SMALL_STATE(841)] = 28408,
  [SMALL_STATE(842)] = 28421,
  [SMALL_STATE(843)] = 28434,
  [SMALL_STATE(844)] = 28447,
  [SMALL_STATE(845)] = 28460,
  [SMALL_STATE(846)] = 28473,
  [SMALL_STATE(847)] = 28486,
  [SMALL_STATE(848)] = 28499,
  [SMALL_STATE(849)] = 28512,
  [SMALL_STATE(850)] = 28525,
  [SMALL_STATE(851)] = 28538,
  [SMALL_STATE(852)] = 28551,
  [SMALL_STATE(853)] = 28564,
  [SMALL_STATE(854)] = 28577,
  [SMALL_STATE(855)] = 28590,
  [SMALL_STATE(856)] = 28603,
  [SMALL_STATE(857)] = 28616,
  [SMALL_STATE(858)] = 28629,
  [SMALL_STATE(859)] = 28642,
  [SMALL_STATE(860)] = 28655,
  [SMALL_STATE(861)] = 28668,
  [SMALL_STATE(862)] = 28681,
  [SMALL_STATE(863)] = 28694,
  [SMALL_STATE(864)] = 28707,
  [SMALL_STATE(865)] = 28720,
  [SMALL_STATE(866)] = 28733,
  [SMALL_STATE(867)] = 28746,
  [SMALL_STATE(868)] = 28759,
  [SMALL_STATE(869)] = 28772,
  [SMALL_STATE(870)] = 28785,
  [SMALL_STATE(871)] = 28798,
  [SMALL_STATE(872)] = 28811,
  [SMALL_STATE(873)] = 28824,
  [SMALL_STATE(874)] = 28837,
  [SMALL_STATE(875)] = 28850,
  [SMALL_STATE(876)] = 28863,
  [SMALL_STATE(877)] = 28876,
  [SMALL_STATE(878)] = 28889,
  [SMALL_STATE(879)] = 28902,
  [SMALL_STATE(880)] = 28915,
  [SMALL_STATE(881)] = 28928,
  [SMALL_STATE(882)] = 28941,
  [SMALL_STATE(883)] = 28954,
  [SMALL_STATE(884)] = 28967,
  [SMALL_STATE(885)] = 28980,
  [SMALL_STATE(886)] = 28984,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(131),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(129),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(128),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(360),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(838),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(497),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(834),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(472),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(832),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(831),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(830),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(829),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(826),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(823),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(822),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(817),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(107),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(468),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(413),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(877),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(687),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(770),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(50),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(842),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(836),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(883),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(215),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(882),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(497),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(468),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(304),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(276),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(760),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(92),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(784),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(516),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(884),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(580),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(696),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(330),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(118),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(89),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(266),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(159),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(105),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(106),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(171),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(492),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(886),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(297),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(723),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(771),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(137),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(384),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(449),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(704),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(262),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(680),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(616),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(617),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(710),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(448),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(261),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(471),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(271),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_param, 4),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_stmt, 1),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1917] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gsql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
