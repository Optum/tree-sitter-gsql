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
#define STATE_COUNT 876
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 256
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
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
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_TYPEDEF = 18,
  anon_sym_TUPLE = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_SEMI = 22,
  anon_sym_DOT = 23,
  anon_sym__ = 24,
  anon_sym_ANY = 25,
  anon_sym_DOT_STAR = 26,
  anon_sym_UNION = 27,
  anon_sym_INTERSECT = 28,
  anon_sym_MINUS = 29,
  anon_sym_PLUS_EQ = 30,
  anon_sym_SELECT = 31,
  anon_sym_FROM = 32,
  anon_sym_WHERE = 33,
  anon_sym_ACCUM = 34,
  anon_sym_IF = 35,
  anon_sym_THEN = 36,
  anon_sym_ELSE = 37,
  anon_sym_END = 38,
  anon_sym_CASE = 39,
  anon_sym_WHEN = 40,
  anon_sym_WHILE = 41,
  anon_sym_LIMIT = 42,
  anon_sym_DO = 43,
  anon_sym_FOREACH = 44,
  anon_sym_IN = 45,
  anon_sym_COLON = 46,
  anon_sym_RANGE = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_STEP = 50,
  anon_sym_post_DASHaccum = 51,
  anon_sym_OFFSET = 52,
  anon_sym_DASH = 53,
  anon_sym_PIPE = 54,
  anon_sym_PIPE2 = 55,
  anon_sym_STAR = 56,
  anon_sym_all = 57,
  anon_sym_SUMACCUM = 58,
  anon_sym_INT = 59,
  anon_sym_FLOAT = 60,
  anon_sym_DOUBLE = 61,
  anon_sym_STRING = 62,
  anon_sym_MAXACCUM = 63,
  anon_sym_MINACCUM = 64,
  anon_sym_AVGACCUM = 65,
  anon_sym_ORACCUM = 66,
  anon_sym_ANDACCUM = 67,
  anon_sym_BITWISEORACCUM = 68,
  anon_sym_BITWISEANDACCUM = 69,
  anon_sym_LISTACCUM = 70,
  anon_sym_SETACCUM = 71,
  anon_sym_BAGACCUM = 72,
  anon_sym_MAPACCUM = 73,
  anon_sym_HEAPACCUM = 74,
  anon_sym_ASC = 75,
  anon_sym_DESC = 76,
  anon_sym_GROUPBYACCUM = 77,
  anon_sym_ARRAYACCUM = 78,
  anon_sym_AT_AT = 79,
  anon_sym_AT = 80,
  anon_sym_FILTER = 81,
  anon_sym_COALESCE = 82,
  anon_sym_DISTINCT = 83,
  anon_sym_ISEMPTY = 84,
  anon_sym_DASH_GT = 85,
  anon_sym_NOT = 86,
  anon_sym_IS = 87,
  anon_sym_NULL = 88,
  anon_sym_BETWEEN = 89,
  anon_sym_AND = 90,
  anon_sym_TRUE = 91,
  anon_sym_FALSE = 92,
  anon_sym_LIKE = 93,
  anon_sym_COUNT = 94,
  anon_sym_MAX = 95,
  anon_sym_MIN = 96,
  anon_sym_AVG = 97,
  anon_sym_SUM = 98,
  anon_sym_PRINT = 99,
  anon_sym_to_csv = 100,
  anon_sym_AS = 101,
  anon_sym_BOOL = 102,
  anon_sym_UINT = 103,
  anon_sym_VERTEX = 104,
  anon_sym_EDGE = 105,
  anon_sym_JSONOBJECT = 106,
  anon_sym_JSONARRAY = 107,
  anon_sym_DATETIME = 108,
  sym_name = 109,
  anon_sym_gsql_uint_max = 110,
  anon_sym_gsql_int_max = 111,
  anon_sym_gsql_uint_min = 112,
  sym_digit = 113,
  anon_sym_DQUOTE = 114,
  aux_sym_string_literal_token1 = 115,
  anon_sym_SQUOTE = 116,
  aux_sym_string_literal_token2 = 117,
  anon_sym_SLASH = 118,
  anon_sym_PERCENT = 119,
  anon_sym_PLUS = 120,
  anon_sym_LT_LT = 121,
  anon_sym_GT_GT = 122,
  anon_sym_AMP = 123,
  anon_sym_LT_EQ = 124,
  anon_sym_GT_EQ = 125,
  anon_sym_EQ_EQ = 126,
  anon_sym_BANG_EQ = 127,
  sym_newline = 128,
  sym_line_comment = 129,
  sym_block_comment = 130,
  sym_gsql = 131,
  sym__definition = 132,
  sym_create_query = 133,
  sym_interpret_query = 134,
  sym_parameter_list = 135,
  sym_query_params = 136,
  sym_query_param = 137,
  sym_query_body = 138,
  sym_typedef = 139,
  sym_tuple_fields = 140,
  sym_tuple_field = 141,
  sym_query_body_stmts = 142,
  sym_query_body_stmt = 143,
  sym_assign_stmt = 144,
  sym_v_set_var_decl_stmt = 145,
  sym_seed_set = 146,
  sym_seed = 147,
  sym_simple_set = 148,
  sym_l_accum_assign_stmt = 149,
  sym_g_accum_assign_stmt = 150,
  sym_g_accum_accum_stmt = 151,
  sym_func_call_stmt = 152,
  sym__select_stmt = 153,
  sym_gsql_select_block = 154,
  sym_gsql_select_clause = 155,
  sym_from_clause = 156,
  sym_where_clause = 157,
  sym_accum_clause = 158,
  sym_dml_sub_stmt_list = 159,
  sym_dml_sub_stmt = 160,
  sym_l_accum_accum_stmt = 161,
  sym_attr_accum_stmt = 162,
  sym_v_accum_func_call = 163,
  sym_local_var_decl_stmt = 164,
  sym_dml_sub_if_stmt = 165,
  sym_dml_sub_case_stmt = 166,
  sym_dml_sub_while_stmt = 167,
  sym_dml_sub_for_each_stmt = 168,
  sym_for_each_control = 169,
  sym_post_accum_clause = 170,
  sym_limit_clause = 171,
  sym_path_pattern = 172,
  sym_path_edge_pattern = 173,
  sym_atomic_edge_pattern = 174,
  sym_disj_pattern = 175,
  sym_step = 176,
  sym_step_v2 = 177,
  sym_step_source_set = 178,
  sym_step_edge_set = 179,
  sym_step_edge_types = 180,
  sym_atomic_edge_type = 181,
  sym_edge_set_type = 182,
  sym_step_vertex_set = 183,
  sym_step_vertex_types = 184,
  sym_atomic_vertex_type = 185,
  sym_vertex_set_type = 186,
  sym_query_body_case_stmt = 187,
  sym_query_body_if_stmt = 188,
  sym_query_body_while_stmt = 189,
  sym_query_body_for_each_stmt = 190,
  sym_decl_stmt = 191,
  sym_base_decl_stmt = 192,
  sym_accum_decl_stmt = 193,
  sym_accum_type = 194,
  sym_global_accum_name = 195,
  sym_local_accum_name = 196,
  sym_arg_list = 197,
  sym_simple_size = 198,
  sym_expr = 199,
  sym_condition = 200,
  sym_set_bag_expr = 201,
  sym_name_dot = 202,
  sym_aggregator = 203,
  sym_print_stmt = 204,
  sym_print_expr = 205,
  sym_v_expr_set = 206,
  sym_v_set_proj = 207,
  sym_file_path = 208,
  sym__type = 209,
  sym__element_type = 210,
  sym_base_type = 211,
  sym_constant = 212,
  sym_numeric = 213,
  sym_integer = 214,
  sym_real = 215,
  sym_string_literal = 216,
  sym_math_operator = 217,
  sym_comparison_operator = 218,
  aux_sym_gsql_repeat1 = 219,
  aux_sym_parameter_list_repeat1 = 220,
  aux_sym_query_params_repeat1 = 221,
  aux_sym_query_body_repeat1 = 222,
  aux_sym_query_body_repeat2 = 223,
  aux_sym_typedef_repeat1 = 224,
  aux_sym_tuple_fields_repeat1 = 225,
  aux_sym_seed_set_repeat1 = 226,
  aux_sym_func_call_stmt_repeat1 = 227,
  aux_sym_func_call_stmt_repeat2 = 228,
  aux_sym_gsql_select_block_repeat1 = 229,
  aux_sym_from_clause_repeat1 = 230,
  aux_sym_dml_sub_stmt_list_repeat1 = 231,
  aux_sym_v_accum_func_call_repeat1 = 232,
  aux_sym_dml_sub_if_stmt_repeat1 = 233,
  aux_sym_dml_sub_case_stmt_repeat1 = 234,
  aux_sym_for_each_control_repeat1 = 235,
  aux_sym_path_pattern_repeat1 = 236,
  aux_sym_disj_pattern_repeat1 = 237,
  aux_sym_step_repeat1 = 238,
  aux_sym_step_edge_types_repeat1 = 239,
  aux_sym_step_vertex_types_repeat1 = 240,
  aux_sym_query_body_case_stmt_repeat1 = 241,
  aux_sym_query_body_case_stmt_repeat2 = 242,
  aux_sym_query_body_if_stmt_repeat1 = 243,
  aux_sym_base_decl_stmt_repeat1 = 244,
  aux_sym_accum_decl_stmt_repeat1 = 245,
  aux_sym_accum_type_repeat1 = 246,
  aux_sym_accum_type_repeat2 = 247,
  aux_sym_accum_type_repeat3 = 248,
  aux_sym_accum_type_repeat4 = 249,
  aux_sym_arg_list_repeat1 = 250,
  aux_sym_name_dot_repeat1 = 251,
  aux_sym_print_stmt_repeat1 = 252,
  aux_sym_v_expr_set_repeat1 = 253,
  aux_sym_string_literal_repeat1 = 254,
  aux_sym_string_literal_repeat2 = 255,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TYPEDEF] = "TYPEDEF",
  [anon_sym_TUPLE] = "TUPLE",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
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
  [anon_sym_post_DASHaccum] = "post-accum",
  [anon_sym_OFFSET] = "OFFSET",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = " | ",
  [anon_sym_PIPE2] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_all] = "all",
  [anon_sym_SUMACCUM] = "SUMACCUM",
  [anon_sym_INT] = "INT",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_STRING] = "STRING",
  [anon_sym_MAXACCUM] = "MAXACCUM",
  [anon_sym_MINACCUM] = "MINACCUM",
  [anon_sym_AVGACCUM] = "AVGACCUM",
  [anon_sym_ORACCUM] = "ORACCUM",
  [anon_sym_ANDACCUM] = "ANDACCUM",
  [anon_sym_BITWISEORACCUM] = "BITWISEORACCUM",
  [anon_sym_BITWISEANDACCUM] = "BITWISEANDACCUM",
  [anon_sym_LISTACCUM] = "LISTACCUM",
  [anon_sym_SETACCUM] = "SETACCUM",
  [anon_sym_BAGACCUM] = "BAGACCUM",
  [anon_sym_MAPACCUM] = "MAPACCUM",
  [anon_sym_HEAPACCUM] = "HEAPACCUM",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_GROUPBYACCUM] = "GROUPBYACCUM",
  [anon_sym_ARRAYACCUM] = "ARRAYACCUM",
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
  [anon_sym_to_csv] = "to_csv",
  [anon_sym_AS] = "AS",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_UINT] = "UINT",
  [anon_sym_VERTEX] = "VERTEX",
  [anon_sym_EDGE] = "EDGE",
  [anon_sym_JSONOBJECT] = "JSONOBJECT",
  [anon_sym_JSONARRAY] = "JSONARRAY",
  [anon_sym_DATETIME] = "DATETIME",
  [sym_name] = "name",
  [anon_sym_gsql_uint_max] = "gsql_uint_max",
  [anon_sym_gsql_int_max] = "gsql_int_max",
  [anon_sym_gsql_uint_min] = "gsql_uint_min",
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
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_gsql] = "gsql",
  [sym__definition] = "_definition",
  [sym_create_query] = "create_query",
  [sym_interpret_query] = "interpret_query",
  [sym_parameter_list] = "parameter_list",
  [sym_query_params] = "query_params",
  [sym_query_param] = "query_param",
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
  [aux_sym_gsql_repeat1] = "gsql_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TYPEDEF] = anon_sym_TYPEDEF,
  [anon_sym_TUPLE] = anon_sym_TUPLE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
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
  [anon_sym_post_DASHaccum] = anon_sym_post_DASHaccum,
  [anon_sym_OFFSET] = anon_sym_OFFSET,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE2] = anon_sym_PIPE2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_SUMACCUM] = anon_sym_SUMACCUM,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_MAXACCUM] = anon_sym_MAXACCUM,
  [anon_sym_MINACCUM] = anon_sym_MINACCUM,
  [anon_sym_AVGACCUM] = anon_sym_AVGACCUM,
  [anon_sym_ORACCUM] = anon_sym_ORACCUM,
  [anon_sym_ANDACCUM] = anon_sym_ANDACCUM,
  [anon_sym_BITWISEORACCUM] = anon_sym_BITWISEORACCUM,
  [anon_sym_BITWISEANDACCUM] = anon_sym_BITWISEANDACCUM,
  [anon_sym_LISTACCUM] = anon_sym_LISTACCUM,
  [anon_sym_SETACCUM] = anon_sym_SETACCUM,
  [anon_sym_BAGACCUM] = anon_sym_BAGACCUM,
  [anon_sym_MAPACCUM] = anon_sym_MAPACCUM,
  [anon_sym_HEAPACCUM] = anon_sym_HEAPACCUM,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_GROUPBYACCUM] = anon_sym_GROUPBYACCUM,
  [anon_sym_ARRAYACCUM] = anon_sym_ARRAYACCUM,
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
  [anon_sym_to_csv] = anon_sym_to_csv,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_UINT] = anon_sym_UINT,
  [anon_sym_VERTEX] = anon_sym_VERTEX,
  [anon_sym_EDGE] = anon_sym_EDGE,
  [anon_sym_JSONOBJECT] = anon_sym_JSONOBJECT,
  [anon_sym_JSONARRAY] = anon_sym_JSONARRAY,
  [anon_sym_DATETIME] = anon_sym_DATETIME,
  [sym_name] = sym_name,
  [anon_sym_gsql_uint_max] = anon_sym_gsql_uint_max,
  [anon_sym_gsql_int_max] = anon_sym_gsql_int_max,
  [anon_sym_gsql_uint_min] = anon_sym_gsql_uint_min,
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
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_gsql] = sym_gsql,
  [sym__definition] = sym__definition,
  [sym_create_query] = sym_create_query,
  [sym_interpret_query] = sym_interpret_query,
  [sym_parameter_list] = sym_parameter_list,
  [sym_query_params] = sym_query_params,
  [sym_query_param] = sym_query_param,
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
  [aux_sym_gsql_repeat1] = aux_sym_gsql_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_post_DASHaccum] = {
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
  [anon_sym_SUMACCUM] = {
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
  [anon_sym_MAXACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AVGACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANDACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BITWISEORACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BITWISEANDACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LISTACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SETACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAGACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAPACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAPACCUM] = {
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
  [anon_sym_GROUPBYACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARRAYACCUM] = {
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
  [anon_sym_to_csv] = {
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
  [anon_sym_gsql_uint_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gsql_int_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gsql_uint_min] = {
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [aux_sym_gsql_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [40] = 29,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 33,
  [45] = 45,
  [46] = 30,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
  [75] = 73,
  [76] = 76,
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
  [90] = 88,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 105,
  [106] = 102,
  [107] = 107,
  [108] = 102,
  [109] = 93,
  [110] = 102,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 96,
  [115] = 115,
  [116] = 116,
  [117] = 100,
  [118] = 118,
  [119] = 97,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 103,
  [131] = 95,
  [132] = 115,
  [133] = 133,
  [134] = 134,
  [135] = 20,
  [136] = 136,
  [137] = 73,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 143,
  [144] = 143,
  [145] = 133,
  [146] = 141,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 26,
  [151] = 151,
  [152] = 21,
  [153] = 153,
  [154] = 27,
  [155] = 155,
  [156] = 28,
  [157] = 157,
  [158] = 158,
  [159] = 29,
  [160] = 160,
  [161] = 148,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 148,
  [166] = 166,
  [167] = 22,
  [168] = 25,
  [169] = 169,
  [170] = 155,
  [171] = 171,
  [172] = 24,
  [173] = 173,
  [174] = 155,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 155,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 158,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 23,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 30,
  [192] = 19,
  [193] = 34,
  [194] = 31,
  [195] = 32,
  [196] = 33,
  [197] = 136,
  [198] = 134,
  [199] = 199,
  [200] = 36,
  [201] = 37,
  [202] = 202,
  [203] = 199,
  [204] = 38,
  [205] = 35,
  [206] = 39,
  [207] = 43,
  [208] = 41,
  [209] = 29,
  [210] = 42,
  [211] = 49,
  [212] = 136,
  [213] = 33,
  [214] = 30,
  [215] = 45,
  [216] = 47,
  [217] = 134,
  [218] = 48,
  [219] = 66,
  [220] = 61,
  [221] = 63,
  [222] = 60,
  [223] = 58,
  [224] = 56,
  [225] = 67,
  [226] = 64,
  [227] = 54,
  [228] = 52,
  [229] = 59,
  [230] = 50,
  [231] = 68,
  [232] = 62,
  [233] = 65,
  [234] = 57,
  [235] = 177,
  [236] = 51,
  [237] = 55,
  [238] = 53,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 73,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
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
  [264] = 41,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 39,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 48,
  [279] = 279,
  [280] = 280,
  [281] = 202,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 134,
  [295] = 295,
  [296] = 296,
  [297] = 136,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 299,
  [306] = 50,
  [307] = 301,
  [308] = 57,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 34,
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
  [366] = 366,
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
  [387] = 386,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 391,
  [394] = 392,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 395,
  [411] = 411,
  [412] = 412,
  [413] = 19,
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
  [434] = 266,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
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
  [456] = 447,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 453,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 461,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 460,
  [478] = 478,
  [479] = 270,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 19,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 74,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 494,
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
  [522] = 522,
  [523] = 523,
  [524] = 516,
  [525] = 525,
  [526] = 515,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 509,
  [534] = 534,
  [535] = 535,
  [536] = 282,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 293,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 531,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 505,
  [565] = 565,
  [566] = 517,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 502,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 496,
  [584] = 501,
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
  [604] = 604,
  [605] = 596,
  [606] = 606,
  [607] = 607,
  [608] = 606,
  [609] = 609,
  [610] = 596,
  [611] = 599,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 589,
  [618] = 618,
  [619] = 604,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 621,
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
  [637] = 637,
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
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 752,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 789,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 791,
  [801] = 735,
  [802] = 790,
  [803] = 803,
  [804] = 804,
  [805] = 729,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 705,
  [811] = 704,
  [812] = 812,
  [813] = 659,
  [814] = 658,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 768,
  [821] = 821,
  [822] = 785,
  [823] = 796,
  [824] = 824,
  [825] = 825,
  [826] = 795,
  [827] = 726,
  [828] = 694,
  [829] = 829,
  [830] = 830,
  [831] = 755,
  [832] = 793,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 790,
  [838] = 791,
  [839] = 839,
  [840] = 840,
  [841] = 729,
  [842] = 842,
  [843] = 795,
  [844] = 790,
  [845] = 845,
  [846] = 846,
  [847] = 795,
  [848] = 848,
  [849] = 849,
  [850] = 771,
  [851] = 851,
  [852] = 750,
  [853] = 853,
  [854] = 854,
  [855] = 682,
  [856] = 856,
  [857] = 857,
  [858] = 693,
  [859] = 797,
  [860] = 860,
  [861] = 861,
  [862] = 682,
  [863] = 682,
  [864] = 770,
  [865] = 765,
  [866] = 738,
  [867] = 867,
  [868] = 868,
  [869] = 799,
  [870] = 666,
  [871] = 738,
  [872] = 738,
  [873] = 873,
  [874] = 668,
  [875] = 794,
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

static inline bool sym_name_character_set_8(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(440);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(875);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(457);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(312);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(189);
      if (lookahead == 'J') ADVANCE(335);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'P') ADVANCE(318);
      if (lookahead == 'Q') ADVANCE(369);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(221);
      if (lookahead == 'V') ADVANCE(41);
      if (lookahead == 'W') ADVANCE(200);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'v') ADVANCE(42);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(883);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(512);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(749);
      if (lookahead == 'B') ADVANCE(634);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(722);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'H') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'L') ADVANCE(714);
      if (lookahead == 'M') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'T') ADVANCE(829);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(709);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(749);
      if (lookahead == 'B') ADVANCE(634);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(722);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'H') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'L') ADVANCE(714);
      if (lookahead == 'M') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'T') ADVANCE(829);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(709);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(749);
      if (lookahead == 'B') ADVANCE(634);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(722);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'H') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'L') ADVANCE(714);
      if (lookahead == 'M') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(709);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(749);
      if (lookahead == 'B') ADVANCE(634);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(722);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'H') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'L') ADVANCE(714);
      if (lookahead == 'M') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(709);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(875);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(457);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(875);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(457);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(281);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(281);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'C') ADVANCE(762);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'I') ADVANCE(787);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'C') ADVANCE(762);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'I') ADVANCE(787);
      if (lookahead == 'N') ADVANCE(766);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'C') ADVANCE(762);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'I') ADVANCE(787);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(849);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'C') ADVANCE(762);
      if (lookahead == 'F') ADVANCE(613);
      if (lookahead == 'I') ADVANCE(787);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(710);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '<') ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(863);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(868);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(752);
      if (lookahead == '_') ADVANCE(472);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_3(lookahead)) ADVANCE(854);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == 'G') ADVANCE(321);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(287);
      if (lookahead == 'J') ADVANCE(335);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'V') ADVANCE(172);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'W') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(475);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(884);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(885);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'B') ADVANCE(760);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(723);
      if (lookahead == 'I') ADVANCE(751);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'S') ADVANCE(805);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == '@') ADVANCE(557);
      if (lookahead == 'B') ADVANCE(760);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'S') ADVANCE(805);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == 'W') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_name_character_set_2(lookahead)) ADVANCE(854);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(749);
      if (lookahead == 'B') ADVANCE(634);
      if (lookahead == 'D') ADVANCE(610);
      if (lookahead == 'E') ADVANCE(673);
      if (lookahead == 'F') ADVANCE(723);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'H') ADVANCE(688);
      if (lookahead == 'I') ADVANCE(751);
      if (lookahead == 'J') ADVANCE(784);
      if (lookahead == 'L') ADVANCE(714);
      if (lookahead == 'M') ADVANCE(606);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'U') ADVANCE(711);
      if (lookahead == 'V') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (sym_name_character_set_4(lookahead)) ADVANCE(854);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(451);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(876);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(882);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(479);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(881);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(877);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == '@') ADVANCE(556);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(316);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'I') ADVANCE(267);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(400);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(394);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(333);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(196);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead == 'I') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == 'I') ADVANCE(334);
      if (lookahead == 'O') ADVANCE(497);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(371);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(310);
      if (lookahead == 'I') ADVANCE(291);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == 'E') ADVANCE(304);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(373);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(311);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(399);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == 'U') ADVANCE(285);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'O') ADVANCE(329);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(347);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(363);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(225);
      END_STATE();
    case 89:
      if (lookahead == 'B') ADVANCE(391);
      END_STATE();
    case 90:
      if (lookahead == 'B') ADVANCE(239);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(401);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(193);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(591);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(195);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead == 'V') ADVANCE(199);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(551);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(550);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(370);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(202);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(351);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(352);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(353);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(354);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(374);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(375);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(376);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(377);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(379);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(380);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(381);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(382);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(383);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(384);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(385);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(386);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(388);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(389);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(390);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 129:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'D') ADVANCE(572);
      END_STATE();
    case 137:
      if (lookahead == 'D') ADVANCE(572);
      if (lookahead == 'Y') ADVANCE(473);
      END_STATE();
    case 138:
      if (lookahead == 'D') ADVANCE(489);
      END_STATE();
    case 139:
      if (lookahead == 'D') ADVANCE(444);
      END_STATE();
    case 140:
      if (lookahead == 'D') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(336);
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 141:
      if (lookahead == 'D') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 143:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(242);
      if (lookahead == 'Y') ADVANCE(283);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(490);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(598);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(577);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(573);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(575);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(503);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(462);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(483);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(494);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(443);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(559);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(604);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(522);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(268);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(360);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 188:
      if (lookahead == 'E') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(325);
      if (lookahead == 'U') ADVANCE(265);
      END_STATE();
    case 189:
      if (lookahead == 'F') ADVANCE(485);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == 'S') ADVANCE(569);
      END_STATE();
    case 190:
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(442);
      END_STATE();
    case 191:
      if (lookahead == 'F') ADVANCE(460);
      END_STATE();
    case 192:
      if (lookahead == 'F') ADVANCE(339);
      END_STATE();
    case 193:
      if (lookahead == 'G') ADVANCE(585);
      END_STATE();
    case 194:
      if (lookahead == 'G') ADVANCE(524);
      END_STATE();
    case 195:
      if (lookahead == 'G') ADVANCE(584);
      END_STATE();
    case 196:
      if (lookahead == 'G') ADVANCE(74);
      END_STATE();
    case 197:
      if (lookahead == 'G') ADVANCE(150);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(155);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 200:
      if (lookahead == 'H') ADVANCE(148);
      END_STATE();
    case 201:
      if (lookahead == 'H') ADVANCE(448);
      END_STATE();
    case 202:
      if (lookahead == 'H') ADVANCE(498);
      END_STATE();
    case 203:
      if (lookahead == 'H') ADVANCE(173);
      END_STATE();
    case 204:
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'R') ADVANCE(378);
      END_STATE();
    case 205:
      if (lookahead == 'H') ADVANCE(173);
      if (lookahead == 'R') ADVANCE(378);
      if (lookahead == 'U') ADVANCE(308);
      if (lookahead == 'Y') ADVANCE(305);
      END_STATE();
    case 206:
      if (lookahead == 'H') ADVANCE(147);
      END_STATE();
    case 207:
      if (lookahead == 'H') ADVANCE(183);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(228);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(227);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(226);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(348);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(275);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(261);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(279);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(284);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'N') ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(300);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(338);
      END_STATE();
    case 225:
      if (lookahead == 'J') ADVANCE(187);
      END_STATE();
    case 226:
      if (lookahead == 'K') ADVANCE(152);
      END_STATE();
    case 227:
      if (lookahead == 'K') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(216);
      END_STATE();
    case 228:
      if (lookahead == 'K') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(216);
      if (lookahead == 'S') ADVANCE(368);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(592);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(570);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(365);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(230);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(169);
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(336);
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(337);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(587);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(482);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(484);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(530);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(544);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(546);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(526);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(542);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(516);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(548);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(540);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(554);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(552);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(536);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(538);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(586);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(532);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(534);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(528);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(216);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(216);
      if (lookahead == 'S') ADVANCE(368);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(306);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(162);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(78);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == 'S') ADVANCE(568);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(583);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(487);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(492);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(492);
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(476);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(571);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(500);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(500);
      if (lookahead == 'S') ADVANCE(568);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(582);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(222);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(194);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(136);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(361);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(345);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(346);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(349);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(356);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 290:
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 291:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(497);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(243);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(373);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(343);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(343);
      if (lookahead == 'U') ADVANCE(233);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(229);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 301:
      if (lookahead == 'P') ADVANCE(507);
      END_STATE();
    case 302:
      if (lookahead == 'P') ADVANCE(91);
      END_STATE();
    case 303:
      if (lookahead == 'P') ADVANCE(201);
      END_STATE();
    case 304:
      if (lookahead == 'P') ADVANCE(234);
      END_STATE();
    case 305:
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 306:
      if (lookahead == 'P') ADVANCE(358);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 308:
      if (lookahead == 'P') ADVANCE(237);
      END_STATE();
    case 309:
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(581);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(79);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(442);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(447);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(558);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(446);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(307);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(397);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(362);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(184);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(341);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 331:
      if (lookahead == 'S') ADVANCE(478);
      END_STATE();
    case 332:
      if (lookahead == 'S') ADVANCE(96);
      END_STATE();
    case 333:
      if (lookahead == 'S') ADVANCE(149);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(344);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(298);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(151);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(393);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(566);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(594);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(578);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(496);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(588);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(480);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(561);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(477);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(600);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(452);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(518);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(398);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(166);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 369:
      if (lookahead == 'U') ADVANCE(175);
      END_STATE();
    case 370:
      if (lookahead == 'U') ADVANCE(244);
      END_STATE();
    case 371:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 372:
      if (lookahead == 'U') ADVANCE(331);
      END_STATE();
    case 373:
      if (lookahead == 'U') ADVANCE(302);
      END_STATE();
    case 374:
      if (lookahead == 'U') ADVANCE(245);
      END_STATE();
    case 375:
      if (lookahead == 'U') ADVANCE(246);
      END_STATE();
    case 376:
      if (lookahead == 'U') ADVANCE(247);
      END_STATE();
    case 377:
      if (lookahead == 'U') ADVANCE(248);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 379:
      if (lookahead == 'U') ADVANCE(249);
      END_STATE();
    case 380:
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 381:
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 382:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 383:
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 384:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 385:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 386:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 387:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 391:
      if (lookahead == 'U') ADVANCE(364);
      END_STATE();
    case 392:
      if (lookahead == 'W') ADVANCE(224);
      END_STATE();
    case 393:
      if (lookahead == 'W') ADVANCE(185);
      END_STATE();
    case 394:
      if (lookahead == 'X') ADVANCE(449);
      END_STATE();
    case 395:
      if (lookahead == 'X') ADVANCE(596);
      END_STATE();
    case 396:
      if (lookahead == 'X') ADVANCE(580);
      END_STATE();
    case 397:
      if (lookahead == 'Y') ADVANCE(445);
      END_STATE();
    case 398:
      if (lookahead == 'Y') ADVANCE(563);
      END_STATE();
    case 399:
      if (lookahead == 'Y') ADVANCE(602);
      END_STATE();
    case 400:
      if (lookahead == 'Y') ADVANCE(81);
      END_STATE();
    case 401:
      if (lookahead == 'Y') ADVANCE(82);
      END_STATE();
    case 402:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 403:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 404:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 405:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 406:
      if (lookahead == '_') ADVANCE(422);
      END_STATE();
    case 407:
      if (lookahead == '_') ADVANCE(421);
      END_STATE();
    case 408:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 412:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 413:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 420:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 421:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 422:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 428:
      if (lookahead == 'q') ADVANCE(419);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 436:
      if (lookahead == 'v') ADVANCE(590);
      END_STATE();
    case 437:
      if (lookahead == 'x') ADVANCE(857);
      END_STATE();
    case 438:
      if (lookahead == 'x') ADVANCE(855);
      END_STATE();
    case 439:
      if (eof) ADVANCE(440);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(862);
      if (lookahead == '%') ADVANCE(873);
      if (lookahead == '&') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(867);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '+') ADVANCE(874);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(872);
      if (lookahead == ':') ADVANCE(502);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(439)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_V2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(881);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(876);
      if (lookahead == '=') ADVANCE(879);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(876);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(880);
      if (lookahead == '>') ADVANCE(877);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(475);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_post_DASHaccum);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(556);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_MAX);
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(331);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_AVG);
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_SUM);
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_to_csv);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(770);
      if (lookahead == 'I') ADVANCE(758);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(639);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(783);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(833);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(801);
      if (lookahead == 'O') ADVANCE(809);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(771);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(830);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(728);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(638);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'O') ADVANCE(782);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(635);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(794);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(756);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(755);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(659);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(660);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(661);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(662);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(663);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(664);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(665);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(666);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(667);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(668);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(669);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(670);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(671);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(672);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(707);
      if (lookahead == 'I') ADVANCE(791);
      if (lookahead == 'O') ADVANCE(761);
      if (sym_name_character_set_6(lookahead)) ADVANCE(854);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(796);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(682);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(491);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(599);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(495);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(523);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(574);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(560);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(504);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(674);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(807);
      if (lookahead == 'T') ADVANCE(778);
      if (lookahead == 'U') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(641);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(727);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(486);
      if (lookahead == 'N') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(461);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(525);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(678);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(687);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(499);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(713);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(593);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(765);
      if (lookahead == 'O') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(765);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(680);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(681);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(533);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(535);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(531);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(545);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(547);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(527);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(529);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(543);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(517);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(549);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(541);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(555);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(553);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(537);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(539);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(769);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(683);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(493);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(675);
      if (lookahead == 'R') ADVANCE(774);
      if (lookahead == 'V') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(703);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(797);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(676);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(721);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(799);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(803);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(623);
      if (lookahead == 'X') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(763);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(804);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(677);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(806);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(519);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(595);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(521);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(589);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(601);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(579);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(481);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(567);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(562);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(679);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(731);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(732);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(733);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(597);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(603);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(564);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(474);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(840);
      if (sym_name_character_set_7(lookahead)) ADVANCE(854);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(843);
      if (sym_name_character_set_7(lookahead)) ADVANCE(854);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(844);
      if (sym_name_character_set_7(lookahead)) ADVANCE(854);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(852);
      if (sym_name_character_set_8(lookahead)) ADVANCE(854);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(846);
      if (sym_name_character_set_8(lookahead)) ADVANCE(854);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(860);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(851);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(848);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(858);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(856);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      if (sym_name_character_set_5(lookahead)) ADVANCE(854);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(884);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '<') ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(863);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(884);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(868);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(884);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(479);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 439},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 439},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 39},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 40},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 439},
  [198] = {.lex_state = 439},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 439},
  [240] = {.lex_state = 439},
  [241] = {.lex_state = 439},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 439},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 439},
  [249] = {.lex_state = 439},
  [250] = {.lex_state = 439},
  [251] = {.lex_state = 439},
  [252] = {.lex_state = 35},
  [253] = {.lex_state = 35},
  [254] = {.lex_state = 439},
  [255] = {.lex_state = 29},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 29},
  [258] = {.lex_state = 439},
  [259] = {.lex_state = 29},
  [260] = {.lex_state = 439},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 29},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 439},
  [268] = {.lex_state = 29},
  [269] = {.lex_state = 439},
  [270] = {.lex_state = 35},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 439},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 29},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 439},
  [282] = {.lex_state = 35},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 26},
  [286] = {.lex_state = 35},
  [287] = {.lex_state = 29},
  [288] = {.lex_state = 26},
  [289] = {.lex_state = 35},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 35},
  [292] = {.lex_state = 439},
  [293] = {.lex_state = 35},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 439},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 439},
  [299] = {.lex_state = 439},
  [300] = {.lex_state = 439},
  [301] = {.lex_state = 29},
  [302] = {.lex_state = 29},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 439},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 439},
  [310] = {.lex_state = 26},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 26},
  [314] = {.lex_state = 439},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 439},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 439},
  [319] = {.lex_state = 439},
  [320] = {.lex_state = 439},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 439},
  [323] = {.lex_state = 439},
  [324] = {.lex_state = 439},
  [325] = {.lex_state = 439},
  [326] = {.lex_state = 439},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 26},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 26},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 26},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 26},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 26},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 439},
  [341] = {.lex_state = 26},
  [342] = {.lex_state = 439},
  [343] = {.lex_state = 439},
  [344] = {.lex_state = 439},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 439},
  [347] = {.lex_state = 439},
  [348] = {.lex_state = 439},
  [349] = {.lex_state = 439},
  [350] = {.lex_state = 439},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 439},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 439},
  [355] = {.lex_state = 439},
  [356] = {.lex_state = 439},
  [357] = {.lex_state = 439},
  [358] = {.lex_state = 439},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 439},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 26},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 439},
  [366] = {.lex_state = 439},
  [367] = {.lex_state = 439},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 439},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 26},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 20},
  [377] = {.lex_state = 439},
  [378] = {.lex_state = 20},
  [379] = {.lex_state = 28},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 439},
  [386] = {.lex_state = 27},
  [387] = {.lex_state = 27},
  [388] = {.lex_state = 439},
  [389] = {.lex_state = 439},
  [390] = {.lex_state = 439},
  [391] = {.lex_state = 20},
  [392] = {.lex_state = 20},
  [393] = {.lex_state = 20},
  [394] = {.lex_state = 20},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 20},
  [397] = {.lex_state = 20},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 439},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 20},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 26},
  [410] = {.lex_state = 20},
  [411] = {.lex_state = 439},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 439},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 20},
  [418] = {.lex_state = 439},
  [419] = {.lex_state = 439},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 439},
  [423] = {.lex_state = 8},
  [424] = {.lex_state = 8},
  [425] = {.lex_state = 20},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 439},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 8},
  [432] = {.lex_state = 8},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 439},
  [438] = {.lex_state = 8},
  [439] = {.lex_state = 8},
  [440] = {.lex_state = 29},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 8},
  [443] = {.lex_state = 20},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 439},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 20},
  [449] = {.lex_state = 439},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 439},
  [453] = {.lex_state = 439},
  [454] = {.lex_state = 20},
  [455] = {.lex_state = 439},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 439},
  [460] = {.lex_state = 439},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 20},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 439},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 439},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 439},
  [470] = {.lex_state = 439},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 439},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 439},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 30},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 8},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 8},
  [495] = {.lex_state = 8},
  [496] = {.lex_state = 24},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 8},
  [502] = {.lex_state = 25},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 8},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 20},
  [515] = {.lex_state = 24},
  [516] = {.lex_state = 25},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 439},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 439},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 8},
  [524] = {.lex_state = 25},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 6},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 20},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 439},
  [536] = {.lex_state = 20},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 439},
  [542] = {.lex_state = 20},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 439},
  [545] = {.lex_state = 8},
  [546] = {.lex_state = 439},
  [547] = {.lex_state = 8},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 439},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 25},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 20},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 8},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 29},
  [568] = {.lex_state = 439},
  [569] = {.lex_state = 24},
  [570] = {.lex_state = 439},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 439},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 439},
  [577] = {.lex_state = 25},
  [578] = {.lex_state = 8},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 8},
  [582] = {.lex_state = 439},
  [583] = {.lex_state = 24},
  [584] = {.lex_state = 8},
  [585] = {.lex_state = 439},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 14},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 439},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 8},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 439},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 439},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 439},
  [612] = {.lex_state = 16},
  [613] = {.lex_state = 14},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 439},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 14},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 439},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 8},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 16},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 8},
  [643] = {.lex_state = 439},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 439},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 14},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 20},
  [654] = {.lex_state = 439},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 20},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 20},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 20},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 20},
  [671] = {.lex_state = 20},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 439},
  [674] = {.lex_state = 439},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 20},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 20},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 20},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 20},
  [703] = {.lex_state = 20},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 8},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 20},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 20},
  [710] = {.lex_state = 20},
  [711] = {.lex_state = 8},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 8},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 20},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 20},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 20},
  [739] = {.lex_state = 439},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 439},
  [742] = {.lex_state = 20},
  [743] = {.lex_state = 20},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 20},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 439},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 20},
  [751] = {.lex_state = 439},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 20},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 20},
  [757] = {.lex_state = 20},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 439},
  [762] = {.lex_state = 20},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 20},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 20},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 439},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 8},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 20},
  [776] = {.lex_state = 439},
  [777] = {.lex_state = 439},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 20},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 20},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 439},
  [785] = {.lex_state = 20},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 20},
  [791] = {.lex_state = 20},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 20},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 8},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 8},
  [810] = {.lex_state = 8},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 8},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 8},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 8},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 8},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 20},
  [822] = {.lex_state = 20},
  [823] = {.lex_state = 20},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 8},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 8},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 20},
  [834] = {.lex_state = 8},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 20},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 439},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 20},
  [845] = {.lex_state = 20},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 20},
  [852] = {.lex_state = 20},
  [853] = {.lex_state = 439},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 20},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 20},
  [867] = {.lex_state = 439},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 20},
  [872] = {.lex_state = 20},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TYPEDEF] = ACTIONS(1),
    [anon_sym_TUPLE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [anon_sym_post_DASHaccum] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_SUMACCUM] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_MAXACCUM] = ACTIONS(1),
    [anon_sym_AVGACCUM] = ACTIONS(1),
    [anon_sym_BITWISEORACCUM] = ACTIONS(1),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(1),
    [anon_sym_LISTACCUM] = ACTIONS(1),
    [anon_sym_SETACCUM] = ACTIONS(1),
    [anon_sym_BAGACCUM] = ACTIONS(1),
    [anon_sym_MAPACCUM] = ACTIONS(1),
    [anon_sym_HEAPACCUM] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_GROUPBYACCUM] = ACTIONS(1),
    [anon_sym_ARRAYACCUM] = ACTIONS(1),
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
    [anon_sym_to_csv] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_UINT] = ACTIONS(1),
    [anon_sym_VERTEX] = ACTIONS(1),
    [anon_sym_EDGE] = ACTIONS(1),
    [anon_sym_JSONOBJECT] = ACTIONS(1),
    [anon_sym_JSONARRAY] = ACTIONS(1),
    [anon_sym_DATETIME] = ACTIONS(1),
    [anon_sym_gsql_uint_max] = ACTIONS(1),
    [anon_sym_gsql_int_max] = ACTIONS(1),
    [anon_sym_gsql_uint_min] = ACTIONS(1),
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
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_gsql] = STATE(861),
    [sym__definition] = STATE(388),
    [sym_create_query] = STATE(590),
    [sym_interpret_query] = STATE(590),
    [aux_sym_gsql_repeat1] = STATE(388),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_INTERPRET] = ACTIONS(9),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(69),
    [sym_query_body_stmts] = STATE(6),
    [sym_query_body_stmt] = STATE(789),
    [sym_assign_stmt] = STATE(788),
    [sym_v_set_var_decl_stmt] = STATE(788),
    [sym_l_accum_assign_stmt] = STATE(788),
    [sym_g_accum_assign_stmt] = STATE(788),
    [sym_g_accum_accum_stmt] = STATE(788),
    [sym_func_call_stmt] = STATE(788),
    [sym__select_stmt] = STATE(788),
    [sym_gsql_select_block] = STATE(788),
    [sym_gsql_select_clause] = STATE(607),
    [sym_query_body_case_stmt] = STATE(788),
    [sym_query_body_if_stmt] = STATE(788),
    [sym_query_body_while_stmt] = STATE(788),
    [sym_query_body_for_each_stmt] = STATE(788),
    [sym_decl_stmt] = STATE(788),
    [sym_base_decl_stmt] = STATE(786),
    [sym_accum_decl_stmt] = STATE(786),
    [sym_accum_type] = STATE(485),
    [sym_global_accum_name] = STATE(442),
    [sym_local_accum_name] = STATE(608),
    [sym_print_stmt] = STATE(788),
    [sym_base_type] = STATE(781),
    [aux_sym_query_body_repeat1] = STATE(69),
    [aux_sym_query_body_repeat2] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_CASE] = ACTIONS(17),
    [anon_sym_WHILE] = ACTIONS(19),
    [anon_sym_FOREACH] = ACTIONS(21),
    [anon_sym_SUMACCUM] = ACTIONS(23),
    [anon_sym_INT] = ACTIONS(25),
    [anon_sym_FLOAT] = ACTIONS(25),
    [anon_sym_DOUBLE] = ACTIONS(25),
    [anon_sym_STRING] = ACTIONS(25),
    [anon_sym_MAXACCUM] = ACTIONS(27),
    [anon_sym_MINACCUM] = ACTIONS(27),
    [anon_sym_AVGACCUM] = ACTIONS(29),
    [anon_sym_ORACCUM] = ACTIONS(29),
    [anon_sym_ANDACCUM] = ACTIONS(29),
    [anon_sym_BITWISEORACCUM] = ACTIONS(29),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(29),
    [anon_sym_LISTACCUM] = ACTIONS(31),
    [anon_sym_SETACCUM] = ACTIONS(33),
    [anon_sym_BAGACCUM] = ACTIONS(33),
    [anon_sym_MAPACCUM] = ACTIONS(35),
    [anon_sym_HEAPACCUM] = ACTIONS(37),
    [anon_sym_GROUPBYACCUM] = ACTIONS(39),
    [anon_sym_ARRAYACCUM] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_PRINT] = ACTIONS(47),
    [anon_sym_BOOL] = ACTIONS(25),
    [anon_sym_UINT] = ACTIONS(25),
    [anon_sym_VERTEX] = ACTIONS(49),
    [anon_sym_EDGE] = ACTIONS(25),
    [anon_sym_JSONOBJECT] = ACTIONS(25),
    [anon_sym_JSONARRAY] = ACTIONS(25),
    [anon_sym_DATETIME] = ACTIONS(25),
    [sym_name] = ACTIONS(51),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_typedef] = STATE(2),
    [sym_query_body_stmts] = STATE(4),
    [sym_query_body_stmt] = STATE(789),
    [sym_assign_stmt] = STATE(788),
    [sym_v_set_var_decl_stmt] = STATE(788),
    [sym_l_accum_assign_stmt] = STATE(788),
    [sym_g_accum_assign_stmt] = STATE(788),
    [sym_g_accum_accum_stmt] = STATE(788),
    [sym_func_call_stmt] = STATE(788),
    [sym__select_stmt] = STATE(788),
    [sym_gsql_select_block] = STATE(788),
    [sym_gsql_select_clause] = STATE(607),
    [sym_query_body_case_stmt] = STATE(788),
    [sym_query_body_if_stmt] = STATE(788),
    [sym_query_body_while_stmt] = STATE(788),
    [sym_query_body_for_each_stmt] = STATE(788),
    [sym_decl_stmt] = STATE(788),
    [sym_base_decl_stmt] = STATE(786),
    [sym_accum_decl_stmt] = STATE(786),
    [sym_accum_type] = STATE(485),
    [sym_global_accum_name] = STATE(442),
    [sym_local_accum_name] = STATE(608),
    [sym_print_stmt] = STATE(788),
    [sym_base_type] = STATE(781),
    [aux_sym_query_body_repeat1] = STATE(2),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_CASE] = ACTIONS(17),
    [anon_sym_WHILE] = ACTIONS(19),
    [anon_sym_FOREACH] = ACTIONS(21),
    [anon_sym_SUMACCUM] = ACTIONS(23),
    [anon_sym_INT] = ACTIONS(25),
    [anon_sym_FLOAT] = ACTIONS(25),
    [anon_sym_DOUBLE] = ACTIONS(25),
    [anon_sym_STRING] = ACTIONS(25),
    [anon_sym_MAXACCUM] = ACTIONS(27),
    [anon_sym_MINACCUM] = ACTIONS(27),
    [anon_sym_AVGACCUM] = ACTIONS(29),
    [anon_sym_ORACCUM] = ACTIONS(29),
    [anon_sym_ANDACCUM] = ACTIONS(29),
    [anon_sym_BITWISEORACCUM] = ACTIONS(29),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(29),
    [anon_sym_LISTACCUM] = ACTIONS(31),
    [anon_sym_SETACCUM] = ACTIONS(33),
    [anon_sym_BAGACCUM] = ACTIONS(33),
    [anon_sym_MAPACCUM] = ACTIONS(35),
    [anon_sym_HEAPACCUM] = ACTIONS(37),
    [anon_sym_GROUPBYACCUM] = ACTIONS(39),
    [anon_sym_ARRAYACCUM] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_PRINT] = ACTIONS(47),
    [anon_sym_BOOL] = ACTIONS(25),
    [anon_sym_UINT] = ACTIONS(25),
    [anon_sym_VERTEX] = ACTIONS(49),
    [anon_sym_EDGE] = ACTIONS(25),
    [anon_sym_JSONOBJECT] = ACTIONS(25),
    [anon_sym_JSONARRAY] = ACTIONS(25),
    [anon_sym_DATETIME] = ACTIONS(25),
    [sym_name] = ACTIONS(51),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [123] = 30,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_CASE,
    ACTIONS(63), 1,
      anon_sym_WHILE,
    ACTIONS(66), 1,
      anon_sym_FOREACH,
    ACTIONS(69), 1,
      anon_sym_SUMACCUM,
    ACTIONS(81), 1,
      anon_sym_LISTACCUM,
    ACTIONS(87), 1,
      anon_sym_MAPACCUM,
    ACTIONS(90), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(93), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(96), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(99), 1,
      anon_sym_AT_AT,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      anon_sym_PRINT,
    ACTIONS(108), 1,
      anon_sym_VERTEX,
    ACTIONS(111), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(75), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(84), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(72), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [246] = 30,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [369] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(744), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [488] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(714), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [607] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(493), 1,
      sym_query_body_stmts,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [726] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(574), 1,
      sym_query_body_stmts,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [845] = 29,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(116), 1,
      anon_sym_IF,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(660), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [964] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(512), 1,
      sym_query_body_stmts,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1083] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    STATE(807), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1202] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    STATE(849), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1321] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(733), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1440] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(630), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1559] = 29,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(116), 1,
      anon_sym_IF,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(720), 1,
      sym_query_body_stmts,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1678] = 29,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(19), 1,
      anon_sym_WHILE,
    ACTIONS(21), 1,
      anon_sym_FOREACH,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_PRINT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(51), 1,
      sym_name,
    STATE(442), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_accum_type,
    STATE(552), 1,
      sym_query_body_stmts,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_base_type,
    STATE(792), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(786), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
    STATE(788), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1797] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(118), 41,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1854] = 6,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(122), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [1915] = 6,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(130), 35,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [1975] = 5,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(136), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2033] = 4,
    STATE(24), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2089] = 5,
    ACTIONS(150), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(146), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2147] = 4,
    STATE(23), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(122), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2203] = 6,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(130), 35,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2263] = 4,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(146), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2319] = 5,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2377] = 5,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2435] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(166), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2488] = 4,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(136), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2543] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(146), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2596] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(172), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2649] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(176), 39,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2702] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(130), 35,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2756] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(182), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2808] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(136), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2860] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(182), 38,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2912] = 5,
    ACTIONS(190), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [2967] = 5,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(159), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3022] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(196), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3077] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3132] = 5,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 3,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3187] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(172), 37,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3237] = 4,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(212), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3289] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 37,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3339] = 4,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(220), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3391] = 4,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(226), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3443] = 4,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(232), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3495] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(238), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3544] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(242), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3593] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3642] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(232), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3691] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(250), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3740] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(254), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3789] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(258), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3838] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3887] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3936] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [3985] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4034] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4083] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 3,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4132] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(288), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4181] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4230] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(292), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4279] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(296), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4328] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(300), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4377] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(304), 36,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
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
  [4426] = 5,
    ACTIONS(310), 1,
      anon_sym_TYPEDEF,
    ACTIONS(308), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(69), 2,
      sym_typedef,
      aux_sym_query_body_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(313), 33,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
      anon_sym_ARRAYACCUM,
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
  [4478] = 29,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_SELECT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(335), 1,
      sym_name,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(251), 1,
      sym_expr,
    STATE(480), 1,
      sym_simple_set,
    STATE(607), 1,
      sym_gsql_select_clause,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(701), 3,
      sym_seed_set,
      sym__select_stmt,
      sym_gsql_select_block,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [4577] = 3,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 34,
      anon_sym_TYPEDEF,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
      anon_sym_ARRAYACCUM,
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
  [4623] = 3,
    ACTIONS(347), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(349), 34,
      anon_sym_TYPEDEF,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
      anon_sym_ARRAYACCUM,
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
  [4669] = 7,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(130), 26,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4723] = 3,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 33,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
      anon_sym_ARRAYACCUM,
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
  [4768] = 8,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(359), 1,
      anon_sym_LT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(130), 27,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [4823] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(537), 1,
      sym_dml_sub_stmt_list,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [4893] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(499), 1,
      sym_dml_sub_stmt_list,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [4963] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    ACTIONS(371), 1,
      anon_sym_IF,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(677), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5033] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(527), 1,
      sym_dml_sub_stmt_list,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5103] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    ACTIONS(371), 1,
      anon_sym_IF,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(691), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5173] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(629), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5243] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    STATE(839), 1,
      sym_dml_sub_stmt_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5313] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(571), 1,
      sym_dml_sub_stmt_list,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5383] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    STATE(848), 1,
      sym_dml_sub_stmt_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5453] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(681), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5523] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(558), 1,
      sym_dml_sub_stmt_list,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5593] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(359), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    STATE(842), 1,
      sym_dml_sub_stmt_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5663] = 28,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(203), 1,
      sym_expr,
    STATE(534), 1,
      sym_condition,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_arg_list,
    STATE(865), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [5756] = 15,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(361), 1,
      anon_sym_IF,
    ACTIONS(363), 1,
      anon_sym_CASE,
    ACTIONS(365), 1,
      anon_sym_WHILE,
    ACTIONS(367), 1,
      anon_sym_FOREACH,
    ACTIONS(369), 1,
      sym_name,
    STATE(364), 1,
      sym_dml_sub_stmt,
    STATE(523), 1,
      sym_global_accum_name,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
    STATE(373), 11,
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
  [5823] = 28,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(199), 1,
      sym_expr,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(534), 1,
      sym_condition,
    STATE(604), 1,
      sym_arg_list,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [5916] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(478), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6006] = 26,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(275), 1,
      sym_expr,
    STATE(469), 1,
      sym_simple_set,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_arg_list,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6094] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(554), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6184] = 26,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(276), 1,
      sym_expr,
    STATE(469), 1,
      sym_simple_set,
    STATE(604), 1,
      sym_arg_list,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6272] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(726), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6360] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(564), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6450] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(814), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6538] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(490), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6628] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(811), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6716] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(793), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6804] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(260), 1,
      sym_expr,
    STATE(427), 1,
      sym_v_expr_set,
    STATE(433), 1,
      sym_print_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6892] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(847), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6980] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7068] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(704), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7156] = 13,
    ACTIONS(437), 1,
      anon_sym_IN,
    ACTIONS(441), 1,
      anon_sym_NOT,
    ACTIONS(443), 1,
      anon_sym_IS,
    ACTIONS(445), 1,
      anon_sym_BETWEEN,
    ACTIONS(447), 1,
      anon_sym_LIKE,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      sym_math_operator,
    STATE(153), 1,
      sym_comparison_operator,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(433), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [7218] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(795), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7306] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(334), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7396] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(826), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7484] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(531), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7574] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(843), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7662] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(513), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7752] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(332), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7842] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(695), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7930] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(505), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8020] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(694), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8108] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(550), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8198] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(832), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8286] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(530), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8376] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(658), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8464] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(555), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8554] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(563), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8644] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(400), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8734] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(260), 1,
      sym_expr,
    STATE(427), 1,
      sym_v_expr_set,
    STATE(464), 1,
      sym_print_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8822] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(572), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8912] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(466), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9002] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(458), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9092] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(467), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(316), 1,
      sym_expr,
    STATE(450), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9180] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(451), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9270] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      anon_sym_NOT,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_expr,
    STATE(498), 1,
      sym_condition,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9360] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(831), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9448] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9536] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(828), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9624] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(281), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(752), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9709] = 4,
    STATE(148), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9752] = 6,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(187), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(122), 23,
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
  [9799] = 6,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      sym_math_operator,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(479), 19,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_post_DASHaccum,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9846] = 7,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 20,
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
  [9895] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(735), 1,
      sym_arg_list,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9980] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(295), 1,
      sym_expr,
    STATE(553), 1,
      sym_v_set_proj,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10065] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(295), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(645), 1,
      sym_v_set_proj,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10150] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(768), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10235] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(801), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10320] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(275), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_arg_list,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10405] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(276), 1,
      sym_expr,
    STATE(604), 1,
      sym_arg_list,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10490] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(281), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(783), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10575] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(292), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(820), 1,
      sym_arg_list,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10660] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(324), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10742] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(134), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10824] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10906] = 6,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 20,
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
  [10952] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(318), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11034] = 6,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 20,
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
  [11080] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(239), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11162] = 4,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(146), 24,
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
  [11204] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      sym_digit,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(197), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11286] = 5,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 23,
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
  [11330] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(251), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11412] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(299), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11494] = 5,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
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
  [11538] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(319), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11620] = 24,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(294), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11702] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(254), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11784] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(320), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11866] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(314), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11948] = 24,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(217), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12030] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(241), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12112] = 5,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(136), 23,
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
  [12156] = 4,
    STATE(187), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(122), 24,
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
  [12198] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(298), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12280] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      sym_name,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      sym_digit,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12362] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(240), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12444] = 5,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(172), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(146), 23,
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
  [12488] = 15,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(725), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(703), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
  [12552] = 24,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(212), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12634] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(304), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12716] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(326), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12798] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(433), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
    ACTIONS(304), 17,
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
  [12840] = 24,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_name,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(297), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12922] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(249), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13004] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(322), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13086] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(248), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13168] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(258), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13250] = 24,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      anon_sym_COALESCE,
    ACTIONS(385), 1,
      anon_sym_ISEMPTY,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_name,
    STATE(150), 1,
      sym_name_dot,
    STATE(152), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(305), 1,
      sym_expr,
    STATE(606), 1,
      sym_local_accum_name,
    STATE(865), 1,
      sym_aggregator,
    STATE(226), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(231), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13332] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(323), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13414] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(325), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13496] = 15,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(707), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(703), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
  [13560] = 4,
    STATE(172), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 24,
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
  [13602] = 24,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_COALESCE,
    ACTIONS(329), 1,
      anon_sym_ISEMPTY,
    ACTIONS(333), 1,
      anon_sym_COUNT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_name,
    STATE(21), 1,
      sym_global_accum_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(250), 1,
      sym_expr,
    STATE(608), 1,
      sym_local_accum_name,
    STATE(765), 1,
      sym_aggregator,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13684] = 14,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(513), 1,
      sym_name,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(713), 3,
      sym_accum_type,
      sym__element_type,
      sym_base_type,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
  [13746] = 14,
    ACTIONS(23), 1,
      anon_sym_SUMACCUM,
    ACTIONS(31), 1,
      anon_sym_LISTACCUM,
    ACTIONS(35), 1,
      anon_sym_MAPACCUM,
    ACTIONS(37), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(39), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(41), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(515), 1,
      sym_name,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(834), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
    ACTIONS(25), 10,
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
  [13807] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(166), 24,
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
  [13846] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(118), 24,
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
  [13885] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(176), 24,
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
  [13924] = 4,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(136), 23,
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
  [13965] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(146), 24,
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
  [14004] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(172), 24,
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
  [14043] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(479), 19,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
  [14086] = 4,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 27,
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
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14127] = 17,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_IN,
    ACTIONS(441), 1,
      anon_sym_NOT,
    ACTIONS(443), 1,
      anon_sym_IS,
    ACTIONS(445), 1,
      anon_sym_BETWEEN,
    ACTIONS(447), 1,
      anon_sym_LIKE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(153), 1,
      sym_comparison_operator,
    STATE(165), 1,
      sym_math_operator,
    STATE(461), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(433), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14193] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(182), 23,
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
  [14231] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(136), 23,
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
  [14269] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(523), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 20,
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
  [14309] = 17,
    ACTIONS(437), 1,
      anon_sym_IN,
    ACTIONS(441), 1,
      anon_sym_NOT,
    ACTIONS(443), 1,
      anon_sym_IS,
    ACTIONS(445), 1,
      anon_sym_BETWEEN,
    ACTIONS(447), 1,
      anon_sym_LIKE,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(153), 1,
      sym_comparison_operator,
    STATE(165), 1,
      sym_math_operator,
    STATE(461), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(433), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(435), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14375] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(182), 23,
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
  [14413] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(523), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 20,
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
  [14453] = 5,
    ACTIONS(525), 1,
      sym_digit,
    STATE(206), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(186), 21,
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
  [14494] = 5,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 4,
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
  [14535] = 5,
    ACTIONS(528), 1,
      sym_digit,
    STATE(206), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 21,
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
  [14576] = 5,
    ACTIONS(530), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(159), 21,
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
  [14617] = 5,
    ACTIONS(528), 1,
      sym_digit,
    STATE(206), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(202), 21,
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
  [14658] = 4,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(232), 21,
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
  [14696] = 6,
    STATE(165), 1,
      sym_math_operator,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(479), 14,
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
  [14738] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(172), 22,
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
  [14774] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(166), 22,
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
  [14810] = 4,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(212), 21,
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
  [14848] = 4,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(220), 21,
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
  [14886] = 4,
    STATE(165), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(246), 21,
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
  [14924] = 4,
    ACTIONS(539), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(226), 21,
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
  [14962] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(296), 21,
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
  [14997] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15032] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(288), 21,
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
  [15067] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15102] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15137] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(258), 21,
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
  [15172] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(300), 21,
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
  [15207] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 21,
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
  [15242] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(250), 21,
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
  [15277] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(246), 21,
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
  [15312] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15347] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(238), 21,
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
  [15382] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(304), 21,
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
  [15417] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 4,
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
  [15452] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(292), 21,
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
  [15487] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15522] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(433), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(304), 18,
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
  [15559] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(242), 21,
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
  [15594] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(254), 21,
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
  [15629] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(232), 21,
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
  [15664] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(541), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [15698] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(543), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [15732] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(545), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [15766] = 8,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_LT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(130), 10,
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
  [15805] = 8,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_LT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(130), 10,
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
  [15844] = 9,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(130), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15884] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(555), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [15912] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(557), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(559), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [15940] = 7,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_query_param,
    STATE(257), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(775), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [15975] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(567), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16006] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(569), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16037] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(571), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16068] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(573), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16099] = 8,
    ACTIONS(575), 1,
      anon_sym_GT,
    ACTIONS(580), 1,
      anon_sym_VERTEX,
    ACTIONS(583), 1,
      sym_name,
    STATE(262), 1,
      sym_tuple_field,
    STATE(661), 1,
      sym_base_type,
    STATE(252), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(577), 10,
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
  [16136] = 8,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(586), 1,
      anon_sym_GT,
    ACTIONS(588), 1,
      sym_name,
    STATE(262), 1,
      sym_tuple_field,
    STATE(661), 1,
      sym_base_type,
    STATE(252), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [16173] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(590), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16204] = 7,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_query_param,
    STATE(247), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(775), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [16239] = 8,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(588), 1,
      sym_name,
    ACTIONS(594), 1,
      anon_sym_GT,
    STATE(262), 1,
      sym_tuple_field,
    STATE(661), 1,
      sym_base_type,
    STATE(253), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [16276] = 7,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_query_param,
    STATE(257), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(775), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 10,
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
  [16311] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16342] = 11,
    ACTIONS(606), 1,
      anon_sym_SUMACCUM,
    ACTIONS(612), 1,
      anon_sym_LISTACCUM,
    ACTIONS(616), 1,
      anon_sym_MAPACCUM,
    ACTIONS(618), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(620), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(622), 1,
      anon_sym_ARRAYACCUM,
    STATE(670), 1,
      sym_accum_type,
    ACTIONS(608), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(614), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(610), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
  [16384] = 7,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_AS,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16418] = 3,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(630), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
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
  [16444] = 5,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_GT,
    STATE(263), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
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
  [16473] = 5,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_GT,
    STATE(265), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 12,
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
  [16502] = 4,
    ACTIONS(644), 1,
      sym_digit,
    STATE(268), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [16529] = 5,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_GT,
    STATE(265), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 12,
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
  [16558] = 4,
    ACTIONS(644), 1,
      sym_digit,
    STATE(268), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [16585] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(653), 1,
      anon_sym_DASH,
    STATE(548), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16624] = 4,
    ACTIONS(657), 1,
      sym_digit,
    STATE(268), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [16651] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(653), 1,
      anon_sym_DASH,
    STATE(628), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16690] = 4,
    ACTIONS(662), 1,
      anon_sym_LT,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(664), 12,
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
  [16717] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
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
  [16740] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(653), 1,
      anon_sym_DASH,
    STATE(778), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(68), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16779] = 3,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 12,
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
  [16803] = 6,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(588), 1,
      sym_name,
    STATE(273), 1,
      sym_tuple_field,
    STATE(661), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [16833] = 8,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_math_operator,
    STATE(461), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16867] = 8,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_math_operator,
    STATE(461), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16901] = 3,
    ACTIONS(670), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [16925] = 3,
    ACTIONS(672), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [16949] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(674), 12,
      anon_sym_RPAREN,
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
  [16975] = 5,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    STATE(303), 1,
      sym_query_param,
    STATE(775), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [17003] = 4,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(130), 10,
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
  [17029] = 3,
    ACTIONS(678), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(680), 12,
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
  [17053] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 12,
      anon_sym_RPAREN,
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
  [17079] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(513), 1,
      sym_name,
    STATE(713), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [17107] = 13,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(343), 1,
      sym_step_source_set,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(370), 1,
      sym_path_pattern,
    STATE(390), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(416), 2,
      sym_step,
      sym_step_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17151] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(690), 1,
      sym_name,
    STATE(712), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [17179] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 12,
      anon_sym_RPAREN,
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
  [17205] = 14,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_atomic_edge_pattern,
    STATE(432), 1,
      sym_atomic_edge_type,
    STATE(518), 1,
      sym_path_edge_pattern,
    STATE(520), 1,
      sym_disj_pattern,
    STATE(634), 1,
      sym_step_edge_types,
    STATE(772), 1,
      sym_step_edge_set,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17251] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(507), 1,
      sym_name,
    STATE(703), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [17279] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(707), 1,
      sym_name,
    STATE(710), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
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
  [17307] = 3,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(711), 12,
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
  [17331] = 7,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_math_operator,
    STATE(473), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(521), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17363] = 3,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(664), 12,
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
  [17387] = 4,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 10,
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
  [17412] = 6,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_AS,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17441] = 4,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    STATE(601), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [17466] = 5,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17493] = 6,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17522] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(723), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17549] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(545), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [17572] = 4,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    STATE(501), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [17597] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [17618] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [17639] = 7,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    STATE(538), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17670] = 5,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(449), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(723), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(439), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17697] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [17718] = 4,
    ACTIONS(565), 1,
      anon_sym_VERTEX,
    STATE(584), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 10,
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
  [17743] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [17764] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(541), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [17787] = 12,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_atomic_edge_pattern,
    STATE(438), 1,
      sym_atomic_edge_type,
    STATE(520), 1,
      sym_disj_pattern,
    STATE(568), 1,
      sym_path_edge_pattern,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17827] = 4,
    ACTIONS(735), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(733), 10,
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
  [17851] = 12,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_atomic_edge_pattern,
    STATE(438), 1,
      sym_atomic_edge_type,
    STATE(518), 1,
      sym_path_edge_pattern,
    STATE(520), 1,
      sym_disj_pattern,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17891] = 12,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_atomic_edge_pattern,
    STATE(438), 1,
      sym_atomic_edge_type,
    STATE(439), 1,
      sym_edge_set_type,
    STATE(520), 1,
      sym_disj_pattern,
    STATE(615), 1,
      sym_path_edge_pattern,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17931] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17957] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 12,
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
      anon_sym_post_DASHaccum,
  [17977] = 6,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(739), 1,
      anon_sym_WHEN,
    STATE(149), 1,
      sym_math_operator,
    STATE(482), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18005] = 12,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_atomic_edge_pattern,
    STATE(438), 1,
      sym_atomic_edge_type,
    STATE(520), 1,
      sym_disj_pattern,
    STATE(615), 1,
      sym_path_edge_pattern,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18045] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(741), 1,
      anon_sym_AND,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18070] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18095] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18120] = 11,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_GT,
    ACTIONS(749), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(389), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18157] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18182] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18207] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18232] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18257] = 5,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18282] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18300] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(634), 1,
      sym_step_edge_types,
    STATE(648), 1,
      sym_atomic_edge_type,
    STATE(772), 1,
      sym_step_edge_set,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18334] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(545), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18352] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(436), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18386] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(366), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18420] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(761), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18438] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(377), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18472] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18490] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(347), 1,
      sym_vertex_set_type,
    STATE(350), 1,
      sym_atomic_vertex_type,
    STATE(352), 1,
      sym_step_vertex_types,
    STATE(411), 1,
      sym_step_vertex_set,
    ACTIONS(686), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18524] = 10,
    ACTIONS(763), 1,
      anon_sym_SEMI,
    ACTIONS(765), 1,
      anon_sym_WHERE,
    ACTIONS(767), 1,
      anon_sym_ACCUM,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    STATE(353), 1,
      sym_where_clause,
    STATE(408), 1,
      sym_accum_clause,
    STATE(690), 1,
      sym_limit_clause,
    STATE(404), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18558] = 5,
    ACTIONS(775), 1,
      anon_sym_DOT,
    ACTIONS(777), 1,
      anon_sym_PLUS_EQ,
    STATE(340), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18582] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(634), 1,
      sym_step_edge_types,
    STATE(648), 1,
      sym_atomic_edge_type,
    STATE(686), 1,
      sym_step_edge_set,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18616] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE2,
  [18634] = 4,
    ACTIONS(775), 1,
      anon_sym_DOT,
    STATE(342), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18655] = 9,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(703), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_atomic_edge_type,
    STATE(452), 1,
      sym_atomic_edge_pattern,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18686] = 4,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(342), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18707] = 5,
    ACTIONS(790), 1,
      anon_sym_DASH,
    STATE(358), 1,
      aux_sym_path_pattern_repeat1,
    STATE(360), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18730] = 4,
    ACTIONS(794), 1,
      anon_sym_DASH,
    STATE(344), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18750] = 4,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18770] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(802), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18786] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(804), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18802] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18818] = 3,
    ACTIONS(810), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18836] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18852] = 4,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18872] = 3,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18890] = 8,
    ACTIONS(767), 1,
      anon_sym_ACCUM,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    STATE(405), 1,
      sym_accum_clause,
    STATE(732), 1,
      sym_limit_clause,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18918] = 3,
    ACTIONS(810), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18936] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18952] = 4,
    ACTIONS(826), 1,
      anon_sym_DASH,
    STATE(358), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18972] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18988] = 4,
    ACTIONS(826), 1,
      anon_sym_DASH,
    STATE(344), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(830), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19008] = 4,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19028] = 4,
    ACTIONS(836), 1,
      anon_sym_DASH,
    STATE(365), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(834), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19047] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19062] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(705), 1,
      sym_name,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(446), 1,
      sym_atomic_edge_type,
    ACTIONS(701), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19087] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(840), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19102] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19117] = 4,
    ACTIONS(844), 1,
      anon_sym_DASH,
    STATE(365), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(842), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19136] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(847), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19151] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(849), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19166] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(851), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19181] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(853), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19196] = 4,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(857), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19215] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19230] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 1,
      sym_name,
    STATE(525), 1,
      sym_seed,
    STATE(647), 1,
      sym_global_accum_name,
    ACTIONS(863), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19255] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(867), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19270] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(869), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19285] = 4,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19304] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(878), 1,
      anon_sym_AT_AT,
    ACTIONS(880), 1,
      sym_name,
    STATE(749), 1,
      sym_for_each_control,
    STATE(613), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19329] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(882), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19344] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(878), 1,
      anon_sym_AT_AT,
    ACTIONS(880), 1,
      sym_name,
    STATE(760), 1,
      sym_for_each_control,
    STATE(613), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19369] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(886), 1,
      anon_sym_RANGE,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(449), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19396] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(890), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19411] = 4,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(892), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19430] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19445] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19460] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(898), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19475] = 6,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    ACTIONS(902), 1,
      anon_sym_CREATE,
    ACTIONS(905), 1,
      anon_sym_INTERPRET,
    STATE(385), 2,
      sym__definition,
      aux_sym_gsql_repeat1,
    STATE(590), 2,
      sym_create_query,
      sym_interpret_query,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19498] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    ACTIONS(908), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19525] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    ACTIONS(910), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(477), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19552] = 6,
    ACTIONS(7), 1,
      anon_sym_CREATE,
    ACTIONS(9), 1,
      anon_sym_INTERPRET,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
    STATE(385), 2,
      sym__definition,
      aux_sym_gsql_repeat1,
    STATE(590), 2,
      sym_create_query,
      sym_interpret_query,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19575] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(914), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19589] = 3,
    ACTIONS(918), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(916), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19605] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(453), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19629] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19653] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19677] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(477), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19701] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19725] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(449), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19749] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(309), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19773] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(300), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19797] = 6,
    ACTIONS(922), 1,
      anon_sym_DOT,
    ACTIONS(924), 1,
      anon_sym_DASH,
    ACTIONS(926), 1,
      sym_digit,
    STATE(302), 1,
      sym_numeric,
    STATE(308), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19819] = 3,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(930), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19835] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19849] = 6,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    STATE(747), 1,
      sym_limit_clause,
    STATE(430), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19871] = 6,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(934), 1,
      anon_sym_SEMI,
    STATE(675), 1,
      sym_limit_clause,
    STATE(430), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19893] = 6,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_limit_clause,
    STATE(430), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19915] = 6,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    STATE(747), 1,
      sym_limit_clause,
    STATE(403), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19937] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(459), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19961] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_global_accum_name,
    STATE(455), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19985] = 6,
    ACTIONS(769), 1,
      anon_sym_LIMIT,
    ACTIONS(771), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_limit_clause,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20007] = 6,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(865), 1,
      sym_name,
    STATE(637), 1,
      sym_seed,
    STATE(647), 1,
      sym_global_accum_name,
    ACTIONS(863), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20029] = 7,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    ACTIONS(938), 1,
      sym_name,
    STATE(167), 1,
      sym_name_dot,
    STATE(201), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20053] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(940), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [20067] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(945), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20084] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20097] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(947), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20110] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(949), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20123] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(857), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20136] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      sym_name,
    STATE(680), 1,
      sym_string_literal,
    STATE(722), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20157] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20170] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(949), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20183] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20196] = 6,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_SEMI,
    ACTIONS(959), 1,
      anon_sym_WHERE,
    ACTIONS(961), 1,
      anon_sym_to_csv,
    STATE(412), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20217] = 4,
    ACTIONS(965), 1,
      anon_sym_PIPE,
    STATE(437), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(963), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20234] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(967), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20247] = 6,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(969), 1,
      anon_sym_EQ,
    ACTIONS(971), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20268] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(973), 1,
      sym_name,
    STATE(680), 1,
      sym_string_literal,
    STATE(699), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20289] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(975), 1,
      sym_name,
    STATE(678), 1,
      sym_file_path,
    STATE(680), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20310] = 3,
    ACTIONS(628), 1,
      anon_sym_AS,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20325] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(977), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20338] = 4,
    ACTIONS(965), 1,
      anon_sym_PIPE,
    STATE(422), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(979), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20355] = 4,
    ACTIONS(983), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(981), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(430), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20372] = 6,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(986), 1,
      anon_sym_EQ,
    ACTIONS(988), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20393] = 4,
    ACTIONS(992), 1,
      anon_sym_GT,
    ACTIONS(990), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(994), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20410] = 6,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      anon_sym_WHERE,
    ACTIONS(1000), 1,
      anon_sym_to_csv,
    STATE(421), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20431] = 4,
    ACTIONS(200), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20448] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(1002), 1,
      sym_name,
    STATE(680), 1,
      sym_string_literal,
    STATE(808), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20469] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1004), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20482] = 4,
    ACTIONS(1008), 1,
      anon_sym_PIPE,
    STATE(437), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1006), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20499] = 3,
    ACTIONS(992), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(994), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20514] = 5,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_PIPE,
    STATE(570), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(947), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20533] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1015), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [20545] = 3,
    ACTIONS(1019), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1017), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20559] = 5,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(1021), 1,
      anon_sym_EQ,
    ACTIONS(1023), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20577] = 3,
    ACTIONS(1027), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1025), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20591] = 5,
    ACTIONS(878), 1,
      anon_sym_AT_AT,
    ACTIONS(1029), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(587), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20609] = 4,
    ACTIONS(1033), 1,
      anon_sym_WHEN,
    STATE(445), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1031), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20625] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1036), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20637] = 4,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(723), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20653] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(1041), 1,
      sym_name,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(626), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20671] = 3,
    ACTIONS(1043), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20685] = 5,
    ACTIONS(1045), 1,
      anon_sym_ELSE,
    ACTIONS(1047), 1,
      anon_sym_END,
    ACTIONS(1049), 1,
      anon_sym_WHEN,
    STATE(484), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20703] = 4,
    ACTIONS(1051), 1,
      anon_sym_LIMIT,
    ACTIONS(1053), 1,
      anon_sym_DO,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20719] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1006), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20731] = 3,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20745] = 3,
    ACTIONS(1059), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1057), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20759] = 3,
    ACTIONS(1061), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20773] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(723), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20789] = 5,
    ACTIONS(1066), 1,
      anon_sym_ELSE,
    ACTIONS(1068), 1,
      anon_sym_END,
    ACTIONS(1070), 1,
      anon_sym_WHEN,
    STATE(472), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20807] = 4,
    ACTIONS(1072), 1,
      anon_sym_LIMIT,
    ACTIONS(1074), 1,
      anon_sym_DO,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20823] = 3,
    ACTIONS(1061), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20837] = 3,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20851] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1078), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20867] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1080), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20879] = 3,
    ACTIONS(1084), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1082), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20893] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(945), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20905] = 5,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_EQ,
    ACTIONS(1090), 1,
      anon_sym_SEMI,
    STATE(528), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20923] = 4,
    ACTIONS(1092), 1,
      anon_sym_SEMI,
    ACTIONS(1094), 1,
      anon_sym_to_csv,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20939] = 3,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20953] = 3,
    ACTIONS(1100), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1098), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20967] = 3,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1104), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20981] = 5,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
    STATE(540), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20999] = 5,
    ACTIONS(1110), 1,
      sym_name,
    ACTIONS(1112), 1,
      sym_digit,
    STATE(580), 1,
      aux_sym_accum_type_repeat1,
    STATE(846), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21017] = 4,
    ACTIONS(1116), 1,
      anon_sym_WHEN,
    STATE(472), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1114), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21033] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1078), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21049] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(546), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21065] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(1041), 1,
      sym_name,
    STATE(423), 1,
      sym_global_accum_name,
    STATE(585), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21083] = 3,
    ACTIONS(1121), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1119), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21097] = 3,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21111] = 4,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    ACTIONS(1127), 1,
      anon_sym_to_csv,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21127] = 3,
    ACTIONS(1129), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21141] = 3,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1104), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21155] = 3,
    ACTIONS(1135), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1133), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21169] = 5,
    ACTIONS(739), 1,
      anon_sym_WHEN,
    ACTIONS(1137), 1,
      anon_sym_ELSE,
    ACTIONS(1139), 1,
      anon_sym_END,
    STATE(445), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21187] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 4,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [21199] = 4,
    ACTIONS(1143), 1,
      anon_sym_WHEN,
    STATE(484), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1141), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21215] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(465), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21231] = 5,
    ACTIONS(1110), 1,
      sym_name,
    ACTIONS(1112), 1,
      sym_digit,
    STATE(580), 1,
      aux_sym_accum_type_repeat1,
    STATE(824), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21249] = 5,
    ACTIONS(878), 1,
      anon_sym_AT_AT,
    ACTIONS(1029), 1,
      sym_name,
    STATE(339), 1,
      sym_global_accum_name,
    STATE(510), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21267] = 4,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 1,
      anon_sym_PIPE2,
    STATE(488), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21282] = 4,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(1155), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21297] = 3,
    ACTIONS(1157), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21310] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21321] = 4,
    ACTIONS(1159), 1,
      anon_sym_ELSE,
    ACTIONS(1162), 1,
      anon_sym_END,
    STATE(492), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21336] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1164), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21347] = 4,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_GT,
    STATE(495), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21362] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_GT,
    STATE(495), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21377] = 4,
    ACTIONS(1175), 1,
      anon_sym_DQUOTE,
    ACTIONS(1177), 1,
      aux_sym_string_literal_token1,
    STATE(515), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21392] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21407] = 3,
    ACTIONS(1183), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21420] = 3,
    STATE(559), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1185), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21433] = 4,
    ACTIONS(1187), 1,
      sym_name,
    STATE(356), 1,
      sym_step_source_set,
    STATE(401), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21448] = 4,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_GT,
    STATE(511), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21463] = 4,
    ACTIONS(1175), 1,
      anon_sym_SQUOTE,
    ACTIONS(1191), 1,
      aux_sym_string_literal_token2,
    STATE(516), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21478] = 4,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21493] = 4,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21508] = 3,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21521] = 4,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
    ACTIONS(1207), 1,
      sym_name,
    STATE(469), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21536] = 4,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21551] = 4,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21566] = 4,
    ACTIONS(1218), 1,
      anon_sym_AT,
    ACTIONS(1220), 1,
      sym_name,
    STATE(168), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21581] = 4,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    ACTIONS(1224), 1,
      anon_sym_PIPE2,
    STATE(586), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21596] = 4,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_GT,
    STATE(495), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21611] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1228), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21622] = 3,
    ACTIONS(1230), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21635] = 4,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
    ACTIONS(1207), 1,
      sym_name,
    STATE(419), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21650] = 4,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 1,
      aux_sym_string_literal_token1,
    STATE(569), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21665] = 4,
    ACTIONS(1232), 1,
      anon_sym_SQUOTE,
    ACTIONS(1236), 1,
      aux_sym_string_literal_token2,
    STATE(560), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21680] = 4,
    ACTIONS(1238), 1,
      anon_sym_AT,
    ACTIONS(1240), 1,
      sym_name,
    STATE(25), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21695] = 4,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    ACTIONS(1244), 1,
      anon_sym_DOT,
    ACTIONS(1246), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21710] = 4,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21725] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(979), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21736] = 4,
    ACTIONS(1252), 1,
      anon_sym_ELSE,
    ACTIONS(1254), 1,
      anon_sym_END,
    STATE(492), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21751] = 4,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21766] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(1260), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21781] = 4,
    ACTIONS(1236), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1262), 1,
      anon_sym_SQUOTE,
    STATE(560), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21796] = 4,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21811] = 4,
    ACTIONS(1234), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1262), 1,
      anon_sym_DQUOTE,
    STATE(569), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21826] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1266), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [21837] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_SEMI,
    STATE(551), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21852] = 3,
    ACTIONS(1272), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21865] = 3,
    ACTIONS(1274), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21878] = 3,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21891] = 4,
    ACTIONS(1278), 1,
      anon_sym_ELSE,
    ACTIONS(1281), 1,
      anon_sym_END,
    STATE(532), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21906] = 4,
    ACTIONS(1238), 1,
      anon_sym_AT,
    ACTIONS(1283), 1,
      sym_name,
    STATE(25), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21921] = 3,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21934] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1287), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21945] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(678), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21956] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1289), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [21967] = 4,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21982] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    STATE(551), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21997] = 4,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(1295), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22012] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1297), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22023] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22034] = 4,
    ACTIONS(1299), 1,
      anon_sym_OR,
    ACTIONS(1301), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1303), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22049] = 4,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(1307), 1,
      anon_sym_PIPE,
    STATE(544), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22064] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1312), 1,
      anon_sym_GT,
    STATE(547), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22079] = 3,
    ACTIONS(1316), 1,
      anon_sym_EQ,
    ACTIONS(1314), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22092] = 4,
    ACTIONS(1318), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_GT,
    STATE(547), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22107] = 4,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    STATE(539), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22122] = 4,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22137] = 3,
    ACTIONS(1325), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22150] = 4,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(551), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22165] = 4,
    ACTIONS(1330), 1,
      anon_sym_ELSE,
    ACTIONS(1332), 1,
      anon_sym_END,
    STATE(521), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22180] = 4,
    ACTIONS(1248), 1,
      anon_sym_COMMA,
    ACTIONS(1334), 1,
      anon_sym_RBRACK,
    STATE(519), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22195] = 3,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22208] = 3,
    ACTIONS(1338), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22221] = 3,
    ACTIONS(1342), 1,
      anon_sym_EQ,
    ACTIONS(1340), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22234] = 4,
    ACTIONS(1344), 1,
      anon_sym_AT,
    ACTIONS(1346), 1,
      sym_name,
    STATE(337), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22249] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1348), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22260] = 4,
    ACTIONS(1350), 1,
      anon_sym_ELSE,
    ACTIONS(1352), 1,
      anon_sym_END,
    STATE(532), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22275] = 4,
    ACTIONS(1354), 1,
      anon_sym_SQUOTE,
    ACTIONS(1356), 1,
      aux_sym_string_literal_token2,
    STATE(560), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22290] = 4,
    ACTIONS(1340), 1,
      anon_sym_SEMI,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(561), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22305] = 4,
    ACTIONS(1344), 1,
      anon_sym_AT,
    ACTIONS(1362), 1,
      sym_name,
    STATE(642), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22320] = 3,
    ACTIONS(1364), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22333] = 3,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22346] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_GT,
    STATE(581), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22361] = 4,
    ACTIONS(1218), 1,
      anon_sym_AT,
    ACTIONS(1370), 1,
      sym_name,
    STATE(168), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22376] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1015), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [22387] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1372), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22398] = 4,
    ACTIONS(1374), 1,
      anon_sym_DQUOTE,
    ACTIONS(1376), 1,
      aux_sym_string_literal_token1,
    STATE(569), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22413] = 4,
    ACTIONS(1013), 1,
      anon_sym_PIPE,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22428] = 4,
    ACTIONS(1381), 1,
      anon_sym_ELSE,
    ACTIONS(1383), 1,
      anon_sym_END,
    STATE(559), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22443] = 3,
    ACTIONS(1385), 1,
      anon_sym_THEN,
    ACTIONS(928), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22456] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1372), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22467] = 4,
    ACTIONS(1330), 1,
      anon_sym_ELSE,
    ACTIONS(1332), 1,
      anon_sym_END,
    STATE(521), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22482] = 4,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    STATE(575), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22497] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1392), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22508] = 4,
    ACTIONS(1394), 1,
      anon_sym_SQUOTE,
    ACTIONS(1396), 1,
      aux_sym_string_literal_token2,
    STATE(524), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22523] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_GT,
    STATE(545), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22538] = 4,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    STATE(575), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22553] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1404), 1,
      anon_sym_DO,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22568] = 4,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_GT,
    STATE(547), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22583] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1406), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22594] = 4,
    ACTIONS(1394), 1,
      anon_sym_DQUOTE,
    ACTIONS(1408), 1,
      aux_sym_string_literal_token1,
    STATE(526), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1179), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22609] = 4,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_GT,
    STATE(494), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22624] = 4,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_PIPE,
    STATE(570), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22639] = 4,
    ACTIONS(1224), 1,
      anon_sym_PIPE2,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22654] = 2,
    ACTIONS(1146), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22664] = 2,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22674] = 3,
    ACTIONS(1416), 1,
      sym_digit,
    STATE(434), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22686] = 3,
    ACTIONS(1418), 1,
      anon_sym_LBRACE,
    STATE(582), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22698] = 2,
    ACTIONS(1420), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22708] = 3,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(840), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22720] = 3,
    ACTIONS(1424), 1,
      anon_sym_IN,
    ACTIONS(1426), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22732] = 3,
    ACTIONS(1428), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1430), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22744] = 3,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(777), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22756] = 3,
    ACTIONS(1432), 1,
      sym_digit,
    STATE(264), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22768] = 3,
    ACTIONS(1434), 1,
      sym_digit,
    STATE(497), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22780] = 3,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(641), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22792] = 3,
    ACTIONS(1438), 1,
      anon_sym_DOT,
    ACTIONS(1440), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22804] = 2,
    ACTIONS(1442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22814] = 2,
    ACTIONS(1173), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22824] = 3,
    ACTIONS(1444), 1,
      anon_sym_SYNTAX,
    ACTIONS(1446), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22836] = 2,
    ACTIONS(1448), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22846] = 3,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(1452), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22858] = 3,
    ACTIONS(1454), 1,
      sym_digit,
    STATE(208), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22870] = 3,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22882] = 3,
    ACTIONS(1456), 1,
      anon_sym_FROM,
    STATE(336), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22894] = 3,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22906] = 3,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(741), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22918] = 3,
    ACTIONS(1458), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22930] = 3,
    ACTIONS(1440), 1,
      sym_digit,
    ACTIONS(1460), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22942] = 2,
    ACTIONS(1462), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22952] = 3,
    ACTIONS(1464), 1,
      anon_sym_IN,
    ACTIONS(1466), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22964] = 3,
    ACTIONS(1468), 1,
      anon_sym_SYNTAX,
    ACTIONS(1470), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22976] = 3,
    ACTIONS(1244), 1,
      anon_sym_DOT,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22988] = 2,
    ACTIONS(1474), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22998] = 3,
    ACTIONS(1476), 1,
      sym_digit,
    STATE(266), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23010] = 3,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23022] = 3,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    ACTIONS(1480), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23034] = 2,
    ACTIONS(1482), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23044] = 3,
    ACTIONS(1484), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23056] = 3,
    ACTIONS(1486), 1,
      anon_sym_IN,
    ACTIONS(1488), 1,
      anon_sym_LIKE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23068] = 3,
    ACTIONS(1285), 1,
      anon_sym_NULL,
    ACTIONS(1490), 1,
      anon_sym_NOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23080] = 3,
    ACTIONS(1492), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23092] = 3,
    ACTIONS(1070), 1,
      anon_sym_WHEN,
    STATE(457), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23104] = 2,
    ACTIONS(1305), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23114] = 2,
    ACTIONS(1494), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23124] = 2,
    ACTIONS(1496), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23134] = 2,
    ACTIONS(1185), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23144] = 2,
    ACTIONS(1498), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23154] = 3,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    STATE(579), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23166] = 3,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(751), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23178] = 2,
    ACTIONS(1500), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23188] = 3,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23200] = 3,
    ACTIONS(1506), 1,
      anon_sym_SYNTAX,
    ACTIONS(1508), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23212] = 2,
    ACTIONS(1510), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23222] = 2,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23232] = 3,
    ACTIONS(1512), 1,
      anon_sym_SYNTAX,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23244] = 2,
    ACTIONS(1516), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23254] = 2,
    ACTIONS(1518), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23264] = 3,
    ACTIONS(1520), 1,
      anon_sym_COMMA,
    STATE(641), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23276] = 2,
    ACTIONS(1523), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23286] = 3,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23298] = 3,
    ACTIONS(1525), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23310] = 2,
    ACTIONS(1196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23320] = 3,
    ACTIONS(1527), 1,
      anon_sym_DOT,
    ACTIONS(1529), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23332] = 2,
    ACTIONS(1270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23342] = 2,
    ACTIONS(990), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23352] = 2,
    ACTIONS(1531), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23362] = 3,
    ACTIONS(1533), 1,
      anon_sym_SYNTAX,
    ACTIONS(1535), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23374] = 2,
    ACTIONS(1537), 1,
      anon_sym_MIN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23383] = 2,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23392] = 2,
    ACTIONS(1541), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23401] = 2,
    ACTIONS(1543), 1,
      anon_sym_AVG,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23410] = 2,
    ACTIONS(1545), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23419] = 2,
    ACTIONS(1547), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23428] = 2,
    ACTIONS(1549), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23437] = 2,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23446] = 2,
    ACTIONS(1551), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23455] = 2,
    ACTIONS(1553), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23464] = 2,
    ACTIONS(1555), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23473] = 2,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23482] = 2,
    ACTIONS(1559), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23491] = 2,
    ACTIONS(1561), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23500] = 2,
    ACTIONS(1563), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23509] = 2,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23518] = 2,
    ACTIONS(1567), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23527] = 2,
    ACTIONS(1569), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23536] = 2,
    ACTIONS(1571), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23545] = 2,
    ACTIONS(1573), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23554] = 2,
    ACTIONS(1575), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23563] = 2,
    ACTIONS(1577), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23572] = 2,
    ACTIONS(1579), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23581] = 2,
    ACTIONS(1581), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23590] = 2,
    ACTIONS(1583), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23599] = 2,
    ACTIONS(1092), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23608] = 2,
    ACTIONS(1585), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23617] = 2,
    ACTIONS(1092), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23626] = 2,
    ACTIONS(1587), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23635] = 2,
    ACTIONS(1589), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23644] = 2,
    ACTIONS(1591), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23653] = 2,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23662] = 2,
    ACTIONS(1593), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23671] = 2,
    ACTIONS(1595), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23680] = 2,
    ACTIONS(1597), 1,
      anon_sym_STEP,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23689] = 2,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23698] = 2,
    ACTIONS(1601), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23707] = 2,
    ACTIONS(1603), 1,
      anon_sym_FROM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23716] = 2,
    ACTIONS(1605), 1,
      anon_sym_SELECT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23725] = 2,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23734] = 2,
    ACTIONS(1607), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23743] = 2,
    ACTIONS(1609), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23752] = 2,
    ACTIONS(1611), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23761] = 2,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23770] = 2,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23779] = 2,
    ACTIONS(1615), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23788] = 2,
    ACTIONS(1617), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23797] = 2,
    ACTIONS(1619), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23806] = 2,
    ACTIONS(1621), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23815] = 2,
    ACTIONS(1621), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23824] = 2,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23833] = 2,
    ACTIONS(1623), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23842] = 2,
    ACTIONS(1625), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23851] = 2,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23860] = 2,
    ACTIONS(1629), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23869] = 2,
    ACTIONS(1631), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23878] = 2,
    ACTIONS(1633), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23887] = 2,
    ACTIONS(1635), 1,
      anon_sym_NULL,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23896] = 2,
    ACTIONS(1637), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23905] = 2,
    ACTIONS(1639), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23914] = 2,
    ACTIONS(1641), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23923] = 2,
    ACTIONS(1643), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23932] = 2,
    ACTIONS(1645), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23941] = 2,
    ACTIONS(1647), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23950] = 2,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23959] = 2,
    ACTIONS(1651), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23968] = 2,
    ACTIONS(1653), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23977] = 2,
    ACTIONS(1655), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23986] = 2,
    ACTIONS(1657), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23995] = 2,
    ACTIONS(1659), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24004] = 2,
    ACTIONS(1661), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24013] = 2,
    ACTIONS(1663), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24022] = 2,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24031] = 2,
    ACTIONS(1667), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24040] = 2,
    ACTIONS(1669), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24049] = 2,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24058] = 2,
    ACTIONS(1673), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24067] = 2,
    ACTIONS(1675), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24076] = 2,
    ACTIONS(1677), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24085] = 2,
    ACTIONS(1679), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24094] = 2,
    ACTIONS(1681), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24103] = 2,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24112] = 2,
    ACTIONS(1683), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24121] = 2,
    ACTIONS(1685), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24130] = 2,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24139] = 2,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24148] = 2,
    ACTIONS(1663), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24157] = 2,
    ACTIONS(1689), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24166] = 2,
    ACTIONS(1691), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24175] = 2,
    ACTIONS(1693), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24184] = 2,
    ACTIONS(1695), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24193] = 2,
    ACTIONS(1697), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24202] = 2,
    ACTIONS(1699), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24211] = 2,
    ACTIONS(1701), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24220] = 2,
    ACTIONS(1703), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24229] = 2,
    ACTIONS(1705), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24238] = 2,
    ACTIONS(934), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24247] = 2,
    ACTIONS(1707), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24256] = 2,
    ACTIONS(1709), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24265] = 2,
    ACTIONS(1711), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24274] = 2,
    ACTIONS(1713), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24283] = 2,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24292] = 2,
    ACTIONS(1715), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24301] = 2,
    ACTIONS(1717), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24310] = 2,
    ACTIONS(1719), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24319] = 2,
    ACTIONS(1015), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24328] = 2,
    ACTIONS(1721), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24337] = 2,
    ACTIONS(1723), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24346] = 2,
    ACTIONS(1725), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24355] = 2,
    ACTIONS(1727), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24364] = 2,
    ACTIONS(1729), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24373] = 2,
    ACTIONS(1731), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24382] = 2,
    ACTIONS(1733), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24391] = 2,
    ACTIONS(1735), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24400] = 2,
    ACTIONS(1737), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24409] = 2,
    ACTIONS(1739), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24418] = 2,
    ACTIONS(1741), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24427] = 2,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24436] = 2,
    ACTIONS(1743), 1,
      anon_sym_MAX,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24445] = 2,
    ACTIONS(1745), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24454] = 2,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24463] = 2,
    ACTIONS(1749), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24472] = 2,
    ACTIONS(1751), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24481] = 2,
    ACTIONS(1753), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24490] = 2,
    ACTIONS(1755), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24499] = 2,
    ACTIONS(1757), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24508] = 2,
    ACTIONS(1759), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24517] = 2,
    ACTIONS(1761), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24526] = 2,
    ACTIONS(1763), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24535] = 2,
    ACTIONS(1765), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24544] = 2,
    ACTIONS(1767), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24553] = 2,
    ACTIONS(1769), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24562] = 2,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24571] = 2,
    ACTIONS(1771), 1,
      anon_sym_SUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24580] = 2,
    ACTIONS(1773), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24589] = 2,
    ACTIONS(1775), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24598] = 2,
    ACTIONS(1777), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24607] = 2,
    ACTIONS(1779), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24616] = 2,
    ACTIONS(1781), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24625] = 2,
    ACTIONS(1783), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24634] = 2,
    ACTIONS(1785), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24643] = 2,
    ACTIONS(1787), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24652] = 2,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24661] = 2,
    ACTIONS(1791), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24670] = 2,
    ACTIONS(1793), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24679] = 2,
    ACTIONS(1795), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24688] = 2,
    ACTIONS(1797), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24697] = 2,
    ACTIONS(1799), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24706] = 2,
    ACTIONS(1801), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24715] = 2,
    ACTIONS(1803), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24724] = 2,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24733] = 2,
    ACTIONS(1805), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24742] = 2,
    ACTIONS(1807), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24751] = 2,
    ACTIONS(1809), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24760] = 2,
    ACTIONS(1811), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24769] = 2,
    ACTIONS(1813), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24778] = 2,
    ACTIONS(1815), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24787] = 2,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24796] = 2,
    ACTIONS(1817), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24805] = 2,
    ACTIONS(1819), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24814] = 2,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24823] = 2,
    ACTIONS(1823), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24832] = 2,
    ACTIONS(1825), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24841] = 2,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24850] = 2,
    ACTIONS(1827), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24859] = 2,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24868] = 2,
    ACTIONS(1829), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24877] = 2,
    ACTIONS(1404), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24886] = 2,
    ACTIONS(1831), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24895] = 2,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24904] = 2,
    ACTIONS(1833), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24913] = 2,
    ACTIONS(1835), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24922] = 2,
    ACTIONS(1837), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24931] = 2,
    ACTIONS(1839), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24940] = 2,
    ACTIONS(1841), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24949] = 2,
    ACTIONS(1843), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24958] = 2,
    ACTIONS(1845), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24967] = 2,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24976] = 2,
    ACTIONS(1847), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24985] = 2,
    ACTIONS(1849), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24994] = 2,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25003] = 2,
    ACTIONS(1853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25012] = 2,
    ACTIONS(1855), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25021] = 2,
    ACTIONS(1857), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25030] = 2,
    ACTIONS(1859), 1,
      anon_sym_TUPLE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25039] = 2,
    ACTIONS(1861), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25048] = 2,
    ACTIONS(1863), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25057] = 2,
    ACTIONS(1865), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25066] = 2,
    ACTIONS(1867), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25075] = 2,
    ACTIONS(1869), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25084] = 2,
    ACTIONS(1871), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25093] = 2,
    ACTIONS(1873), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25102] = 2,
    ACTIONS(1875), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25111] = 2,
    ACTIONS(1877), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25120] = 2,
    ACTIONS(1879), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25129] = 2,
    ACTIONS(1881), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25138] = 2,
    ACTIONS(1883), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25147] = 2,
    ACTIONS(1885), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25156] = 2,
    ACTIONS(1887), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25165] = 2,
    ACTIONS(1889), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25174] = 2,
    ACTIONS(1891), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25183] = 2,
    ACTIONS(1893), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25192] = 2,
    ACTIONS(1895), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25201] = 2,
    ACTIONS(1897), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25210] = 2,
    ACTIONS(1899), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25219] = 2,
    ACTIONS(1901), 1,
      anon_sym_REPLACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25228] = 2,
    ACTIONS(1903), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25237] = 2,
    ACTIONS(1905), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25246] = 2,
    ACTIONS(1907), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25255] = 2,
    ACTIONS(1909), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25264] = 2,
    ACTIONS(1911), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25273] = 2,
    ACTIONS(1913), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25282] = 2,
    ACTIONS(1915), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25291] = 2,
    ACTIONS(1917), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25300] = 2,
    ACTIONS(1919), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25309] = 2,
    ACTIONS(1921), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25318] = 2,
    ACTIONS(1923), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25327] = 2,
    ACTIONS(1925), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25336] = 2,
    ACTIONS(1927), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25345] = 2,
    ACTIONS(1929), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25354] = 2,
    ACTIONS(1931), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25363] = 2,
    ACTIONS(1933), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25372] = 2,
    ACTIONS(1935), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25381] = 2,
    ACTIONS(1937), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25390] = 2,
    ACTIONS(1939), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 369,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 607,
  [SMALL_STATE(10)] = 726,
  [SMALL_STATE(11)] = 845,
  [SMALL_STATE(12)] = 964,
  [SMALL_STATE(13)] = 1083,
  [SMALL_STATE(14)] = 1202,
  [SMALL_STATE(15)] = 1321,
  [SMALL_STATE(16)] = 1440,
  [SMALL_STATE(17)] = 1559,
  [SMALL_STATE(18)] = 1678,
  [SMALL_STATE(19)] = 1797,
  [SMALL_STATE(20)] = 1854,
  [SMALL_STATE(21)] = 1915,
  [SMALL_STATE(22)] = 1975,
  [SMALL_STATE(23)] = 2033,
  [SMALL_STATE(24)] = 2089,
  [SMALL_STATE(25)] = 2147,
  [SMALL_STATE(26)] = 2203,
  [SMALL_STATE(27)] = 2263,
  [SMALL_STATE(28)] = 2319,
  [SMALL_STATE(29)] = 2377,
  [SMALL_STATE(30)] = 2435,
  [SMALL_STATE(31)] = 2488,
  [SMALL_STATE(32)] = 2543,
  [SMALL_STATE(33)] = 2596,
  [SMALL_STATE(34)] = 2649,
  [SMALL_STATE(35)] = 2702,
  [SMALL_STATE(36)] = 2756,
  [SMALL_STATE(37)] = 2808,
  [SMALL_STATE(38)] = 2860,
  [SMALL_STATE(39)] = 2912,
  [SMALL_STATE(40)] = 2967,
  [SMALL_STATE(41)] = 3022,
  [SMALL_STATE(42)] = 3077,
  [SMALL_STATE(43)] = 3132,
  [SMALL_STATE(44)] = 3187,
  [SMALL_STATE(45)] = 3237,
  [SMALL_STATE(46)] = 3289,
  [SMALL_STATE(47)] = 3339,
  [SMALL_STATE(48)] = 3391,
  [SMALL_STATE(49)] = 3443,
  [SMALL_STATE(50)] = 3495,
  [SMALL_STATE(51)] = 3544,
  [SMALL_STATE(52)] = 3593,
  [SMALL_STATE(53)] = 3642,
  [SMALL_STATE(54)] = 3691,
  [SMALL_STATE(55)] = 3740,
  [SMALL_STATE(56)] = 3789,
  [SMALL_STATE(57)] = 3838,
  [SMALL_STATE(58)] = 3887,
  [SMALL_STATE(59)] = 3936,
  [SMALL_STATE(60)] = 3985,
  [SMALL_STATE(61)] = 4034,
  [SMALL_STATE(62)] = 4083,
  [SMALL_STATE(63)] = 4132,
  [SMALL_STATE(64)] = 4181,
  [SMALL_STATE(65)] = 4230,
  [SMALL_STATE(66)] = 4279,
  [SMALL_STATE(67)] = 4328,
  [SMALL_STATE(68)] = 4377,
  [SMALL_STATE(69)] = 4426,
  [SMALL_STATE(70)] = 4478,
  [SMALL_STATE(71)] = 4577,
  [SMALL_STATE(72)] = 4623,
  [SMALL_STATE(73)] = 4669,
  [SMALL_STATE(74)] = 4723,
  [SMALL_STATE(75)] = 4768,
  [SMALL_STATE(76)] = 4823,
  [SMALL_STATE(77)] = 4893,
  [SMALL_STATE(78)] = 4963,
  [SMALL_STATE(79)] = 5033,
  [SMALL_STATE(80)] = 5103,
  [SMALL_STATE(81)] = 5173,
  [SMALL_STATE(82)] = 5243,
  [SMALL_STATE(83)] = 5313,
  [SMALL_STATE(84)] = 5383,
  [SMALL_STATE(85)] = 5453,
  [SMALL_STATE(86)] = 5523,
  [SMALL_STATE(87)] = 5593,
  [SMALL_STATE(88)] = 5663,
  [SMALL_STATE(89)] = 5756,
  [SMALL_STATE(90)] = 5823,
  [SMALL_STATE(91)] = 5916,
  [SMALL_STATE(92)] = 6006,
  [SMALL_STATE(93)] = 6094,
  [SMALL_STATE(94)] = 6184,
  [SMALL_STATE(95)] = 6272,
  [SMALL_STATE(96)] = 6360,
  [SMALL_STATE(97)] = 6450,
  [SMALL_STATE(98)] = 6538,
  [SMALL_STATE(99)] = 6628,
  [SMALL_STATE(100)] = 6716,
  [SMALL_STATE(101)] = 6804,
  [SMALL_STATE(102)] = 6892,
  [SMALL_STATE(103)] = 6980,
  [SMALL_STATE(104)] = 7068,
  [SMALL_STATE(105)] = 7156,
  [SMALL_STATE(106)] = 7218,
  [SMALL_STATE(107)] = 7306,
  [SMALL_STATE(108)] = 7396,
  [SMALL_STATE(109)] = 7484,
  [SMALL_STATE(110)] = 7574,
  [SMALL_STATE(111)] = 7662,
  [SMALL_STATE(112)] = 7752,
  [SMALL_STATE(113)] = 7842,
  [SMALL_STATE(114)] = 7930,
  [SMALL_STATE(115)] = 8020,
  [SMALL_STATE(116)] = 8108,
  [SMALL_STATE(117)] = 8198,
  [SMALL_STATE(118)] = 8286,
  [SMALL_STATE(119)] = 8376,
  [SMALL_STATE(120)] = 8464,
  [SMALL_STATE(121)] = 8554,
  [SMALL_STATE(122)] = 8644,
  [SMALL_STATE(123)] = 8734,
  [SMALL_STATE(124)] = 8822,
  [SMALL_STATE(125)] = 8912,
  [SMALL_STATE(126)] = 9002,
  [SMALL_STATE(127)] = 9092,
  [SMALL_STATE(128)] = 9180,
  [SMALL_STATE(129)] = 9270,
  [SMALL_STATE(130)] = 9360,
  [SMALL_STATE(131)] = 9448,
  [SMALL_STATE(132)] = 9536,
  [SMALL_STATE(133)] = 9624,
  [SMALL_STATE(134)] = 9709,
  [SMALL_STATE(135)] = 9752,
  [SMALL_STATE(136)] = 9799,
  [SMALL_STATE(137)] = 9846,
  [SMALL_STATE(138)] = 9895,
  [SMALL_STATE(139)] = 9980,
  [SMALL_STATE(140)] = 10065,
  [SMALL_STATE(141)] = 10150,
  [SMALL_STATE(142)] = 10235,
  [SMALL_STATE(143)] = 10320,
  [SMALL_STATE(144)] = 10405,
  [SMALL_STATE(145)] = 10490,
  [SMALL_STATE(146)] = 10575,
  [SMALL_STATE(147)] = 10660,
  [SMALL_STATE(148)] = 10742,
  [SMALL_STATE(149)] = 10824,
  [SMALL_STATE(150)] = 10906,
  [SMALL_STATE(151)] = 10952,
  [SMALL_STATE(152)] = 11034,
  [SMALL_STATE(153)] = 11080,
  [SMALL_STATE(154)] = 11162,
  [SMALL_STATE(155)] = 11204,
  [SMALL_STATE(156)] = 11286,
  [SMALL_STATE(157)] = 11330,
  [SMALL_STATE(158)] = 11412,
  [SMALL_STATE(159)] = 11494,
  [SMALL_STATE(160)] = 11538,
  [SMALL_STATE(161)] = 11620,
  [SMALL_STATE(162)] = 11702,
  [SMALL_STATE(163)] = 11784,
  [SMALL_STATE(164)] = 11866,
  [SMALL_STATE(165)] = 11948,
  [SMALL_STATE(166)] = 12030,
  [SMALL_STATE(167)] = 12112,
  [SMALL_STATE(168)] = 12156,
  [SMALL_STATE(169)] = 12198,
  [SMALL_STATE(170)] = 12280,
  [SMALL_STATE(171)] = 12362,
  [SMALL_STATE(172)] = 12444,
  [SMALL_STATE(173)] = 12488,
  [SMALL_STATE(174)] = 12552,
  [SMALL_STATE(175)] = 12634,
  [SMALL_STATE(176)] = 12716,
  [SMALL_STATE(177)] = 12798,
  [SMALL_STATE(178)] = 12840,
  [SMALL_STATE(179)] = 12922,
  [SMALL_STATE(180)] = 13004,
  [SMALL_STATE(181)] = 13086,
  [SMALL_STATE(182)] = 13168,
  [SMALL_STATE(183)] = 13250,
  [SMALL_STATE(184)] = 13332,
  [SMALL_STATE(185)] = 13414,
  [SMALL_STATE(186)] = 13496,
  [SMALL_STATE(187)] = 13560,
  [SMALL_STATE(188)] = 13602,
  [SMALL_STATE(189)] = 13684,
  [SMALL_STATE(190)] = 13746,
  [SMALL_STATE(191)] = 13807,
  [SMALL_STATE(192)] = 13846,
  [SMALL_STATE(193)] = 13885,
  [SMALL_STATE(194)] = 13924,
  [SMALL_STATE(195)] = 13965,
  [SMALL_STATE(196)] = 14004,
  [SMALL_STATE(197)] = 14043,
  [SMALL_STATE(198)] = 14086,
  [SMALL_STATE(199)] = 14127,
  [SMALL_STATE(200)] = 14193,
  [SMALL_STATE(201)] = 14231,
  [SMALL_STATE(202)] = 14269,
  [SMALL_STATE(203)] = 14309,
  [SMALL_STATE(204)] = 14375,
  [SMALL_STATE(205)] = 14413,
  [SMALL_STATE(206)] = 14453,
  [SMALL_STATE(207)] = 14494,
  [SMALL_STATE(208)] = 14535,
  [SMALL_STATE(209)] = 14576,
  [SMALL_STATE(210)] = 14617,
  [SMALL_STATE(211)] = 14658,
  [SMALL_STATE(212)] = 14696,
  [SMALL_STATE(213)] = 14738,
  [SMALL_STATE(214)] = 14774,
  [SMALL_STATE(215)] = 14810,
  [SMALL_STATE(216)] = 14848,
  [SMALL_STATE(217)] = 14886,
  [SMALL_STATE(218)] = 14924,
  [SMALL_STATE(219)] = 14962,
  [SMALL_STATE(220)] = 14997,
  [SMALL_STATE(221)] = 15032,
  [SMALL_STATE(222)] = 15067,
  [SMALL_STATE(223)] = 15102,
  [SMALL_STATE(224)] = 15137,
  [SMALL_STATE(225)] = 15172,
  [SMALL_STATE(226)] = 15207,
  [SMALL_STATE(227)] = 15242,
  [SMALL_STATE(228)] = 15277,
  [SMALL_STATE(229)] = 15312,
  [SMALL_STATE(230)] = 15347,
  [SMALL_STATE(231)] = 15382,
  [SMALL_STATE(232)] = 15417,
  [SMALL_STATE(233)] = 15452,
  [SMALL_STATE(234)] = 15487,
  [SMALL_STATE(235)] = 15522,
  [SMALL_STATE(236)] = 15559,
  [SMALL_STATE(237)] = 15594,
  [SMALL_STATE(238)] = 15629,
  [SMALL_STATE(239)] = 15664,
  [SMALL_STATE(240)] = 15698,
  [SMALL_STATE(241)] = 15732,
  [SMALL_STATE(242)] = 15766,
  [SMALL_STATE(243)] = 15805,
  [SMALL_STATE(244)] = 15844,
  [SMALL_STATE(245)] = 15884,
  [SMALL_STATE(246)] = 15912,
  [SMALL_STATE(247)] = 15940,
  [SMALL_STATE(248)] = 15975,
  [SMALL_STATE(249)] = 16006,
  [SMALL_STATE(250)] = 16037,
  [SMALL_STATE(251)] = 16068,
  [SMALL_STATE(252)] = 16099,
  [SMALL_STATE(253)] = 16136,
  [SMALL_STATE(254)] = 16173,
  [SMALL_STATE(255)] = 16204,
  [SMALL_STATE(256)] = 16239,
  [SMALL_STATE(257)] = 16276,
  [SMALL_STATE(258)] = 16311,
  [SMALL_STATE(259)] = 16342,
  [SMALL_STATE(260)] = 16384,
  [SMALL_STATE(261)] = 16418,
  [SMALL_STATE(262)] = 16444,
  [SMALL_STATE(263)] = 16473,
  [SMALL_STATE(264)] = 16502,
  [SMALL_STATE(265)] = 16529,
  [SMALL_STATE(266)] = 16558,
  [SMALL_STATE(267)] = 16585,
  [SMALL_STATE(268)] = 16624,
  [SMALL_STATE(269)] = 16651,
  [SMALL_STATE(270)] = 16690,
  [SMALL_STATE(271)] = 16717,
  [SMALL_STATE(272)] = 16740,
  [SMALL_STATE(273)] = 16779,
  [SMALL_STATE(274)] = 16803,
  [SMALL_STATE(275)] = 16833,
  [SMALL_STATE(276)] = 16867,
  [SMALL_STATE(277)] = 16901,
  [SMALL_STATE(278)] = 16925,
  [SMALL_STATE(279)] = 16949,
  [SMALL_STATE(280)] = 16975,
  [SMALL_STATE(281)] = 17003,
  [SMALL_STATE(282)] = 17029,
  [SMALL_STATE(283)] = 17053,
  [SMALL_STATE(284)] = 17079,
  [SMALL_STATE(285)] = 17107,
  [SMALL_STATE(286)] = 17151,
  [SMALL_STATE(287)] = 17179,
  [SMALL_STATE(288)] = 17205,
  [SMALL_STATE(289)] = 17251,
  [SMALL_STATE(290)] = 17279,
  [SMALL_STATE(291)] = 17307,
  [SMALL_STATE(292)] = 17331,
  [SMALL_STATE(293)] = 17363,
  [SMALL_STATE(294)] = 17387,
  [SMALL_STATE(295)] = 17412,
  [SMALL_STATE(296)] = 17441,
  [SMALL_STATE(297)] = 17466,
  [SMALL_STATE(298)] = 17493,
  [SMALL_STATE(299)] = 17522,
  [SMALL_STATE(300)] = 17549,
  [SMALL_STATE(301)] = 17572,
  [SMALL_STATE(302)] = 17597,
  [SMALL_STATE(303)] = 17618,
  [SMALL_STATE(304)] = 17639,
  [SMALL_STATE(305)] = 17670,
  [SMALL_STATE(306)] = 17697,
  [SMALL_STATE(307)] = 17718,
  [SMALL_STATE(308)] = 17743,
  [SMALL_STATE(309)] = 17764,
  [SMALL_STATE(310)] = 17787,
  [SMALL_STATE(311)] = 17827,
  [SMALL_STATE(312)] = 17851,
  [SMALL_STATE(313)] = 17891,
  [SMALL_STATE(314)] = 17931,
  [SMALL_STATE(315)] = 17957,
  [SMALL_STATE(316)] = 17977,
  [SMALL_STATE(317)] = 18005,
  [SMALL_STATE(318)] = 18045,
  [SMALL_STATE(319)] = 18070,
  [SMALL_STATE(320)] = 18095,
  [SMALL_STATE(321)] = 18120,
  [SMALL_STATE(322)] = 18157,
  [SMALL_STATE(323)] = 18182,
  [SMALL_STATE(324)] = 18207,
  [SMALL_STATE(325)] = 18232,
  [SMALL_STATE(326)] = 18257,
  [SMALL_STATE(327)] = 18282,
  [SMALL_STATE(328)] = 18300,
  [SMALL_STATE(329)] = 18334,
  [SMALL_STATE(330)] = 18352,
  [SMALL_STATE(331)] = 18386,
  [SMALL_STATE(332)] = 18420,
  [SMALL_STATE(333)] = 18438,
  [SMALL_STATE(334)] = 18472,
  [SMALL_STATE(335)] = 18490,
  [SMALL_STATE(336)] = 18524,
  [SMALL_STATE(337)] = 18558,
  [SMALL_STATE(338)] = 18582,
  [SMALL_STATE(339)] = 18616,
  [SMALL_STATE(340)] = 18634,
  [SMALL_STATE(341)] = 18655,
  [SMALL_STATE(342)] = 18686,
  [SMALL_STATE(343)] = 18707,
  [SMALL_STATE(344)] = 18730,
  [SMALL_STATE(345)] = 18750,
  [SMALL_STATE(346)] = 18770,
  [SMALL_STATE(347)] = 18786,
  [SMALL_STATE(348)] = 18802,
  [SMALL_STATE(349)] = 18818,
  [SMALL_STATE(350)] = 18836,
  [SMALL_STATE(351)] = 18852,
  [SMALL_STATE(352)] = 18872,
  [SMALL_STATE(353)] = 18890,
  [SMALL_STATE(354)] = 18918,
  [SMALL_STATE(355)] = 18936,
  [SMALL_STATE(356)] = 18952,
  [SMALL_STATE(357)] = 18972,
  [SMALL_STATE(358)] = 18988,
  [SMALL_STATE(359)] = 19008,
  [SMALL_STATE(360)] = 19028,
  [SMALL_STATE(361)] = 19047,
  [SMALL_STATE(362)] = 19062,
  [SMALL_STATE(363)] = 19087,
  [SMALL_STATE(364)] = 19102,
  [SMALL_STATE(365)] = 19117,
  [SMALL_STATE(366)] = 19136,
  [SMALL_STATE(367)] = 19151,
  [SMALL_STATE(368)] = 19166,
  [SMALL_STATE(369)] = 19181,
  [SMALL_STATE(370)] = 19196,
  [SMALL_STATE(371)] = 19215,
  [SMALL_STATE(372)] = 19230,
  [SMALL_STATE(373)] = 19255,
  [SMALL_STATE(374)] = 19270,
  [SMALL_STATE(375)] = 19285,
  [SMALL_STATE(376)] = 19304,
  [SMALL_STATE(377)] = 19329,
  [SMALL_STATE(378)] = 19344,
  [SMALL_STATE(379)] = 19369,
  [SMALL_STATE(380)] = 19396,
  [SMALL_STATE(381)] = 19411,
  [SMALL_STATE(382)] = 19430,
  [SMALL_STATE(383)] = 19445,
  [SMALL_STATE(384)] = 19460,
  [SMALL_STATE(385)] = 19475,
  [SMALL_STATE(386)] = 19498,
  [SMALL_STATE(387)] = 19525,
  [SMALL_STATE(388)] = 19552,
  [SMALL_STATE(389)] = 19575,
  [SMALL_STATE(390)] = 19589,
  [SMALL_STATE(391)] = 19605,
  [SMALL_STATE(392)] = 19629,
  [SMALL_STATE(393)] = 19653,
  [SMALL_STATE(394)] = 19677,
  [SMALL_STATE(395)] = 19701,
  [SMALL_STATE(396)] = 19725,
  [SMALL_STATE(397)] = 19749,
  [SMALL_STATE(398)] = 19773,
  [SMALL_STATE(399)] = 19797,
  [SMALL_STATE(400)] = 19819,
  [SMALL_STATE(401)] = 19835,
  [SMALL_STATE(402)] = 19849,
  [SMALL_STATE(403)] = 19871,
  [SMALL_STATE(404)] = 19893,
  [SMALL_STATE(405)] = 19915,
  [SMALL_STATE(406)] = 19937,
  [SMALL_STATE(407)] = 19961,
  [SMALL_STATE(408)] = 19985,
  [SMALL_STATE(409)] = 20007,
  [SMALL_STATE(410)] = 20029,
  [SMALL_STATE(411)] = 20053,
  [SMALL_STATE(412)] = 20067,
  [SMALL_STATE(413)] = 20084,
  [SMALL_STATE(414)] = 20097,
  [SMALL_STATE(415)] = 20110,
  [SMALL_STATE(416)] = 20123,
  [SMALL_STATE(417)] = 20136,
  [SMALL_STATE(418)] = 20157,
  [SMALL_STATE(419)] = 20170,
  [SMALL_STATE(420)] = 20183,
  [SMALL_STATE(421)] = 20196,
  [SMALL_STATE(422)] = 20217,
  [SMALL_STATE(423)] = 20234,
  [SMALL_STATE(424)] = 20247,
  [SMALL_STATE(425)] = 20268,
  [SMALL_STATE(426)] = 20289,
  [SMALL_STATE(427)] = 20310,
  [SMALL_STATE(428)] = 20325,
  [SMALL_STATE(429)] = 20338,
  [SMALL_STATE(430)] = 20355,
  [SMALL_STATE(431)] = 20372,
  [SMALL_STATE(432)] = 20393,
  [SMALL_STATE(433)] = 20410,
  [SMALL_STATE(434)] = 20431,
  [SMALL_STATE(435)] = 20448,
  [SMALL_STATE(436)] = 20469,
  [SMALL_STATE(437)] = 20482,
  [SMALL_STATE(438)] = 20499,
  [SMALL_STATE(439)] = 20514,
  [SMALL_STATE(440)] = 20533,
  [SMALL_STATE(441)] = 20545,
  [SMALL_STATE(442)] = 20559,
  [SMALL_STATE(443)] = 20577,
  [SMALL_STATE(444)] = 20591,
  [SMALL_STATE(445)] = 20609,
  [SMALL_STATE(446)] = 20625,
  [SMALL_STATE(447)] = 20637,
  [SMALL_STATE(448)] = 20653,
  [SMALL_STATE(449)] = 20671,
  [SMALL_STATE(450)] = 20685,
  [SMALL_STATE(451)] = 20703,
  [SMALL_STATE(452)] = 20719,
  [SMALL_STATE(453)] = 20731,
  [SMALL_STATE(454)] = 20745,
  [SMALL_STATE(455)] = 20759,
  [SMALL_STATE(456)] = 20773,
  [SMALL_STATE(457)] = 20789,
  [SMALL_STATE(458)] = 20807,
  [SMALL_STATE(459)] = 20823,
  [SMALL_STATE(460)] = 20837,
  [SMALL_STATE(461)] = 20851,
  [SMALL_STATE(462)] = 20867,
  [SMALL_STATE(463)] = 20879,
  [SMALL_STATE(464)] = 20893,
  [SMALL_STATE(465)] = 20905,
  [SMALL_STATE(466)] = 20923,
  [SMALL_STATE(467)] = 20939,
  [SMALL_STATE(468)] = 20953,
  [SMALL_STATE(469)] = 20967,
  [SMALL_STATE(470)] = 20981,
  [SMALL_STATE(471)] = 20999,
  [SMALL_STATE(472)] = 21017,
  [SMALL_STATE(473)] = 21033,
  [SMALL_STATE(474)] = 21049,
  [SMALL_STATE(475)] = 21065,
  [SMALL_STATE(476)] = 21083,
  [SMALL_STATE(477)] = 21097,
  [SMALL_STATE(478)] = 21111,
  [SMALL_STATE(479)] = 21127,
  [SMALL_STATE(480)] = 21141,
  [SMALL_STATE(481)] = 21155,
  [SMALL_STATE(482)] = 21169,
  [SMALL_STATE(483)] = 21187,
  [SMALL_STATE(484)] = 21199,
  [SMALL_STATE(485)] = 21215,
  [SMALL_STATE(486)] = 21231,
  [SMALL_STATE(487)] = 21249,
  [SMALL_STATE(488)] = 21267,
  [SMALL_STATE(489)] = 21282,
  [SMALL_STATE(490)] = 21297,
  [SMALL_STATE(491)] = 21310,
  [SMALL_STATE(492)] = 21321,
  [SMALL_STATE(493)] = 21336,
  [SMALL_STATE(494)] = 21347,
  [SMALL_STATE(495)] = 21362,
  [SMALL_STATE(496)] = 21377,
  [SMALL_STATE(497)] = 21392,
  [SMALL_STATE(498)] = 21407,
  [SMALL_STATE(499)] = 21420,
  [SMALL_STATE(500)] = 21433,
  [SMALL_STATE(501)] = 21448,
  [SMALL_STATE(502)] = 21463,
  [SMALL_STATE(503)] = 21478,
  [SMALL_STATE(504)] = 21493,
  [SMALL_STATE(505)] = 21508,
  [SMALL_STATE(506)] = 21521,
  [SMALL_STATE(507)] = 21536,
  [SMALL_STATE(508)] = 21551,
  [SMALL_STATE(509)] = 21566,
  [SMALL_STATE(510)] = 21581,
  [SMALL_STATE(511)] = 21596,
  [SMALL_STATE(512)] = 21611,
  [SMALL_STATE(513)] = 21622,
  [SMALL_STATE(514)] = 21635,
  [SMALL_STATE(515)] = 21650,
  [SMALL_STATE(516)] = 21665,
  [SMALL_STATE(517)] = 21680,
  [SMALL_STATE(518)] = 21695,
  [SMALL_STATE(519)] = 21710,
  [SMALL_STATE(520)] = 21725,
  [SMALL_STATE(521)] = 21736,
  [SMALL_STATE(522)] = 21751,
  [SMALL_STATE(523)] = 21766,
  [SMALL_STATE(524)] = 21781,
  [SMALL_STATE(525)] = 21796,
  [SMALL_STATE(526)] = 21811,
  [SMALL_STATE(527)] = 21826,
  [SMALL_STATE(528)] = 21837,
  [SMALL_STATE(529)] = 21852,
  [SMALL_STATE(530)] = 21865,
  [SMALL_STATE(531)] = 21878,
  [SMALL_STATE(532)] = 21891,
  [SMALL_STATE(533)] = 21906,
  [SMALL_STATE(534)] = 21921,
  [SMALL_STATE(535)] = 21934,
  [SMALL_STATE(536)] = 21945,
  [SMALL_STATE(537)] = 21956,
  [SMALL_STATE(538)] = 21967,
  [SMALL_STATE(539)] = 21982,
  [SMALL_STATE(540)] = 21997,
  [SMALL_STATE(541)] = 22012,
  [SMALL_STATE(542)] = 22023,
  [SMALL_STATE(543)] = 22034,
  [SMALL_STATE(544)] = 22049,
  [SMALL_STATE(545)] = 22064,
  [SMALL_STATE(546)] = 22079,
  [SMALL_STATE(547)] = 22092,
  [SMALL_STATE(548)] = 22107,
  [SMALL_STATE(549)] = 22122,
  [SMALL_STATE(550)] = 22137,
  [SMALL_STATE(551)] = 22150,
  [SMALL_STATE(552)] = 22165,
  [SMALL_STATE(553)] = 22180,
  [SMALL_STATE(554)] = 22195,
  [SMALL_STATE(555)] = 22208,
  [SMALL_STATE(556)] = 22221,
  [SMALL_STATE(557)] = 22234,
  [SMALL_STATE(558)] = 22249,
  [SMALL_STATE(559)] = 22260,
  [SMALL_STATE(560)] = 22275,
  [SMALL_STATE(561)] = 22290,
  [SMALL_STATE(562)] = 22305,
  [SMALL_STATE(563)] = 22320,
  [SMALL_STATE(564)] = 22333,
  [SMALL_STATE(565)] = 22346,
  [SMALL_STATE(566)] = 22361,
  [SMALL_STATE(567)] = 22376,
  [SMALL_STATE(568)] = 22387,
  [SMALL_STATE(569)] = 22398,
  [SMALL_STATE(570)] = 22413,
  [SMALL_STATE(571)] = 22428,
  [SMALL_STATE(572)] = 22443,
  [SMALL_STATE(573)] = 22456,
  [SMALL_STATE(574)] = 22467,
  [SMALL_STATE(575)] = 22482,
  [SMALL_STATE(576)] = 22497,
  [SMALL_STATE(577)] = 22508,
  [SMALL_STATE(578)] = 22523,
  [SMALL_STATE(579)] = 22538,
  [SMALL_STATE(580)] = 22553,
  [SMALL_STATE(581)] = 22568,
  [SMALL_STATE(582)] = 22583,
  [SMALL_STATE(583)] = 22594,
  [SMALL_STATE(584)] = 22609,
  [SMALL_STATE(585)] = 22624,
  [SMALL_STATE(586)] = 22639,
  [SMALL_STATE(587)] = 22654,
  [SMALL_STATE(588)] = 22664,
  [SMALL_STATE(589)] = 22674,
  [SMALL_STATE(590)] = 22686,
  [SMALL_STATE(591)] = 22698,
  [SMALL_STATE(592)] = 22708,
  [SMALL_STATE(593)] = 22720,
  [SMALL_STATE(594)] = 22732,
  [SMALL_STATE(595)] = 22744,
  [SMALL_STATE(596)] = 22756,
  [SMALL_STATE(597)] = 22768,
  [SMALL_STATE(598)] = 22780,
  [SMALL_STATE(599)] = 22792,
  [SMALL_STATE(600)] = 22804,
  [SMALL_STATE(601)] = 22814,
  [SMALL_STATE(602)] = 22824,
  [SMALL_STATE(603)] = 22836,
  [SMALL_STATE(604)] = 22846,
  [SMALL_STATE(605)] = 22858,
  [SMALL_STATE(606)] = 22870,
  [SMALL_STATE(607)] = 22882,
  [SMALL_STATE(608)] = 22894,
  [SMALL_STATE(609)] = 22906,
  [SMALL_STATE(610)] = 22918,
  [SMALL_STATE(611)] = 22930,
  [SMALL_STATE(612)] = 22942,
  [SMALL_STATE(613)] = 22952,
  [SMALL_STATE(614)] = 22964,
  [SMALL_STATE(615)] = 22976,
  [SMALL_STATE(616)] = 22988,
  [SMALL_STATE(617)] = 22998,
  [SMALL_STATE(618)] = 23010,
  [SMALL_STATE(619)] = 23022,
  [SMALL_STATE(620)] = 23034,
  [SMALL_STATE(621)] = 23044,
  [SMALL_STATE(622)] = 23056,
  [SMALL_STATE(623)] = 23068,
  [SMALL_STATE(624)] = 23080,
  [SMALL_STATE(625)] = 23092,
  [SMALL_STATE(626)] = 23104,
  [SMALL_STATE(627)] = 23114,
  [SMALL_STATE(628)] = 23124,
  [SMALL_STATE(629)] = 23134,
  [SMALL_STATE(630)] = 23144,
  [SMALL_STATE(631)] = 23154,
  [SMALL_STATE(632)] = 23166,
  [SMALL_STATE(633)] = 23178,
  [SMALL_STATE(634)] = 23188,
  [SMALL_STATE(635)] = 23200,
  [SMALL_STATE(636)] = 23212,
  [SMALL_STATE(637)] = 23222,
  [SMALL_STATE(638)] = 23232,
  [SMALL_STATE(639)] = 23244,
  [SMALL_STATE(640)] = 23254,
  [SMALL_STATE(641)] = 23264,
  [SMALL_STATE(642)] = 23276,
  [SMALL_STATE(643)] = 23286,
  [SMALL_STATE(644)] = 23298,
  [SMALL_STATE(645)] = 23310,
  [SMALL_STATE(646)] = 23320,
  [SMALL_STATE(647)] = 23332,
  [SMALL_STATE(648)] = 23342,
  [SMALL_STATE(649)] = 23352,
  [SMALL_STATE(650)] = 23362,
  [SMALL_STATE(651)] = 23374,
  [SMALL_STATE(652)] = 23383,
  [SMALL_STATE(653)] = 23392,
  [SMALL_STATE(654)] = 23401,
  [SMALL_STATE(655)] = 23410,
  [SMALL_STATE(656)] = 23419,
  [SMALL_STATE(657)] = 23428,
  [SMALL_STATE(658)] = 23437,
  [SMALL_STATE(659)] = 23446,
  [SMALL_STATE(660)] = 23455,
  [SMALL_STATE(661)] = 23464,
  [SMALL_STATE(662)] = 23473,
  [SMALL_STATE(663)] = 23482,
  [SMALL_STATE(664)] = 23491,
  [SMALL_STATE(665)] = 23500,
  [SMALL_STATE(666)] = 23509,
  [SMALL_STATE(667)] = 23518,
  [SMALL_STATE(668)] = 23527,
  [SMALL_STATE(669)] = 23536,
  [SMALL_STATE(670)] = 23545,
  [SMALL_STATE(671)] = 23554,
  [SMALL_STATE(672)] = 23563,
  [SMALL_STATE(673)] = 23572,
  [SMALL_STATE(674)] = 23581,
  [SMALL_STATE(675)] = 23590,
  [SMALL_STATE(676)] = 23599,
  [SMALL_STATE(677)] = 23608,
  [SMALL_STATE(678)] = 23617,
  [SMALL_STATE(679)] = 23626,
  [SMALL_STATE(680)] = 23635,
  [SMALL_STATE(681)] = 23644,
  [SMALL_STATE(682)] = 23653,
  [SMALL_STATE(683)] = 23662,
  [SMALL_STATE(684)] = 23671,
  [SMALL_STATE(685)] = 23680,
  [SMALL_STATE(686)] = 23689,
  [SMALL_STATE(687)] = 23698,
  [SMALL_STATE(688)] = 23707,
  [SMALL_STATE(689)] = 23716,
  [SMALL_STATE(690)] = 23725,
  [SMALL_STATE(691)] = 23734,
  [SMALL_STATE(692)] = 23743,
  [SMALL_STATE(693)] = 23752,
  [SMALL_STATE(694)] = 23761,
  [SMALL_STATE(695)] = 23770,
  [SMALL_STATE(696)] = 23779,
  [SMALL_STATE(697)] = 23788,
  [SMALL_STATE(698)] = 23797,
  [SMALL_STATE(699)] = 23806,
  [SMALL_STATE(700)] = 23815,
  [SMALL_STATE(701)] = 23824,
  [SMALL_STATE(702)] = 23833,
  [SMALL_STATE(703)] = 23842,
  [SMALL_STATE(704)] = 23851,
  [SMALL_STATE(705)] = 23860,
  [SMALL_STATE(706)] = 23869,
  [SMALL_STATE(707)] = 23878,
  [SMALL_STATE(708)] = 23887,
  [SMALL_STATE(709)] = 23896,
  [SMALL_STATE(710)] = 23905,
  [SMALL_STATE(711)] = 23914,
  [SMALL_STATE(712)] = 23923,
  [SMALL_STATE(713)] = 23932,
  [SMALL_STATE(714)] = 23941,
  [SMALL_STATE(715)] = 23950,
  [SMALL_STATE(716)] = 23959,
  [SMALL_STATE(717)] = 23968,
  [SMALL_STATE(718)] = 23977,
  [SMALL_STATE(719)] = 23986,
  [SMALL_STATE(720)] = 23995,
  [SMALL_STATE(721)] = 24004,
  [SMALL_STATE(722)] = 24013,
  [SMALL_STATE(723)] = 24022,
  [SMALL_STATE(724)] = 24031,
  [SMALL_STATE(725)] = 24040,
  [SMALL_STATE(726)] = 24049,
  [SMALL_STATE(727)] = 24058,
  [SMALL_STATE(728)] = 24067,
  [SMALL_STATE(729)] = 24076,
  [SMALL_STATE(730)] = 24085,
  [SMALL_STATE(731)] = 24094,
  [SMALL_STATE(732)] = 24103,
  [SMALL_STATE(733)] = 24112,
  [SMALL_STATE(734)] = 24121,
  [SMALL_STATE(735)] = 24130,
  [SMALL_STATE(736)] = 24139,
  [SMALL_STATE(737)] = 24148,
  [SMALL_STATE(738)] = 24157,
  [SMALL_STATE(739)] = 24166,
  [SMALL_STATE(740)] = 24175,
  [SMALL_STATE(741)] = 24184,
  [SMALL_STATE(742)] = 24193,
  [SMALL_STATE(743)] = 24202,
  [SMALL_STATE(744)] = 24211,
  [SMALL_STATE(745)] = 24220,
  [SMALL_STATE(746)] = 24229,
  [SMALL_STATE(747)] = 24238,
  [SMALL_STATE(748)] = 24247,
  [SMALL_STATE(749)] = 24256,
  [SMALL_STATE(750)] = 24265,
  [SMALL_STATE(751)] = 24274,
  [SMALL_STATE(752)] = 24283,
  [SMALL_STATE(753)] = 24292,
  [SMALL_STATE(754)] = 24301,
  [SMALL_STATE(755)] = 24310,
  [SMALL_STATE(756)] = 24319,
  [SMALL_STATE(757)] = 24328,
  [SMALL_STATE(758)] = 24337,
  [SMALL_STATE(759)] = 24346,
  [SMALL_STATE(760)] = 24355,
  [SMALL_STATE(761)] = 24364,
  [SMALL_STATE(762)] = 24373,
  [SMALL_STATE(763)] = 24382,
  [SMALL_STATE(764)] = 24391,
  [SMALL_STATE(765)] = 24400,
  [SMALL_STATE(766)] = 24409,
  [SMALL_STATE(767)] = 24418,
  [SMALL_STATE(768)] = 24427,
  [SMALL_STATE(769)] = 24436,
  [SMALL_STATE(770)] = 24445,
  [SMALL_STATE(771)] = 24454,
  [SMALL_STATE(772)] = 24463,
  [SMALL_STATE(773)] = 24472,
  [SMALL_STATE(774)] = 24481,
  [SMALL_STATE(775)] = 24490,
  [SMALL_STATE(776)] = 24499,
  [SMALL_STATE(777)] = 24508,
  [SMALL_STATE(778)] = 24517,
  [SMALL_STATE(779)] = 24526,
  [SMALL_STATE(780)] = 24535,
  [SMALL_STATE(781)] = 24544,
  [SMALL_STATE(782)] = 24553,
  [SMALL_STATE(783)] = 24562,
  [SMALL_STATE(784)] = 24571,
  [SMALL_STATE(785)] = 24580,
  [SMALL_STATE(786)] = 24589,
  [SMALL_STATE(787)] = 24598,
  [SMALL_STATE(788)] = 24607,
  [SMALL_STATE(789)] = 24616,
  [SMALL_STATE(790)] = 24625,
  [SMALL_STATE(791)] = 24634,
  [SMALL_STATE(792)] = 24643,
  [SMALL_STATE(793)] = 24652,
  [SMALL_STATE(794)] = 24661,
  [SMALL_STATE(795)] = 24670,
  [SMALL_STATE(796)] = 24679,
  [SMALL_STATE(797)] = 24688,
  [SMALL_STATE(798)] = 24697,
  [SMALL_STATE(799)] = 24706,
  [SMALL_STATE(800)] = 24715,
  [SMALL_STATE(801)] = 24724,
  [SMALL_STATE(802)] = 24733,
  [SMALL_STATE(803)] = 24742,
  [SMALL_STATE(804)] = 24751,
  [SMALL_STATE(805)] = 24760,
  [SMALL_STATE(806)] = 24769,
  [SMALL_STATE(807)] = 24778,
  [SMALL_STATE(808)] = 24787,
  [SMALL_STATE(809)] = 24796,
  [SMALL_STATE(810)] = 24805,
  [SMALL_STATE(811)] = 24814,
  [SMALL_STATE(812)] = 24823,
  [SMALL_STATE(813)] = 24832,
  [SMALL_STATE(814)] = 24841,
  [SMALL_STATE(815)] = 24850,
  [SMALL_STATE(816)] = 24859,
  [SMALL_STATE(817)] = 24868,
  [SMALL_STATE(818)] = 24877,
  [SMALL_STATE(819)] = 24886,
  [SMALL_STATE(820)] = 24895,
  [SMALL_STATE(821)] = 24904,
  [SMALL_STATE(822)] = 24913,
  [SMALL_STATE(823)] = 24922,
  [SMALL_STATE(824)] = 24931,
  [SMALL_STATE(825)] = 24940,
  [SMALL_STATE(826)] = 24949,
  [SMALL_STATE(827)] = 24958,
  [SMALL_STATE(828)] = 24967,
  [SMALL_STATE(829)] = 24976,
  [SMALL_STATE(830)] = 24985,
  [SMALL_STATE(831)] = 24994,
  [SMALL_STATE(832)] = 25003,
  [SMALL_STATE(833)] = 25012,
  [SMALL_STATE(834)] = 25021,
  [SMALL_STATE(835)] = 25030,
  [SMALL_STATE(836)] = 25039,
  [SMALL_STATE(837)] = 25048,
  [SMALL_STATE(838)] = 25057,
  [SMALL_STATE(839)] = 25066,
  [SMALL_STATE(840)] = 25075,
  [SMALL_STATE(841)] = 25084,
  [SMALL_STATE(842)] = 25093,
  [SMALL_STATE(843)] = 25102,
  [SMALL_STATE(844)] = 25111,
  [SMALL_STATE(845)] = 25120,
  [SMALL_STATE(846)] = 25129,
  [SMALL_STATE(847)] = 25138,
  [SMALL_STATE(848)] = 25147,
  [SMALL_STATE(849)] = 25156,
  [SMALL_STATE(850)] = 25165,
  [SMALL_STATE(851)] = 25174,
  [SMALL_STATE(852)] = 25183,
  [SMALL_STATE(853)] = 25192,
  [SMALL_STATE(854)] = 25201,
  [SMALL_STATE(855)] = 25210,
  [SMALL_STATE(856)] = 25219,
  [SMALL_STATE(857)] = 25228,
  [SMALL_STATE(858)] = 25237,
  [SMALL_STATE(859)] = 25246,
  [SMALL_STATE(860)] = 25255,
  [SMALL_STATE(861)] = 25264,
  [SMALL_STATE(862)] = 25273,
  [SMALL_STATE(863)] = 25282,
  [SMALL_STATE(864)] = 25291,
  [SMALL_STATE(865)] = 25300,
  [SMALL_STATE(866)] = 25309,
  [SMALL_STATE(867)] = 25318,
  [SMALL_STATE(868)] = 25327,
  [SMALL_STATE(869)] = 25336,
  [SMALL_STATE(870)] = 25345,
  [SMALL_STATE(871)] = 25354,
  [SMALL_STATE(872)] = 25363,
  [SMALL_STATE(873)] = 25372,
  [SMALL_STATE(874)] = 25381,
  [SMALL_STATE(875)] = 25390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(124),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(127),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(128),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(378),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(830),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(542),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(825),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(468),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(819),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(817),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(815),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(812),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(809),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(803),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(802),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(800),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(101),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(479),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(424),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(796),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(866),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(39),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(738),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(835),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(872),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(823),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(206),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(871),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(542),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(479),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(311),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(542),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(479),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(274),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(268),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(280),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(833),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(652),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(89),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(759),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(500),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(543),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(873),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(123),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(79),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(341),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(272),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(183),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(158),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(118),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(98),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(444),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(657),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(296),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(140),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(687),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(409),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(692),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(448),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(259),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(474),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(560),
  [1359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(679),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(569),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(742),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(289),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1911] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
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
