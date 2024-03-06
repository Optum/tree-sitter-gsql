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
#define STATE_COUNT 869
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 257
#define ALIAS_COUNT 0
#define TOKEN_COUNT 132
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
  anon_sym_SUMACCUM = 59,
  anon_sym_INT = 60,
  anon_sym_FLOAT = 61,
  anon_sym_DOUBLE = 62,
  anon_sym_STRING = 63,
  anon_sym_MAXACCUM = 64,
  anon_sym_MINACCUM = 65,
  anon_sym_AVGACCUM = 66,
  anon_sym_ORACCUM = 67,
  anon_sym_ANDACCUM = 68,
  anon_sym_BITWISEORACCUM = 69,
  anon_sym_BITWISEANDACCUM = 70,
  anon_sym_LISTACCUM = 71,
  anon_sym_SETACCUM = 72,
  anon_sym_BAGACCUM = 73,
  anon_sym_MAPACCUM = 74,
  anon_sym_HEAPACCUM = 75,
  anon_sym_ASC = 76,
  anon_sym_DESC = 77,
  anon_sym_GROUPBYACCUM = 78,
  anon_sym_ARRAYACCUM = 79,
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
  sym_line_comment = 130,
  sym_block_comment = 131,
  sym_gsql = 132,
  sym__definition = 133,
  sym_create_query = 134,
  sym_interpret_query = 135,
  sym_parameter_list = 136,
  sym_query_params = 137,
  sym_query_param = 138,
  sym_set_param = 139,
  sym_query_body = 140,
  sym_typedef = 141,
  sym_tuple_fields = 142,
  sym_tuple_field = 143,
  sym_query_body_stmts = 144,
  sym_query_body_stmt = 145,
  sym_assign_stmt = 146,
  sym_v_set_var_decl_stmt = 147,
  sym_seed_set = 148,
  sym_seed = 149,
  sym_simple_set = 150,
  sym_l_accum_assign_stmt = 151,
  sym_g_accum_assign_stmt = 152,
  sym_g_accum_accum_stmt = 153,
  sym_func_call_stmt = 154,
  sym__select_stmt = 155,
  sym_gsql_select_block = 156,
  sym_gsql_select_clause = 157,
  sym_from_clause = 158,
  sym_where_clause = 159,
  sym_accum_clause = 160,
  sym_dml_sub_stmt_list = 161,
  sym_dml_sub_stmt = 162,
  sym_l_accum_accum_stmt = 163,
  sym_attr_accum_stmt = 164,
  sym_v_accum_func_call = 165,
  sym_local_var_decl_stmt = 166,
  sym_dml_sub_if_stmt = 167,
  sym_dml_sub_case_stmt = 168,
  sym_dml_sub_while_stmt = 169,
  sym_dml_sub_for_each_stmt = 170,
  sym_for_each_control = 171,
  sym_post_accum_clause = 172,
  sym_limit_clause = 173,
  sym_path_pattern = 174,
  sym_path_edge_pattern = 175,
  sym_atomic_edge_pattern = 176,
  sym_disj_pattern = 177,
  sym_step = 178,
  sym_step_v2 = 179,
  sym_step_source_set = 180,
  sym_step_edge_set = 181,
  sym_step_edge_types = 182,
  sym_atomic_edge_type = 183,
  sym_edge_set_type = 184,
  sym_step_vertex_set = 185,
  sym_step_vertex_types = 186,
  sym_atomic_vertex_type = 187,
  sym_vertex_set_type = 188,
  sym_query_body_case_stmt = 189,
  sym_query_body_if_stmt = 190,
  sym_query_body_while_stmt = 191,
  sym_query_body_for_each_stmt = 192,
  sym_decl_stmt = 193,
  sym_base_decl_stmt = 194,
  sym_accum_decl_stmt = 195,
  sym_accum_type = 196,
  sym_global_accum_name = 197,
  sym_local_accum_name = 198,
  sym_arg_list = 199,
  sym_simple_size = 200,
  sym_expr = 201,
  sym_condition = 202,
  sym_set_bag_expr = 203,
  sym_name_dot = 204,
  sym_aggregator = 205,
  sym_print_stmt = 206,
  sym_print_expr = 207,
  sym_v_expr_set = 208,
  sym_v_set_proj = 209,
  sym_file_path = 210,
  sym__type = 211,
  sym__element_type = 212,
  sym_base_type = 213,
  sym_constant = 214,
  sym_numeric = 215,
  sym_integer = 216,
  sym_real = 217,
  sym_string_literal = 218,
  sym_math_operator = 219,
  sym_comparison_operator = 220,
  aux_sym_gsql_repeat1 = 221,
  aux_sym_query_params_repeat1 = 222,
  aux_sym_query_body_repeat1 = 223,
  aux_sym_query_body_repeat2 = 224,
  aux_sym_typedef_repeat1 = 225,
  aux_sym_tuple_fields_repeat1 = 226,
  aux_sym_seed_set_repeat1 = 227,
  aux_sym_func_call_stmt_repeat1 = 228,
  aux_sym_func_call_stmt_repeat2 = 229,
  aux_sym_gsql_select_block_repeat1 = 230,
  aux_sym_from_clause_repeat1 = 231,
  aux_sym_dml_sub_stmt_list_repeat1 = 232,
  aux_sym_v_accum_func_call_repeat1 = 233,
  aux_sym_dml_sub_if_stmt_repeat1 = 234,
  aux_sym_dml_sub_case_stmt_repeat1 = 235,
  aux_sym_for_each_control_repeat1 = 236,
  aux_sym_path_pattern_repeat1 = 237,
  aux_sym_disj_pattern_repeat1 = 238,
  aux_sym_step_repeat1 = 239,
  aux_sym_step_edge_types_repeat1 = 240,
  aux_sym_step_vertex_types_repeat1 = 241,
  aux_sym_query_body_case_stmt_repeat1 = 242,
  aux_sym_query_body_case_stmt_repeat2 = 243,
  aux_sym_query_body_if_stmt_repeat1 = 244,
  aux_sym_base_decl_stmt_repeat1 = 245,
  aux_sym_accum_decl_stmt_repeat1 = 246,
  aux_sym_accum_type_repeat1 = 247,
  aux_sym_accum_type_repeat2 = 248,
  aux_sym_accum_type_repeat3 = 249,
  aux_sym_accum_type_repeat4 = 250,
  aux_sym_arg_list_repeat1 = 251,
  aux_sym_name_dot_repeat1 = 252,
  aux_sym_print_stmt_repeat1 = 253,
  aux_sym_v_expr_set_repeat1 = 254,
  aux_sym_string_literal_repeat1 = 255,
  aux_sym_string_literal_repeat2 = 256,
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
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
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
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
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
  [40] = 21,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 34,
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
  [74] = 71,
  [75] = 75,
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
  [100] = 92,
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 99,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 105,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 92,
  [121] = 121,
  [122] = 122,
  [123] = 110,
  [124] = 124,
  [125] = 95,
  [126] = 114,
  [127] = 91,
  [128] = 119,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 71,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 138,
  [144] = 136,
  [145] = 20,
  [146] = 135,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 29,
  [152] = 152,
  [153] = 153,
  [154] = 27,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 148,
  [159] = 148,
  [160] = 160,
  [161] = 161,
  [162] = 153,
  [163] = 28,
  [164] = 22,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 24,
  [171] = 171,
  [172] = 172,
  [173] = 26,
  [174] = 174,
  [175] = 148,
  [176] = 176,
  [177] = 25,
  [178] = 178,
  [179] = 23,
  [180] = 21,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 150,
  [187] = 153,
  [188] = 188,
  [189] = 153,
  [190] = 142,
  [191] = 30,
  [192] = 19,
  [193] = 34,
  [194] = 31,
  [195] = 32,
  [196] = 134,
  [197] = 33,
  [198] = 198,
  [199] = 199,
  [200] = 199,
  [201] = 35,
  [202] = 38,
  [203] = 36,
  [204] = 37,
  [205] = 205,
  [206] = 43,
  [207] = 41,
  [208] = 39,
  [209] = 21,
  [210] = 42,
  [211] = 134,
  [212] = 31,
  [213] = 49,
  [214] = 142,
  [215] = 47,
  [216] = 46,
  [217] = 45,
  [218] = 34,
  [219] = 53,
  [220] = 174,
  [221] = 68,
  [222] = 57,
  [223] = 54,
  [224] = 65,
  [225] = 50,
  [226] = 63,
  [227] = 51,
  [228] = 61,
  [229] = 66,
  [230] = 62,
  [231] = 52,
  [232] = 58,
  [233] = 55,
  [234] = 60,
  [235] = 56,
  [236] = 59,
  [237] = 67,
  [238] = 64,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 71,
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
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 270,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 205,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 134,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 290,
  [292] = 292,
  [293] = 142,
  [294] = 294,
  [295] = 30,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
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
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 346,
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
  [384] = 376,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 382,
  [396] = 396,
  [397] = 377,
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
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 19,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 261,
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
  [440] = 437,
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
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 439,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 441,
  [469] = 469,
  [470] = 434,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 19,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 477,
  [479] = 479,
  [480] = 480,
  [481] = 481,
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
  [493] = 269,
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
  [511] = 511,
  [512] = 281,
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
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 506,
  [531] = 531,
  [532] = 505,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 495,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 480,
  [551] = 491,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 75,
  [560] = 560,
  [561] = 499,
  [562] = 498,
  [563] = 496,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 490,
  [568] = 568,
  [569] = 569,
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
  [591] = 590,
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
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
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
  [624] = 618,
  [625] = 611,
  [626] = 626,
  [627] = 627,
  [628] = 592,
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
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 785,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 787,
  [797] = 725,
  [798] = 786,
  [799] = 799,
  [800] = 800,
  [801] = 718,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 685,
  [807] = 682,
  [808] = 808,
  [809] = 669,
  [810] = 671,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 755,
  [817] = 794,
  [818] = 791,
  [819] = 815,
  [820] = 820,
  [821] = 662,
  [822] = 822,
  [823] = 789,
  [824] = 824,
  [825] = 825,
  [826] = 705,
  [827] = 650,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 786,
  [833] = 787,
  [834] = 834,
  [835] = 835,
  [836] = 662,
  [837] = 786,
  [838] = 838,
  [839] = 839,
  [840] = 662,
  [841] = 822,
  [842] = 842,
  [843] = 764,
  [844] = 844,
  [845] = 743,
  [846] = 846,
  [847] = 847,
  [848] = 657,
  [849] = 849,
  [850] = 850,
  [851] = 735,
  [852] = 658,
  [853] = 853,
  [854] = 854,
  [855] = 657,
  [856] = 657,
  [857] = 763,
  [858] = 758,
  [859] = 740,
  [860] = 860,
  [861] = 861,
  [862] = 666,
  [863] = 645,
  [864] = 740,
  [865] = 740,
  [866] = 866,
  [867] = 728,
  [868] = 665,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(880);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(475);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(333);
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == 'J') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'M') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(320);
      if (lookahead == 'Q') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == 'U') ADVANCE(228);
      if (lookahead == 'V') ADVANCE(41);
      if (lookahead == 'W') ADVANCE(207);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'v') ADVANCE(42);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '|') ADVANCE(518);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(888);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(343);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(343);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(517);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == 'M') ADVANCE(611);
      if (lookahead == 'O') ADVANCE(788);
      if (lookahead == 'P') ADVANCE(797);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'T') ADVANCE(850);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(716);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(859);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == 'M') ADVANCE(611);
      if (lookahead == 'O') ADVANCE(788);
      if (lookahead == 'P') ADVANCE(797);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'T') ADVANCE(850);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(716);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(859);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == 'M') ADVANCE(611);
      if (lookahead == 'O') ADVANCE(788);
      if (lookahead == 'P') ADVANCE(797);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(716);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(859);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(732);
      if (lookahead == 'G') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == 'M') ADVANCE(611);
      if (lookahead == 'O') ADVANCE(788);
      if (lookahead == 'P') ADVANCE(797);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(716);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(859);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(880);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(880);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(460);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == 'M') ADVANCE(224);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(516);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(467);
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(619);
      if (lookahead == 'G') ADVANCE(799);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(791);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(619);
      if (lookahead == 'G') ADVANCE(799);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'N') ADVANCE(781);
      if (lookahead == 'T') ADVANCE(791);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(619);
      if (lookahead == 'G') ADVANCE(799);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(791);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(619);
      if (lookahead == 'G') ADVANCE(799);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(791);
      if (lookahead == 'W') ADVANCE(717);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(868);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '/') ADVANCE(874);
      if (lookahead == '<') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(873);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == '_') ADVANCE(477);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_3(lookahead)) ADVANCE(859);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(309);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == 'J') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == 'V') ADVANCE(174);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '|') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'G') ADVANCE(342);
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(287);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(350);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == 'W') ADVANCE(214);
      if (lookahead == '|') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(480);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(889);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '>') ADVANCE(466);
      if (lookahead == 'B') ADVANCE(775);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(764);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'B') ADVANCE(775);
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_name_character_set_2(lookahead)) ADVANCE(859);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'D') ADVANCE(615);
      if (lookahead == 'E') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(733);
      if (lookahead == 'G') ADVANCE(789);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'I') ADVANCE(764);
      if (lookahead == 'J') ADVANCE(801);
      if (lookahead == 'L') ADVANCE(721);
      if (lookahead == 'M') ADVANCE(611);
      if (lookahead == 'O') ADVANCE(788);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'U') ADVANCE(718);
      if (lookahead == 'V') ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (sym_name_character_set_4(lookahead)) ADVANCE(859);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(454);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(881);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(887);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(484);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(886);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(882);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == '@') ADVANCE(561);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead == 'O') ADVANCE(335);
      if (lookahead == 'R') ADVANCE(311);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'O') ADVANCE(337);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(431);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(423);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead == 'I') ADVANCE(382);
      if (lookahead == 'O') ADVANCE(315);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'I') ADVANCE(382);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == 'O') ADVANCE(502);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'O') ADVANCE(398);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'O') ADVANCE(400);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(425);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(331);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(430);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'U') ADVANCE(299);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(294);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(349);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(370);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(389);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(234);
      END_STATE();
    case 92:
      if (lookahead == 'B') ADVANCE(419);
      END_STATE();
    case 93:
      if (lookahead == 'B') ADVANCE(248);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(432);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(596);
      if (lookahead == 'V') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(596);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(596);
      if (lookahead == 'V') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(556);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(555);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(397);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(209);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(353);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(374);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(375);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(376);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(377);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(401);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(402);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(403);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(404);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(406);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(407);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(408);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(409);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(410);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(411);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(412);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(413);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(414);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(416);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(417);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(418);
      END_STATE();
    case 126:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 127:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 140:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 141:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'D') ADVANCE(577);
      END_STATE();
    case 143:
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'Y') ADVANCE(478);
      END_STATE();
    case 144:
      if (lookahead == 'D') ADVANCE(494);
      END_STATE();
    case 145:
      if (lookahead == 'D') ADVANCE(447);
      END_STATE();
    case 146:
      if (lookahead == 'D') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'D') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(365);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(252);
      if (lookahead == 'Y') ADVANCE(297);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(495);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(603);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(493);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(582);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(578);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(580);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(508);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(472);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(499);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(444);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(446);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(564);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(609);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(527);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(424);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(354);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(348);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(321);
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 188:
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 189:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 190:
      if (lookahead == 'E') ADVANCE(378);
      END_STATE();
    case 191:
      if (lookahead == 'E') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 192:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 193:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 194:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 195:
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == 'U') ADVANCE(278);
      END_STATE();
    case 196:
      if (lookahead == 'F') ADVANCE(490);
      if (lookahead == 'N') ADVANCE(506);
      if (lookahead == 'S') ADVANCE(574);
      END_STATE();
    case 197:
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'R') ADVANCE(445);
      END_STATE();
    case 198:
      if (lookahead == 'F') ADVANCE(470);
      END_STATE();
    case 199:
      if (lookahead == 'F') ADVANCE(362);
      END_STATE();
    case 200:
      if (lookahead == 'G') ADVANCE(590);
      END_STATE();
    case 201:
      if (lookahead == 'G') ADVANCE(529);
      END_STATE();
    case 202:
      if (lookahead == 'G') ADVANCE(589);
      END_STATE();
    case 203:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 204:
      if (lookahead == 'G') ADVANCE(156);
      END_STATE();
    case 205:
      if (lookahead == 'G') ADVANCE(161);
      END_STATE();
    case 206:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 207:
      if (lookahead == 'H') ADVANCE(154);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(451);
      END_STATE();
    case 209:
      if (lookahead == 'H') ADVANCE(503);
      END_STATE();
    case 210:
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(436);
      END_STATE();
    case 211:
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(436);
      if (lookahead == 'R') ADVANCE(405);
      END_STATE();
    case 212:
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'O') ADVANCE(436);
      if (lookahead == 'R') ADVANCE(405);
      if (lookahead == 'U') ADVANCE(328);
      if (lookahead == 'Y') ADVANCE(325);
      END_STATE();
    case 213:
      if (lookahead == 'H') ADVANCE(153);
      END_STATE();
    case 214:
      if (lookahead == 'H') ADVANCE(189);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(237);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(236);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(235);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(371);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(289);
      END_STATE();
    case 225:
      if (lookahead == 'I') ADVANCE(273);
      END_STATE();
    case 226:
      if (lookahead == 'I') ADVANCE(293);
      END_STATE();
    case 227:
      if (lookahead == 'I') ADVANCE(298);
      END_STATE();
    case 228:
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'N') ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'I') ADVANCE(318);
      END_STATE();
    case 230:
      if (lookahead == 'I') ADVANCE(300);
      END_STATE();
    case 231:
      if (lookahead == 'I') ADVANCE(361);
      END_STATE();
    case 232:
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'U') ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'I') ADVANCE(305);
      END_STATE();
    case 234:
      if (lookahead == 'J') ADVANCE(194);
      END_STATE();
    case 235:
      if (lookahead == 'K') ADVANCE(158);
      END_STATE();
    case 236:
      if (lookahead == 'K') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(223);
      END_STATE();
    case 237:
      if (lookahead == 'K') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(223);
      if (lookahead == 'S') ADVANCE(394);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(597);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(575);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(317);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(434);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(392);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(239);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(462);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 246:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 247:
      if (lookahead == 'L') ADVANCE(164);
      END_STATE();
    case 248:
      if (lookahead == 'L') ADVANCE(169);
      END_STATE();
    case 249:
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 250:
      if (lookahead == 'L') ADVANCE(360);
      END_STATE();
    case 251:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(592);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(487);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(489);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(535);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(549);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(551);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(531);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(547);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(521);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(553);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(545);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(559);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(513);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(557);
      END_STATE();
    case 266:
      if (lookahead == 'M') ADVANCE(541);
      END_STATE();
    case 267:
      if (lookahead == 'M') ADVANCE(543);
      END_STATE();
    case 268:
      if (lookahead == 'M') ADVANCE(591);
      END_STATE();
    case 269:
      if (lookahead == 'M') ADVANCE(537);
      END_STATE();
    case 270:
      if (lookahead == 'M') ADVANCE(539);
      END_STATE();
    case 271:
      if (lookahead == 'M') ADVANCE(533);
      END_STATE();
    case 272:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 273:
      if (lookahead == 'M') ADVANCE(223);
      END_STATE();
    case 274:
      if (lookahead == 'M') ADVANCE(223);
      if (lookahead == 'S') ADVANCE(394);
      END_STATE();
    case 275:
      if (lookahead == 'M') ADVANCE(327);
      END_STATE();
    case 276:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 277:
      if (lookahead == 'M') ADVANCE(168);
      END_STATE();
    case 278:
      if (lookahead == 'M') ADVANCE(80);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(506);
      if (lookahead == 'S') ADVANCE(573);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(588);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(492);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(497);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(481);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(576);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(864);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(505);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(505);
      if (lookahead == 'S') ADVANCE(573);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(587);
      END_STATE();
    case 290:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 291:
      if (lookahead == 'N') ADVANCE(229);
      END_STATE();
    case 292:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 293:
      if (lookahead == 'N') ADVANCE(201);
      END_STATE();
    case 294:
      if (lookahead == 'N') ADVANCE(399);
      END_STATE();
    case 295:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 296:
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(100);
      END_STATE();
    case 297:
      if (lookahead == 'N') ADVANCE(387);
      END_STATE();
    case 298:
      if (lookahead == 'N') ADVANCE(368);
      END_STATE();
    case 299:
      if (lookahead == 'N') ADVANCE(369);
      END_STATE();
    case 300:
      if (lookahead == 'N') ADVANCE(372);
      END_STATE();
    case 301:
      if (lookahead == 'N') ADVANCE(385);
      END_STATE();
    case 302:
      if (lookahead == 'N') ADVANCE(379);
      END_STATE();
    case 303:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 304:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 305:
      if (lookahead == 'N') ADVANCE(391);
      END_STATE();
    case 306:
      if (lookahead == 'N') ADVANCE(393);
      END_STATE();
    case 307:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 308:
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == 'V') ADVANCE(206);
      END_STATE();
    case 309:
      if (lookahead == 'O') ADVANCE(315);
      END_STATE();
    case 310:
      if (lookahead == 'O') ADVANCE(502);
      END_STATE();
    case 311:
      if (lookahead == 'O') ADVANCE(253);
      END_STATE();
    case 312:
      if (lookahead == 'O') ADVANCE(400);
      END_STATE();
    case 313:
      if (lookahead == 'O') ADVANCE(366);
      END_STATE();
    case 314:
      if (lookahead == 'O') ADVANCE(366);
      if (lookahead == 'U') ADVANCE(243);
      END_STATE();
    case 315:
      if (lookahead == 'O') ADVANCE(238);
      END_STATE();
    case 316:
      if (lookahead == 'O') ADVANCE(290);
      END_STATE();
    case 317:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 318:
      if (lookahead == 'O') ADVANCE(284);
      END_STATE();
    case 319:
      if (lookahead == 'O') ADVANCE(359);
      END_STATE();
    case 320:
      if (lookahead == 'O') ADVANCE(359);
      if (lookahead == 'R') ADVANCE(230);
      END_STATE();
    case 321:
      if (lookahead == 'P') ADVANCE(512);
      END_STATE();
    case 322:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 323:
      if (lookahead == 'P') ADVANCE(208);
      END_STATE();
    case 324:
      if (lookahead == 'P') ADVANCE(251);
      END_STATE();
    case 325:
      if (lookahead == 'P') ADVANCE(170);
      END_STATE();
    case 326:
      if (lookahead == 'P') ADVANCE(347);
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 327:
      if (lookahead == 'P') ADVANCE(383);
      END_STATE();
    case 328:
      if (lookahead == 'P') ADVANCE(246);
      END_STATE();
    case 329:
      if (lookahead == 'P') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(586);
      END_STATE();
    case 330:
      if (lookahead == 'P') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(78);
      END_STATE();
    case 331:
      if (lookahead == 'P') ADVANCE(81);
      END_STATE();
    case 332:
      if (lookahead == 'Q') ADVANCE(241);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(332);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(445);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(450);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(563);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(449);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(326);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(428);
      END_STATE();
    case 341:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(312);
      END_STATE();
    case 343:
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 344:
      if (lookahead == 'R') ADVANCE(341);
      END_STATE();
    case 345:
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 346:
      if (lookahead == 'R') ADVANCE(388);
      END_STATE();
    case 347:
      if (lookahead == 'R') ADVANCE(190);
      END_STATE();
    case 348:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 349:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 350:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(332);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(483);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(367);
      END_STATE();
    case 357:
      if (lookahead == 'S') ADVANCE(316);
      END_STATE();
    case 358:
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 360:
      if (lookahead == 'S') ADVANCE(160);
      END_STATE();
    case 361:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 362:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 363:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 364:
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(571);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(221);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(599);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(583);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(501);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(593);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(514);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(485);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(566);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(605);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(455);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(421);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(429);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(437);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 388:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 391:
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 392:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 393:
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 394:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 395:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 396:
      if (lookahead == 'U') ADVANCE(176);
      END_STATE();
    case 397:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 398:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 399:
      if (lookahead == 'U') ADVANCE(352);
      END_STATE();
    case 400:
      if (lookahead == 'U') ADVANCE(322);
      END_STATE();
    case 401:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 402:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 403:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 404:
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 405:
      if (lookahead == 'U') ADVANCE(159);
      END_STATE();
    case 406:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 407:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 408:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 409:
      if (lookahead == 'U') ADVANCE(262);
      END_STATE();
    case 410:
      if (lookahead == 'U') ADVANCE(263);
      END_STATE();
    case 411:
      if (lookahead == 'U') ADVANCE(264);
      END_STATE();
    case 412:
      if (lookahead == 'U') ADVANCE(265);
      END_STATE();
    case 413:
      if (lookahead == 'U') ADVANCE(266);
      END_STATE();
    case 414:
      if (lookahead == 'U') ADVANCE(267);
      END_STATE();
    case 415:
      if (lookahead == 'U') ADVANCE(268);
      END_STATE();
    case 416:
      if (lookahead == 'U') ADVANCE(269);
      END_STATE();
    case 417:
      if (lookahead == 'U') ADVANCE(270);
      END_STATE();
    case 418:
      if (lookahead == 'U') ADVANCE(271);
      END_STATE();
    case 419:
      if (lookahead == 'U') ADVANCE(390);
      END_STATE();
    case 420:
      if (lookahead == 'V') ADVANCE(595);
      END_STATE();
    case 421:
      if (lookahead == 'W') ADVANCE(231);
      END_STATE();
    case 422:
      if (lookahead == 'W') ADVANCE(192);
      END_STATE();
    case 423:
      if (lookahead == 'X') ADVANCE(452);
      END_STATE();
    case 424:
      if (lookahead == 'X') ADVANCE(601);
      END_STATE();
    case 425:
      if (lookahead == 'X') ADVANCE(862);
      END_STATE();
    case 426:
      if (lookahead == 'X') ADVANCE(860);
      END_STATE();
    case 427:
      if (lookahead == 'X') ADVANCE(585);
      END_STATE();
    case 428:
      if (lookahead == 'Y') ADVANCE(448);
      END_STATE();
    case 429:
      if (lookahead == 'Y') ADVANCE(568);
      END_STATE();
    case 430:
      if (lookahead == 'Y') ADVANCE(607);
      END_STATE();
    case 431:
      if (lookahead == 'Y') ADVANCE(83);
      END_STATE();
    case 432:
      if (lookahead == 'Y') ADVANCE(85);
      END_STATE();
    case 433:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 434:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 435:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 436:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 437:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 438:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 439:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 442:
      if (eof) ADVANCE(443);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(867);
      if (lookahead == '%') ADVANCE(878);
      if (lookahead == '&') ADVANCE(883);
      if (lookahead == '\'') ADVANCE(872);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '+') ADVANCE(879);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == '.') ADVANCE(474);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(464);
      if (lookahead == '=') ADVANCE(459);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(343);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'G') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'W') ADVANCE(213);
      if (lookahead == '[') ADVANCE(510);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(442)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_V2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(886);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(881);
      if (lookahead == '=') ADVANCE(884);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(881);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(885);
      if (lookahead == '>') ADVANCE(882);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(480);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_POST_DASHACCUM);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(570);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(561);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_MAX);
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(352);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_AVG);
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_SUM);
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_TO_CSV);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(785);
      if (lookahead == 'I') ADVANCE(773);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(646);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(800);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(854);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(820);
      if (lookahead == 'O') ADVANCE(828);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(786);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(848);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(851);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(738);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(645);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'I') ADVANCE(759);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(774);
      if (lookahead == 'O') ADVANCE(798);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'O') ADVANCE(642);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(811);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(771);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(736);
      if (lookahead == 'U') ADVANCE(768);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(666);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(667);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(668);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(669);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(670);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(671);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(672);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(673);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(674);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(675);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(676);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(677);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(678);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(679);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(714);
      if (lookahead == 'I') ADVANCE(808);
      if (lookahead == 'O') ADVANCE(776);
      if (sym_name_character_set_6(lookahead)) ADVANCE(859);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(855);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(844);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(845);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(662);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(496);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(500);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(528);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(610);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(579);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(581);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(565);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(509);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(681);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(826);
      if (lookahead == 'T') ADVANCE(794);
      if (lookahead == 'U') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(760);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'N') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(471);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(504);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(766);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(763);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(772);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(803);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(805);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(769);
      if (lookahead == 'U') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(770);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(856);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(780);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(687);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(806);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(540);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(552);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(548);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(522);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(554);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(560);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(558);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(865);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(498);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(790);
      if (lookahead == 'V') ADVANCE(713);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(853);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(683);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(630);
      if (lookahead == 'X') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q') ADVANCE(731);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(843);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(722);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(846);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(524);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(600);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(526);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(594);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(584);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(486);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(572);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(567);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(858);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(857);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(703);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(852);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(752);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(863);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(861);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(569);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(479);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(727);
      if (sym_name_character_set_7(lookahead)) ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(754);
      if (sym_name_character_set_7(lookahead)) ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(756);
      if (sym_name_character_set_7(lookahead)) ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(859);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(889);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead == '<') ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(868);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(889);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(874);
      if (lookahead == '<') ADVANCE(876);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(873);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(889);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(484);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 442},
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
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 442},
  [75] = {.lex_state = 8},
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
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 442},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 442},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
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
  [239] = {.lex_state = 442},
  [240] = {.lex_state = 442},
  [241] = {.lex_state = 442},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 442},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 442},
  [249] = {.lex_state = 442},
  [250] = {.lex_state = 35},
  [251] = {.lex_state = 442},
  [252] = {.lex_state = 442},
  [253] = {.lex_state = 442},
  [254] = {.lex_state = 442},
  [255] = {.lex_state = 35},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 29},
  [258] = {.lex_state = 30},
  [259] = {.lex_state = 442},
  [260] = {.lex_state = 442},
  [261] = {.lex_state = 35},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 442},
  [266] = {.lex_state = 442},
  [267] = {.lex_state = 26},
  [268] = {.lex_state = 35},
  [269] = {.lex_state = 35},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 35},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 26},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 35},
  [276] = {.lex_state = 35},
  [277] = {.lex_state = 35},
  [278] = {.lex_state = 442},
  [279] = {.lex_state = 442},
  [280] = {.lex_state = 35},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 29},
  [285] = {.lex_state = 442},
  [286] = {.lex_state = 442},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 442},
  [289] = {.lex_state = 442},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 29},
  [292] = {.lex_state = 442},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 442},
  [295] = {.lex_state = 30},
  [296] = {.lex_state = 26},
  [297] = {.lex_state = 26},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 442},
  [300] = {.lex_state = 26},
  [301] = {.lex_state = 29},
  [302] = {.lex_state = 442},
  [303] = {.lex_state = 442},
  [304] = {.lex_state = 442},
  [305] = {.lex_state = 442},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 442},
  [308] = {.lex_state = 442},
  [309] = {.lex_state = 442},
  [310] = {.lex_state = 442},
  [311] = {.lex_state = 442},
  [312] = {.lex_state = 29},
  [313] = {.lex_state = 26},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 26},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 26},
  [320] = {.lex_state = 26},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 26},
  [323] = {.lex_state = 26},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 442},
  [326] = {.lex_state = 442},
  [327] = {.lex_state = 442},
  [328] = {.lex_state = 26},
  [329] = {.lex_state = 442},
  [330] = {.lex_state = 442},
  [331] = {.lex_state = 442},
  [332] = {.lex_state = 442},
  [333] = {.lex_state = 442},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 442},
  [336] = {.lex_state = 442},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 442},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 442},
  [341] = {.lex_state = 442},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 442},
  [344] = {.lex_state = 442},
  [345] = {.lex_state = 442},
  [346] = {.lex_state = 27},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 442},
  [349] = {.lex_state = 442},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 442},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 20},
  [356] = {.lex_state = 442},
  [357] = {.lex_state = 28},
  [358] = {.lex_state = 442},
  [359] = {.lex_state = 20},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 26},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 442},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 27},
  [373] = {.lex_state = 442},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 20},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 20},
  [380] = {.lex_state = 20},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 20},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 20},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 442},
  [390] = {.lex_state = 442},
  [391] = {.lex_state = 442},
  [392] = {.lex_state = 26},
  [393] = {.lex_state = 442},
  [394] = {.lex_state = 20},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 20},
  [397] = {.lex_state = 20},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 20},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 442},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 20},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 20},
  [412] = {.lex_state = 8},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 442},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 442},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 442},
  [421] = {.lex_state = 442},
  [422] = {.lex_state = 442},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 442},
  [426] = {.lex_state = 8},
  [427] = {.lex_state = 20},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 442},
  [431] = {.lex_state = 20},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 442},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 442},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 442},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 442},
  [443] = {.lex_state = 20},
  [444] = {.lex_state = 442},
  [445] = {.lex_state = 20},
  [446] = {.lex_state = 29},
  [447] = {.lex_state = 442},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 442},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 442},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 442},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 20},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 442},
  [471] = {.lex_state = 442},
  [472] = {.lex_state = 20},
  [473] = {.lex_state = 442},
  [474] = {.lex_state = 30},
  [475] = {.lex_state = 442},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 8},
  [478] = {.lex_state = 8},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 8},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 442},
  [483] = {.lex_state = 442},
  [484] = {.lex_state = 8},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 6},
  [487] = {.lex_state = 8},
  [488] = {.lex_state = 8},
  [489] = {.lex_state = 442},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 25},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 442},
  [505] = {.lex_state = 25},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 442},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 20},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 442},
  [519] = {.lex_state = 442},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 442},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 442},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 442},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 8},
  [530] = {.lex_state = 24},
  [531] = {.lex_state = 8},
  [532] = {.lex_state = 25},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 20},
  [537] = {.lex_state = 20},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 442},
  [540] = {.lex_state = 8},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 29},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 20},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 442},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 20},
  [550] = {.lex_state = 8},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 24},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 20},
  [562] = {.lex_state = 24},
  [563] = {.lex_state = 25},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 442},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 8},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 25},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 8},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 442},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 16},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 442},
  [589] = {.lex_state = 14},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 8},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 14},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 442},
  [604] = {.lex_state = 8},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 14},
  [608] = {.lex_state = 16},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 442},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 442},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 442},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 442},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 8},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 20},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 442},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 20},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 20},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 442},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 20},
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
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 20},
  [676] = {.lex_state = 20},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 20},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 8},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 442},
  [690] = {.lex_state = 20},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 442},
  [693] = {.lex_state = 442},
  [694] = {.lex_state = 20},
  [695] = {.lex_state = 20},
  [696] = {.lex_state = 20},
  [697] = {.lex_state = 8},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 8},
  [700] = {.lex_state = 20},
  [701] = {.lex_state = 20},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 442},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 8},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 20},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 20},
  [720] = {.lex_state = 20},
  [721] = {.lex_state = 14},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 20},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 442},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 442},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 20},
  [737] = {.lex_state = 20},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 20},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 20},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 20},
  [747] = {.lex_state = 20},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 20},
  [752] = {.lex_state = 20},
  [753] = {.lex_state = 20},
  [754] = {.lex_state = 8},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 442},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 442},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 8},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 20},
  [769] = {.lex_state = 20},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 8},
  [772] = {.lex_state = 442},
  [773] = {.lex_state = 442},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 20},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 20},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 20},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 20},
  [787] = {.lex_state = 20},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 20},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 20},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 20},
  [799] = {.lex_state = 8},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 20},
  [804] = {.lex_state = 442},
  [805] = {.lex_state = 8},
  [806] = {.lex_state = 8},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 8},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 8},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 8},
  [814] = {.lex_state = 8},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 20},
  [818] = {.lex_state = 20},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 8},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 8},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 442},
  [832] = {.lex_state = 20},
  [833] = {.lex_state = 20},
  [834] = {.lex_state = 442},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 20},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 20},
  [845] = {.lex_state = 20},
  [846] = {.lex_state = 20},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 20},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 20},
  [865] = {.lex_state = 20},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
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
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_gsql] = STATE(854),
    [sym__definition] = STATE(373),
    [sym_create_query] = STATE(639),
    [sym_interpret_query] = STATE(639),
    [aux_sym_gsql_repeat1] = STATE(373),
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
    [sym_query_body_stmt] = STATE(785),
    [sym_assign_stmt] = STATE(784),
    [sym_v_set_var_decl_stmt] = STATE(784),
    [sym_l_accum_assign_stmt] = STATE(784),
    [sym_g_accum_assign_stmt] = STATE(784),
    [sym_g_accum_accum_stmt] = STATE(784),
    [sym_func_call_stmt] = STATE(784),
    [sym__select_stmt] = STATE(784),
    [sym_gsql_select_block] = STATE(784),
    [sym_gsql_select_clause] = STATE(622),
    [sym_query_body_case_stmt] = STATE(784),
    [sym_query_body_if_stmt] = STATE(784),
    [sym_query_body_while_stmt] = STATE(784),
    [sym_query_body_for_each_stmt] = STATE(784),
    [sym_decl_stmt] = STATE(784),
    [sym_base_decl_stmt] = STATE(782),
    [sym_accum_decl_stmt] = STATE(782),
    [sym_accum_type] = STATE(438),
    [sym_global_accum_name] = STATE(426),
    [sym_local_accum_name] = STATE(618),
    [sym_print_stmt] = STATE(784),
    [sym_base_type] = STATE(777),
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
    [sym_query_body_stmt] = STATE(785),
    [sym_assign_stmt] = STATE(784),
    [sym_v_set_var_decl_stmt] = STATE(784),
    [sym_l_accum_assign_stmt] = STATE(784),
    [sym_g_accum_assign_stmt] = STATE(784),
    [sym_g_accum_accum_stmt] = STATE(784),
    [sym_func_call_stmt] = STATE(784),
    [sym__select_stmt] = STATE(784),
    [sym_gsql_select_block] = STATE(784),
    [sym_gsql_select_clause] = STATE(622),
    [sym_query_body_case_stmt] = STATE(784),
    [sym_query_body_if_stmt] = STATE(784),
    [sym_query_body_while_stmt] = STATE(784),
    [sym_query_body_for_each_stmt] = STATE(784),
    [sym_decl_stmt] = STATE(784),
    [sym_base_decl_stmt] = STATE(782),
    [sym_accum_decl_stmt] = STATE(782),
    [sym_accum_type] = STATE(438),
    [sym_global_accum_name] = STATE(426),
    [sym_local_accum_name] = STATE(618),
    [sym_print_stmt] = STATE(784),
    [sym_base_type] = STATE(777),
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(785), 1,
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
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(785), 1,
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
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(785), 1,
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
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    STATE(812), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_query_body_stmts,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(502), 1,
      sym_query_body_stmts,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(748), 1,
      sym_query_body_stmts,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(535), 1,
      sym_query_body_stmts,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(586), 1,
      sym_query_body_stmts,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(749), 1,
      sym_query_body_stmts,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(738), 1,
      sym_query_body_stmts,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(723), 1,
      sym_query_body_stmts,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(574), 1,
      sym_query_body_stmts,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    STATE(835), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
    STATE(426), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_accum_type,
    STATE(494), 1,
      sym_query_body_stmts,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(777), 1,
      sym_base_type,
    STATE(788), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(782), 2,
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
    STATE(784), 14,
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
  [1854] = 6,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(24), 1,
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
  [1915] = 5,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(130), 38,
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
  [1973] = 4,
    STATE(24), 1,
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
  [2029] = 5,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(137), 38,
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
  [2087] = 4,
    STATE(25), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(143), 39,
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
  [2143] = 5,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(147), 38,
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
  [2201] = 4,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(147), 39,
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
  [2257] = 6,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 35,
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
  [2317] = 5,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(162), 38,
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
  [2375] = 6,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 35,
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
  [2488] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [2541] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(147), 39,
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
  [2594] = 4,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(162), 38,
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
  [2702] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(180), 38,
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
  [2754] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(180), 38,
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
  [2806] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 35,
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
  [2860] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(162), 38,
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
  [2912] = 5,
    ACTIONS(190), 1,
      sym_digit,
    STATE(41), 1,
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
  [2967] = 5,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_func_call_stmt_repeat2,
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
  [3022] = 5,
    ACTIONS(199), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 36,
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
  [3077] = 5,
    ACTIONS(190), 1,
      sym_digit,
    STATE(41), 1,
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
  [3132] = 5,
    ACTIONS(160), 1,
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
  [3187] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(170), 37,
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
  [3237] = 4,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 3,
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
  [3289] = 4,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(218), 36,
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
  [3341] = 4,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 36,
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
  [3393] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(176), 37,
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
  [3443] = 4,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(230), 36,
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
  [3642] = 3,
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
  [3691] = 3,
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
  [3740] = 3,
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
  [3789] = 3,
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
  [3838] = 3,
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
  [3887] = 3,
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
  [3936] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(156), 36,
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
  [4083] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [4132] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [4181] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [4230] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 3,
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
  [4279] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 36,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(251), 1,
      sym_expr,
    STATE(444), 1,
      sym_simple_set,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(622), 1,
      sym_gsql_select_clause,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(673), 3,
      sym_seed_set,
      sym__select_stmt,
      sym_gsql_select_block,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [4577] = 7,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 26,
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
  [4631] = 3,
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
  [4677] = 3,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 34,
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
  [4723] = 8,
    ACTIONS(158), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(156), 27,
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
  [4778] = 3,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 33,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(511), 1,
      sym_dml_sub_stmt_list,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(573), 1,
      sym_dml_sub_stmt_list,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(580), 1,
      sym_dml_sub_stmt_list,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(543), 1,
      sym_dml_sub_stmt_list,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(677), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(678), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(688), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(664), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(683), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(557), 1,
      sym_dml_sub_stmt_list,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(576), 1,
      sym_dml_sub_stmt_list,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(668), 1,
      sym_dml_sub_stmt_list,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(199), 1,
      sym_expr,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(555), 1,
      sym_condition,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_arg_list,
    STATE(858), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    STATE(371), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_global_accum_name,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(694), 1,
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
    STATE(352), 11,
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
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(200), 1,
      sym_expr,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(555), 1,
      sym_condition,
    STATE(592), 1,
      sym_arg_list,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(551), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6006] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(836), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(383), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6184] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(558), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(823), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(460), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(826), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(662), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(789), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6892] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(451), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6982] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(427), 1,
      anon_sym_WHEN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(299), 1,
      sym_expr,
    STATE(435), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7070] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(314), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7160] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(682), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7248] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(321), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7338] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(705), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7426] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(534), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7516] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(575), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7606] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7694] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(272), 1,
      sym_expr,
    STATE(473), 1,
      sym_simple_set,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_arg_list,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7782] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(473), 1,
      sym_simple_set,
    STATE(592), 1,
      sym_arg_list,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7870] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(554), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7960] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(810), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8048] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(569), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8138] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(807), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8226] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(259), 1,
      sym_expr,
    STATE(402), 1,
      sym_v_expr_set,
    STATE(406), 1,
      sym_print_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8314] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(687), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8402] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(567), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8492] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(840), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8580] = 13,
    ACTIONS(453), 1,
      anon_sym_IN,
    ACTIONS(457), 1,
      anon_sym_NOT,
    ACTIONS(459), 1,
      anon_sym_IS,
    ACTIONS(461), 1,
      anon_sym_BETWEEN,
    ACTIONS(463), 1,
      anon_sym_LIKE,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      sym_comparison_operator,
    STATE(162), 1,
      sym_math_operator,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(449), 10,
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
  [8642] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(501), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8732] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(650), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8820] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(259), 1,
      sym_expr,
    STATE(402), 1,
      sym_v_expr_set,
    STATE(465), 1,
      sym_print_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8908] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(841), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8996] = 26,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(671), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9084] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(491), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9174] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(490), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9264] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(533), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9354] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(577), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9444] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(449), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9534] = 27,
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
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(121), 1,
      sym_expr,
    STATE(466), 1,
      sym_condition,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    ACTIONS(405), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9624] = 7,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 20,
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
  [9673] = 4,
    STATE(162), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(250), 27,
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
  [9716] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(819), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9801] = 25,
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
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(272), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_arg_list,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9886] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(797), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9971] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(278), 1,
      sym_expr,
    STATE(279), 1,
      sym_set_bag_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10056] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(294), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(629), 1,
      sym_v_set_proj,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10141] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(294), 1,
      sym_expr,
    STATE(527), 1,
      sym_v_set_proj,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10226] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_arg_list,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10311] = 6,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(162), 1,
      sym_math_operator,
    ACTIONS(485), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(483), 19,
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
  [10358] = 25,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(278), 1,
      sym_expr,
    STATE(279), 1,
      sym_set_bag_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(816), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10443] = 25,
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
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(592), 1,
      sym_arg_list,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10528] = 6,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_DOT,
    STATE(170), 1,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(815), 1,
      sym_arg_list,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(310), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10742] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      sym_digit,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(142), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(307), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10906] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(286), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10988] = 6,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(179), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 20,
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
  [11034] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(305), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11116] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(196), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11198] = 6,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 20,
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
  [11244] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(254), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11326] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(241), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11408] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(239), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11490] = 24,
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
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_name,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      sym_digit,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(293), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11572] = 24,
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
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      sym_digit,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(214), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11654] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(304), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11736] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(240), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11818] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(134), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11900] = 5,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(179), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(162), 23,
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
  [11944] = 4,
    STATE(170), 1,
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
  [11986] = 15,
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
    ACTIONS(503), 1,
      sym_name,
    STATE(711), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(802), 2,
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
  [12050] = 14,
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
    ACTIONS(505), 1,
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
    STATE(699), 3,
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
  [12112] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(309), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12194] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(249), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12276] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(302), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12358] = 4,
    STATE(177), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 24,
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
  [12400] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(252), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12482] = 15,
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
    ACTIONS(503), 1,
      sym_name,
    STATE(803), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(802), 2,
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
  [12546] = 4,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(147), 24,
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
  [12588] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(449), 10,
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
    ACTIONS(290), 17,
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
  [12630] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      sym_digit,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(190), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12712] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(248), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12794] = 5,
    ACTIONS(509), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(147), 23,
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
  [12838] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(288), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12920] = 5,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(137), 23,
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
  [12964] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 23,
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
  [13008] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(303), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13090] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(308), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13172] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(311), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13254] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(253), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13336] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(251), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13418] = 24,
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
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(287), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13500] = 24,
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
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_name,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(283), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13582] = 24,
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
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_name,
    STATE(27), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(285), 1,
      sym_expr,
    STATE(618), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_aggregator,
    STATE(59), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13664] = 24,
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
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_name_dot,
    STATE(154), 1,
      sym_global_accum_name,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(211), 1,
      sym_expr,
    STATE(624), 1,
      sym_local_accum_name,
    STATE(858), 1,
      sym_aggregator,
    STATE(230), 2,
      sym_integer,
      sym_real,
    STATE(236), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(238), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13746] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(483), 19,
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
  [13789] = 3,
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
  [13828] = 3,
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
  [13867] = 3,
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
  [13906] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [13945] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(147), 24,
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
  [13984] = 4,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 27,
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
  [14025] = 4,
    ACTIONS(515), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(162), 23,
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
  [14066] = 14,
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
    ACTIONS(517), 1,
      sym_name,
    ACTIONS(27), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(33), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(712), 2,
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
  [14127] = 17,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_IN,
    ACTIONS(457), 1,
      anon_sym_NOT,
    ACTIONS(459), 1,
      anon_sym_IS,
    ACTIONS(461), 1,
      anon_sym_BETWEEN,
    ACTIONS(463), 1,
      anon_sym_LIKE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_comparison_operator,
    STATE(189), 1,
      sym_math_operator,
    STATE(437), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(449), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14193] = 17,
    ACTIONS(453), 1,
      anon_sym_IN,
    ACTIONS(457), 1,
      anon_sym_NOT,
    ACTIONS(459), 1,
      anon_sym_IS,
    ACTIONS(461), 1,
      anon_sym_BETWEEN,
    ACTIONS(463), 1,
      anon_sym_LIKE,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_comparison_operator,
    STATE(189), 1,
      sym_math_operator,
    STATE(437), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(449), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14259] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(180), 23,
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
  [14297] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(162), 23,
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
  [14335] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(180), 23,
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
  [14373] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(523), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 20,
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
  [14413] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(523), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(158), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 20,
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
    ACTIONS(497), 1,
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
  [14494] = 5,
    ACTIONS(525), 1,
      sym_digit,
    STATE(207), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(195), 21,
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
    STATE(207), 1,
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
  [14576] = 5,
    ACTIONS(530), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_func_call_stmt_repeat2,
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
  [14617] = 5,
    ACTIONS(528), 1,
      sym_digit,
    STATE(207), 1,
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
    STATE(189), 1,
      sym_math_operator,
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
  [14696] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(170), 22,
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
  [14732] = 4,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(230), 21,
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
  [14770] = 6,
    STATE(189), 1,
      sym_math_operator,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(485), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(483), 14,
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
  [14812] = 4,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(224), 21,
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
  [14850] = 4,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(218), 21,
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
  [14888] = 4,
    ACTIONS(539), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 4,
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
  [14926] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(176), 22,
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
  [14962] = 3,
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
  [14997] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(449), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(290), 18,
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
  [15034] = 3,
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
  [15069] = 3,
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
  [15104] = 3,
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
  [15139] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 4,
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
  [15174] = 3,
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
  [15209] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15244] = 3,
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
  [15279] = 3,
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
  [15314] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(224), 21,
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
  [15349] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15384] = 3,
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
  [15419] = 3,
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
  [15454] = 3,
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
  [15489] = 3,
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
  [15524] = 3,
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
  [15559] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 21,
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
  [15629] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
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
  [15664] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [15698] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [15732] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [15766] = 8,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_LT,
    STATE(206), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(158), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(156), 10,
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
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_DOT,
    ACTIONS(547), 1,
      anon_sym_LT,
    STATE(206), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(158), 2,
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
    ACTIONS(156), 10,
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
  [15844] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(553), 10,
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
  [15872] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(555), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(557), 10,
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
  [15900] = 9,
    ACTIONS(158), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(559), 1,
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
    ACTIONS(156), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15940] = 8,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(563), 1,
      anon_sym_SET,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(524), 1,
      sym_query_param,
    STATE(770), 1,
      sym_query_params,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(768), 3,
      sym_set_param,
      sym__type,
      sym_base_type,
    ACTIONS(565), 10,
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
  [15978] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
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
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16009] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
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
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16040] = 8,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(573), 1,
      anon_sym_GT,
    ACTIONS(575), 1,
      sym_name,
    STATE(264), 1,
      sym_tuple_field,
    STATE(652), 1,
      sym_base_type,
    STATE(256), 2,
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
  [16077] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(577), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16108] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(579), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16139] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(581), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16170] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(583), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16201] = 8,
    ACTIONS(585), 1,
      anon_sym_GT,
    ACTIONS(590), 1,
      anon_sym_VERTEX,
    ACTIONS(593), 1,
      sym_name,
    STATE(264), 1,
      sym_tuple_field,
    STATE(652), 1,
      sym_base_type,
    STATE(255), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(587), 10,
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
  [16238] = 8,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(575), 1,
      sym_name,
    ACTIONS(596), 1,
      anon_sym_GT,
    STATE(264), 1,
      sym_tuple_field,
    STATE(652), 1,
      sym_base_type,
    STATE(255), 2,
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
  [16275] = 6,
    ACTIONS(563), 1,
      anon_sym_SET,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(617), 1,
      sym_query_param,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(768), 3,
      sym_set_param,
      sym__type,
      sym_base_type,
    ACTIONS(565), 10,
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
  [16307] = 11,
    ACTIONS(598), 1,
      anon_sym_SUMACCUM,
    ACTIONS(604), 1,
      anon_sym_LISTACCUM,
    ACTIONS(608), 1,
      anon_sym_MAPACCUM,
    ACTIONS(610), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(612), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(614), 1,
      anon_sym_ARRAYACCUM,
    STATE(651), 1,
      sym_accum_type,
    ACTIONS(600), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(606), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
  [16349] = 7,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(618), 1,
      anon_sym_LBRACK,
    ACTIONS(620), 1,
      anon_sym_AS,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16383] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DASH,
    STATE(517), 1,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [16422] = 4,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(630), 12,
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
  [16449] = 5,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_GT,
    STATE(263), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 12,
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
  [16478] = 5,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(263), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 12,
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
  [16507] = 5,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(647), 12,
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
  [16536] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DASH,
    STATE(605), 1,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [16575] = 10,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DASH,
    STATE(726), 1,
      sym_constant,
    STATE(62), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [16614] = 14,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(405), 1,
      sym_atomic_edge_pattern,
    STATE(407), 1,
      sym_atomic_edge_type,
    STATE(521), 1,
      sym_path_edge_pattern,
    STATE(523), 1,
      sym_disj_pattern,
    STATE(613), 1,
      sym_step_edge_types,
    STATE(774), 1,
      sym_step_edge_set,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [16660] = 3,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 12,
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
  [16684] = 3,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(630), 12,
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
  [16708] = 8,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(187), 1,
      sym_math_operator,
    STATE(437), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16742] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(659), 1,
      sym_name,
    STATE(698), 2,
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
  [16770] = 8,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_DASH_GT,
    STATE(187), 1,
      sym_math_operator,
    STATE(437), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16804] = 13,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(665), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(327), 1,
      sym_step_source_set,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(362), 1,
      sym_path_pattern,
    STATE(390), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(423), 2,
      sym_step,
      sym_step_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [16848] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(503), 1,
      sym_name,
    STATE(802), 2,
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
  [16876] = 3,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 12,
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
  [16900] = 6,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(575), 1,
      sym_name,
    STATE(268), 1,
      sym_tuple_field,
    STATE(652), 1,
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
  [16930] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(505), 1,
      sym_name,
    STATE(699), 2,
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
  [16958] = 7,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_math_operator,
    STATE(440), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(521), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16990] = 4,
    ACTIONS(158), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(156), 10,
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
  [17016] = 5,
    ACTIONS(49), 1,
      anon_sym_VERTEX,
    ACTIONS(673), 1,
      sym_name,
    STATE(696), 2,
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
  [17044] = 3,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 12,
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
  [17068] = 4,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(754), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 10,
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
  [17093] = 4,
    STATE(187), 1,
      sym_math_operator,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 10,
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
  [17118] = 4,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(640), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 10,
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
  [17143] = 6,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17172] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17199] = 5,
    STATE(187), 1,
      sym_math_operator,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17226] = 7,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    STATE(520), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17257] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(543), 10,
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
  [17280] = 4,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(480), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 10,
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
  [17305] = 4,
    ACTIONS(567), 1,
      anon_sym_VERTEX,
    STATE(550), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 10,
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
  [17330] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [17353] = 5,
    STATE(187), 1,
      sym_math_operator,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(455), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17380] = 6,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(691), 1,
      anon_sym_AS,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17409] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 12,
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
  [17429] = 12,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(405), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_atomic_edge_type,
    STATE(521), 1,
      sym_path_edge_pattern,
    STATE(523), 1,
      sym_disj_pattern,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17469] = 12,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(405), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_atomic_edge_type,
    STATE(416), 1,
      sym_edge_set_type,
    STATE(523), 1,
      sym_disj_pattern,
    STATE(578), 1,
      sym_path_edge_pattern,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17509] = 12,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(405), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_atomic_edge_type,
    STATE(523), 1,
      sym_disj_pattern,
    STATE(578), 1,
      sym_path_edge_pattern,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17549] = 6,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(695), 1,
      anon_sym_WHEN,
    STATE(153), 1,
      sym_math_operator,
    STATE(467), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17577] = 12,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(405), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_atomic_edge_type,
    STATE(518), 1,
      sym_path_edge_pattern,
    STATE(523), 1,
      sym_disj_pattern,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17617] = 4,
    ACTIONS(699), 1,
      anon_sym_VERTEX,
    STATE(275), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(697), 10,
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
  [17641] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17667] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17692] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(705), 1,
      anon_sym_AND,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17717] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17742] = 11,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_GT,
    ACTIONS(711), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(391), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17779] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17804] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17829] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17854] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17879] = 5,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17904] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(721), 10,
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
  [17922] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(610), 1,
      sym_atomic_edge_type,
    STATE(613), 1,
      sym_step_edge_types,
    STATE(774), 1,
      sym_step_edge_set,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17956] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 10,
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
  [17974] = 2,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_AND,
      anon_sym_TO_CSV,
  [17992] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(351), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18026] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 10,
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
  [18044] = 5,
    ACTIONS(727), 1,
      anon_sym_DOT,
    ACTIONS(729), 1,
      anon_sym_PLUS_EQ,
    STATE(325), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18068] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(393), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18102] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(358), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18136] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(731), 10,
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
  [18154] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(335), 1,
      sym_step_vertex_types,
    STATE(338), 1,
      sym_atomic_vertex_type,
    STATE(419), 1,
      sym_step_vertex_set,
    ACTIONS(663), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18188] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(610), 1,
      sym_atomic_edge_type,
    STATE(613), 1,
      sym_step_edge_types,
    STATE(765), 1,
      sym_step_edge_set,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18222] = 10,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    ACTIONS(735), 1,
      anon_sym_WHERE,
    ACTIONS(737), 1,
      anon_sym_ACCUM,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    STATE(339), 1,
      sym_where_clause,
    STATE(374), 1,
      sym_accum_clause,
    STATE(646), 1,
      sym_limit_clause,
    STATE(375), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18256] = 4,
    ACTIONS(727), 1,
      anon_sym_DOT,
    STATE(326), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18277] = 4,
    ACTIONS(747), 1,
      anon_sym_DOT,
    STATE(326), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18298] = 5,
    ACTIONS(752), 1,
      anon_sym_DASH,
    STATE(341), 1,
      aux_sym_path_pattern_repeat1,
    STATE(348), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(750), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18321] = 9,
    ACTIONS(651), 1,
      anon_sym_LT,
    ACTIONS(655), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(414), 1,
      sym_atomic_edge_type,
    STATE(430), 1,
      sym_atomic_edge_pattern,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18352] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18368] = 4,
    ACTIONS(756), 1,
      anon_sym_DASH,
    STATE(341), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(750), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18388] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(758), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18404] = 3,
    ACTIONS(762), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(760), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18422] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(764), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18438] = 4,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(768), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18458] = 3,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(770), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18476] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(774), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18492] = 4,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18512] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18528] = 8,
    ACTIONS(737), 1,
      anon_sym_ACCUM,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    STATE(386), 1,
      sym_accum_clause,
    STATE(653), 1,
      sym_limit_clause,
    STATE(388), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18556] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(785), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18572] = 4,
    ACTIONS(756), 1,
      anon_sym_DASH,
    STATE(343), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(787), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18592] = 4,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18612] = 4,
    ACTIONS(793), 1,
      anon_sym_DASH,
    STATE(343), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18632] = 3,
    ACTIONS(762), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(760), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18650] = 4,
    ACTIONS(798), 1,
      anon_sym_DASH,
    STATE(345), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(796), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18669] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      anon_sym_DISTINCT,
    ACTIONS(805), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18696] = 4,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18715] = 4,
    ACTIONS(814), 1,
      anon_sym_DASH,
    STATE(345), 1,
      aux_sym_step_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18734] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18749] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18764] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18779] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18794] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18809] = 4,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18828] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(830), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      anon_sym_AT_AT,
    ACTIONS(834), 1,
      sym_name,
    STATE(716), 1,
      sym_for_each_control,
    STATE(607), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18853] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(836), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18868] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(805), 1,
      sym_name,
    ACTIONS(838), 1,
      anon_sym_RANGE,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(454), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18895] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(840), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [18910] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(830), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      anon_sym_AT_AT,
    ACTIONS(834), 1,
      sym_name,
    STATE(750), 1,
      sym_for_each_control,
    STATE(607), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18935] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(842), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18950] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(844), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18965] = 4,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [18984] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(657), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_atomic_edge_type,
    ACTIONS(653), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19009] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(848), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19024] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(850), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19039] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19054] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19069] = 6,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
    ACTIONS(858), 1,
      anon_sym_CREATE,
    ACTIONS(861), 1,
      anon_sym_INTERPRET,
    STATE(368), 2,
      sym__definition,
      aux_sym_gsql_repeat1,
    STATE(639), 2,
      sym_create_query,
      sym_interpret_query,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19092] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    ACTIONS(868), 1,
      sym_name,
    STATE(485), 1,
      sym_seed,
    STATE(634), 1,
      sym_global_accum_name,
    ACTIONS(866), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19117] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(870), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19132] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19147] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(805), 1,
      sym_name,
    ACTIONS(872), 1,
      anon_sym_DISTINCT,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(459), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19174] = 6,
    ACTIONS(7), 1,
      anon_sym_CREATE,
    ACTIONS(9), 1,
      anon_sym_INTERPRET,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
    STATE(368), 2,
      sym__definition,
      aux_sym_gsql_repeat1,
    STATE(639), 2,
      sym_create_query,
      sym_interpret_query,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19197] = 6,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_limit_clause,
    STATE(388), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19219] = 6,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_limit_clause,
    STATE(424), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19241] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(470), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19265] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(459), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19289] = 4,
    ACTIONS(190), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [19307] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(447), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19331] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(450), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19355] = 6,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(878), 1,
      anon_sym_SEMI,
    STATE(739), 1,
      sym_limit_clause,
    STATE(424), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19377] = 7,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    ACTIONS(882), 1,
      sym_name,
    STATE(163), 1,
      sym_name_dot,
    STATE(201), 1,
      sym_set_bag_expr,
    STATE(202), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19401] = 3,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(886), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19417] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(434), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19441] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(292), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19465] = 6,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(760), 1,
      sym_limit_clause,
    STATE(381), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19487] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19501] = 6,
    ACTIONS(739), 1,
      anon_sym_LIMIT,
    ACTIONS(741), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(760), 1,
      sym_limit_clause,
    STATE(424), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19523] = 6,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_digit,
    ACTIONS(622), 1,
      anon_sym_DASH,
    STATE(616), 1,
      sym_numeric,
    STATE(62), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19545] = 3,
    ACTIONS(892), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(890), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19561] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19575] = 6,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(868), 1,
      sym_name,
    STATE(626), 1,
      sym_seed,
    STATE(634), 1,
      sym_global_accum_name,
    ACTIONS(866), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19597] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19611] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(454), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19635] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(38), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19659] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(289), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19683] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(876), 1,
      sym_name,
    STATE(28), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19707] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(898), 1,
      sym_name,
    STATE(680), 1,
      sym_file_path,
    STATE(790), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19728] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(900), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [19741] = 4,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(905), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [19758] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(907), 1,
      sym_name,
    STATE(708), 1,
      sym_file_path,
    STATE(790), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19779] = 3,
    ACTIONS(620), 1,
      anon_sym_AS,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [19794] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(909), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [19807] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(911), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [19820] = 4,
    ACTIONS(915), 1,
      anon_sym_PIPE,
    STATE(420), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [19837] = 6,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    ACTIONS(921), 1,
      anon_sym_WHERE,
    ACTIONS(923), 1,
      anon_sym_TO_CSV,
    STATE(410), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19858] = 4,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(925), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(929), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19875] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(931), 1,
      sym_name,
    STATE(783), 1,
      sym_file_path,
    STATE(790), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19896] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(933), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [19909] = 6,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_SEMI,
    ACTIONS(937), 1,
      anon_sym_WHERE,
    ACTIONS(939), 1,
      anon_sym_TO_CSV,
    STATE(400), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19930] = 6,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(941), 1,
      sym_name,
    STATE(790), 1,
      sym_string_literal,
    STATE(795), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19951] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(943), 1,
      anon_sym_EQ,
    ACTIONS(945), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19972] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(949), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19993] = 3,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(929), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20008] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(951), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20021] = 5,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      anon_sym_PIPE,
    STATE(475), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(909), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20040] = 3,
    ACTIONS(959), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(957), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20055] = 2,
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
  [20068] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(961), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20081] = 4,
    ACTIONS(915), 1,
      anon_sym_PIPE,
    STATE(425), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(963), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20098] = 2,
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
  [20111] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(951), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20124] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20137] = 4,
    ACTIONS(967), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(965), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(424), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20154] = 4,
    ACTIONS(972), 1,
      anon_sym_PIPE,
    STATE(425), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20171] = 5,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_EQ,
    ACTIONS(977), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20189] = 3,
    ACTIONS(979), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(626), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [20203] = 3,
    ACTIONS(983), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(981), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20217] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(519), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20233] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(970), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20245] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(985), 1,
      sym_name,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(636), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20263] = 3,
    ACTIONS(989), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(987), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20277] = 5,
    ACTIONS(832), 1,
      anon_sym_AT_AT,
    ACTIONS(991), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(621), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20295] = 3,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20309] = 5,
    ACTIONS(995), 1,
      anon_sym_ELSE,
    ACTIONS(997), 1,
      anon_sym_END,
    ACTIONS(999), 1,
      anon_sym_WHEN,
    STATE(463), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20327] = 5,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_EQ,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
    STATE(508), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20345] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1005), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20361] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(471), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20377] = 3,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20391] = 4,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1005), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20407] = 4,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20423] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1012), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20435] = 5,
    ACTIONS(832), 1,
      anon_sym_AT_AT,
    ACTIONS(991), 1,
      sym_name,
    STATE(312), 1,
      sym_global_accum_name,
    STATE(522), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20453] = 3,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1016), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20467] = 3,
    ACTIONS(1020), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1018), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20481] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1022), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [20493] = 3,
    ACTIONS(1024), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20507] = 5,
    ACTIONS(1026), 1,
      anon_sym_ELSE,
    ACTIONS(1028), 1,
      anon_sym_END,
    ACTIONS(1030), 1,
      anon_sym_WHEN,
    STATE(456), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20525] = 4,
    ACTIONS(1032), 1,
      anon_sym_LIMIT,
    ACTIONS(1034), 1,
      anon_sym_DO,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20541] = 3,
    ACTIONS(1024), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20555] = 4,
    ACTIONS(1036), 1,
      anon_sym_LIMIT,
    ACTIONS(1038), 1,
      anon_sym_DO,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20571] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1040), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20583] = 4,
    ACTIONS(1044), 1,
      anon_sym_WHEN,
    STATE(453), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1042), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20599] = 3,
    ACTIONS(1047), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20613] = 5,
    ACTIONS(1049), 1,
      sym_name,
    ACTIONS(1051), 1,
      sym_digit,
    STATE(544), 1,
      aux_sym_accum_type_repeat1,
    STATE(681), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20631] = 4,
    ACTIONS(1055), 1,
      anon_sym_WHEN,
    STATE(456), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1053), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20647] = 3,
    ACTIONS(1060), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1058), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20661] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(985), 1,
      sym_name,
    STATE(404), 1,
      sym_global_accum_name,
    STATE(566), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20679] = 3,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20693] = 4,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    ACTIONS(1066), 1,
      anon_sym_TO_CSV,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20709] = 3,
    ACTIONS(1070), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1068), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20723] = 5,
    ACTIONS(1049), 1,
      sym_name,
    ACTIONS(1051), 1,
      sym_digit,
    STATE(544), 1,
      aux_sym_accum_type_repeat1,
    STATE(744), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20741] = 4,
    ACTIONS(1074), 1,
      anon_sym_WHEN,
    STATE(463), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1072), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20757] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1077), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [20769] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(905), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [20781] = 4,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
    ACTIONS(1081), 1,
      anon_sym_TO_CSV,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20797] = 5,
    ACTIONS(695), 1,
      anon_sym_WHEN,
    ACTIONS(1083), 1,
      anon_sym_ELSE,
    ACTIONS(1085), 1,
      anon_sym_END,
    STATE(453), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20815] = 4,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20831] = 3,
    ACTIONS(1092), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1090), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20845] = 3,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20859] = 5,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_EQ,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    STATE(507), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20877] = 3,
    ACTIONS(1104), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1102), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20891] = 3,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1016), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20905] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 4,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [20917] = 4,
    ACTIONS(955), 1,
      anon_sym_PIPE,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20932] = 4,
    ACTIONS(1110), 1,
      anon_sym_ELSE,
    ACTIONS(1113), 1,
      anon_sym_END,
    STATE(476), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20947] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20962] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20977] = 4,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      sym_name,
    STATE(422), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20992] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_GT,
    STATE(478), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21007] = 4,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21022] = 4,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    ACTIONS(1134), 1,
      anon_sym_PIPE,
    STATE(482), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21037] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1137), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21048] = 4,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_GT,
    STATE(487), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21063] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(548), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21078] = 3,
    ACTIONS(1149), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21091] = 4,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_GT,
    STATE(487), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21106] = 4,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21121] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1161), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21132] = 3,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21145] = 3,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21158] = 4,
    ACTIONS(1167), 1,
      anon_sym_ELSE,
    ACTIONS(1170), 1,
      anon_sym_END,
    STATE(492), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21173] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(626), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21184] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1172), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21195] = 4,
    ACTIONS(1174), 1,
      anon_sym_AT,
    ACTIONS(1176), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21210] = 4,
    ACTIONS(1178), 1,
      anon_sym_SQUOTE,
    ACTIONS(1180), 1,
      aux_sym_string_literal_token2,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21225] = 4,
    ACTIONS(190), 1,
      sym_digit,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21240] = 4,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE,
    ACTIONS(1186), 1,
      aux_sym_string_literal_token1,
    STATE(556), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21255] = 4,
    ACTIONS(1188), 1,
      anon_sym_AT,
    ACTIONS(1190), 1,
      sym_name,
    STATE(164), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21270] = 4,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21285] = 3,
    ACTIONS(1194), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21298] = 4,
    ACTIONS(1196), 1,
      anon_sym_ELSE,
    ACTIONS(1198), 1,
      anon_sym_END,
    STATE(513), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21313] = 4,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21328] = 3,
    ACTIONS(1205), 1,
      anon_sym_EQ,
    ACTIONS(1130), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21341] = 4,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1209), 1,
      aux_sym_string_literal_token2,
    STATE(496), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21356] = 4,
    ACTIONS(1207), 1,
      anon_sym_DQUOTE,
    ACTIONS(1211), 1,
      aux_sym_string_literal_token1,
    STATE(498), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21371] = 4,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21386] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21401] = 4,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(509), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21416] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1222), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21427] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1224), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21438] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(675), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21449] = 4,
    ACTIONS(1226), 1,
      anon_sym_ELSE,
    ACTIONS(1228), 1,
      anon_sym_END,
    STATE(492), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21464] = 4,
    ACTIONS(1230), 1,
      anon_sym_ELSE,
    ACTIONS(1232), 1,
      anon_sym_END,
    STATE(476), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21479] = 4,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21494] = 4,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    ACTIONS(1241), 1,
      anon_sym_PIPE2,
    STATE(516), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21509] = 4,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_SEMI,
    STATE(526), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21524] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1246), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21535] = 3,
    ACTIONS(1248), 1,
      anon_sym_EQ,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21548] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21563] = 4,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    ACTIONS(1256), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21578] = 4,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(1260), 1,
      anon_sym_PIPE2,
    STATE(538), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21593] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21604] = 4,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    STATE(553), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21619] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1246), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21630] = 4,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1266), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21645] = 4,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      anon_sym_RBRACK,
    STATE(565), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21660] = 4,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    STATE(528), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21675] = 4,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_GT,
    STATE(484), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21690] = 4,
    ACTIONS(1279), 1,
      anon_sym_DQUOTE,
    ACTIONS(1281), 1,
      aux_sym_string_literal_token1,
    STATE(562), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21705] = 4,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_GT,
    STATE(487), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21720] = 4,
    ACTIONS(1279), 1,
      anon_sym_SQUOTE,
    ACTIONS(1283), 1,
      aux_sym_string_literal_token2,
    STATE(563), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21735] = 3,
    ACTIONS(1285), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21748] = 3,
    ACTIONS(1287), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21761] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1289), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21772] = 4,
    ACTIONS(1291), 1,
      sym_name,
    STATE(330), 1,
      sym_step_source_set,
    STATE(387), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21787] = 4,
    ACTIONS(1188), 1,
      anon_sym_AT,
    ACTIONS(1293), 1,
      sym_name,
    STATE(164), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21802] = 4,
    ACTIONS(1260), 1,
      anon_sym_PIPE2,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21817] = 3,
    ACTIONS(1299), 1,
      anon_sym_EQ,
    ACTIONS(1297), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21830] = 4,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    ACTIONS(1303), 1,
      anon_sym_EQ,
    ACTIONS(1305), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21845] = 4,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21860] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1022), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [21871] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1311), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21882] = 4,
    ACTIONS(190), 1,
      sym_digit,
    ACTIONS(1313), 1,
      anon_sym_DO,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21897] = 4,
    ACTIONS(1315), 1,
      anon_sym_AT,
    ACTIONS(1317), 1,
      sym_name,
    STATE(604), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21912] = 4,
    ACTIONS(1319), 1,
      anon_sym_OR,
    ACTIONS(1321), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1323), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21927] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1325), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21938] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1327), 1,
      anon_sym_RBRACE,
    STATE(509), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21953] = 4,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      sym_name,
    STATE(473), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21968] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_GT,
    STATE(477), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21983] = 3,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21996] = 4,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22011] = 4,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22026] = 3,
    ACTIONS(1337), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22039] = 3,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22052] = 4,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
    ACTIONS(1343), 1,
      aux_sym_string_literal_token1,
    STATE(556), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22067] = 4,
    ACTIONS(1346), 1,
      anon_sym_ELSE,
    ACTIONS(1348), 1,
      anon_sym_END,
    STATE(514), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22082] = 3,
    ACTIONS(1350), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22095] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22106] = 4,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    STATE(560), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22121] = 4,
    ACTIONS(1174), 1,
      anon_sym_AT,
    ACTIONS(1357), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22136] = 4,
    ACTIONS(1186), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    STATE(556), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22151] = 4,
    ACTIONS(1180), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1359), 1,
      anon_sym_SQUOTE,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22166] = 4,
    ACTIONS(1315), 1,
      anon_sym_AT,
    ACTIONS(1361), 1,
      sym_name,
    STATE(318), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22181] = 4,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22196] = 4,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      anon_sym_PIPE,
    STATE(475), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22211] = 3,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22224] = 4,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_GT,
    STATE(531), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22239] = 3,
    ACTIONS(1369), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22252] = 4,
    ACTIONS(1371), 1,
      anon_sym_SQUOTE,
    ACTIONS(1373), 1,
      aux_sym_string_literal_token2,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1182), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22267] = 4,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(571), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22282] = 4,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(1381), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22297] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1383), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [22308] = 4,
    ACTIONS(1196), 1,
      anon_sym_ELSE,
    ACTIONS(1198), 1,
      anon_sym_END,
    STATE(513), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22323] = 3,
    ACTIONS(1385), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22336] = 3,
    STATE(514), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1387), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22349] = 3,
    ACTIONS(1389), 1,
      anon_sym_THEN,
    ACTIONS(884), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22362] = 3,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22374] = 3,
    ACTIONS(1393), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22386] = 2,
    ACTIONS(1387), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22396] = 2,
    ACTIONS(1395), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22406] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22418] = 3,
    ACTIONS(1030), 1,
      anon_sym_WHEN,
    STATE(448), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22430] = 3,
    ACTIONS(1397), 1,
      sym_digit,
    STATE(497), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22442] = 2,
    ACTIONS(1399), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22452] = 2,
    ACTIONS(1401), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22462] = 3,
    ACTIONS(1339), 1,
      anon_sym_NULL,
    ACTIONS(1403), 1,
      anon_sym_NOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22474] = 3,
    ACTIONS(1405), 1,
      anon_sym_DOT,
    ACTIONS(1407), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22486] = 3,
    ACTIONS(1409), 1,
      anon_sym_IN,
    ACTIONS(1411), 1,
      anon_sym_LIKE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22498] = 3,
    ACTIONS(1413), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22510] = 3,
    ACTIONS(1415), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22522] = 3,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(1419), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22534] = 2,
    ACTIONS(1421), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22544] = 2,
    ACTIONS(1423), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22554] = 2,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22564] = 3,
    ACTIONS(1427), 1,
      anon_sym_SYNTAX,
    ACTIONS(1429), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22576] = 3,
    ACTIONS(1431), 1,
      anon_sym_SYNTAX,
    ACTIONS(1433), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22588] = 3,
    ACTIONS(1435), 1,
      anon_sym_IN,
    ACTIONS(1437), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22600] = 3,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(649), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22612] = 2,
    ACTIONS(1441), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22622] = 3,
    ACTIONS(1443), 1,
      anon_sym_SYNTAX,
    ACTIONS(1445), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22634] = 2,
    ACTIONS(1447), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22644] = 3,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    ACTIONS(1303), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22656] = 2,
    ACTIONS(1449), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22666] = 2,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22676] = 3,
    ACTIONS(1453), 1,
      anon_sym_SYNTAX,
    ACTIONS(1455), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22688] = 3,
    ACTIONS(1457), 1,
      anon_sym_IN,
    ACTIONS(1459), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22700] = 2,
    ACTIONS(1461), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22710] = 3,
    ACTIONS(1463), 1,
      sym_digit,
    STATE(378), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22722] = 2,
    ACTIONS(925), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22732] = 3,
    ACTIONS(1465), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22744] = 3,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(579), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22756] = 3,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    ACTIONS(1471), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22768] = 2,
    ACTIONS(1473), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22778] = 3,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(734), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22790] = 2,
    ACTIONS(1475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22800] = 2,
    ACTIONS(1272), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22810] = 3,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22822] = 3,
    ACTIONS(1477), 1,
      anon_sym_SYNTAX,
    ACTIONS(1479), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22834] = 2,
    ACTIONS(1481), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22844] = 2,
    ACTIONS(1239), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22854] = 3,
    ACTIONS(1483), 1,
      anon_sym_FROM,
    STATE(324), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22866] = 3,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(693), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22878] = 3,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22890] = 3,
    ACTIONS(1485), 1,
      sym_digit,
    STATE(208), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22902] = 2,
    ACTIONS(1220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22912] = 2,
    ACTIONS(1487), 2,
      anon_sym_V2,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22922] = 3,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    ACTIONS(1491), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22934] = 2,
    ACTIONS(1203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22944] = 2,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22954] = 3,
    ACTIONS(1495), 1,
      anon_sym_DOT,
    ACTIONS(1497), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22966] = 3,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22978] = 3,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(773), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22990] = 2,
    ACTIONS(1147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23000] = 3,
    ACTIONS(1502), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1504), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23012] = 2,
    ACTIONS(1132), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23022] = 2,
    ACTIONS(1506), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23032] = 3,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(834), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23044] = 3,
    ACTIONS(1508), 1,
      anon_sym_LBRACE,
    STATE(483), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23056] = 2,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23066] = 2,
    ACTIONS(1510), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23075] = 2,
    ACTIONS(1512), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23084] = 2,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23093] = 2,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23102] = 2,
    ACTIONS(1518), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23111] = 2,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23120] = 2,
    ACTIONS(1520), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23129] = 2,
    ACTIONS(1522), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23138] = 2,
    ACTIONS(1524), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23147] = 2,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23156] = 2,
    ACTIONS(1528), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23165] = 2,
    ACTIONS(1530), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23174] = 2,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23183] = 2,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23192] = 2,
    ACTIONS(1534), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23201] = 2,
    ACTIONS(1536), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23210] = 2,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23219] = 2,
    ACTIONS(1538), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23228] = 2,
    ACTIONS(1540), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23237] = 2,
    ACTIONS(1542), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23246] = 2,
    ACTIONS(1544), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23255] = 2,
    ACTIONS(1546), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23264] = 2,
    ACTIONS(1548), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23273] = 2,
    ACTIONS(1550), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23282] = 2,
    ACTIONS(1552), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23291] = 2,
    ACTIONS(1554), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23300] = 2,
    ACTIONS(1556), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23309] = 2,
    ACTIONS(1558), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23318] = 2,
    ACTIONS(1560), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23327] = 2,
    ACTIONS(1562), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23336] = 2,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23345] = 2,
    ACTIONS(1564), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23354] = 2,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23363] = 2,
    ACTIONS(1566), 1,
      anon_sym_STEP,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23372] = 2,
    ACTIONS(1568), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23381] = 2,
    ACTIONS(1570), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23390] = 2,
    ACTIONS(1572), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23399] = 2,
    ACTIONS(1574), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23408] = 2,
    ACTIONS(1576), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23417] = 2,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23426] = 2,
    ACTIONS(1578), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23435] = 2,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23444] = 2,
    ACTIONS(1582), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23453] = 2,
    ACTIONS(1584), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23462] = 2,
    ACTIONS(1586), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23471] = 2,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23480] = 2,
    ACTIONS(1588), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23489] = 2,
    ACTIONS(1590), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23498] = 2,
    ACTIONS(1592), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23507] = 2,
    ACTIONS(1594), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23516] = 2,
    ACTIONS(1596), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23525] = 2,
    ACTIONS(1598), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23534] = 2,
    ACTIONS(1600), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23543] = 2,
    ACTIONS(1602), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23552] = 2,
    ACTIONS(1604), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23561] = 2,
    ACTIONS(1606), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23570] = 2,
    ACTIONS(1608), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23579] = 2,
    ACTIONS(1610), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23588] = 2,
    ACTIONS(1612), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23597] = 2,
    ACTIONS(1614), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23606] = 2,
    ACTIONS(1616), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23615] = 2,
    ACTIONS(1618), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23624] = 2,
    ACTIONS(1620), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23633] = 2,
    ACTIONS(1622), 1,
      anon_sym_NULL,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23642] = 2,
    ACTIONS(1624), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23651] = 2,
    ACTIONS(1626), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23660] = 2,
    ACTIONS(1628), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23669] = 2,
    ACTIONS(1630), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23678] = 2,
    ACTIONS(1632), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23687] = 2,
    ACTIONS(1630), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23696] = 2,
    ACTIONS(1634), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23705] = 2,
    ACTIONS(1636), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23714] = 2,
    ACTIONS(1638), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23723] = 2,
    ACTIONS(1640), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23732] = 2,
    ACTIONS(1642), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23741] = 2,
    ACTIONS(1644), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23750] = 2,
    ACTIONS(1646), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23759] = 2,
    ACTIONS(1648), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23768] = 2,
    ACTIONS(1650), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23777] = 2,
    ACTIONS(1652), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23786] = 2,
    ACTIONS(1654), 1,
      anon_sym_MIN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23795] = 2,
    ACTIONS(1656), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23804] = 2,
    ACTIONS(1658), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23813] = 2,
    ACTIONS(1660), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23822] = 2,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23831] = 2,
    ACTIONS(1662), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23840] = 2,
    ACTIONS(1664), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23849] = 2,
    ACTIONS(1666), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23858] = 2,
    ACTIONS(1668), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23867] = 2,
    ACTIONS(1670), 1,
      anon_sym_V2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23876] = 2,
    ACTIONS(1672), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23885] = 2,
    ACTIONS(1674), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23894] = 2,
    ACTIONS(1676), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23903] = 2,
    ACTIONS(1678), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23912] = 2,
    ACTIONS(1680), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23921] = 2,
    ACTIONS(1682), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23930] = 2,
    ACTIONS(1684), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23939] = 2,
    ACTIONS(1686), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23948] = 2,
    ACTIONS(1688), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23957] = 2,
    ACTIONS(1690), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23966] = 2,
    ACTIONS(1692), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23975] = 2,
    ACTIONS(1313), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23984] = 2,
    ACTIONS(1694), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23993] = 2,
    ACTIONS(1696), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24002] = 2,
    ACTIONS(1698), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24011] = 2,
    ACTIONS(1022), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24020] = 2,
    ACTIONS(1700), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24029] = 2,
    ACTIONS(1702), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24038] = 2,
    ACTIONS(1704), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24047] = 2,
    ACTIONS(1706), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24056] = 2,
    ACTIONS(1708), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24065] = 2,
    ACTIONS(1710), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24074] = 2,
    ACTIONS(1712), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24083] = 2,
    ACTIONS(1714), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24092] = 2,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24101] = 2,
    ACTIONS(1716), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24110] = 2,
    ACTIONS(1718), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24119] = 2,
    ACTIONS(1720), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24128] = 2,
    ACTIONS(1722), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24137] = 2,
    ACTIONS(878), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24146] = 2,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24155] = 2,
    ACTIONS(1726), 1,
      anon_sym_MAX,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24164] = 2,
    ACTIONS(1728), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24173] = 2,
    ACTIONS(1730), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24182] = 2,
    ACTIONS(1732), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24191] = 2,
    ACTIONS(1734), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24200] = 2,
    ACTIONS(1736), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24209] = 2,
    ACTIONS(1738), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24218] = 2,
    ACTIONS(1740), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24227] = 2,
    ACTIONS(1742), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24236] = 2,
    ACTIONS(1744), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24245] = 2,
    ACTIONS(1746), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24254] = 2,
    ACTIONS(1748), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24263] = 2,
    ACTIONS(1750), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24272] = 2,
    ACTIONS(1752), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24281] = 2,
    ACTIONS(1754), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24290] = 2,
    ACTIONS(1756), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24299] = 2,
    ACTIONS(1758), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24308] = 2,
    ACTIONS(1760), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24317] = 2,
    ACTIONS(1762), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24326] = 2,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24335] = 2,
    ACTIONS(1764), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24344] = 2,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24353] = 2,
    ACTIONS(1766), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24362] = 2,
    ACTIONS(1768), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24371] = 2,
    ACTIONS(1770), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24380] = 2,
    ACTIONS(1772), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24389] = 2,
    ACTIONS(1774), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24398] = 2,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24407] = 2,
    ACTIONS(1776), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24416] = 2,
    ACTIONS(1778), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24425] = 2,
    ACTIONS(1780), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24434] = 2,
    ACTIONS(1782), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24443] = 2,
    ACTIONS(1784), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24452] = 2,
    ACTIONS(1786), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24461] = 2,
    ACTIONS(1788), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24470] = 2,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24479] = 2,
    ACTIONS(1790), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24488] = 2,
    ACTIONS(1792), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24497] = 2,
    ACTIONS(1786), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24506] = 2,
    ACTIONS(1794), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24515] = 2,
    ACTIONS(1796), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24524] = 2,
    ACTIONS(1798), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24533] = 2,
    ACTIONS(1800), 1,
      anon_sym_SUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24542] = 2,
    ACTIONS(1802), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24551] = 2,
    ACTIONS(1804), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24560] = 2,
    ACTIONS(1806), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24569] = 2,
    ACTIONS(1808), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24578] = 2,
    ACTIONS(1810), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24587] = 2,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24596] = 2,
    ACTIONS(1812), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24605] = 2,
    ACTIONS(1814), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24614] = 2,
    ACTIONS(1816), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24623] = 2,
    ACTIONS(1818), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24632] = 2,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24641] = 2,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24650] = 2,
    ACTIONS(1820), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24659] = 2,
    ACTIONS(1822), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24668] = 2,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24677] = 2,
    ACTIONS(1824), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24686] = 2,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24695] = 2,
    ACTIONS(1828), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24704] = 2,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24713] = 2,
    ACTIONS(1830), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24722] = 2,
    ACTIONS(1832), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24731] = 2,
    ACTIONS(1834), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24740] = 2,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24749] = 2,
    ACTIONS(1838), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24758] = 2,
    ACTIONS(1840), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24767] = 2,
    ACTIONS(1842), 1,
      anon_sym_TUPLE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24776] = 2,
    ACTIONS(1844), 1,
      anon_sym_AVG,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24785] = 2,
    ACTIONS(1846), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24794] = 2,
    ACTIONS(1848), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24803] = 2,
    ACTIONS(1850), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24812] = 2,
    ACTIONS(1852), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24821] = 2,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24830] = 2,
    ACTIONS(1856), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24839] = 2,
    ACTIONS(1858), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24848] = 2,
    ACTIONS(1860), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24857] = 2,
    ACTIONS(1862), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24866] = 2,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24875] = 2,
    ACTIONS(1866), 1,
      anon_sym_FROM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24884] = 2,
    ACTIONS(1868), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24893] = 2,
    ACTIONS(1870), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24902] = 2,
    ACTIONS(1872), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24911] = 2,
    ACTIONS(1874), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24920] = 2,
    ACTIONS(1876), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24929] = 2,
    ACTIONS(1878), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24938] = 2,
    ACTIONS(1880), 1,
      anon_sym_REPLACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24947] = 2,
    ACTIONS(1882), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24956] = 2,
    ACTIONS(1884), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24965] = 2,
    ACTIONS(1886), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24974] = 2,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24983] = 2,
    ACTIONS(1890), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24992] = 2,
    ACTIONS(1892), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25001] = 2,
    ACTIONS(1894), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25010] = 2,
    ACTIONS(1896), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25019] = 2,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25028] = 2,
    ACTIONS(1900), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25037] = 2,
    ACTIONS(1902), 1,
      anon_sym_SELECT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25046] = 2,
    ACTIONS(1904), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25055] = 2,
    ACTIONS(1906), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25064] = 2,
    ACTIONS(1908), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25073] = 2,
    ACTIONS(1910), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25082] = 2,
    ACTIONS(1912), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25091] = 2,
    ACTIONS(1914), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25100] = 2,
    ACTIONS(1916), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25109] = 2,
    ACTIONS(1918), 1,
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
  [SMALL_STATE(22)] = 1973,
  [SMALL_STATE(23)] = 2029,
  [SMALL_STATE(24)] = 2087,
  [SMALL_STATE(25)] = 2143,
  [SMALL_STATE(26)] = 2201,
  [SMALL_STATE(27)] = 2257,
  [SMALL_STATE(28)] = 2317,
  [SMALL_STATE(29)] = 2375,
  [SMALL_STATE(30)] = 2435,
  [SMALL_STATE(31)] = 2488,
  [SMALL_STATE(32)] = 2541,
  [SMALL_STATE(33)] = 2594,
  [SMALL_STATE(34)] = 2649,
  [SMALL_STATE(35)] = 2702,
  [SMALL_STATE(36)] = 2754,
  [SMALL_STATE(37)] = 2806,
  [SMALL_STATE(38)] = 2860,
  [SMALL_STATE(39)] = 2912,
  [SMALL_STATE(40)] = 2967,
  [SMALL_STATE(41)] = 3022,
  [SMALL_STATE(42)] = 3077,
  [SMALL_STATE(43)] = 3132,
  [SMALL_STATE(44)] = 3187,
  [SMALL_STATE(45)] = 3237,
  [SMALL_STATE(46)] = 3289,
  [SMALL_STATE(47)] = 3341,
  [SMALL_STATE(48)] = 3393,
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
  [SMALL_STATE(72)] = 4631,
  [SMALL_STATE(73)] = 4677,
  [SMALL_STATE(74)] = 4723,
  [SMALL_STATE(75)] = 4778,
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
  [SMALL_STATE(103)] = 6982,
  [SMALL_STATE(104)] = 7070,
  [SMALL_STATE(105)] = 7160,
  [SMALL_STATE(106)] = 7248,
  [SMALL_STATE(107)] = 7338,
  [SMALL_STATE(108)] = 7426,
  [SMALL_STATE(109)] = 7516,
  [SMALL_STATE(110)] = 7606,
  [SMALL_STATE(111)] = 7694,
  [SMALL_STATE(112)] = 7782,
  [SMALL_STATE(113)] = 7870,
  [SMALL_STATE(114)] = 7960,
  [SMALL_STATE(115)] = 8048,
  [SMALL_STATE(116)] = 8138,
  [SMALL_STATE(117)] = 8226,
  [SMALL_STATE(118)] = 8314,
  [SMALL_STATE(119)] = 8402,
  [SMALL_STATE(120)] = 8492,
  [SMALL_STATE(121)] = 8580,
  [SMALL_STATE(122)] = 8642,
  [SMALL_STATE(123)] = 8732,
  [SMALL_STATE(124)] = 8820,
  [SMALL_STATE(125)] = 8908,
  [SMALL_STATE(126)] = 8996,
  [SMALL_STATE(127)] = 9084,
  [SMALL_STATE(128)] = 9174,
  [SMALL_STATE(129)] = 9264,
  [SMALL_STATE(130)] = 9354,
  [SMALL_STATE(131)] = 9444,
  [SMALL_STATE(132)] = 9534,
  [SMALL_STATE(133)] = 9624,
  [SMALL_STATE(134)] = 9673,
  [SMALL_STATE(135)] = 9716,
  [SMALL_STATE(136)] = 9801,
  [SMALL_STATE(137)] = 9886,
  [SMALL_STATE(138)] = 9971,
  [SMALL_STATE(139)] = 10056,
  [SMALL_STATE(140)] = 10141,
  [SMALL_STATE(141)] = 10226,
  [SMALL_STATE(142)] = 10311,
  [SMALL_STATE(143)] = 10358,
  [SMALL_STATE(144)] = 10443,
  [SMALL_STATE(145)] = 10528,
  [SMALL_STATE(146)] = 10575,
  [SMALL_STATE(147)] = 10660,
  [SMALL_STATE(148)] = 10742,
  [SMALL_STATE(149)] = 10824,
  [SMALL_STATE(150)] = 10906,
  [SMALL_STATE(151)] = 10988,
  [SMALL_STATE(152)] = 11034,
  [SMALL_STATE(153)] = 11116,
  [SMALL_STATE(154)] = 11198,
  [SMALL_STATE(155)] = 11244,
  [SMALL_STATE(156)] = 11326,
  [SMALL_STATE(157)] = 11408,
  [SMALL_STATE(158)] = 11490,
  [SMALL_STATE(159)] = 11572,
  [SMALL_STATE(160)] = 11654,
  [SMALL_STATE(161)] = 11736,
  [SMALL_STATE(162)] = 11818,
  [SMALL_STATE(163)] = 11900,
  [SMALL_STATE(164)] = 11944,
  [SMALL_STATE(165)] = 11986,
  [SMALL_STATE(166)] = 12050,
  [SMALL_STATE(167)] = 12112,
  [SMALL_STATE(168)] = 12194,
  [SMALL_STATE(169)] = 12276,
  [SMALL_STATE(170)] = 12358,
  [SMALL_STATE(171)] = 12400,
  [SMALL_STATE(172)] = 12482,
  [SMALL_STATE(173)] = 12546,
  [SMALL_STATE(174)] = 12588,
  [SMALL_STATE(175)] = 12630,
  [SMALL_STATE(176)] = 12712,
  [SMALL_STATE(177)] = 12794,
  [SMALL_STATE(178)] = 12838,
  [SMALL_STATE(179)] = 12920,
  [SMALL_STATE(180)] = 12964,
  [SMALL_STATE(181)] = 13008,
  [SMALL_STATE(182)] = 13090,
  [SMALL_STATE(183)] = 13172,
  [SMALL_STATE(184)] = 13254,
  [SMALL_STATE(185)] = 13336,
  [SMALL_STATE(186)] = 13418,
  [SMALL_STATE(187)] = 13500,
  [SMALL_STATE(188)] = 13582,
  [SMALL_STATE(189)] = 13664,
  [SMALL_STATE(190)] = 13746,
  [SMALL_STATE(191)] = 13789,
  [SMALL_STATE(192)] = 13828,
  [SMALL_STATE(193)] = 13867,
  [SMALL_STATE(194)] = 13906,
  [SMALL_STATE(195)] = 13945,
  [SMALL_STATE(196)] = 13984,
  [SMALL_STATE(197)] = 14025,
  [SMALL_STATE(198)] = 14066,
  [SMALL_STATE(199)] = 14127,
  [SMALL_STATE(200)] = 14193,
  [SMALL_STATE(201)] = 14259,
  [SMALL_STATE(202)] = 14297,
  [SMALL_STATE(203)] = 14335,
  [SMALL_STATE(204)] = 14373,
  [SMALL_STATE(205)] = 14413,
  [SMALL_STATE(206)] = 14453,
  [SMALL_STATE(207)] = 14494,
  [SMALL_STATE(208)] = 14535,
  [SMALL_STATE(209)] = 14576,
  [SMALL_STATE(210)] = 14617,
  [SMALL_STATE(211)] = 14658,
  [SMALL_STATE(212)] = 14696,
  [SMALL_STATE(213)] = 14732,
  [SMALL_STATE(214)] = 14770,
  [SMALL_STATE(215)] = 14812,
  [SMALL_STATE(216)] = 14850,
  [SMALL_STATE(217)] = 14888,
  [SMALL_STATE(218)] = 14926,
  [SMALL_STATE(219)] = 14962,
  [SMALL_STATE(220)] = 14997,
  [SMALL_STATE(221)] = 15034,
  [SMALL_STATE(222)] = 15069,
  [SMALL_STATE(223)] = 15104,
  [SMALL_STATE(224)] = 15139,
  [SMALL_STATE(225)] = 15174,
  [SMALL_STATE(226)] = 15209,
  [SMALL_STATE(227)] = 15244,
  [SMALL_STATE(228)] = 15279,
  [SMALL_STATE(229)] = 15314,
  [SMALL_STATE(230)] = 15349,
  [SMALL_STATE(231)] = 15384,
  [SMALL_STATE(232)] = 15419,
  [SMALL_STATE(233)] = 15454,
  [SMALL_STATE(234)] = 15489,
  [SMALL_STATE(235)] = 15524,
  [SMALL_STATE(236)] = 15559,
  [SMALL_STATE(237)] = 15594,
  [SMALL_STATE(238)] = 15629,
  [SMALL_STATE(239)] = 15664,
  [SMALL_STATE(240)] = 15698,
  [SMALL_STATE(241)] = 15732,
  [SMALL_STATE(242)] = 15766,
  [SMALL_STATE(243)] = 15805,
  [SMALL_STATE(244)] = 15844,
  [SMALL_STATE(245)] = 15872,
  [SMALL_STATE(246)] = 15900,
  [SMALL_STATE(247)] = 15940,
  [SMALL_STATE(248)] = 15978,
  [SMALL_STATE(249)] = 16009,
  [SMALL_STATE(250)] = 16040,
  [SMALL_STATE(251)] = 16077,
  [SMALL_STATE(252)] = 16108,
  [SMALL_STATE(253)] = 16139,
  [SMALL_STATE(254)] = 16170,
  [SMALL_STATE(255)] = 16201,
  [SMALL_STATE(256)] = 16238,
  [SMALL_STATE(257)] = 16275,
  [SMALL_STATE(258)] = 16307,
  [SMALL_STATE(259)] = 16349,
  [SMALL_STATE(260)] = 16383,
  [SMALL_STATE(261)] = 16422,
  [SMALL_STATE(262)] = 16449,
  [SMALL_STATE(263)] = 16478,
  [SMALL_STATE(264)] = 16507,
  [SMALL_STATE(265)] = 16536,
  [SMALL_STATE(266)] = 16575,
  [SMALL_STATE(267)] = 16614,
  [SMALL_STATE(268)] = 16660,
  [SMALL_STATE(269)] = 16684,
  [SMALL_STATE(270)] = 16708,
  [SMALL_STATE(271)] = 16742,
  [SMALL_STATE(272)] = 16770,
  [SMALL_STATE(273)] = 16804,
  [SMALL_STATE(274)] = 16848,
  [SMALL_STATE(275)] = 16876,
  [SMALL_STATE(276)] = 16900,
  [SMALL_STATE(277)] = 16930,
  [SMALL_STATE(278)] = 16958,
  [SMALL_STATE(279)] = 16990,
  [SMALL_STATE(280)] = 17016,
  [SMALL_STATE(281)] = 17044,
  [SMALL_STATE(282)] = 17068,
  [SMALL_STATE(283)] = 17093,
  [SMALL_STATE(284)] = 17118,
  [SMALL_STATE(285)] = 17143,
  [SMALL_STATE(286)] = 17172,
  [SMALL_STATE(287)] = 17199,
  [SMALL_STATE(288)] = 17226,
  [SMALL_STATE(289)] = 17257,
  [SMALL_STATE(290)] = 17280,
  [SMALL_STATE(291)] = 17305,
  [SMALL_STATE(292)] = 17330,
  [SMALL_STATE(293)] = 17353,
  [SMALL_STATE(294)] = 17380,
  [SMALL_STATE(295)] = 17409,
  [SMALL_STATE(296)] = 17429,
  [SMALL_STATE(297)] = 17469,
  [SMALL_STATE(298)] = 17509,
  [SMALL_STATE(299)] = 17549,
  [SMALL_STATE(300)] = 17577,
  [SMALL_STATE(301)] = 17617,
  [SMALL_STATE(302)] = 17641,
  [SMALL_STATE(303)] = 17667,
  [SMALL_STATE(304)] = 17692,
  [SMALL_STATE(305)] = 17717,
  [SMALL_STATE(306)] = 17742,
  [SMALL_STATE(307)] = 17779,
  [SMALL_STATE(308)] = 17804,
  [SMALL_STATE(309)] = 17829,
  [SMALL_STATE(310)] = 17854,
  [SMALL_STATE(311)] = 17879,
  [SMALL_STATE(312)] = 17904,
  [SMALL_STATE(313)] = 17922,
  [SMALL_STATE(314)] = 17956,
  [SMALL_STATE(315)] = 17974,
  [SMALL_STATE(316)] = 17992,
  [SMALL_STATE(317)] = 18026,
  [SMALL_STATE(318)] = 18044,
  [SMALL_STATE(319)] = 18068,
  [SMALL_STATE(320)] = 18102,
  [SMALL_STATE(321)] = 18136,
  [SMALL_STATE(322)] = 18154,
  [SMALL_STATE(323)] = 18188,
  [SMALL_STATE(324)] = 18222,
  [SMALL_STATE(325)] = 18256,
  [SMALL_STATE(326)] = 18277,
  [SMALL_STATE(327)] = 18298,
  [SMALL_STATE(328)] = 18321,
  [SMALL_STATE(329)] = 18352,
  [SMALL_STATE(330)] = 18368,
  [SMALL_STATE(331)] = 18388,
  [SMALL_STATE(332)] = 18404,
  [SMALL_STATE(333)] = 18422,
  [SMALL_STATE(334)] = 18438,
  [SMALL_STATE(335)] = 18458,
  [SMALL_STATE(336)] = 18476,
  [SMALL_STATE(337)] = 18492,
  [SMALL_STATE(338)] = 18512,
  [SMALL_STATE(339)] = 18528,
  [SMALL_STATE(340)] = 18556,
  [SMALL_STATE(341)] = 18572,
  [SMALL_STATE(342)] = 18592,
  [SMALL_STATE(343)] = 18612,
  [SMALL_STATE(344)] = 18632,
  [SMALL_STATE(345)] = 18650,
  [SMALL_STATE(346)] = 18669,
  [SMALL_STATE(347)] = 18696,
  [SMALL_STATE(348)] = 18715,
  [SMALL_STATE(349)] = 18734,
  [SMALL_STATE(350)] = 18749,
  [SMALL_STATE(351)] = 18764,
  [SMALL_STATE(352)] = 18779,
  [SMALL_STATE(353)] = 18794,
  [SMALL_STATE(354)] = 18809,
  [SMALL_STATE(355)] = 18828,
  [SMALL_STATE(356)] = 18853,
  [SMALL_STATE(357)] = 18868,
  [SMALL_STATE(358)] = 18895,
  [SMALL_STATE(359)] = 18910,
  [SMALL_STATE(360)] = 18935,
  [SMALL_STATE(361)] = 18950,
  [SMALL_STATE(362)] = 18965,
  [SMALL_STATE(363)] = 18984,
  [SMALL_STATE(364)] = 19009,
  [SMALL_STATE(365)] = 19024,
  [SMALL_STATE(366)] = 19039,
  [SMALL_STATE(367)] = 19054,
  [SMALL_STATE(368)] = 19069,
  [SMALL_STATE(369)] = 19092,
  [SMALL_STATE(370)] = 19117,
  [SMALL_STATE(371)] = 19132,
  [SMALL_STATE(372)] = 19147,
  [SMALL_STATE(373)] = 19174,
  [SMALL_STATE(374)] = 19197,
  [SMALL_STATE(375)] = 19219,
  [SMALL_STATE(376)] = 19241,
  [SMALL_STATE(377)] = 19265,
  [SMALL_STATE(378)] = 19289,
  [SMALL_STATE(379)] = 19307,
  [SMALL_STATE(380)] = 19331,
  [SMALL_STATE(381)] = 19355,
  [SMALL_STATE(382)] = 19377,
  [SMALL_STATE(383)] = 19401,
  [SMALL_STATE(384)] = 19417,
  [SMALL_STATE(385)] = 19441,
  [SMALL_STATE(386)] = 19465,
  [SMALL_STATE(387)] = 19487,
  [SMALL_STATE(388)] = 19501,
  [SMALL_STATE(389)] = 19523,
  [SMALL_STATE(390)] = 19545,
  [SMALL_STATE(391)] = 19561,
  [SMALL_STATE(392)] = 19575,
  [SMALL_STATE(393)] = 19597,
  [SMALL_STATE(394)] = 19611,
  [SMALL_STATE(395)] = 19635,
  [SMALL_STATE(396)] = 19659,
  [SMALL_STATE(397)] = 19683,
  [SMALL_STATE(398)] = 19707,
  [SMALL_STATE(399)] = 19728,
  [SMALL_STATE(400)] = 19741,
  [SMALL_STATE(401)] = 19758,
  [SMALL_STATE(402)] = 19779,
  [SMALL_STATE(403)] = 19794,
  [SMALL_STATE(404)] = 19807,
  [SMALL_STATE(405)] = 19820,
  [SMALL_STATE(406)] = 19837,
  [SMALL_STATE(407)] = 19858,
  [SMALL_STATE(408)] = 19875,
  [SMALL_STATE(409)] = 19896,
  [SMALL_STATE(410)] = 19909,
  [SMALL_STATE(411)] = 19930,
  [SMALL_STATE(412)] = 19951,
  [SMALL_STATE(413)] = 19972,
  [SMALL_STATE(414)] = 19993,
  [SMALL_STATE(415)] = 20008,
  [SMALL_STATE(416)] = 20021,
  [SMALL_STATE(417)] = 20040,
  [SMALL_STATE(418)] = 20055,
  [SMALL_STATE(419)] = 20068,
  [SMALL_STATE(420)] = 20081,
  [SMALL_STATE(421)] = 20098,
  [SMALL_STATE(422)] = 20111,
  [SMALL_STATE(423)] = 20124,
  [SMALL_STATE(424)] = 20137,
  [SMALL_STATE(425)] = 20154,
  [SMALL_STATE(426)] = 20171,
  [SMALL_STATE(427)] = 20189,
  [SMALL_STATE(428)] = 20203,
  [SMALL_STATE(429)] = 20217,
  [SMALL_STATE(430)] = 20233,
  [SMALL_STATE(431)] = 20245,
  [SMALL_STATE(432)] = 20263,
  [SMALL_STATE(433)] = 20277,
  [SMALL_STATE(434)] = 20295,
  [SMALL_STATE(435)] = 20309,
  [SMALL_STATE(436)] = 20327,
  [SMALL_STATE(437)] = 20345,
  [SMALL_STATE(438)] = 20361,
  [SMALL_STATE(439)] = 20377,
  [SMALL_STATE(440)] = 20391,
  [SMALL_STATE(441)] = 20407,
  [SMALL_STATE(442)] = 20423,
  [SMALL_STATE(443)] = 20435,
  [SMALL_STATE(444)] = 20453,
  [SMALL_STATE(445)] = 20467,
  [SMALL_STATE(446)] = 20481,
  [SMALL_STATE(447)] = 20493,
  [SMALL_STATE(448)] = 20507,
  [SMALL_STATE(449)] = 20525,
  [SMALL_STATE(450)] = 20541,
  [SMALL_STATE(451)] = 20555,
  [SMALL_STATE(452)] = 20571,
  [SMALL_STATE(453)] = 20583,
  [SMALL_STATE(454)] = 20599,
  [SMALL_STATE(455)] = 20613,
  [SMALL_STATE(456)] = 20631,
  [SMALL_STATE(457)] = 20647,
  [SMALL_STATE(458)] = 20661,
  [SMALL_STATE(459)] = 20679,
  [SMALL_STATE(460)] = 20693,
  [SMALL_STATE(461)] = 20709,
  [SMALL_STATE(462)] = 20723,
  [SMALL_STATE(463)] = 20741,
  [SMALL_STATE(464)] = 20757,
  [SMALL_STATE(465)] = 20769,
  [SMALL_STATE(466)] = 20781,
  [SMALL_STATE(467)] = 20797,
  [SMALL_STATE(468)] = 20815,
  [SMALL_STATE(469)] = 20831,
  [SMALL_STATE(470)] = 20845,
  [SMALL_STATE(471)] = 20859,
  [SMALL_STATE(472)] = 20877,
  [SMALL_STATE(473)] = 20891,
  [SMALL_STATE(474)] = 20905,
  [SMALL_STATE(475)] = 20917,
  [SMALL_STATE(476)] = 20932,
  [SMALL_STATE(477)] = 20947,
  [SMALL_STATE(478)] = 20962,
  [SMALL_STATE(479)] = 20977,
  [SMALL_STATE(480)] = 20992,
  [SMALL_STATE(481)] = 21007,
  [SMALL_STATE(482)] = 21022,
  [SMALL_STATE(483)] = 21037,
  [SMALL_STATE(484)] = 21048,
  [SMALL_STATE(485)] = 21063,
  [SMALL_STATE(486)] = 21078,
  [SMALL_STATE(487)] = 21091,
  [SMALL_STATE(488)] = 21106,
  [SMALL_STATE(489)] = 21121,
  [SMALL_STATE(490)] = 21132,
  [SMALL_STATE(491)] = 21145,
  [SMALL_STATE(492)] = 21158,
  [SMALL_STATE(493)] = 21173,
  [SMALL_STATE(494)] = 21184,
  [SMALL_STATE(495)] = 21195,
  [SMALL_STATE(496)] = 21210,
  [SMALL_STATE(497)] = 21225,
  [SMALL_STATE(498)] = 21240,
  [SMALL_STATE(499)] = 21255,
  [SMALL_STATE(500)] = 21270,
  [SMALL_STATE(501)] = 21285,
  [SMALL_STATE(502)] = 21298,
  [SMALL_STATE(503)] = 21313,
  [SMALL_STATE(504)] = 21328,
  [SMALL_STATE(505)] = 21341,
  [SMALL_STATE(506)] = 21356,
  [SMALL_STATE(507)] = 21371,
  [SMALL_STATE(508)] = 21386,
  [SMALL_STATE(509)] = 21401,
  [SMALL_STATE(510)] = 21416,
  [SMALL_STATE(511)] = 21427,
  [SMALL_STATE(512)] = 21438,
  [SMALL_STATE(513)] = 21449,
  [SMALL_STATE(514)] = 21464,
  [SMALL_STATE(515)] = 21479,
  [SMALL_STATE(516)] = 21494,
  [SMALL_STATE(517)] = 21509,
  [SMALL_STATE(518)] = 21524,
  [SMALL_STATE(519)] = 21535,
  [SMALL_STATE(520)] = 21548,
  [SMALL_STATE(521)] = 21563,
  [SMALL_STATE(522)] = 21578,
  [SMALL_STATE(523)] = 21593,
  [SMALL_STATE(524)] = 21604,
  [SMALL_STATE(525)] = 21619,
  [SMALL_STATE(526)] = 21630,
  [SMALL_STATE(527)] = 21645,
  [SMALL_STATE(528)] = 21660,
  [SMALL_STATE(529)] = 21675,
  [SMALL_STATE(530)] = 21690,
  [SMALL_STATE(531)] = 21705,
  [SMALL_STATE(532)] = 21720,
  [SMALL_STATE(533)] = 21735,
  [SMALL_STATE(534)] = 21748,
  [SMALL_STATE(535)] = 21761,
  [SMALL_STATE(536)] = 21772,
  [SMALL_STATE(537)] = 21787,
  [SMALL_STATE(538)] = 21802,
  [SMALL_STATE(539)] = 21817,
  [SMALL_STATE(540)] = 21830,
  [SMALL_STATE(541)] = 21845,
  [SMALL_STATE(542)] = 21860,
  [SMALL_STATE(543)] = 21871,
  [SMALL_STATE(544)] = 21882,
  [SMALL_STATE(545)] = 21897,
  [SMALL_STATE(546)] = 21912,
  [SMALL_STATE(547)] = 21927,
  [SMALL_STATE(548)] = 21938,
  [SMALL_STATE(549)] = 21953,
  [SMALL_STATE(550)] = 21968,
  [SMALL_STATE(551)] = 21983,
  [SMALL_STATE(552)] = 21996,
  [SMALL_STATE(553)] = 22011,
  [SMALL_STATE(554)] = 22026,
  [SMALL_STATE(555)] = 22039,
  [SMALL_STATE(556)] = 22052,
  [SMALL_STATE(557)] = 22067,
  [SMALL_STATE(558)] = 22082,
  [SMALL_STATE(559)] = 22095,
  [SMALL_STATE(560)] = 22106,
  [SMALL_STATE(561)] = 22121,
  [SMALL_STATE(562)] = 22136,
  [SMALL_STATE(563)] = 22151,
  [SMALL_STATE(564)] = 22166,
  [SMALL_STATE(565)] = 22181,
  [SMALL_STATE(566)] = 22196,
  [SMALL_STATE(567)] = 22211,
  [SMALL_STATE(568)] = 22224,
  [SMALL_STATE(569)] = 22239,
  [SMALL_STATE(570)] = 22252,
  [SMALL_STATE(571)] = 22267,
  [SMALL_STATE(572)] = 22282,
  [SMALL_STATE(573)] = 22297,
  [SMALL_STATE(574)] = 22308,
  [SMALL_STATE(575)] = 22323,
  [SMALL_STATE(576)] = 22336,
  [SMALL_STATE(577)] = 22349,
  [SMALL_STATE(578)] = 22362,
  [SMALL_STATE(579)] = 22374,
  [SMALL_STATE(580)] = 22386,
  [SMALL_STATE(581)] = 22396,
  [SMALL_STATE(582)] = 22406,
  [SMALL_STATE(583)] = 22418,
  [SMALL_STATE(584)] = 22430,
  [SMALL_STATE(585)] = 22442,
  [SMALL_STATE(586)] = 22452,
  [SMALL_STATE(587)] = 22462,
  [SMALL_STATE(588)] = 22474,
  [SMALL_STATE(589)] = 22486,
  [SMALL_STATE(590)] = 22498,
  [SMALL_STATE(591)] = 22510,
  [SMALL_STATE(592)] = 22522,
  [SMALL_STATE(593)] = 22534,
  [SMALL_STATE(594)] = 22544,
  [SMALL_STATE(595)] = 22554,
  [SMALL_STATE(596)] = 22564,
  [SMALL_STATE(597)] = 22576,
  [SMALL_STATE(598)] = 22588,
  [SMALL_STATE(599)] = 22600,
  [SMALL_STATE(600)] = 22612,
  [SMALL_STATE(601)] = 22622,
  [SMALL_STATE(602)] = 22634,
  [SMALL_STATE(603)] = 22644,
  [SMALL_STATE(604)] = 22656,
  [SMALL_STATE(605)] = 22666,
  [SMALL_STATE(606)] = 22676,
  [SMALL_STATE(607)] = 22688,
  [SMALL_STATE(608)] = 22700,
  [SMALL_STATE(609)] = 22710,
  [SMALL_STATE(610)] = 22722,
  [SMALL_STATE(611)] = 22732,
  [SMALL_STATE(612)] = 22744,
  [SMALL_STATE(613)] = 22756,
  [SMALL_STATE(614)] = 22768,
  [SMALL_STATE(615)] = 22778,
  [SMALL_STATE(616)] = 22790,
  [SMALL_STATE(617)] = 22800,
  [SMALL_STATE(618)] = 22810,
  [SMALL_STATE(619)] = 22822,
  [SMALL_STATE(620)] = 22834,
  [SMALL_STATE(621)] = 22844,
  [SMALL_STATE(622)] = 22854,
  [SMALL_STATE(623)] = 22866,
  [SMALL_STATE(624)] = 22878,
  [SMALL_STATE(625)] = 22890,
  [SMALL_STATE(626)] = 22902,
  [SMALL_STATE(627)] = 22912,
  [SMALL_STATE(628)] = 22922,
  [SMALL_STATE(629)] = 22934,
  [SMALL_STATE(630)] = 22944,
  [SMALL_STATE(631)] = 22954,
  [SMALL_STATE(632)] = 22966,
  [SMALL_STATE(633)] = 22978,
  [SMALL_STATE(634)] = 22990,
  [SMALL_STATE(635)] = 23000,
  [SMALL_STATE(636)] = 23012,
  [SMALL_STATE(637)] = 23022,
  [SMALL_STATE(638)] = 23032,
  [SMALL_STATE(639)] = 23044,
  [SMALL_STATE(640)] = 23056,
  [SMALL_STATE(641)] = 23066,
  [SMALL_STATE(642)] = 23075,
  [SMALL_STATE(643)] = 23084,
  [SMALL_STATE(644)] = 23093,
  [SMALL_STATE(645)] = 23102,
  [SMALL_STATE(646)] = 23111,
  [SMALL_STATE(647)] = 23120,
  [SMALL_STATE(648)] = 23129,
  [SMALL_STATE(649)] = 23138,
  [SMALL_STATE(650)] = 23147,
  [SMALL_STATE(651)] = 23156,
  [SMALL_STATE(652)] = 23165,
  [SMALL_STATE(653)] = 23174,
  [SMALL_STATE(654)] = 23183,
  [SMALL_STATE(655)] = 23192,
  [SMALL_STATE(656)] = 23201,
  [SMALL_STATE(657)] = 23210,
  [SMALL_STATE(658)] = 23219,
  [SMALL_STATE(659)] = 23228,
  [SMALL_STATE(660)] = 23237,
  [SMALL_STATE(661)] = 23246,
  [SMALL_STATE(662)] = 23255,
  [SMALL_STATE(663)] = 23264,
  [SMALL_STATE(664)] = 23273,
  [SMALL_STATE(665)] = 23282,
  [SMALL_STATE(666)] = 23291,
  [SMALL_STATE(667)] = 23300,
  [SMALL_STATE(668)] = 23309,
  [SMALL_STATE(669)] = 23318,
  [SMALL_STATE(670)] = 23327,
  [SMALL_STATE(671)] = 23336,
  [SMALL_STATE(672)] = 23345,
  [SMALL_STATE(673)] = 23354,
  [SMALL_STATE(674)] = 23363,
  [SMALL_STATE(675)] = 23372,
  [SMALL_STATE(676)] = 23381,
  [SMALL_STATE(677)] = 23390,
  [SMALL_STATE(678)] = 23399,
  [SMALL_STATE(679)] = 23408,
  [SMALL_STATE(680)] = 23417,
  [SMALL_STATE(681)] = 23426,
  [SMALL_STATE(682)] = 23435,
  [SMALL_STATE(683)] = 23444,
  [SMALL_STATE(684)] = 23453,
  [SMALL_STATE(685)] = 23462,
  [SMALL_STATE(686)] = 23471,
  [SMALL_STATE(687)] = 23480,
  [SMALL_STATE(688)] = 23489,
  [SMALL_STATE(689)] = 23498,
  [SMALL_STATE(690)] = 23507,
  [SMALL_STATE(691)] = 23516,
  [SMALL_STATE(692)] = 23525,
  [SMALL_STATE(693)] = 23534,
  [SMALL_STATE(694)] = 23543,
  [SMALL_STATE(695)] = 23552,
  [SMALL_STATE(696)] = 23561,
  [SMALL_STATE(697)] = 23570,
  [SMALL_STATE(698)] = 23579,
  [SMALL_STATE(699)] = 23588,
  [SMALL_STATE(700)] = 23597,
  [SMALL_STATE(701)] = 23606,
  [SMALL_STATE(702)] = 23615,
  [SMALL_STATE(703)] = 23624,
  [SMALL_STATE(704)] = 23633,
  [SMALL_STATE(705)] = 23642,
  [SMALL_STATE(706)] = 23651,
  [SMALL_STATE(707)] = 23660,
  [SMALL_STATE(708)] = 23669,
  [SMALL_STATE(709)] = 23678,
  [SMALL_STATE(710)] = 23687,
  [SMALL_STATE(711)] = 23696,
  [SMALL_STATE(712)] = 23705,
  [SMALL_STATE(713)] = 23714,
  [SMALL_STATE(714)] = 23723,
  [SMALL_STATE(715)] = 23732,
  [SMALL_STATE(716)] = 23741,
  [SMALL_STATE(717)] = 23750,
  [SMALL_STATE(718)] = 23759,
  [SMALL_STATE(719)] = 23768,
  [SMALL_STATE(720)] = 23777,
  [SMALL_STATE(721)] = 23786,
  [SMALL_STATE(722)] = 23795,
  [SMALL_STATE(723)] = 23804,
  [SMALL_STATE(724)] = 23813,
  [SMALL_STATE(725)] = 23822,
  [SMALL_STATE(726)] = 23831,
  [SMALL_STATE(727)] = 23840,
  [SMALL_STATE(728)] = 23849,
  [SMALL_STATE(729)] = 23858,
  [SMALL_STATE(730)] = 23867,
  [SMALL_STATE(731)] = 23876,
  [SMALL_STATE(732)] = 23885,
  [SMALL_STATE(733)] = 23894,
  [SMALL_STATE(734)] = 23903,
  [SMALL_STATE(735)] = 23912,
  [SMALL_STATE(736)] = 23921,
  [SMALL_STATE(737)] = 23930,
  [SMALL_STATE(738)] = 23939,
  [SMALL_STATE(739)] = 23948,
  [SMALL_STATE(740)] = 23957,
  [SMALL_STATE(741)] = 23966,
  [SMALL_STATE(742)] = 23975,
  [SMALL_STATE(743)] = 23984,
  [SMALL_STATE(744)] = 23993,
  [SMALL_STATE(745)] = 24002,
  [SMALL_STATE(746)] = 24011,
  [SMALL_STATE(747)] = 24020,
  [SMALL_STATE(748)] = 24029,
  [SMALL_STATE(749)] = 24038,
  [SMALL_STATE(750)] = 24047,
  [SMALL_STATE(751)] = 24056,
  [SMALL_STATE(752)] = 24065,
  [SMALL_STATE(753)] = 24074,
  [SMALL_STATE(754)] = 24083,
  [SMALL_STATE(755)] = 24092,
  [SMALL_STATE(756)] = 24101,
  [SMALL_STATE(757)] = 24110,
  [SMALL_STATE(758)] = 24119,
  [SMALL_STATE(759)] = 24128,
  [SMALL_STATE(760)] = 24137,
  [SMALL_STATE(761)] = 24146,
  [SMALL_STATE(762)] = 24155,
  [SMALL_STATE(763)] = 24164,
  [SMALL_STATE(764)] = 24173,
  [SMALL_STATE(765)] = 24182,
  [SMALL_STATE(766)] = 24191,
  [SMALL_STATE(767)] = 24200,
  [SMALL_STATE(768)] = 24209,
  [SMALL_STATE(769)] = 24218,
  [SMALL_STATE(770)] = 24227,
  [SMALL_STATE(771)] = 24236,
  [SMALL_STATE(772)] = 24245,
  [SMALL_STATE(773)] = 24254,
  [SMALL_STATE(774)] = 24263,
  [SMALL_STATE(775)] = 24272,
  [SMALL_STATE(776)] = 24281,
  [SMALL_STATE(777)] = 24290,
  [SMALL_STATE(778)] = 24299,
  [SMALL_STATE(779)] = 24308,
  [SMALL_STATE(780)] = 24317,
  [SMALL_STATE(781)] = 24326,
  [SMALL_STATE(782)] = 24335,
  [SMALL_STATE(783)] = 24344,
  [SMALL_STATE(784)] = 24353,
  [SMALL_STATE(785)] = 24362,
  [SMALL_STATE(786)] = 24371,
  [SMALL_STATE(787)] = 24380,
  [SMALL_STATE(788)] = 24389,
  [SMALL_STATE(789)] = 24398,
  [SMALL_STATE(790)] = 24407,
  [SMALL_STATE(791)] = 24416,
  [SMALL_STATE(792)] = 24425,
  [SMALL_STATE(793)] = 24434,
  [SMALL_STATE(794)] = 24443,
  [SMALL_STATE(795)] = 24452,
  [SMALL_STATE(796)] = 24461,
  [SMALL_STATE(797)] = 24470,
  [SMALL_STATE(798)] = 24479,
  [SMALL_STATE(799)] = 24488,
  [SMALL_STATE(800)] = 24497,
  [SMALL_STATE(801)] = 24506,
  [SMALL_STATE(802)] = 24515,
  [SMALL_STATE(803)] = 24524,
  [SMALL_STATE(804)] = 24533,
  [SMALL_STATE(805)] = 24542,
  [SMALL_STATE(806)] = 24551,
  [SMALL_STATE(807)] = 24560,
  [SMALL_STATE(808)] = 24569,
  [SMALL_STATE(809)] = 24578,
  [SMALL_STATE(810)] = 24587,
  [SMALL_STATE(811)] = 24596,
  [SMALL_STATE(812)] = 24605,
  [SMALL_STATE(813)] = 24614,
  [SMALL_STATE(814)] = 24623,
  [SMALL_STATE(815)] = 24632,
  [SMALL_STATE(816)] = 24641,
  [SMALL_STATE(817)] = 24650,
  [SMALL_STATE(818)] = 24659,
  [SMALL_STATE(819)] = 24668,
  [SMALL_STATE(820)] = 24677,
  [SMALL_STATE(821)] = 24686,
  [SMALL_STATE(822)] = 24695,
  [SMALL_STATE(823)] = 24704,
  [SMALL_STATE(824)] = 24713,
  [SMALL_STATE(825)] = 24722,
  [SMALL_STATE(826)] = 24731,
  [SMALL_STATE(827)] = 24740,
  [SMALL_STATE(828)] = 24749,
  [SMALL_STATE(829)] = 24758,
  [SMALL_STATE(830)] = 24767,
  [SMALL_STATE(831)] = 24776,
  [SMALL_STATE(832)] = 24785,
  [SMALL_STATE(833)] = 24794,
  [SMALL_STATE(834)] = 24803,
  [SMALL_STATE(835)] = 24812,
  [SMALL_STATE(836)] = 24821,
  [SMALL_STATE(837)] = 24830,
  [SMALL_STATE(838)] = 24839,
  [SMALL_STATE(839)] = 24848,
  [SMALL_STATE(840)] = 24857,
  [SMALL_STATE(841)] = 24866,
  [SMALL_STATE(842)] = 24875,
  [SMALL_STATE(843)] = 24884,
  [SMALL_STATE(844)] = 24893,
  [SMALL_STATE(845)] = 24902,
  [SMALL_STATE(846)] = 24911,
  [SMALL_STATE(847)] = 24920,
  [SMALL_STATE(848)] = 24929,
  [SMALL_STATE(849)] = 24938,
  [SMALL_STATE(850)] = 24947,
  [SMALL_STATE(851)] = 24956,
  [SMALL_STATE(852)] = 24965,
  [SMALL_STATE(853)] = 24974,
  [SMALL_STATE(854)] = 24983,
  [SMALL_STATE(855)] = 24992,
  [SMALL_STATE(856)] = 25001,
  [SMALL_STATE(857)] = 25010,
  [SMALL_STATE(858)] = 25019,
  [SMALL_STATE(859)] = 25028,
  [SMALL_STATE(860)] = 25037,
  [SMALL_STATE(861)] = 25046,
  [SMALL_STATE(862)] = 25055,
  [SMALL_STATE(863)] = 25064,
  [SMALL_STATE(864)] = 25073,
  [SMALL_STATE(865)] = 25082,
  [SMALL_STATE(866)] = 25091,
  [SMALL_STATE(867)] = 25100,
  [SMALL_STATE(868)] = 25109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(108),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(103),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(102),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(359),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(825),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(493),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(820),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(469),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(814),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(813),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(811),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(808),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(805),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(799),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(798),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(796),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(117),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(427),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(412),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(859),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(791),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(740),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(41),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(830),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(818),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(865),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(207),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(864),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(493),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(427),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(301),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(276),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(675),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(89),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(793),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(702),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(536),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(546),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(866),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(124),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(79),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(328),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(150),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(266),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(129),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(115),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(186),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(684),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(656),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(431),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(258),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(284),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(722),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(139),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(392),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(429),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(433),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(257),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(556),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(751),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(570),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(676),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(274),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_param, 4),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1890] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
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
