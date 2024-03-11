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
#define STATE_COUNT 886
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 260
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
  sym_query_body_stmt = 146,
  sym_assign_stmt = 147,
  sym_v_set_var_decl_stmt = 148,
  sym_seed_set = 149,
  sym_seed = 150,
  sym_simple_set = 151,
  sym_l_accum_assign_stmt = 152,
  sym_g_accum_assign_stmt = 153,
  sym_g_accum_accum_stmt = 154,
  sym_func_call_stmt = 155,
  sym__select_stmt = 156,
  sym_gsql_select_block = 157,
  sym_gsql_select_clause = 158,
  sym_from_clause = 159,
  sym_where_clause = 160,
  sym_accum_clause = 161,
  sym_dml_sub_stmt_list = 162,
  sym_dml_sub_stmt = 163,
  sym_l_accum_accum_stmt = 164,
  sym_attr_accum_stmt = 165,
  sym_v_accum_func_call = 166,
  sym_local_var_decl_stmt = 167,
  sym_dml_sub_if_stmt = 168,
  sym_dml_sub_case_stmt = 169,
  sym_dml_sub_while_stmt = 170,
  sym_dml_sub_for_each_stmt = 171,
  sym_for_each_control = 172,
  sym_post_accum_clause = 173,
  sym_limit_clause = 174,
  sym_path_pattern = 175,
  sym_path_edge_pattern = 176,
  sym_atomic_edge_pattern = 177,
  sym_disj_pattern = 178,
  sym_step = 179,
  sym_step_v2 = 180,
  sym_step_source_set = 181,
  sym_step_edge_set = 182,
  sym_step_edge_types = 183,
  sym_atomic_edge_type = 184,
  sym_edge_set_type = 185,
  sym_step_vertex_set = 186,
  sym_step_vertex_types = 187,
  sym_atomic_vertex_type = 188,
  sym_vertex_set_type = 189,
  sym_query_body_case_stmt = 190,
  sym_query_body_if_stmt = 191,
  sym_query_body_while_stmt = 192,
  sym_query_body_for_each_stmt = 193,
  sym_decl_stmt = 194,
  sym_base_decl_stmt = 195,
  sym_accum_decl_stmt = 196,
  sym_accum_type = 197,
  sym_global_accum_name = 198,
  sym_local_accum_name = 199,
  sym_arg_list = 200,
  sym_simple_size = 201,
  sym_expr = 202,
  sym_condition = 203,
  sym_set_bag_expr = 204,
  sym_name_dot = 205,
  sym_aggregator = 206,
  sym_print_stmt = 207,
  sym_print_expr = 208,
  sym_v_expr_set = 209,
  sym_v_set_proj = 210,
  sym_file_path = 211,
  sym__type = 212,
  sym__element_type = 213,
  sym_base_type = 214,
  sym_constant = 215,
  sym_numeric = 216,
  sym_integer = 217,
  sym_real = 218,
  sym_string_literal = 219,
  sym_math_operator = 220,
  sym_comparison_operator = 221,
  sym_block_comment = 222,
  aux_sym_gsql_repeat1 = 223,
  aux_sym_query_params_repeat1 = 224,
  aux_sym_query_body_repeat1 = 225,
  aux_sym_query_body_repeat2 = 226,
  aux_sym_typedef_repeat1 = 227,
  aux_sym_tuple_fields_repeat1 = 228,
  aux_sym_seed_set_repeat1 = 229,
  aux_sym_func_call_stmt_repeat1 = 230,
  aux_sym_func_call_stmt_repeat2 = 231,
  aux_sym_gsql_select_block_repeat1 = 232,
  aux_sym_from_clause_repeat1 = 233,
  aux_sym_dml_sub_stmt_list_repeat1 = 234,
  aux_sym_v_accum_func_call_repeat1 = 235,
  aux_sym_dml_sub_if_stmt_repeat1 = 236,
  aux_sym_dml_sub_case_stmt_repeat1 = 237,
  aux_sym_for_each_control_repeat1 = 238,
  aux_sym_path_pattern_repeat1 = 239,
  aux_sym_disj_pattern_repeat1 = 240,
  aux_sym_step_repeat1 = 241,
  aux_sym_step_edge_types_repeat1 = 242,
  aux_sym_step_vertex_types_repeat1 = 243,
  aux_sym_query_body_case_stmt_repeat1 = 244,
  aux_sym_query_body_case_stmt_repeat2 = 245,
  aux_sym_query_body_if_stmt_repeat1 = 246,
  aux_sym_base_decl_stmt_repeat1 = 247,
  aux_sym_accum_decl_stmt_repeat1 = 248,
  aux_sym_accum_type_repeat1 = 249,
  aux_sym_accum_type_repeat2 = 250,
  aux_sym_accum_type_repeat3 = 251,
  aux_sym_accum_type_repeat4 = 252,
  aux_sym_arg_list_repeat1 = 253,
  aux_sym_name_dot_repeat1 = 254,
  aux_sym_print_stmt_repeat1 = 255,
  aux_sym_v_expr_set_repeat1 = 256,
  aux_sym_string_literal_repeat1 = 257,
  aux_sym_string_literal_repeat2 = 258,
  aux_sym_block_comment_repeat1 = 259,
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
  [40] = 25,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 31,
  [47] = 32,
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
  [75] = 75,
  [76] = 74,
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
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 95,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 99,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 109,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 113,
  [124] = 95,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 102,
  [131] = 95,
  [132] = 127,
  [133] = 133,
  [134] = 106,
  [135] = 135,
  [136] = 136,
  [137] = 20,
  [138] = 74,
  [139] = 136,
  [140] = 140,
  [141] = 141,
  [142] = 141,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 22,
  [155] = 21,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 29,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 163,
  [171] = 171,
  [172] = 172,
  [173] = 28,
  [174] = 163,
  [175] = 151,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 27,
  [180] = 24,
  [181] = 181,
  [182] = 23,
  [183] = 183,
  [184] = 184,
  [185] = 26,
  [186] = 186,
  [187] = 187,
  [188] = 163,
  [189] = 189,
  [190] = 156,
  [191] = 156,
  [192] = 25,
  [193] = 33,
  [194] = 19,
  [195] = 140,
  [196] = 34,
  [197] = 197,
  [198] = 143,
  [199] = 30,
  [200] = 31,
  [201] = 32,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 36,
  [206] = 35,
  [207] = 37,
  [208] = 38,
  [209] = 41,
  [210] = 25,
  [211] = 39,
  [212] = 43,
  [213] = 42,
  [214] = 49,
  [215] = 44,
  [216] = 45,
  [217] = 140,
  [218] = 32,
  [219] = 31,
  [220] = 48,
  [221] = 143,
  [222] = 50,
  [223] = 62,
  [224] = 59,
  [225] = 56,
  [226] = 65,
  [227] = 57,
  [228] = 58,
  [229] = 60,
  [230] = 68,
  [231] = 54,
  [232] = 61,
  [233] = 187,
  [234] = 66,
  [235] = 63,
  [236] = 52,
  [237] = 51,
  [238] = 53,
  [239] = 69,
  [240] = 67,
  [241] = 64,
  [242] = 55,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 74,
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
  [273] = 202,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 272,
  [280] = 280,
  [281] = 281,
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
  [293] = 290,
  [294] = 294,
  [295] = 295,
  [296] = 289,
  [297] = 143,
  [298] = 298,
  [299] = 140,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 33,
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
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 355,
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
  [387] = 385,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 386,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 389,
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
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 19,
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
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 266,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 19,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 435,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 450,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 447,
  [467] = 467,
  [468] = 468,
  [469] = 443,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
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
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 271,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 502,
  [507] = 500,
  [508] = 508,
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
  [520] = 499,
  [521] = 498,
  [522] = 522,
  [523] = 497,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 78,
  [529] = 487,
  [530] = 530,
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
  [542] = 493,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 494,
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
  [561] = 512,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 274,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 485,
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
  [603] = 602,
  [604] = 604,
  [605] = 600,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 592,
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
  [623] = 613,
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
  [803] = 657,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 732,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 758,
  [815] = 805,
  [816] = 804,
  [817] = 817,
  [818] = 754,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 736,
  [824] = 735,
  [825] = 825,
  [826] = 730,
  [827] = 698,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 663,
  [833] = 833,
  [834] = 670,
  [835] = 673,
  [836] = 836,
  [837] = 837,
  [838] = 782,
  [839] = 820,
  [840] = 747,
  [841] = 841,
  [842] = 842,
  [843] = 807,
  [844] = 743,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 657,
  [850] = 804,
  [851] = 851,
  [852] = 852,
  [853] = 782,
  [854] = 657,
  [855] = 748,
  [856] = 856,
  [857] = 782,
  [858] = 858,
  [859] = 859,
  [860] = 787,
  [861] = 861,
  [862] = 774,
  [863] = 863,
  [864] = 694,
  [865] = 726,
  [866] = 866,
  [867] = 867,
  [868] = 720,
  [869] = 821,
  [870] = 870,
  [871] = 871,
  [872] = 726,
  [873] = 726,
  [874] = 786,
  [875] = 781,
  [876] = 656,
  [877] = 877,
  [878] = 878,
  [879] = 749,
  [880] = 661,
  [881] = 656,
  [882] = 656,
  [883] = 883,
  [884] = 884,
  [885] = 885,
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
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 11},
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
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 20},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 18},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 18},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 18},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 35},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 420},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 35},
  [198] = {.lex_state = 420},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 15},
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
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 18},
  [250] = {.lex_state = 420},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 420},
  [253] = {.lex_state = 420},
  [254] = {.lex_state = 420},
  [255] = {.lex_state = 420},
  [256] = {.lex_state = 420},
  [257] = {.lex_state = 420},
  [258] = {.lex_state = 32},
  [259] = {.lex_state = 32},
  [260] = {.lex_state = 32},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 420},
  [264] = {.lex_state = 420},
  [265] = {.lex_state = 420},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 32},
  [268] = {.lex_state = 32},
  [269] = {.lex_state = 32},
  [270] = {.lex_state = 420},
  [271] = {.lex_state = 32},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 420},
  [274] = {.lex_state = 32},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 32},
  [277] = {.lex_state = 32},
  [278] = {.lex_state = 32},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 25},
  [281] = {.lex_state = 32},
  [282] = {.lex_state = 32},
  [283] = {.lex_state = 32},
  [284] = {.lex_state = 32},
  [285] = {.lex_state = 420},
  [286] = {.lex_state = 32},
  [287] = {.lex_state = 420},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 420},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 420},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 420},
  [295] = {.lex_state = 420},
  [296] = {.lex_state = 28},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 420},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 25},
  [301] = {.lex_state = 420},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 25},
  [307] = {.lex_state = 420},
  [308] = {.lex_state = 420},
  [309] = {.lex_state = 420},
  [310] = {.lex_state = 420},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 420},
  [313] = {.lex_state = 420},
  [314] = {.lex_state = 420},
  [315] = {.lex_state = 420},
  [316] = {.lex_state = 420},
  [317] = {.lex_state = 25},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 28},
  [321] = {.lex_state = 28},
  [322] = {.lex_state = 25},
  [323] = {.lex_state = 25},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 25},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 25},
  [331] = {.lex_state = 420},
  [332] = {.lex_state = 420},
  [333] = {.lex_state = 420},
  [334] = {.lex_state = 420},
  [335] = {.lex_state = 420},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 420},
  [338] = {.lex_state = 420},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 420},
  [341] = {.lex_state = 420},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 420},
  [344] = {.lex_state = 420},
  [345] = {.lex_state = 420},
  [346] = {.lex_state = 420},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 420},
  [349] = {.lex_state = 420},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 420},
  [353] = {.lex_state = 27},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 26},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 420},
  [358] = {.lex_state = 420},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 420},
  [361] = {.lex_state = 420},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 25},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 420},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 19},
  [375] = {.lex_state = 25},
  [376] = {.lex_state = 26},
  [377] = {.lex_state = 420},
  [378] = {.lex_state = 420},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 420},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 19},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 19},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 25},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 420},
  [395] = {.lex_state = 420},
  [396] = {.lex_state = 19},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 19},
  [400] = {.lex_state = 19},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 420},
  [403] = {.lex_state = 19},
  [404] = {.lex_state = 420},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 420},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 420},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 420},
  [416] = {.lex_state = 420},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 7},
  [419] = {.lex_state = 420},
  [420] = {.lex_state = 7},
  [421] = {.lex_state = 420},
  [422] = {.lex_state = 7},
  [423] = {.lex_state = 7},
  [424] = {.lex_state = 7},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 7},
  [427] = {.lex_state = 19},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 420},
  [430] = {.lex_state = 420},
  [431] = {.lex_state = 420},
  [432] = {.lex_state = 19},
  [433] = {.lex_state = 28},
  [434] = {.lex_state = 420},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 7},
  [441] = {.lex_state = 19},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 420},
  [444] = {.lex_state = 420},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 420},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 29},
  [452] = {.lex_state = 420},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 420},
  [455] = {.lex_state = 19},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 420},
  [459] = {.lex_state = 420},
  [460] = {.lex_state = 420},
  [461] = {.lex_state = 861},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 420},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 420},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 420},
  [474] = {.lex_state = 861},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 19},
  [477] = {.lex_state = 861},
  [478] = {.lex_state = 19},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 19},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 19},
  [483] = {.lex_state = 7},
  [484] = {.lex_state = 420},
  [485] = {.lex_state = 7},
  [486] = {.lex_state = 19},
  [487] = {.lex_state = 7},
  [488] = {.lex_state = 420},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 861},
  [492] = {.lex_state = 420},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 420},
  [496] = {.lex_state = 19},
  [497] = {.lex_state = 24},
  [498] = {.lex_state = 23},
  [499] = {.lex_state = 19},
  [500] = {.lex_state = 24},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 23},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 23},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 28},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 19},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 420},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 420},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 23},
  [522] = {.lex_state = 19},
  [523] = {.lex_state = 24},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 19},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 7},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 420},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 420},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 420},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 23},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 24},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 7},
  [557] = {.lex_state = 420},
  [558] = {.lex_state = 7},
  [559] = {.lex_state = 7},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 19},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
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
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 19},
  [576] = {.lex_state = 420},
  [577] = {.lex_state = 7},
  [578] = {.lex_state = 7},
  [579] = {.lex_state = 7},
  [580] = {.lex_state = 19},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 7},
  [585] = {.lex_state = 420},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 7},
  [589] = {.lex_state = 420},
  [590] = {.lex_state = 0},
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
  [601] = {.lex_state = 420},
  [602] = {.lex_state = 420},
  [603] = {.lex_state = 420},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 13},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 7},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 23},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 24},
  [620] = {.lex_state = 13},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 420},
  [628] = {.lex_state = 15},
  [629] = {.lex_state = 7},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 15},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 13},
  [643] = {.lex_state = 7},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 420},
  [651] = {.lex_state = 420},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 19},
  [657] = {.lex_state = 19},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 19},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 19},
  [668] = {.lex_state = 19},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 19},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 19},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 420},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 19},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 19},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 13},
  [702] = {.lex_state = 19},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 19},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 7},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 7},
  [714] = {.lex_state = 19},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 420},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 19},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 19},
  [725] = {.lex_state = 19},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 19},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 19},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 7},
  [737] = {.lex_state = 19},
  [738] = {.lex_state = 19},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 7},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 7},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 19},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 19},
  [757] = {.lex_state = 19},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 19},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 420},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 420},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 19},
  [769] = {.lex_state = 420},
  [770] = {.lex_state = 19},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 19},
  [774] = {.lex_state = 19},
  [775] = {.lex_state = 19},
  [776] = {.lex_state = 0},
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
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 19},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 19},
  [802] = {.lex_state = 19},
  [803] = {.lex_state = 19},
  [804] = {.lex_state = 19},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 420},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 420},
  [812] = {.lex_state = 19},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 19},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 7},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 19},
  [835] = {.lex_state = 19},
  [836] = {.lex_state = 0},
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
  [847] = {.lex_state = 420},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 19},
  [850] = {.lex_state = 19},
  [851] = {.lex_state = 19},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 19},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 19},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 19},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 19},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 19},
  [867] = {.lex_state = 19},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 19},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 420},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 19},
  [882] = {.lex_state = 19},
  [883] = {.lex_state = 0},
  [884] = {(TSStateId)(-1)},
  [885] = {(TSStateId)(-1)},
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
    [sym_gsql] = STATE(871),
    [sym__definition] = STATE(488),
    [sym_create_query] = STATE(593),
    [sym_interpret_query] = STATE(593),
    [sym_block_comment] = STATE(1),
    [aux_sym_gsql_repeat1] = STATE(365),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_INTERPRET] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_TYPEDEF,
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
    STATE(2), 1,
      sym_block_comment,
    STATE(5), 1,
      aux_sym_query_body_repeat2,
    STATE(70), 1,
      aux_sym_query_body_repeat1,
    STATE(72), 1,
      sym_typedef,
    STATE(77), 1,
      sym_query_body_stmt,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(815), 13,
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
  [137] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_TYPEDEF,
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
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_query_body_repeat1,
    STATE(3), 1,
      sym_block_comment,
    STATE(6), 1,
      aux_sym_query_body_repeat2,
    STATE(72), 1,
      sym_typedef,
    STATE(77), 1,
      sym_query_body_stmt,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(815), 13,
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
  [274] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_IF,
    ACTIONS(62), 1,
      anon_sym_CASE,
    ACTIONS(65), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOREACH,
    ACTIONS(71), 1,
      anon_sym_SumAccum,
    ACTIONS(83), 1,
      anon_sym_ListAccum,
    ACTIONS(89), 1,
      anon_sym_MapAccum,
    ACTIONS(92), 1,
      anon_sym_HeapAccum,
    ACTIONS(95), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(98), 1,
      anon_sym_ArrayAccum,
    ACTIONS(101), 1,
      anon_sym_AT_AT,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      anon_sym_PRINT,
    ACTIONS(110), 1,
      anon_sym_VERTEX,
    ACTIONS(113), 1,
      sym_name,
    STATE(77), 1,
      sym_query_body_stmt,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(77), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(86), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(4), 2,
      sym_block_comment,
      aux_sym_query_body_repeat2,
    STATE(808), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(80), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(74), 10,
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
    STATE(815), 13,
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
  [400] = 33,
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
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_query_body_repeat2,
    STATE(5), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_query_body_stmt,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(815), 13,
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
  [528] = 33,
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
      aux_sym_query_body_repeat2,
    STATE(6), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_query_body_stmt,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(815), 13,
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
  [656] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(771), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [778] = 31,
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
    STATE(8), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(548), 1,
      sym_query_body_stmt,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [900] = 31,
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
    STATE(9), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(717), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1022] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(564), 1,
      sym_query_body_stmt,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1144] = 31,
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
    STATE(11), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(554), 1,
      sym_query_body_stmt,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1266] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(685), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1388] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(791), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1510] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(674), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1632] = 31,
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
    STATE(15), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    STATE(819), 1,
      sym_query_body_stmt,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1754] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(679), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1876] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(641), 1,
      sym_query_body_stmt,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [1998] = 31,
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
    STATE(440), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_accum_type,
    STATE(504), 1,
      sym_query_body_stmt,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(801), 1,
      sym_base_type,
    STATE(813), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(808), 2,
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
    STATE(805), 13,
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
  [2120] = 5,
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
  [2181] = 8,
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
    STATE(28), 1,
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
  [2246] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_block_comment,
    STATE(25), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(134), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(132), 38,
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
  [2308] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(22), 1,
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
  [2370] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(23), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [2434] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_DOT,
    STATE(24), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
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
  [2494] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(25), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(153), 38,
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
  [2554] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_block_comment,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [2618] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
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
  [2678] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(24), 1,
      aux_sym_name_dot_repeat1,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(166), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(164), 39,
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
  [2738] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    STATE(29), 1,
      sym_block_comment,
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
  [2798] = 6,
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
  [2857] = 5,
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
  [2914] = 5,
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
  [2971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(33), 1,
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
  [3028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(34), 1,
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
  [3085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(35), 1,
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
  [3141] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [3199] = 5,
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
  [3255] = 5,
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
  [3311] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(39), 1,
      sym_block_comment,
    STATE(40), 1,
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
  [3370] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(155), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 36,
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
  [3427] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(41), 1,
      sym_block_comment,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
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
  [3486] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(42), 1,
      sym_block_comment,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(204), 3,
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
  [3545] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 36,
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
  [3602] = 6,
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
  [3658] = 6,
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
  [3714] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(46), 1,
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
  [3768] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(47), 1,
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
  [3822] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(48), 1,
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
  [3878] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(49), 1,
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
  [3934] = 5,
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
  [3988] = 5,
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
  [4041] = 5,
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
  [4094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_block_comment,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(142), 36,
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
  [4147] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(54), 1,
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
  [4200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(55), 1,
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
  [4253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(258), 3,
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
  [4306] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(57), 1,
      sym_block_comment,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(260), 36,
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
  [4359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(58), 1,
      sym_block_comment,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(264), 36,
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
  [4412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(59), 1,
      sym_block_comment,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(268), 36,
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
  [4465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(60), 1,
      sym_block_comment,
    ACTIONS(274), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(272), 36,
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
  [4518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_block_comment,
    ACTIONS(278), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(276), 36,
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
  [4571] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(62), 1,
      sym_block_comment,
    ACTIONS(282), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(280), 36,
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
  [4624] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(63), 1,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(284), 36,
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
  [4677] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(64), 1,
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
  [4730] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(65), 1,
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
  [4783] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(66), 1,
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
  [4836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(303), 3,
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
  [4889] = 5,
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
  [4942] = 5,
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
  [4995] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_TYPEDEF,
    STATE(72), 1,
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
  [5051] = 32,
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
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(71), 1,
      sym_block_comment,
    STATE(254), 1,
      sym_expr,
    STATE(454), 1,
      sym_simple_set,
    STATE(599), 1,
      sym_gsql_select_clause,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(813), 1,
      sym_gsql_select_block,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    STATE(733), 2,
      sym_seed_set,
      sym__select_stmt,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [5156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(72), 1,
      sym_block_comment,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(351), 34,
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
  [5206] = 5,
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
  [5256] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(74), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 26,
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
  [5314] = 5,
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
  [5364] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
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
    ACTIONS(142), 27,
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
  [5423] = 5,
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
  [5472] = 5,
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
  [5521] = 18,
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
    STATE(583), 1,
      sym_dml_sub_stmt_list,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5595] = 18,
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
    STATE(80), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(567), 1,
      sym_dml_sub_stmt_list,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5669] = 18,
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
    STATE(81), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(680), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5743] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(760), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5817] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(684), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5891] = 18,
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
    STATE(538), 1,
      sym_dml_sub_stmt_list,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [5965] = 18,
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
    STATE(85), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(699), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6039] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(762), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6113] = 18,
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
    STATE(87), 1,
      sym_block_comment,
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(581), 1,
      sym_dml_sub_stmt_list,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6187] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(630), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6261] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(767), 1,
      sym_dml_sub_stmt_list,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6335] = 18,
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
    STATE(588), 1,
      sym_global_accum_name,
    STATE(590), 1,
      sym_dml_sub_stmt_list,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6409] = 30,
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
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(203), 1,
      sym_expr,
    STATE(518), 1,
      sym_condition,
    STATE(592), 1,
      sym_arg_list,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    ACTIONS(403), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6506] = 30,
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
    STATE(92), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(204), 1,
      sym_expr,
    STATE(518), 1,
      sym_condition,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(612), 1,
      sym_arg_list,
    STATE(875), 1,
      sym_aggregator,
    ACTIONS(403), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6603] = 17,
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
    STATE(93), 1,
      sym_block_comment,
    STATE(362), 1,
      sym_dml_sub_stmt,
    STATE(588), 1,
      sym_global_accum_name,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(768), 1,
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
    STATE(356), 11,
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
  [6674] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      anon_sym_IN,
    ACTIONS(423), 1,
      anon_sym_NOT,
    ACTIONS(425), 1,
      anon_sym_IS,
    ACTIONS(427), 1,
      anon_sym_BETWEEN,
    ACTIONS(429), 1,
      anon_sym_LIKE,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_block_comment,
    STATE(158), 1,
      sym_comparison_operator,
    STATE(159), 1,
      sym_math_operator,
    ACTIONS(417), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(433), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(415), 10,
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
  [6740] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(95), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(782), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6832] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(96), 1,
      sym_block_comment,
    STATE(329), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6926] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(97), 1,
      sym_block_comment,
    STATE(524), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7020] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(98), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(807), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7112] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(99), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(844), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7204] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(843), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7296] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(101), 1,
      sym_block_comment,
    STATE(468), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7390] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(102), 1,
      sym_block_comment,
    STATE(493), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7484] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(103), 1,
      sym_block_comment,
    STATE(263), 1,
      sym_expr,
    STATE(409), 1,
      sym_v_expr_set,
    STATE(470), 1,
      sym_print_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7576] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(104), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(840), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7668] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7760] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(106), 1,
      sym_block_comment,
    STATE(494), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7854] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(107), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(857), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7946] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(108), 1,
      sym_block_comment,
    STATE(551), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8040] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(109), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(824), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8132] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(110), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8226] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(111), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(743), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8318] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(112), 1,
      sym_block_comment,
    STATE(536), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8412] = 28,
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
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      sym_name,
    STATE(113), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(279), 1,
      sym_expr,
    STATE(460), 1,
      sym_simple_set,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(612), 1,
      sym_arg_list,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8504] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(114), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8598] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(115), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(735), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8690] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(116), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(703), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8782] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(117), 1,
      sym_block_comment,
    STATE(574), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8876] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(118), 1,
      sym_block_comment,
    STATE(263), 1,
      sym_expr,
    STATE(409), 1,
      sym_v_expr_set,
    STATE(411), 1,
      sym_print_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8968] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(119), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9060] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(120), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(698), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9152] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(121), 1,
      sym_block_comment,
    STATE(508), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9246] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(122), 1,
      sym_block_comment,
    STATE(465), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9340] = 28,
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
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      sym_name,
    STATE(123), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(272), 1,
      sym_expr,
    STATE(460), 1,
      sym_simple_set,
    STATE(592), 1,
      sym_arg_list,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9432] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(124), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(853), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9524] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(481), 1,
      anon_sym_WHEN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(125), 1,
      sym_block_comment,
    STATE(307), 1,
      sym_expr,
    STATE(439), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9616] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(126), 1,
      sym_block_comment,
    STATE(438), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9710] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(127), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(820), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9802] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(128), 1,
      sym_block_comment,
    STATE(543), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9896] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(129), 1,
      sym_block_comment,
    STATE(549), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9990] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(130), 1,
      sym_block_comment,
    STATE(542), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10084] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(131), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(838), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10176] = 28,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(132), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(839), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10268] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(133), 1,
      sym_block_comment,
    STATE(401), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10362] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(134), 1,
      sym_block_comment,
    STATE(550), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10456] = 29,
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
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_expr,
    STATE(135), 1,
      sym_block_comment,
    STATE(563), 1,
      sym_condition,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    ACTIONS(445), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10550] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(832), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10639] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(137), 1,
      sym_block_comment,
    STATE(173), 1,
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
  [10690] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(138), 1,
      sym_block_comment,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [10743] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(139), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(663), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10832] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(140), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_math_operator,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(252), 27,
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
  [10879] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(141), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_set_bag_expr,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(732), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10968] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(142), 1,
      sym_block_comment,
    STATE(273), 1,
      sym_set_bag_expr,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(810), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11057] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_math_operator,
    ACTIONS(499), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(497), 19,
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
  [11108] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(144), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(758), 1,
      sym_arg_list,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11197] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(145), 1,
      sym_block_comment,
    STATE(294), 1,
      sym_expr,
    STATE(566), 1,
      sym_v_set_proj,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11286] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(146), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(814), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11375] = 27,
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
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      sym_name,
    STATE(147), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(272), 1,
      sym_expr,
    STATE(592), 1,
      sym_arg_list,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11464] = 27,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(148), 1,
      sym_block_comment,
    STATE(294), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(610), 1,
      sym_v_set_proj,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11553] = 27,
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
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      sym_name,
    STATE(149), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(279), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(612), 1,
      sym_arg_list,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11642] = 17,
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
    ACTIONS(505), 1,
      sym_name,
    STATE(150), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(744), 2,
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
  [11710] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(151), 1,
      sym_block_comment,
    STATE(290), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11796] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(152), 1,
      sym_block_comment,
    STATE(253), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11882] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(153), 1,
      sym_block_comment,
    STATE(292), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11968] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_block_comment,
    STATE(155), 1,
      aux_sym_func_call_stmt_repeat2,
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
  [12016] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(155), 1,
      sym_block_comment,
    STATE(192), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 23,
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
  [12064] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(156), 1,
      sym_block_comment,
    STATE(195), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12150] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(157), 1,
      sym_block_comment,
    STATE(314), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12236] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(158), 1,
      sym_block_comment,
    STATE(245), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12322] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(140), 1,
      sym_expr,
    STATE(159), 1,
      sym_block_comment,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12408] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(160), 1,
      sym_block_comment,
    STATE(254), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12494] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(161), 1,
      sym_block_comment,
    STATE(252), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12580] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(162), 1,
      sym_block_comment,
    STATE(173), 1,
      aux_sym_name_dot_repeat1,
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
  [12626] = 26,
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
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(163), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(221), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12712] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(164), 1,
      sym_block_comment,
    STATE(310), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12798] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(165), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12884] = 18,
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
    ACTIONS(505), 1,
      sym_name,
    STATE(166), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    STATE(773), 1,
      sym__element_type,
    STATE(856), 1,
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
  [12954] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(167), 1,
      sym_block_comment,
    STATE(308), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13040] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(168), 1,
      sym_block_comment,
    STATE(255), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13126] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(169), 1,
      sym_block_comment,
    STATE(309), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13212] = 26,
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
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      sym_name,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      sym_digit,
    STATE(170), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(297), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13298] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(171), 1,
      sym_block_comment,
    STATE(256), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13384] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(172), 1,
      sym_block_comment,
    STATE(244), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13470] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(173), 1,
      sym_block_comment,
    STATE(180), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(166), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(164), 24,
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
  [13516] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    ACTIONS(513), 1,
      anon_sym_DOT,
    ACTIONS(515), 1,
      sym_digit,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(174), 1,
      sym_block_comment,
    STATE(198), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13602] = 26,
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
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      sym_name,
    STATE(175), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(293), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13688] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(176), 1,
      sym_block_comment,
    STATE(315), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13774] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(177), 1,
      sym_block_comment,
    STATE(295), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13860] = 18,
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
    ACTIONS(505), 1,
      sym_name,
    STATE(178), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    STATE(773), 1,
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
  [13930] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
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
  [13976] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(180), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
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
  [14022] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(181), 1,
      sym_block_comment,
    STATE(301), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14108] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(182), 1,
      sym_block_comment,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [14158] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(183), 1,
      sym_block_comment,
    STATE(316), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14244] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(184), 1,
      sym_block_comment,
    STATE(312), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14330] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym_block_comment,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [14380] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(186), 1,
      sym_block_comment,
    STATE(257), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14466] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_comment,
    ACTIONS(312), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(415), 10,
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
    ACTIONS(310), 17,
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
  [14512] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_name,
    ACTIONS(513), 1,
      anon_sym_DOT,
    ACTIONS(515), 1,
      sym_digit,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(143), 1,
      sym_expr,
    STATE(188), 1,
      sym_block_comment,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14598] = 26,
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
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(189), 1,
      sym_block_comment,
    STATE(243), 1,
      sym_expr,
    STATE(603), 1,
      sym_local_accum_name,
    STATE(781), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(337), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14684] = 26,
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
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(190), 1,
      sym_block_comment,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(217), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14770] = 26,
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
    ACTIONS(467), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      sym_name,
    STATE(182), 1,
      sym_name_dot,
    STATE(185), 1,
      sym_global_accum_name,
    STATE(191), 1,
      sym_block_comment,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(299), 1,
      sym_expr,
    STATE(602), 1,
      sym_local_accum_name,
    STATE(875), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(239), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(407), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14856] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
    STATE(192), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(155), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(153), 23,
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
  [14902] = 5,
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
  [14945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(194), 1,
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
  [14988] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(195), 1,
      sym_block_comment,
    ACTIONS(252), 27,
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
  [15033] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(196), 1,
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
  [15076] = 16,
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
    ACTIONS(527), 1,
      sym_name,
    STATE(197), 1,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(710), 2,
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
  [15141] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(198), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(497), 19,
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
  [15188] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(199), 1,
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
  [15233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(200), 1,
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
  [15276] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(201), 1,
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
  [15319] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(202), 1,
      sym_block_comment,
    ACTIONS(531), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [15363] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      anon_sym_IN,
    ACTIONS(423), 1,
      anon_sym_NOT,
    ACTIONS(425), 1,
      anon_sym_IS,
    ACTIONS(427), 1,
      anon_sym_BETWEEN,
    ACTIONS(429), 1,
      anon_sym_LIKE,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(158), 1,
      sym_comparison_operator,
    STATE(190), 1,
      sym_math_operator,
    STATE(203), 1,
      sym_block_comment,
    STATE(435), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(415), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(417), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(433), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15433] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      anon_sym_IN,
    ACTIONS(423), 1,
      anon_sym_NOT,
    ACTIONS(425), 1,
      anon_sym_IS,
    ACTIONS(427), 1,
      anon_sym_BETWEEN,
    ACTIONS(429), 1,
      anon_sym_LIKE,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(158), 1,
      sym_comparison_operator,
    STATE(190), 1,
      sym_math_operator,
    STATE(204), 1,
      sym_block_comment,
    STATE(435), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(415), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(417), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(433), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15503] = 6,
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
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [15547] = 5,
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
  [15589] = 5,
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
  [15631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(208), 1,
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
  [15673] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(209), 1,
      sym_block_comment,
    STATE(212), 1,
      aux_sym_accum_type_repeat1,
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
  [15718] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      anon_sym_DOT,
    STATE(210), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(153), 21,
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
  [15761] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(211), 1,
      sym_block_comment,
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
  [15806] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      sym_digit,
    STATE(212), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(209), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(207), 21,
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
  [15849] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(212), 1,
      aux_sym_accum_type_repeat1,
    STATE(213), 1,
      sym_block_comment,
    ACTIONS(204), 4,
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
  [15894] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_DOT,
    STATE(214), 1,
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
  [15936] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(215), 1,
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
  [15978] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(216), 1,
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
  [16020] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(190), 1,
      sym_math_operator,
    STATE(217), 1,
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
  [16062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(218), 1,
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
  [16102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(219), 1,
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
  [16142] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_DOT,
    STATE(220), 1,
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
  [16184] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(190), 1,
      sym_math_operator,
    STATE(221), 1,
      sym_block_comment,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(499), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(497), 14,
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
  [16230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(222), 1,
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
  [16270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(223), 1,
      sym_block_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(280), 21,
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
  [16309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(224), 1,
      sym_block_comment,
    ACTIONS(270), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(268), 21,
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
  [16348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(225), 1,
      sym_block_comment,
    ACTIONS(258), 4,
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
  [16387] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(226), 1,
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
  [16426] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(227), 1,
      sym_block_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(260), 21,
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
  [16465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(228), 1,
      sym_block_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(264), 21,
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
  [16504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(229), 1,
      sym_block_comment,
    ACTIONS(274), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(272), 21,
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
  [16543] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(230), 1,
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
  [16582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(231), 1,
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
  [16621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(232), 1,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(276), 21,
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
  [16660] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(233), 1,
      sym_block_comment,
    ACTIONS(415), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(310), 18,
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
  [16701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(234), 1,
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
  [16740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(235), 1,
      sym_block_comment,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(284), 21,
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
  [16779] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(236), 1,
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
  [16818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(237), 1,
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
  [16857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(238), 1,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 21,
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
  [16896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(239), 1,
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
  [16935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(240), 1,
      sym_block_comment,
    ACTIONS(303), 4,
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
  [16974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(241), 1,
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
  [17013] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(242), 1,
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
  [17052] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(243), 1,
      sym_block_comment,
    ACTIONS(421), 8,
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
  [17090] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(244), 1,
      sym_block_comment,
    ACTIONS(421), 8,
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
  [17128] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(245), 1,
      sym_block_comment,
    ACTIONS(421), 8,
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
  [17166] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_LT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(246), 1,
      sym_block_comment,
    ACTIONS(144), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(142), 10,
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
  [17209] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_LT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(247), 1,
      sym_block_comment,
    ACTIONS(144), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(561), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(142), 10,
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
  [17252] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_SET,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(248), 1,
      sym_block_comment,
    STATE(503), 1,
      sym_query_param,
    STATE(505), 1,
      sym_base_type,
    STATE(794), 1,
      sym_query_params,
    STATE(792), 2,
      sym_set_param,
      sym__type,
    ACTIONS(567), 10,
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
  [17296] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(249), 1,
      sym_block_comment,
    ACTIONS(571), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(573), 10,
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
  [17328] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      anon_sym_LT,
    ACTIONS(575), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(250), 1,
      sym_block_comment,
    ACTIONS(561), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(142), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17372] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(251), 1,
      sym_block_comment,
    ACTIONS(577), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(579), 10,
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
  [17404] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(252), 1,
      sym_block_comment,
    ACTIONS(581), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17439] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(253), 1,
      sym_block_comment,
    ACTIONS(583), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17474] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(254), 1,
      sym_block_comment,
    ACTIONS(585), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17509] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(255), 1,
      sym_block_comment,
    ACTIONS(587), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17544] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(256), 1,
      sym_block_comment,
    ACTIONS(589), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17579] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(257), 1,
      sym_block_comment,
    ACTIONS(591), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17614] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(593), 1,
      anon_sym_GT,
    ACTIONS(595), 1,
      sym_name,
    STATE(258), 1,
      sym_block_comment,
    STATE(259), 1,
      aux_sym_typedef_repeat1,
    STATE(267), 1,
      sym_tuple_field,
    STATE(286), 1,
      sym_tuple_fields,
    STATE(702), 1,
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
  [17657] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(595), 1,
      sym_name,
    ACTIONS(597), 1,
      anon_sym_GT,
    STATE(259), 1,
      sym_block_comment,
    STATE(260), 1,
      aux_sym_typedef_repeat1,
    STATE(267), 1,
      sym_tuple_field,
    STATE(286), 1,
      sym_tuple_fields,
    STATE(702), 1,
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
  [17700] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_GT,
    ACTIONS(604), 1,
      anon_sym_VERTEX,
    ACTIONS(607), 1,
      sym_name,
    STATE(267), 1,
      sym_tuple_field,
    STATE(286), 1,
      sym_tuple_fields,
    STATE(702), 1,
      sym_base_type,
    STATE(260), 2,
      sym_block_comment,
      aux_sym_typedef_repeat1,
    ACTIONS(601), 10,
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
  [17741] = 13,
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
    STATE(667), 1,
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
  [17787] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      anon_sym_SET,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(262), 1,
      sym_block_comment,
    STATE(505), 1,
      sym_base_type,
    STATE(637), 1,
      sym_query_param,
    STATE(792), 2,
      sym_set_param,
      sym__type,
    ACTIONS(567), 10,
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
  [17825] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    ACTIONS(632), 1,
      anon_sym_AS,
    STATE(156), 1,
      sym_math_operator,
    STATE(263), 1,
      sym_block_comment,
    ACTIONS(628), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17863] = 12,
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
    ACTIONS(634), 1,
      anon_sym_DASH,
    STATE(264), 1,
      sym_block_comment,
    STATE(652), 1,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(636), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17906] = 12,
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
    ACTIONS(634), 1,
      anon_sym_DASH,
    STATE(265), 1,
      sym_block_comment,
    STATE(682), 1,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(636), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17949] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      anon_sym_LT,
    STATE(266), 1,
      sym_block_comment,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      anon_sym_GT,
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
  [17980] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_GT,
    STATE(267), 1,
      sym_block_comment,
    STATE(268), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(648), 12,
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
  [18013] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(268), 1,
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
  [18046] = 6,
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
  [18077] = 12,
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
    ACTIONS(634), 1,
      anon_sym_DASH,
    STATE(270), 1,
      sym_block_comment,
    STATE(587), 1,
      sym_constant,
    STATE(58), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(636), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [18120] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(271), 1,
      sym_block_comment,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      anon_sym_GT,
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
  [18148] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(191), 1,
      sym_math_operator,
    STATE(272), 1,
      sym_block_comment,
    STATE(435), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18186] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    STATE(273), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(142), 10,
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
  [18216] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(274), 1,
      sym_block_comment,
    ACTIONS(661), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(663), 12,
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
  [18244] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    STATE(275), 1,
      sym_block_comment,
    STATE(418), 1,
      sym_atomic_edge_type,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(537), 1,
      sym_path_edge_pattern,
    STATE(539), 1,
      sym_disj_pattern,
    STATE(638), 1,
      sym_step_edge_types,
    STATE(719), 1,
      sym_step_edge_set,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [18294] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(505), 1,
      sym_name,
    STATE(276), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    STATE(738), 1,
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
  [18328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(277), 1,
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
  [18356] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(505), 1,
      sym_name,
    STATE(278), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    STATE(773), 1,
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
  [18390] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(191), 1,
      sym_math_operator,
    STATE(279), 1,
      sym_block_comment,
    STATE(435), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18428] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      sym_name,
    STATE(280), 1,
      sym_block_comment,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(332), 1,
      sym_step_source_set,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(373), 1,
      sym_path_pattern,
    STATE(394), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(410), 2,
      sym_step,
      sym_step_v2,
  [18476] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(505), 1,
      sym_name,
    STATE(281), 1,
      sym_block_comment,
    STATE(527), 1,
      sym_base_type,
    STATE(744), 1,
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
  [18510] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(505), 1,
      sym_name,
    STATE(282), 1,
      sym_block_comment,
    STATE(527), 1,
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
  [18544] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(283), 1,
      sym_block_comment,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(683), 12,
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
  [18572] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(595), 1,
      sym_name,
    STATE(277), 1,
      sym_tuple_field,
    STATE(284), 1,
      sym_block_comment,
    STATE(702), 1,
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
  [18606] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_math_operator,
    STATE(285), 1,
      sym_block_comment,
    STATE(456), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18642] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_GT,
    STATE(286), 1,
      sym_block_comment,
    ACTIONS(689), 12,
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
  [18669] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(287), 1,
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
  [18696] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(288), 1,
      sym_block_comment,
    STATE(505), 1,
      sym_base_type,
    STATE(611), 1,
      sym__type,
    ACTIONS(567), 10,
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
  [18727] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(289), 1,
      sym_block_comment,
    STATE(487), 1,
      sym__type,
    STATE(505), 1,
      sym_base_type,
    ACTIONS(567), 10,
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
  [18758] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(290), 1,
      sym_block_comment,
    ACTIONS(691), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18789] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_block_comment,
    STATE(505), 1,
      sym_base_type,
    STATE(713), 1,
      sym__type,
    ACTIONS(567), 10,
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
  [18820] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(292), 1,
      sym_block_comment,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18853] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(191), 1,
      sym_math_operator,
    STATE(293), 1,
      sym_block_comment,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(691), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18884] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(699), 1,
      anon_sym_AS,
    STATE(156), 1,
      sym_math_operator,
    STATE(294), 1,
      sym_block_comment,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18917] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(295), 1,
      sym_block_comment,
    STATE(490), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18952] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(296), 1,
      sym_block_comment,
    STATE(505), 1,
      sym_base_type,
    STATE(529), 1,
      sym__type,
    ACTIONS(567), 10,
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
  [18983] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(191), 1,
      sym_math_operator,
    STATE(297), 1,
      sym_block_comment,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(497), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(421), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19014] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(298), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
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
  [19041] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(191), 1,
      sym_math_operator,
    STATE(299), 1,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(252), 10,
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
  [19070] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(424), 1,
      sym_atomic_edge_type,
    STATE(426), 1,
      sym_edge_set_type,
    STATE(539), 1,
      sym_disj_pattern,
    STATE(601), 1,
      sym_path_edge_pattern,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19114] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    STATE(156), 1,
      sym_math_operator,
    STATE(301), 1,
      sym_block_comment,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19144] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_base_type,
    STATE(302), 1,
      sym_block_comment,
    ACTIONS(709), 10,
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
  [19172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(303), 1,
      sym_block_comment,
    ACTIONS(178), 12,
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
  [19196] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(424), 1,
      sym_atomic_edge_type,
    STATE(539), 1,
      sym_disj_pattern,
    STATE(572), 1,
      sym_path_edge_pattern,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19240] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(424), 1,
      sym_atomic_edge_type,
    STATE(539), 1,
      sym_disj_pattern,
    STATE(601), 1,
      sym_path_edge_pattern,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19284] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      sym_block_comment,
    STATE(419), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(424), 1,
      sym_atomic_edge_type,
    STATE(537), 1,
      sym_path_edge_pattern,
    STATE(539), 1,
      sym_disj_pattern,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19328] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(713), 1,
      anon_sym_WHEN,
    STATE(156), 1,
      sym_math_operator,
    STATE(307), 1,
      sym_block_comment,
    STATE(437), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19360] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(308), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19389] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(309), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19418] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_math_operator,
    STATE(310), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19447] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 1,
      anon_sym_GT,
    ACTIONS(721), 1,
      sym_name,
    STATE(311), 1,
      sym_block_comment,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(383), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
  [19488] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(312), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19517] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_math_operator,
    STATE(313), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19546] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      anon_sym_AND,
    STATE(156), 1,
      sym_math_operator,
    STATE(314), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19575] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_math_operator,
    STATE(315), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19604] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_math_operator,
    STATE(316), 1,
      sym_block_comment,
    ACTIONS(421), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19633] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(317), 1,
      sym_block_comment,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(360), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
  [19671] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(318), 1,
      sym_block_comment,
    ACTIONS(733), 10,
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
  [19693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(319), 1,
      sym_block_comment,
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
  [19715] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_DOT,
    ACTIONS(739), 1,
      anon_sym_PLUS_EQ,
    STATE(320), 1,
      sym_block_comment,
    STATE(333), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(735), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(321), 1,
      sym_block_comment,
    ACTIONS(741), 10,
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
  [19765] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(638), 1,
      sym_step_edge_types,
    STATE(644), 1,
      sym_atomic_edge_type,
    STATE(719), 1,
      sym_step_edge_set,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19803] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(638), 1,
      sym_step_edge_types,
    STATE(644), 1,
      sym_atomic_edge_type,
    STATE(695), 1,
      sym_step_edge_set,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [19841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(324), 1,
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
  [19863] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(325), 1,
      sym_block_comment,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(405), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
  [19901] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    ACTIONS(747), 1,
      anon_sym_WHERE,
    ACTIONS(749), 1,
      anon_sym_ACCUM,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    STATE(326), 1,
      sym_block_comment,
    STATE(336), 1,
      sym_where_clause,
    STATE(382), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(384), 1,
      sym_accum_clause,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(728), 1,
      sym_limit_clause,
  [19941] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(327), 1,
      sym_block_comment,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(402), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
  [19979] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_name,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(328), 1,
      sym_block_comment,
    STATE(338), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(343), 1,
      sym_step_vertex_types,
    STATE(377), 1,
      sym_step_vertex_set,
    ACTIONS(677), 2,
      anon_sym__,
      anon_sym_ANY,
  [20017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(329), 1,
      sym_block_comment,
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
  [20039] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    STATE(330), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(424), 1,
      sym_atomic_edge_type,
    STATE(458), 1,
      sym_atomic_edge_pattern,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [20074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_DOT,
    STATE(331), 2,
      sym_block_comment,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(755), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20097] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      anon_sym_DASH,
    STATE(332), 1,
      sym_block_comment,
    STATE(346), 1,
      aux_sym_path_pattern_repeat1,
    STATE(358), 1,
      aux_sym_step_repeat1,
    ACTIONS(760), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20124] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_DOT,
    STATE(331), 1,
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
  [20149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(334), 1,
      sym_block_comment,
    ACTIONS(766), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(335), 1,
      sym_block_comment,
    ACTIONS(768), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20189] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_ACCUM,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_block_comment,
    STATE(391), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(392), 1,
      sym_accum_clause,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(798), 1,
      sym_limit_clause,
  [20223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(337), 1,
      sym_block_comment,
    ACTIONS(772), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(338), 1,
      sym_block_comment,
    ACTIONS(776), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20265] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      sym_block_comment,
    STATE(342), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(780), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_DASH,
    STATE(340), 1,
      sym_block_comment,
    STATE(346), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(760), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(341), 1,
      sym_block_comment,
    ACTIONS(784), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(342), 2,
      sym_block_comment,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(789), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_COLON,
    STATE(343), 1,
      sym_block_comment,
    ACTIONS(791), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(344), 1,
      sym_block_comment,
    ACTIONS(795), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(345), 1,
      sym_block_comment,
    ACTIONS(772), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20419] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym_block_comment,
    STATE(349), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(797), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20443] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    STATE(347), 1,
      sym_block_comment,
    ACTIONS(799), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(348), 1,
      sym_block_comment,
    ACTIONS(801), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_DASH,
    STATE(349), 2,
      sym_block_comment,
      aux_sym_path_pattern_repeat1,
    ACTIONS(803), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(350), 1,
      sym_block_comment,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20528] = 4,
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
  [20547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(352), 1,
      sym_block_comment,
    ACTIONS(812), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20566] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      anon_sym_RANGE,
    ACTIONS(818), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(353), 1,
      sym_block_comment,
    STATE(473), 1,
      sym_set_bag_expr,
  [20597] = 4,
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
  [20616] = 10,
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
    ACTIONS(822), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(355), 1,
      sym_block_comment,
    STATE(466), 1,
      sym_set_bag_expr,
  [20647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(356), 1,
      sym_block_comment,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20666] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_DASH,
    STATE(357), 2,
      sym_block_comment,
      aux_sym_step_repeat1,
    ACTIONS(826), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20687] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      anon_sym_DASH,
    STATE(357), 1,
      aux_sym_step_repeat1,
    STATE(358), 1,
      sym_block_comment,
    ACTIONS(831), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20710] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      sym_block_comment,
    STATE(370), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(837), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(360), 1,
      sym_block_comment,
    ACTIONS(839), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(361), 1,
      sym_block_comment,
    ACTIONS(841), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(362), 1,
      sym_block_comment,
    ACTIONS(789), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20790] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    ACTIONS(847), 1,
      sym_name,
    STATE(363), 1,
      sym_block_comment,
    STATE(571), 1,
      sym_seed,
    STATE(645), 1,
      sym_global_accum_name,
    ACTIONS(845), 2,
      anon_sym__,
      anon_sym_ANY,
  [20819] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      anon_sym_AT_AT,
    ACTIONS(853), 1,
      sym_name,
    STATE(364), 1,
      sym_block_comment,
    STATE(752), 1,
      sym_for_each_control,
    STATE(606), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20848] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_CREATE,
    ACTIONS(11), 1,
      anon_sym_INTERPRET,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    STATE(365), 1,
      sym_block_comment,
    STATE(378), 1,
      aux_sym_gsql_repeat1,
    STATE(488), 1,
      sym__definition,
    STATE(593), 2,
      sym_create_query,
      sym_interpret_query,
  [20877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(366), 1,
      sym_block_comment,
    ACTIONS(857), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(367), 1,
      sym_block_comment,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(368), 1,
      sym_block_comment,
    ACTIONS(861), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(369), 1,
      sym_block_comment,
    ACTIONS(863), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20953] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(370), 2,
      sym_block_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(868), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(371), 1,
      sym_block_comment,
    ACTIONS(870), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(372), 1,
      sym_block_comment,
    ACTIONS(872), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_from_clause_repeat1,
    STATE(373), 1,
      sym_block_comment,
    ACTIONS(874), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21035] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      anon_sym_AT_AT,
    ACTIONS(853), 1,
      sym_name,
    STATE(374), 1,
      sym_block_comment,
    STATE(778), 1,
      sym_for_each_control,
    STATE(606), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [21064] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(673), 1,
      sym_name,
    STATE(375), 1,
      sym_block_comment,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_edge_set_type,
    STATE(444), 1,
      sym_atomic_edge_type,
    ACTIONS(669), 2,
      anon_sym__,
      anon_sym_ANY,
  [21093] = 10,
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
    ACTIONS(876), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(376), 1,
      sym_block_comment,
    STATE(447), 1,
      sym_set_bag_expr,
  [21124] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(377), 1,
      sym_block_comment,
    ACTIONS(878), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21143] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(882), 1,
      anon_sym_CREATE,
    ACTIONS(885), 1,
      anon_sym_INTERPRET,
    STATE(488), 1,
      sym__definition,
    STATE(378), 2,
      sym_block_comment,
      aux_sym_gsql_repeat1,
    STATE(593), 2,
      sym_create_query,
      sym_interpret_query,
  [21170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    STATE(379), 1,
      sym_block_comment,
    ACTIONS(292), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21192] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(298), 1,
      sym_set_bag_expr,
    STATE(380), 1,
      sym_block_comment,
  [21220] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(381), 1,
      sym_block_comment,
    STATE(417), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(666), 1,
      sym_limit_clause,
  [21248] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      sym_block_comment,
    STATE(417), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(798), 1,
      sym_limit_clause,
  [21276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(383), 1,
      sym_block_comment,
    ACTIONS(892), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21294] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    STATE(384), 1,
      sym_block_comment,
    STATE(391), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(798), 1,
      sym_limit_clause,
  [21322] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(385), 1,
      sym_block_comment,
    STATE(466), 1,
      sym_set_bag_expr,
  [21350] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(386), 1,
      sym_block_comment,
  [21378] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(387), 1,
      sym_block_comment,
    STATE(447), 1,
      sym_set_bag_expr,
  [21406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(388), 1,
      sym_block_comment,
    ACTIONS(868), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21424] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(389), 1,
      sym_block_comment,
    STATE(443), 1,
      sym_set_bag_expr,
  [21452] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      sym_name,
    STATE(390), 1,
      sym_block_comment,
    STATE(626), 1,
      sym_seed,
    STATE(645), 1,
      sym_global_accum_name,
    ACTIONS(845), 2,
      anon_sym__,
      anon_sym_ANY,
  [21478] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      sym_block_comment,
    STATE(417), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(877), 1,
      sym_limit_clause,
  [21506] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LIMIT,
    ACTIONS(753), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(381), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(392), 1,
      sym_block_comment,
    STATE(530), 1,
      sym_post_accum_clause,
    STATE(877), 1,
      sym_limit_clause,
  [21534] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      anon_sym_AT_AT,
    ACTIONS(896), 1,
      anon_sym_LPAREN,
    ACTIONS(898), 1,
      sym_name,
    STATE(154), 1,
      sym_name_dot,
    STATE(206), 1,
      sym_global_accum_name,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(393), 1,
      sym_block_comment,
  [21562] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(902), 1,
      anon_sym_DASH,
    STATE(394), 1,
      sym_block_comment,
    ACTIONS(900), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21582] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      sym_digit,
    ACTIONS(634), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym_block_comment,
    STATE(632), 1,
      sym_numeric,
    STATE(58), 2,
      sym_integer,
      sym_real,
  [21608] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(396), 1,
      sym_block_comment,
    STATE(434), 1,
      sym_set_bag_expr,
  [21636] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(287), 1,
      sym_set_bag_expr,
    STATE(397), 1,
      sym_block_comment,
  [21664] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(398), 1,
      sym_block_comment,
    STATE(473), 1,
      sym_set_bag_expr,
  [21692] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(399), 1,
      sym_block_comment,
    STATE(431), 1,
      sym_set_bag_expr,
  [21720] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(400), 1,
      sym_block_comment,
    STATE(469), 1,
      sym_set_bag_expr,
  [21748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(401), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(906), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(402), 1,
      sym_block_comment,
    ACTIONS(908), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21786] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(910), 1,
      sym_name,
    STATE(403), 1,
      sym_block_comment,
    STATE(671), 1,
      sym_string_literal,
    STATE(755), 1,
      sym_file_path,
  [21811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(404), 1,
      sym_block_comment,
    ACTIONS(912), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(405), 1,
      sym_block_comment,
    ACTIONS(914), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21845] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(916), 1,
      sym_name,
    STATE(406), 1,
      sym_block_comment,
    STATE(671), 1,
      sym_string_literal,
    STATE(729), 1,
      sym_file_path,
  [21870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(407), 2,
      sym_block_comment,
      aux_sym_print_stmt_repeat1,
    ACTIONS(921), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21889] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(925), 1,
      anon_sym_DOT,
    STATE(408), 1,
      sym_block_comment,
    ACTIONS(923), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      anon_sym_AS,
    STATE(409), 1,
      sym_block_comment,
    ACTIONS(628), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(410), 1,
      sym_block_comment,
    ACTIONS(874), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21944] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(931), 1,
      anon_sym_WHERE,
    ACTIONS(933), 1,
      anon_sym_TO_CSV,
    STATE(411), 1,
      sym_block_comment,
    STATE(413), 1,
      aux_sym_print_stmt_repeat1,
  [21969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_PIPE,
    STATE(412), 2,
      sym_block_comment,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(935), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21988] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_SEMI,
    ACTIONS(942), 1,
      anon_sym_WHERE,
    ACTIONS(944), 1,
      anon_sym_TO_CSV,
    STATE(407), 1,
      aux_sym_print_stmt_repeat1,
    STATE(413), 1,
      sym_block_comment,
  [22013] = 8,
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
    STATE(414), 1,
      sym_block_comment,
    STATE(665), 1,
      sym_file_path,
    STATE(671), 1,
      sym_string_literal,
  [22038] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      anon_sym_EQ,
    ACTIONS(950), 1,
      anon_sym_LT,
    ACTIONS(952), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(415), 1,
      sym_block_comment,
  [22063] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(956), 1,
      anon_sym_PIPE,
    STATE(412), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(416), 1,
      sym_block_comment,
    ACTIONS(954), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22084] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(960), 1,
      anon_sym_POST_DASHACCUM,
    STATE(530), 1,
      sym_post_accum_clause,
    ACTIONS(958), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(417), 2,
      sym_block_comment,
      aux_sym_gsql_select_block_repeat1,
  [22105] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_GT,
    STATE(418), 1,
      sym_block_comment,
    ACTIONS(963), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(967), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
  [22126] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(956), 1,
      anon_sym_PIPE,
    STATE(416), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(419), 1,
      sym_block_comment,
    ACTIONS(969), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(420), 1,
      sym_block_comment,
    ACTIONS(971), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22164] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_LT,
    ACTIONS(973), 1,
      anon_sym_EQ,
    ACTIONS(975), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(421), 1,
      sym_block_comment,
  [22189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(422), 1,
      sym_block_comment,
    ACTIONS(977), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(423), 1,
      sym_block_comment,
    ACTIONS(120), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_GT,
    STATE(424), 1,
      sym_block_comment,
    ACTIONS(967), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(425), 1,
      sym_block_comment,
    ACTIONS(979), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [22259] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(983), 1,
      anon_sym_PIPE,
    STATE(426), 1,
      sym_block_comment,
    STATE(573), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(977), 2,
      anon_sym_GT,
      anon_sym_DOT,
  [22282] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(985), 1,
      sym_name,
    STATE(427), 1,
      sym_block_comment,
    STATE(671), 1,
      sym_string_literal,
    STATE(846), 1,
      sym_file_path,
  [22307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(428), 1,
      sym_block_comment,
    ACTIONS(987), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [22324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(429), 1,
      sym_block_comment,
    ACTIONS(561), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(430), 1,
      sym_block_comment,
    ACTIONS(912), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22358] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(989), 1,
      anon_sym_DO,
    STATE(431), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(993), 1,
      anon_sym_AT,
    STATE(432), 1,
      sym_block_comment,
    ACTIONS(991), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(433), 1,
      sym_block_comment,
    ACTIONS(995), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [22410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(989), 1,
      anon_sym_DO,
    STATE(434), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22428] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      sym_block_comment,
    STATE(450), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(997), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [22448] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    ACTIONS(1001), 1,
      anon_sym_TO_CSV,
    STATE(436), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22468] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_WHEN,
    ACTIONS(1003), 1,
      anon_sym_ELSE,
    ACTIONS(1005), 1,
      anon_sym_END,
    STATE(437), 1,
      sym_block_comment,
    STATE(479), 1,
      aux_sym_query_body_case_stmt_repeat2,
  [22490] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1007), 1,
      anon_sym_LIMIT,
    ACTIONS(1009), 1,
      anon_sym_DO,
    STATE(438), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22510] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1011), 1,
      anon_sym_ELSE,
    ACTIONS(1013), 1,
      anon_sym_END,
    ACTIONS(1015), 1,
      anon_sym_WHEN,
    STATE(439), 1,
      sym_block_comment,
    STATE(449), 1,
      aux_sym_query_body_case_stmt_repeat1,
  [22532] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    ACTIONS(1019), 1,
      anon_sym_PLUS_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(440), 1,
      sym_block_comment,
  [22554] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_AT,
    STATE(441), 1,
      sym_block_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22572] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(442), 1,
      sym_block_comment,
    STATE(459), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(444), 1,
      sym_block_comment,
    ACTIONS(1027), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22626] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1029), 1,
      anon_sym_LT,
    STATE(445), 1,
      sym_block_comment,
    ACTIONS(638), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22644] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(446), 1,
      sym_block_comment,
    ACTIONS(1031), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [22660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22678] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_AT_AT,
    ACTIONS(1035), 1,
      sym_name,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(448), 1,
      sym_block_comment,
    STATE(625), 1,
      sym_vertex_set_type,
  [22700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_WHEN,
    ACTIONS(1037), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(449), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat1,
  [22718] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    ACTIONS(691), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    STATE(450), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22736] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(451), 1,
      sym_block_comment,
    ACTIONS(120), 4,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [22752] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_EQ,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    STATE(452), 1,
      sym_block_comment,
    STATE(533), 1,
      aux_sym_base_decl_stmt_repeat1,
  [22774] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1049), 1,
      sym_name,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(453), 1,
      sym_block_comment,
    STATE(484), 1,
      sym_edge_set_type,
  [22796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    STATE(454), 1,
      sym_block_comment,
    ACTIONS(1053), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22814] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_AT_AT,
    ACTIONS(1035), 1,
      sym_name,
    STATE(321), 1,
      sym_global_accum_name,
    STATE(455), 1,
      sym_block_comment,
    STATE(562), 1,
      sym_vertex_set_type,
  [22836] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      sym_block_comment,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(997), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [22856] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1049), 1,
      sym_name,
    STATE(420), 1,
      sym_global_accum_name,
    STATE(457), 1,
      sym_block_comment,
    STATE(650), 1,
      sym_edge_set_type,
  [22878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(458), 1,
      sym_block_comment,
    ACTIONS(935), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22894] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_EQ,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    STATE(459), 1,
      sym_block_comment,
    STATE(531), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [22916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_block_comment,
    ACTIONS(1053), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22934] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1069), 1,
      sym_line_comment,
    STATE(461), 1,
      sym_block_comment,
    STATE(477), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(1063), 2,
      sym_newline,
      sym_comment_contents,
  [22954] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    ACTIONS(691), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(462), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_WHEN,
    ACTIONS(1074), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(463), 2,
      sym_block_comment,
      aux_sym_dml_sub_case_stmt_repeat1,
  [22990] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1079), 1,
      anon_sym_ELSE,
    ACTIONS(1081), 1,
      anon_sym_END,
    ACTIONS(1083), 1,
      anon_sym_WHEN,
    STATE(463), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(464), 1,
      sym_block_comment,
  [23012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1085), 1,
      anon_sym_LIMIT,
    ACTIONS(1087), 1,
      anon_sym_DO,
    STATE(465), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23032] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_AT,
    STATE(467), 1,
      sym_block_comment,
    ACTIONS(1091), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [23068] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    ACTIONS(1097), 1,
      anon_sym_TO_CSV,
    STATE(468), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23088] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(470), 1,
      sym_block_comment,
    ACTIONS(921), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [23122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(471), 1,
      sym_block_comment,
    ACTIONS(1101), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [23138] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1105), 1,
      anon_sym_AT,
    STATE(472), 1,
      sym_block_comment,
    ACTIONS(1103), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [23156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1107), 1,
      anon_sym_DO,
    STATE(473), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [23174] = 5,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1112), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1109), 2,
      sym_newline,
      sym_comment_contents,
    STATE(474), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [23192] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(475), 1,
      sym_block_comment,
    STATE(589), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [23212] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_AT,
    STATE(476), 1,
      sym_block_comment,
    ACTIONS(1114), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [23230] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_STAR_SLASH,
    STATE(474), 1,
      aux_sym_block_comment_repeat1,
    STATE(477), 1,
      sym_block_comment,
    ACTIONS(1063), 2,
      sym_newline,
      sym_comment_contents,
  [23250] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    ACTIONS(1120), 1,
      sym_name,
    STATE(478), 1,
      sym_block_comment,
    STATE(553), 1,
      aux_sym_accum_type_repeat1,
    STATE(763), 1,
      sym_simple_size,
  [23272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1124), 1,
      anon_sym_WHEN,
    ACTIONS(1122), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(479), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat2,
  [23290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1129), 1,
      anon_sym_AT,
    STATE(480), 1,
      sym_block_comment,
    ACTIONS(1127), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [23308] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1133), 1,
      anon_sym_AT,
    STATE(481), 1,
      sym_block_comment,
    ACTIONS(1131), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [23326] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    ACTIONS(1120), 1,
      sym_name,
    STATE(482), 1,
      sym_block_comment,
    STATE(553), 1,
      aux_sym_accum_type_repeat1,
    STATE(677), 1,
      sym_simple_size,
  [23348] = 5,
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
  [23365] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(983), 1,
      anon_sym_PIPE,
    STATE(484), 1,
      sym_block_comment,
    STATE(573), 1,
      aux_sym_step_edge_types_repeat1,
  [23384] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(485), 1,
      sym_block_comment,
  [23403] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1144), 1,
      anon_sym_AT,
    ACTIONS(1146), 1,
      sym_name,
    STATE(320), 1,
      sym_local_accum_name,
    STATE(486), 1,
      sym_block_comment,
  [23422] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_GT,
    STATE(485), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(487), 1,
      sym_block_comment,
  [23441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(488), 1,
      sym_block_comment,
    ACTIONS(1150), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23456] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    STATE(489), 1,
      sym_block_comment,
    STATE(586), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [23475] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_block_comment,
    STATE(582), 1,
      aux_sym_base_decl_stmt_repeat1,
  [23494] = 4,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    STATE(491), 1,
      sym_block_comment,
    ACTIONS(1156), 3,
      sym_newline,
      sym_comment_contents,
      anon_sym_STAR_SLASH,
  [23509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(492), 1,
      sym_block_comment,
    ACTIONS(1158), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23524] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(495), 1,
      sym_block_comment,
    ACTIONS(1164), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(496), 1,
      sym_block_comment,
    ACTIONS(638), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23588] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1166), 1,
      anon_sym_SQUOTE,
    ACTIONS(1168), 1,
      aux_sym_string_literal_token2,
    STATE(497), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_string_literal_repeat2,
  [23607] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1166), 1,
      anon_sym_DQUOTE,
    ACTIONS(1170), 1,
      aux_sym_string_literal_token1,
    STATE(498), 1,
      sym_block_comment,
    STATE(545), 1,
      aux_sym_string_literal_repeat1,
  [23626] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1172), 1,
      anon_sym_AT,
    ACTIONS(1174), 1,
      sym_name,
    STATE(162), 1,
      sym_local_accum_name,
    STATE(499), 1,
      sym_block_comment,
  [23645] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1168), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1176), 1,
      anon_sym_SQUOTE,
    STATE(497), 1,
      aux_sym_string_literal_repeat2,
    STATE(500), 1,
      sym_block_comment,
  [23664] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1178), 1,
      anon_sym_ELSE,
    ACTIONS(1181), 1,
      anon_sym_END,
    STATE(501), 2,
      sym_block_comment,
      aux_sym_query_body_if_stmt_repeat1,
  [23681] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE,
    STATE(498), 1,
      aux_sym_string_literal_repeat1,
    STATE(502), 1,
      sym_block_comment,
  [23700] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      sym_block_comment,
    STATE(516), 1,
      aux_sym_query_params_repeat1,
  [23719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(504), 1,
      sym_block_comment,
    ACTIONS(1187), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(505), 1,
      sym_block_comment,
    ACTIONS(1189), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23749] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1191), 1,
      anon_sym_DQUOTE,
    STATE(506), 1,
      sym_block_comment,
    STATE(521), 1,
      aux_sym_string_literal_repeat1,
  [23768] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1168), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    STATE(507), 1,
      sym_block_comment,
    STATE(523), 1,
      aux_sym_string_literal_repeat2,
  [23787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1193), 1,
      anon_sym_THEN,
    STATE(508), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(1197), 1,
      anon_sym_PIPE2,
    STATE(509), 1,
      sym_block_comment,
    STATE(532), 1,
      aux_sym_step_vertex_types_repeat1,
  [23823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(510), 1,
      sym_block_comment,
    ACTIONS(995), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [23838] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    STATE(511), 1,
      sym_block_comment,
  [23857] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1172), 1,
      anon_sym_AT,
    ACTIONS(1201), 1,
      sym_name,
    STATE(162), 1,
      sym_local_accum_name,
    STATE(512), 1,
      sym_block_comment,
  [23876] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1144), 1,
      anon_sym_AT,
    ACTIONS(1203), 1,
      sym_name,
    STATE(513), 1,
      sym_block_comment,
    STATE(629), 1,
      sym_local_accum_name,
  [23895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(514), 1,
      sym_block_comment,
    ACTIONS(1205), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23910] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1207), 1,
      anon_sym_OR,
    ACTIONS(1209), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1211), 1,
      anon_sym_QUERY,
    STATE(515), 1,
      sym_block_comment,
  [23929] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym_block_comment,
    STATE(540), 1,
      aux_sym_query_params_repeat1,
  [23948] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      anon_sym_EQ,
    STATE(517), 1,
      sym_block_comment,
    ACTIONS(1215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23965] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23982] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RBRACK,
    STATE(519), 2,
      sym_block_comment,
      aux_sym_v_expr_set_repeat1,
  [23999] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1226), 1,
      anon_sym_AT,
    ACTIONS(1228), 1,
      sym_name,
    STATE(29), 1,
      sym_local_accum_name,
    STATE(520), 1,
      sym_block_comment,
  [24018] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1230), 1,
      anon_sym_DQUOTE,
    STATE(521), 1,
      sym_block_comment,
    STATE(545), 1,
      aux_sym_string_literal_repeat1,
  [24037] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1232), 1,
      anon_sym_LPAREN,
    ACTIONS(1234), 1,
      sym_name,
    STATE(460), 1,
      sym_simple_set,
    STATE(522), 1,
      sym_block_comment,
  [24056] = 6,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1168), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    STATE(523), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_string_literal_repeat2,
  [24075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1236), 1,
      anon_sym_THEN,
    STATE(524), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RBRACE,
    STATE(525), 2,
      sym_block_comment,
      aux_sym_seed_set_repeat1,
  [24109] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      aux_sym_seed_set_repeat1,
    STATE(526), 1,
      sym_block_comment,
  [24128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(527), 1,
      sym_block_comment,
    ACTIONS(1247), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(528), 1,
      sym_block_comment,
    ACTIONS(371), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24158] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_GT,
    STATE(529), 1,
      sym_block_comment,
    STATE(579), 1,
      aux_sym_func_call_stmt_repeat1,
  [24177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(530), 1,
      sym_block_comment,
    ACTIONS(1251), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24192] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    STATE(531), 1,
      sym_block_comment,
    STATE(586), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [24211] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(1257), 1,
      anon_sym_PIPE2,
    STATE(532), 2,
      sym_block_comment,
      aux_sym_step_vertex_types_repeat1,
  [24228] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    STATE(533), 1,
      sym_block_comment,
    STATE(582), 1,
      aux_sym_base_decl_stmt_repeat1,
  [24247] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(519), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(534), 1,
      sym_block_comment,
  [24266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(535), 1,
      sym_block_comment,
    ACTIONS(1266), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1268), 1,
      anon_sym_THEN,
    STATE(536), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24298] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    ACTIONS(1272), 1,
      anon_sym_DOT,
    ACTIONS(1274), 1,
      anon_sym_COLON,
    STATE(537), 1,
      sym_block_comment,
  [24317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(538), 1,
      sym_block_comment,
    STATE(568), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1276), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [24334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(539), 1,
      sym_block_comment,
    ACTIONS(969), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [24349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    STATE(540), 2,
      sym_block_comment,
      aux_sym_query_params_repeat1,
  [24366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    STATE(541), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat2,
  [24383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24400] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1290), 1,
      anon_sym_THEN,
    STATE(543), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24417] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(544), 2,
      sym_block_comment,
      aux_sym_for_each_control_repeat1,
  [24434] = 5,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE,
    ACTIONS(1299), 1,
      aux_sym_string_literal_token1,
    STATE(545), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [24451] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym_accum_type_repeat2,
    STATE(546), 1,
      sym_block_comment,
  [24470] = 5,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    ACTIONS(1306), 1,
      anon_sym_SQUOTE,
    ACTIONS(1308), 1,
      aux_sym_string_literal_token2,
    STATE(547), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat2,
  [24487] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1311), 1,
      anon_sym_ELSE,
    ACTIONS(1313), 1,
      anon_sym_END,
    STATE(548), 1,
      sym_block_comment,
    STATE(555), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [24506] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1315), 1,
      anon_sym_THEN,
    STATE(549), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24540] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1319), 1,
      anon_sym_THEN,
    STATE(551), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1321), 1,
      anon_sym_ELSE,
    ACTIONS(1324), 1,
      anon_sym_END,
    STATE(552), 2,
      sym_block_comment,
      aux_sym_dml_sub_if_stmt_repeat1,
  [24574] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    ACTIONS(1326), 1,
      anon_sym_DO,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    STATE(553), 1,
      sym_block_comment,
  [24593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(554), 1,
      sym_block_comment,
    ACTIONS(1328), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24608] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1330), 1,
      anon_sym_ELSE,
    ACTIONS(1332), 1,
      anon_sym_END,
    STATE(501), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(555), 1,
      sym_block_comment,
  [24627] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1334), 1,
      anon_sym_LPAREN,
    ACTIONS(1336), 1,
      anon_sym_EQ,
    ACTIONS(1338), 1,
      anon_sym_PLUS_EQ,
    STATE(556), 1,
      sym_block_comment,
  [24646] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    ACTIONS(1342), 1,
      anon_sym_PIPE,
    STATE(557), 2,
      sym_block_comment,
      aux_sym_step_edge_types_repeat1,
  [24663] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_GT,
    STATE(558), 1,
      sym_block_comment,
    STATE(559), 1,
      aux_sym_accum_type_repeat4,
  [24682] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1352), 1,
      anon_sym_GT,
    STATE(559), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat4,
  [24699] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      aux_sym_accum_type_repeat2,
    STATE(560), 1,
      sym_block_comment,
  [24718] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1226), 1,
      anon_sym_AT,
    ACTIONS(1354), 1,
      sym_name,
    STATE(29), 1,
      sym_local_accum_name,
    STATE(561), 1,
      sym_block_comment,
  [24737] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1197), 1,
      anon_sym_PIPE2,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_step_vertex_types_repeat1,
    STATE(562), 1,
      sym_block_comment,
  [24756] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1358), 1,
      anon_sym_THEN,
    STATE(563), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24773] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1311), 1,
      anon_sym_ELSE,
    ACTIONS(1313), 1,
      anon_sym_END,
    STATE(555), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(564), 1,
      sym_block_comment,
  [24792] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(544), 1,
      aux_sym_for_each_control_repeat1,
    STATE(565), 1,
      sym_block_comment,
  [24811] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RBRACK,
    STATE(534), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(566), 1,
      sym_block_comment,
  [24830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(567), 1,
      sym_block_comment,
    ACTIONS(1366), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24845] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1368), 1,
      anon_sym_ELSE,
    ACTIONS(1370), 1,
      anon_sym_END,
    STATE(552), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(568), 1,
      sym_block_comment,
  [24864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(569), 1,
      sym_block_comment,
    ACTIONS(661), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1374), 1,
      anon_sym_DOT_STAR,
    STATE(570), 1,
      sym_block_comment,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [24896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_RBRACE,
    STATE(526), 1,
      aux_sym_seed_set_repeat1,
    STATE(571), 1,
      sym_block_comment,
  [24915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(572), 1,
      sym_block_comment,
    ACTIONS(1378), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [24930] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(983), 1,
      anon_sym_PIPE,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    STATE(557), 1,
      aux_sym_step_edge_types_repeat1,
    STATE(573), 1,
      sym_block_comment,
  [24949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1382), 1,
      anon_sym_THEN,
    STATE(574), 1,
      sym_block_comment,
    ACTIONS(904), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24966] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1232), 1,
      anon_sym_LPAREN,
    ACTIONS(1234), 1,
      sym_name,
    STATE(430), 1,
      sym_simple_set,
    STATE(575), 1,
      sym_block_comment,
  [24985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(576), 1,
      sym_block_comment,
    ACTIONS(1378), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [25000] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_GT,
    STATE(558), 1,
      aux_sym_accum_type_repeat4,
    STATE(577), 1,
      sym_block_comment,
  [25019] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_GT,
    STATE(559), 1,
      aux_sym_accum_type_repeat4,
    STATE(578), 1,
      sym_block_comment,
  [25038] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1386), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(579), 1,
      sym_block_comment,
  [25057] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1388), 1,
      sym_name,
    STATE(340), 1,
      sym_step_source_set,
    STATE(388), 1,
      sym_path_pattern,
    STATE(580), 1,
      sym_block_comment,
  [25076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(581), 1,
      sym_block_comment,
    ACTIONS(1390), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [25091] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_SEMI,
    STATE(582), 2,
      sym_block_comment,
      aux_sym_base_decl_stmt_repeat1,
  [25108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(583), 1,
      sym_block_comment,
    ACTIONS(1397), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [25123] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_GT,
    STATE(578), 1,
      aux_sym_accum_type_repeat4,
    STATE(584), 1,
      sym_block_comment,
  [25142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1401), 1,
      anon_sym_EQ,
    STATE(585), 1,
      sym_block_comment,
    ACTIONS(1395), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [25159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_SEMI,
    STATE(586), 2,
      sym_block_comment,
      aux_sym_accum_decl_stmt_repeat1,
  [25176] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_SEMI,
    STATE(489), 1,
      aux_sym_accum_decl_stmt_repeat1,
    STATE(587), 1,
      sym_block_comment,
  [25195] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(1410), 1,
      anon_sym_PLUS_EQ,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(588), 1,
      sym_block_comment,
  [25214] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1412), 1,
      anon_sym_EQ,
    STATE(589), 1,
      sym_block_comment,
    ACTIONS(1406), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [25231] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1414), 1,
      anon_sym_ELSE,
    ACTIONS(1416), 1,
      anon_sym_END,
    STATE(568), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(590), 1,
      sym_block_comment,
  [25250] = 5,
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
  [25266] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    ACTIONS(1424), 1,
      anon_sym_DASH_GT,
    STATE(592), 1,
      sym_block_comment,
  [25282] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1426), 1,
      anon_sym_LBRACE,
    STATE(492), 1,
      sym_query_body,
    STATE(593), 1,
      sym_block_comment,
  [25298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_block_comment,
    STATE(847), 1,
      sym_parameter_list,
  [25314] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1430), 1,
      anon_sym_SYNTAX,
    ACTIONS(1432), 1,
      anon_sym_LBRACE,
    STATE(595), 1,
      sym_block_comment,
  [25330] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1434), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1436), 1,
      anon_sym_QUERY,
    STATE(596), 1,
      sym_block_comment,
  [25346] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    STATE(597), 1,
      sym_block_comment,
    STATE(797), 1,
      sym_parameter_list,
  [25362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(598), 1,
      sym_block_comment,
    ACTIONS(1438), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1440), 1,
      anon_sym_FROM,
    STATE(326), 1,
      sym_from_clause,
    STATE(599), 1,
      sym_block_comment,
  [25392] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(209), 1,
      aux_sym_accum_type_repeat1,
    STATE(600), 1,
      sym_block_comment,
  [25408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1272), 1,
      anon_sym_DOT,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      sym_block_comment,
  [25424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(602), 1,
      sym_block_comment,
  [25440] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(603), 1,
      sym_block_comment,
  [25456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    STATE(604), 1,
      sym_block_comment,
    STATE(766), 1,
      sym_parameter_list,
  [25472] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(605), 1,
      sym_block_comment,
  [25488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1444), 1,
      anon_sym_IN,
    ACTIONS(1446), 1,
      anon_sym_COLON,
    STATE(606), 1,
      sym_block_comment,
  [25504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(607), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat3,
  [25518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(608), 1,
      sym_block_comment,
    ACTIONS(1451), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25532] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    STATE(609), 1,
      sym_block_comment,
    STATE(716), 1,
      sym_parameter_list,
  [25548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(610), 1,
      sym_block_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25562] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(611), 1,
      sym_block_comment,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [25576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(1455), 1,
      anon_sym_DASH_GT,
    STATE(612), 1,
      sym_block_comment,
  [25592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    STATE(613), 1,
      sym_block_comment,
  [25608] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1457), 1,
      anon_sym_SYNTAX,
    ACTIONS(1459), 1,
      anon_sym_LBRACE,
    STATE(614), 1,
      sym_block_comment,
  [25624] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      anon_sym_WHEN,
    STATE(464), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(615), 1,
      sym_block_comment,
  [25640] = 4,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    STATE(616), 1,
      sym_block_comment,
    ACTIONS(1461), 2,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
  [25654] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1463), 1,
      anon_sym_SYNTAX,
    ACTIONS(1465), 1,
      anon_sym_LBRACE,
    STATE(617), 1,
      sym_block_comment,
  [25670] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(618), 1,
      sym_block_comment,
    ACTIONS(1467), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25684] = 4,
    ACTIONS(1065), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      sym_line_comment,
    STATE(619), 1,
      sym_block_comment,
    ACTIONS(1469), 2,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token2,
  [25698] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      anon_sym_IN,
    ACTIONS(1473), 1,
      anon_sym_LIKE,
    STATE(620), 1,
      sym_block_comment,
  [25714] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1219), 1,
      anon_sym_NULL,
    ACTIONS(1475), 1,
      anon_sym_NOT,
    STATE(621), 1,
      sym_block_comment,
  [25730] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(565), 1,
      aux_sym_for_each_control_repeat1,
    STATE(622), 1,
      sym_block_comment,
  [25746] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(213), 1,
      aux_sym_accum_type_repeat1,
    STATE(623), 1,
      sym_block_comment,
  [25762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(624), 1,
      sym_block_comment,
    ACTIONS(1477), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(625), 1,
      sym_block_comment,
    ACTIONS(1255), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
  [25790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(626), 1,
      sym_block_comment,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25804] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1334), 1,
      anon_sym_LPAREN,
    ACTIONS(1336), 1,
      anon_sym_EQ,
    STATE(627), 1,
      sym_block_comment,
  [25820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(628), 1,
      sym_block_comment,
    ACTIONS(1479), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25834] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(629), 1,
      sym_block_comment,
    ACTIONS(1481), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [25848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(630), 1,
      sym_block_comment,
    ACTIONS(1276), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym_accum_type_repeat3,
    STATE(631), 1,
      sym_block_comment,
  [25878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(632), 1,
      sym_block_comment,
    ACTIONS(1485), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(511), 1,
      aux_sym_accum_type_repeat1,
    STATE(633), 1,
      sym_block_comment,
  [25908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(634), 1,
      sym_block_comment,
    ACTIONS(1487), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(635), 1,
      sym_block_comment,
    ACTIONS(1489), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1428), 1,
      anon_sym_LPAREN,
    STATE(636), 1,
      sym_block_comment,
    STATE(811), 1,
      sym_parameter_list,
  [25952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(637), 1,
      sym_block_comment,
    ACTIONS(1278), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    ACTIONS(1493), 1,
      anon_sym_COLON,
    STATE(638), 1,
      sym_block_comment,
  [25982] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1495), 1,
      anon_sym_SYNTAX,
    ACTIONS(1497), 1,
      anon_sym_LBRACE,
    STATE(639), 1,
      sym_block_comment,
  [25998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(640), 1,
      sym_block_comment,
    ACTIONS(1499), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [26012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(641), 1,
      sym_block_comment,
    ACTIONS(1501), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [26026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1503), 1,
      anon_sym_IN,
    ACTIONS(1505), 1,
      anon_sym_COLON,
    STATE(642), 1,
      sym_block_comment,
  [26042] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(643), 1,
      sym_block_comment,
    ACTIONS(1507), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [26056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(644), 1,
      sym_block_comment,
    ACTIONS(963), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [26070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(645), 1,
      sym_block_comment,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [26084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(646), 1,
      sym_block_comment,
    ACTIONS(1509), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26098] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_digit,
    STATE(379), 1,
      aux_sym_accum_type_repeat1,
    STATE(647), 1,
      sym_block_comment,
  [26114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(648), 1,
      sym_block_comment,
    ACTIONS(1511), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [26128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(649), 1,
      sym_block_comment,
    ACTIONS(1513), 2,
      anon_sym_V2,
      anon_sym_v2,
  [26142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(650), 1,
      sym_block_comment,
    ACTIONS(1340), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [26156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1515), 1,
      anon_sym_DOT,
    ACTIONS(1517), 1,
      anon_sym_DO,
    STATE(651), 1,
      sym_block_comment,
  [26172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(652), 1,
      sym_block_comment,
    ACTIONS(1519), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [26186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1521), 1,
      anon_sym_SYNTAX,
    ACTIONS(1523), 1,
      anon_sym_LBRACE,
    STATE(653), 1,
      sym_block_comment,
  [26202] = 5,
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
  [26218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(655), 1,
      sym_block_comment,
    ACTIONS(1527), 2,
      anon_sym_V2,
      anon_sym_v2,
  [26232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1529), 1,
      sym_name,
    STATE(656), 1,
      sym_block_comment,
  [26245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1531), 1,
      sym_name,
    STATE(657), 1,
      sym_block_comment,
  [26258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
    STATE(658), 1,
      sym_block_comment,
  [26271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1535), 1,
      anon_sym_LBRACE,
    STATE(659), 1,
      sym_block_comment,
  [26284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1537), 1,
      anon_sym_LBRACK,
    STATE(660), 1,
      sym_block_comment,
  [26297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
    STATE(661), 1,
      sym_block_comment,
  [26310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1541), 1,
      sym_name,
    STATE(662), 1,
      sym_block_comment,
  [26323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_block_comment,
  [26336] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    STATE(664), 1,
      sym_block_comment,
  [26349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_block_comment,
  [26362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1543), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_block_comment,
  [26375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1545), 1,
      sym_name,
    STATE(667), 1,
      sym_block_comment,
  [26388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      sym_name,
    STATE(668), 1,
      sym_block_comment,
  [26401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1549), 1,
      anon_sym_SUM,
    STATE(669), 1,
      sym_block_comment,
  [26414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1551), 1,
      sym_name,
    STATE(670), 1,
      sym_block_comment,
  [26427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1553), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_block_comment,
  [26440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1555), 1,
      anon_sym_LBRACE,
    STATE(672), 1,
      sym_block_comment,
  [26453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1557), 1,
      sym_name,
    STATE(673), 1,
      sym_block_comment,
  [26466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1559), 1,
      anon_sym_END,
    STATE(674), 1,
      sym_block_comment,
  [26479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      anon_sym_DASH,
    STATE(675), 1,
      sym_block_comment,
  [26492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1563), 1,
      anon_sym_SEMI,
    STATE(676), 1,
      sym_block_comment,
  [26505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1565), 1,
      anon_sym_DO,
    STATE(677), 1,
      sym_block_comment,
  [26518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1326), 1,
      anon_sym_DO,
    STATE(678), 1,
      sym_block_comment,
  [26531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1567), 1,
      anon_sym_END,
    STATE(679), 1,
      sym_block_comment,
  [26544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1569), 1,
      anon_sym_END,
    STATE(680), 1,
      sym_block_comment,
  [26557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1571), 1,
      anon_sym_SEMI,
    STATE(681), 1,
      sym_block_comment,
  [26570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1573), 1,
      anon_sym_THEN,
    STATE(682), 1,
      sym_block_comment,
  [26583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1575), 1,
      sym_name,
    STATE(683), 1,
      sym_block_comment,
  [26596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1577), 1,
      anon_sym_END,
    STATE(684), 1,
      sym_block_comment,
  [26609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1579), 1,
      anon_sym_END,
    STATE(685), 1,
      sym_block_comment,
  [26622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1581), 1,
      anon_sym_LBRACE,
    STATE(686), 1,
      sym_block_comment,
  [26635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1583), 1,
      anon_sym_SEMI,
    STATE(687), 1,
      sym_block_comment,
  [26648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1585), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_block_comment,
  [26661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1587), 1,
      anon_sym_NULL,
    STATE(689), 1,
      sym_block_comment,
  [26674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1589), 1,
      anon_sym_STEP,
    STATE(690), 1,
      sym_block_comment,
  [26687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1591), 1,
      anon_sym_SEMI,
    STATE(691), 1,
      sym_block_comment,
  [26700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1593), 1,
      sym_name,
    STATE(692), 1,
      sym_block_comment,
  [26713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_block_comment,
  [26726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1597), 1,
      anon_sym_FILTER,
    STATE(694), 1,
      sym_block_comment,
  [26739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      sym_block_comment,
  [26752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1601), 1,
      anon_sym_AVG,
    STATE(696), 1,
      sym_block_comment,
  [26765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    STATE(697), 1,
      sym_block_comment,
  [26778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      sym_block_comment,
  [26791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1605), 1,
      anon_sym_END,
    STATE(699), 1,
      sym_block_comment,
  [26804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1607), 1,
      anon_sym_IF,
    STATE(700), 1,
      sym_block_comment,
  [26817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1609), 1,
      anon_sym_MIN,
    STATE(701), 1,
      sym_block_comment,
  [26830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1611), 1,
      sym_name,
    STATE(702), 1,
      sym_block_comment,
  [26843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      sym_block_comment,
  [26856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1615), 1,
      sym_name,
    STATE(704), 1,
      sym_block_comment,
  [26869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1617), 1,
      anon_sym_SEMI,
    STATE(705), 1,
      sym_block_comment,
  [26882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1619), 1,
      anon_sym_FROM,
    STATE(706), 1,
      sym_block_comment,
  [26895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1621), 1,
      anon_sym_LPAREN,
    STATE(707), 1,
      sym_block_comment,
  [26908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1623), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      sym_block_comment,
  [26921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1625), 1,
      anon_sym_V2,
    STATE(709), 1,
      sym_block_comment,
  [26934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1627), 1,
      anon_sym_GT,
    STATE(710), 1,
      sym_block_comment,
  [26947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1629), 1,
      anon_sym_SELECT,
    STATE(711), 1,
      sym_block_comment,
  [26960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_block_comment,
  [26973] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1633), 1,
      anon_sym_GT,
    STATE(713), 1,
      sym_block_comment,
  [26986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1635), 1,
      sym_name,
    STATE(714), 1,
      sym_block_comment,
  [26999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1637), 1,
      anon_sym_GRAPH,
    STATE(715), 1,
      sym_block_comment,
  [27012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1639), 1,
      anon_sym_FOR,
    STATE(716), 1,
      sym_block_comment,
  [27025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1641), 1,
      anon_sym_END,
    STATE(717), 1,
      sym_block_comment,
  [27038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1643), 1,
      anon_sym_IF,
    STATE(718), 1,
      sym_block_comment,
  [27051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      sym_block_comment,
  [27064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1647), 1,
      anon_sym_LPAREN,
    STATE(720), 1,
      sym_block_comment,
  [27077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1649), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_block_comment,
  [27090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1651), 1,
      sym_name,
    STATE(722), 1,
      sym_block_comment,
  [27103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1653), 1,
      anon_sym_DO,
    STATE(723), 1,
      sym_block_comment,
  [27116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1655), 1,
      sym_name,
    STATE(724), 1,
      sym_block_comment,
  [27129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1657), 1,
      sym_name,
    STATE(725), 1,
      sym_block_comment,
  [27142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1334), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_block_comment,
  [27155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    STATE(727), 1,
      sym_block_comment,
  [27168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    STATE(728), 1,
      sym_block_comment,
  [27181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      sym_block_comment,
  [27194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1659), 1,
      sym_digit,
    STATE(730), 1,
      sym_block_comment,
  [27207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1661), 1,
      sym_name,
    STATE(731), 1,
      sym_block_comment,
  [27220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(732), 1,
      sym_block_comment,
  [27233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    STATE(733), 1,
      sym_block_comment,
  [27246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1663), 1,
      sym_name,
    STATE(734), 1,
      sym_block_comment,
  [27259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      sym_block_comment,
  [27272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1667), 1,
      anon_sym_GT,
    STATE(736), 1,
      sym_block_comment,
  [27285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1669), 1,
      sym_name,
    STATE(737), 1,
      sym_block_comment,
  [27298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1671), 1,
      sym_name,
    STATE(738), 1,
      sym_block_comment,
  [27311] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1673), 1,
      anon_sym_LPAREN,
    STATE(739), 1,
      sym_block_comment,
  [27324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1675), 1,
      anon_sym_GT,
    STATE(740), 1,
      sym_block_comment,
  [27337] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1677), 1,
      anon_sym_COMMA,
    STATE(741), 1,
      sym_block_comment,
  [27350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1679), 1,
      anon_sym_SEMI,
    STATE(742), 1,
      sym_block_comment,
  [27363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
    STATE(743), 1,
      sym_block_comment,
  [27376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1683), 1,
      anon_sym_GT,
    STATE(744), 1,
      sym_block_comment,
  [27389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1685), 1,
      anon_sym_LPAREN,
    STATE(745), 1,
      sym_block_comment,
  [27402] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1687), 1,
      anon_sym_SEMI,
    STATE(746), 1,
      sym_block_comment,
  [27415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(747), 1,
      sym_block_comment,
  [27428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1689), 1,
      anon_sym_FILTER,
    STATE(748), 1,
      sym_block_comment,
  [27441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1691), 1,
      anon_sym_LPAREN,
    STATE(749), 1,
      sym_block_comment,
  [27454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1693), 1,
      anon_sym_SEMI,
    STATE(750), 1,
      sym_block_comment,
  [27467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
    STATE(751), 1,
      sym_block_comment,
  [27480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1697), 1,
      anon_sym_DO,
    STATE(752), 1,
      sym_block_comment,
  [27493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1699), 1,
      sym_name,
    STATE(753), 1,
      sym_block_comment,
  [27506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1701), 1,
      sym_digit,
    STATE(754), 1,
      sym_block_comment,
  [27519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1703), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_block_comment,
  [27532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1705), 1,
      sym_name,
    STATE(756), 1,
      sym_block_comment,
  [27545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1707), 1,
      sym_name,
    STATE(757), 1,
      sym_block_comment,
  [27558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(758), 1,
      sym_block_comment,
  [27571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1703), 1,
      anon_sym_SEMI,
    STATE(759), 1,
      sym_block_comment,
  [27584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1709), 1,
      anon_sym_END,
    STATE(760), 1,
      sym_block_comment,
  [27597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      sym_name,
    STATE(761), 1,
      sym_block_comment,
  [27610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1713), 1,
      anon_sym_END,
    STATE(762), 1,
      sym_block_comment,
  [27623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1715), 1,
      anon_sym_DO,
    STATE(763), 1,
      sym_block_comment,
  [27636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      anon_sym_FOR,
    STATE(764), 1,
      sym_block_comment,
  [27649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1719), 1,
      anon_sym_GRAPH,
    STATE(765), 1,
      sym_block_comment,
  [27662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1721), 1,
      anon_sym_FOR,
    STATE(766), 1,
      sym_block_comment,
  [27675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1723), 1,
      anon_sym_END,
    STATE(767), 1,
      sym_block_comment,
  [27688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      sym_name,
    STATE(768), 1,
      sym_block_comment,
  [27701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1727), 1,
      anon_sym_DASH,
    STATE(769), 1,
      sym_block_comment,
  [27714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1729), 1,
      sym_name,
    STATE(770), 1,
      sym_block_comment,
  [27727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1731), 1,
      anon_sym_END,
    STATE(771), 1,
      sym_block_comment,
  [27740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1733), 1,
      anon_sym_SEMI,
    STATE(772), 1,
      sym_block_comment,
  [27753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1735), 1,
      sym_name,
    STATE(773), 1,
      sym_block_comment,
  [27766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1737), 1,
      sym_name,
    STATE(774), 1,
      sym_block_comment,
  [27779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(995), 1,
      sym_name,
    STATE(775), 1,
      sym_block_comment,
  [27792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1739), 1,
      anon_sym_LPAREN,
    STATE(776), 1,
      sym_block_comment,
  [27805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1741), 1,
      sym_name,
    STATE(777), 1,
      sym_block_comment,
  [27818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1743), 1,
      anon_sym_DO,
    STATE(778), 1,
      sym_block_comment,
  [27831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1745), 1,
      sym_name,
    STATE(779), 1,
      sym_block_comment,
  [27844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1747), 1,
      sym_name,
    STATE(780), 1,
      sym_block_comment,
  [27857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1749), 1,
      anon_sym_LPAREN,
    STATE(781), 1,
      sym_block_comment,
  [27870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
    STATE(782), 1,
      sym_block_comment,
  [27883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1753), 1,
      anon_sym_LPAREN,
    STATE(783), 1,
      sym_block_comment,
  [27896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1755), 1,
      anon_sym_LPAREN,
    STATE(784), 1,
      sym_block_comment,
  [27909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1757), 1,
      anon_sym_MAX,
    STATE(785), 1,
      sym_block_comment,
  [27922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1759), 1,
      anon_sym_LPAREN,
    STATE(786), 1,
      sym_block_comment,
  [27935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1761), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym_block_comment,
  [27948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1763), 1,
      anon_sym_DASH,
    STATE(788), 1,
      sym_block_comment,
  [27961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1765), 1,
      anon_sym_LT,
    STATE(789), 1,
      sym_block_comment,
  [27974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1767), 1,
      anon_sym_GRAPH,
    STATE(790), 1,
      sym_block_comment,
  [27987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1769), 1,
      anon_sym_END,
    STATE(791), 1,
      sym_block_comment,
  [28000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1771), 1,
      sym_name,
    STATE(792), 1,
      sym_block_comment,
  [28013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1773), 1,
      anon_sym_SEMI,
    STATE(793), 1,
      sym_block_comment,
  [28026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1775), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_block_comment,
  [28039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1777), 1,
      anon_sym_LT,
    STATE(795), 1,
      sym_block_comment,
  [28052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1779), 1,
      anon_sym_FOR,
    STATE(796), 1,
      sym_block_comment,
  [28065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1781), 1,
      anon_sym_FOR,
    STATE(797), 1,
      sym_block_comment,
  [28078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    STATE(798), 1,
      sym_block_comment,
  [28091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1783), 1,
      sym_name,
    STATE(799), 1,
      sym_block_comment,
  [28104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1785), 1,
      anon_sym_QUERY,
    STATE(800), 1,
      sym_block_comment,
  [28117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1787), 1,
      sym_name,
    STATE(801), 1,
      sym_block_comment,
  [28130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1789), 1,
      sym_name,
    STATE(802), 1,
      sym_block_comment,
  [28143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1791), 1,
      sym_name,
    STATE(803), 1,
      sym_block_comment,
  [28156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1793), 1,
      sym_name,
    STATE(804), 1,
      sym_block_comment,
  [28169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1795), 1,
      anon_sym_SEMI,
    STATE(805), 1,
      sym_block_comment,
  [28182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1797), 1,
      anon_sym_DASH,
    STATE(806), 1,
      sym_block_comment,
  [28195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1799), 1,
      anon_sym_RPAREN,
    STATE(807), 1,
      sym_block_comment,
  [28208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1801), 1,
      anon_sym_SEMI,
    STATE(808), 1,
      sym_block_comment,
  [28221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1803), 1,
      sym_digit,
    STATE(809), 1,
      sym_block_comment,
  [28234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(810), 1,
      sym_block_comment,
  [28247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1805), 1,
      anon_sym_FOR,
    STATE(811), 1,
      sym_block_comment,
  [28260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1807), 1,
      sym_name,
    STATE(812), 1,
      sym_block_comment,
  [28273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      anon_sym_SEMI,
    STATE(813), 1,
      sym_block_comment,
  [28286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(814), 1,
      sym_block_comment,
  [28299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1811), 1,
      anon_sym_SEMI,
    STATE(815), 1,
      sym_block_comment,
  [28312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1813), 1,
      sym_name,
    STATE(816), 1,
      sym_block_comment,
  [28325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1815), 1,
      anon_sym_SEMI,
    STATE(817), 1,
      sym_block_comment,
  [28338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      sym_digit,
    STATE(818), 1,
      sym_block_comment,
  [28351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1819), 1,
      anon_sym_END,
    STATE(819), 1,
      sym_block_comment,
  [28364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
    STATE(820), 1,
      sym_block_comment,
  [28377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1823), 1,
      anon_sym_LPAREN,
    STATE(821), 1,
      sym_block_comment,
  [28390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1825), 1,
      anon_sym_LT,
    STATE(822), 1,
      sym_block_comment,
  [28403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1827), 1,
      anon_sym_GT,
    STATE(823), 1,
      sym_block_comment,
  [28416] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
    STATE(824), 1,
      sym_block_comment,
  [28429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1831), 1,
      anon_sym_LT,
    STATE(825), 1,
      sym_block_comment,
  [28442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      sym_digit,
    STATE(826), 1,
      sym_block_comment,
  [28455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_block_comment,
  [28468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1835), 1,
      anon_sym_LT,
    STATE(828), 1,
      sym_block_comment,
  [28481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1837), 1,
      anon_sym_LT,
    STATE(829), 1,
      sym_block_comment,
  [28494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      anon_sym_LT,
    STATE(830), 1,
      sym_block_comment,
  [28507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1841), 1,
      anon_sym_LT,
    STATE(831), 1,
      sym_block_comment,
  [28520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(832), 1,
      sym_block_comment,
  [28533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1843), 1,
      anon_sym_LT,
    STATE(833), 1,
      sym_block_comment,
  [28546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1845), 1,
      sym_name,
    STATE(834), 1,
      sym_block_comment,
  [28559] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1847), 1,
      sym_name,
    STATE(835), 1,
      sym_block_comment,
  [28572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1849), 1,
      anon_sym_LPAREN,
    STATE(836), 1,
      sym_block_comment,
  [28585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1851), 1,
      anon_sym_LT,
    STATE(837), 1,
      sym_block_comment,
  [28598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_block_comment,
  [28611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1855), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym_block_comment,
  [28624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym_block_comment,
  [28637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1857), 1,
      anon_sym_TUPLE,
    STATE(841), 1,
      sym_block_comment,
  [28650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1859), 1,
      anon_sym_SEMI,
    STATE(842), 1,
      sym_block_comment,
  [28663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1861), 1,
      anon_sym_RPAREN,
    STATE(843), 1,
      sym_block_comment,
  [28676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      anon_sym_RPAREN,
    STATE(844), 1,
      sym_block_comment,
  [28689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1865), 1,
      anon_sym_LBRACE,
    STATE(845), 1,
      sym_block_comment,
  [28702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1867), 1,
      anon_sym_SEMI,
    STATE(846), 1,
      sym_block_comment,
  [28715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      anon_sym_FOR,
    STATE(847), 1,
      sym_block_comment,
  [28728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1867), 1,
      anon_sym_SEMI,
    STATE(848), 1,
      sym_block_comment,
  [28741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1871), 1,
      sym_name,
    STATE(849), 1,
      sym_block_comment,
  [28754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1873), 1,
      sym_name,
    STATE(850), 1,
      sym_block_comment,
  [28767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1875), 1,
      sym_name,
    STATE(851), 1,
      sym_block_comment,
  [28780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1877), 1,
      anon_sym_GRAPH,
    STATE(852), 1,
      sym_block_comment,
  [28793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1879), 1,
      anon_sym_RPAREN,
    STATE(853), 1,
      sym_block_comment,
  [28806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1881), 1,
      sym_name,
    STATE(854), 1,
      sym_block_comment,
  [28819] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1883), 1,
      anon_sym_FILTER,
    STATE(855), 1,
      sym_block_comment,
  [28832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1885), 1,
      sym_name,
    STATE(856), 1,
      sym_block_comment,
  [28845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1887), 1,
      anon_sym_RPAREN,
    STATE(857), 1,
      sym_block_comment,
  [28858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1889), 1,
      anon_sym_COMMA,
    STATE(858), 1,
      sym_block_comment,
  [28871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1891), 1,
      sym_name,
    STATE(859), 1,
      sym_block_comment,
  [28884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1893), 1,
      anon_sym_LPAREN,
    STATE(860), 1,
      sym_block_comment,
  [28897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1895), 1,
      anon_sym_QUERY,
    STATE(861), 1,
      sym_block_comment,
  [28910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1897), 1,
      sym_name,
    STATE(862), 1,
      sym_block_comment,
  [28923] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1899), 1,
      anon_sym_REPLACE,
    STATE(863), 1,
      sym_block_comment,
  [28936] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1901), 1,
      anon_sym_FILTER,
    STATE(864), 1,
      sym_block_comment,
  [28949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1903), 1,
      anon_sym_LPAREN,
    STATE(865), 1,
      sym_block_comment,
  [28962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1905), 1,
      sym_name,
    STATE(866), 1,
      sym_block_comment,
  [28975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1907), 1,
      sym_name,
    STATE(867), 1,
      sym_block_comment,
  [28988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1909), 1,
      anon_sym_LPAREN,
    STATE(868), 1,
      sym_block_comment,
  [29001] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1911), 1,
      anon_sym_LPAREN,
    STATE(869), 1,
      sym_block_comment,
  [29014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1913), 1,
      anon_sym_GRAPH,
    STATE(870), 1,
      sym_block_comment,
  [29027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1915), 1,
      ts_builtin_sym_end,
    STATE(871), 1,
      sym_block_comment,
  [29040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1917), 1,
      anon_sym_LPAREN,
    STATE(872), 1,
      sym_block_comment,
  [29053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1919), 1,
      anon_sym_LPAREN,
    STATE(873), 1,
      sym_block_comment,
  [29066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1921), 1,
      anon_sym_LPAREN,
    STATE(874), 1,
      sym_block_comment,
  [29079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1923), 1,
      anon_sym_LPAREN,
    STATE(875), 1,
      sym_block_comment,
  [29092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1925), 1,
      sym_name,
    STATE(876), 1,
      sym_block_comment,
  [29105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(877), 1,
      sym_block_comment,
  [29118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1927), 1,
      anon_sym_EQ,
    STATE(878), 1,
      sym_block_comment,
  [29131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1929), 1,
      anon_sym_LPAREN,
    STATE(879), 1,
      sym_block_comment,
  [29144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1931), 1,
      anon_sym_LPAREN,
    STATE(880), 1,
      sym_block_comment,
  [29157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1933), 1,
      sym_name,
    STATE(881), 1,
      sym_block_comment,
  [29170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1935), 1,
      sym_name,
    STATE(882), 1,
      sym_block_comment,
  [29183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1937), 1,
      anon_sym_QUERY,
    STATE(883), 1,
      sym_block_comment,
  [29196] = 1,
    ACTIONS(1939), 1,
      ts_builtin_sym_end,
  [29200] = 1,
    ACTIONS(1941), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 137,
  [SMALL_STATE(4)] = 274,
  [SMALL_STATE(5)] = 400,
  [SMALL_STATE(6)] = 528,
  [SMALL_STATE(7)] = 656,
  [SMALL_STATE(8)] = 778,
  [SMALL_STATE(9)] = 900,
  [SMALL_STATE(10)] = 1022,
  [SMALL_STATE(11)] = 1144,
  [SMALL_STATE(12)] = 1266,
  [SMALL_STATE(13)] = 1388,
  [SMALL_STATE(14)] = 1510,
  [SMALL_STATE(15)] = 1632,
  [SMALL_STATE(16)] = 1754,
  [SMALL_STATE(17)] = 1876,
  [SMALL_STATE(18)] = 1998,
  [SMALL_STATE(19)] = 2120,
  [SMALL_STATE(20)] = 2181,
  [SMALL_STATE(21)] = 2246,
  [SMALL_STATE(22)] = 2308,
  [SMALL_STATE(23)] = 2370,
  [SMALL_STATE(24)] = 2434,
  [SMALL_STATE(25)] = 2494,
  [SMALL_STATE(26)] = 2554,
  [SMALL_STATE(27)] = 2618,
  [SMALL_STATE(28)] = 2678,
  [SMALL_STATE(29)] = 2738,
  [SMALL_STATE(30)] = 2798,
  [SMALL_STATE(31)] = 2857,
  [SMALL_STATE(32)] = 2914,
  [SMALL_STATE(33)] = 2971,
  [SMALL_STATE(34)] = 3028,
  [SMALL_STATE(35)] = 3085,
  [SMALL_STATE(36)] = 3141,
  [SMALL_STATE(37)] = 3199,
  [SMALL_STATE(38)] = 3255,
  [SMALL_STATE(39)] = 3311,
  [SMALL_STATE(40)] = 3370,
  [SMALL_STATE(41)] = 3427,
  [SMALL_STATE(42)] = 3486,
  [SMALL_STATE(43)] = 3545,
  [SMALL_STATE(44)] = 3602,
  [SMALL_STATE(45)] = 3658,
  [SMALL_STATE(46)] = 3714,
  [SMALL_STATE(47)] = 3768,
  [SMALL_STATE(48)] = 3822,
  [SMALL_STATE(49)] = 3878,
  [SMALL_STATE(50)] = 3934,
  [SMALL_STATE(51)] = 3988,
  [SMALL_STATE(52)] = 4041,
  [SMALL_STATE(53)] = 4094,
  [SMALL_STATE(54)] = 4147,
  [SMALL_STATE(55)] = 4200,
  [SMALL_STATE(56)] = 4253,
  [SMALL_STATE(57)] = 4306,
  [SMALL_STATE(58)] = 4359,
  [SMALL_STATE(59)] = 4412,
  [SMALL_STATE(60)] = 4465,
  [SMALL_STATE(61)] = 4518,
  [SMALL_STATE(62)] = 4571,
  [SMALL_STATE(63)] = 4624,
  [SMALL_STATE(64)] = 4677,
  [SMALL_STATE(65)] = 4730,
  [SMALL_STATE(66)] = 4783,
  [SMALL_STATE(67)] = 4836,
  [SMALL_STATE(68)] = 4889,
  [SMALL_STATE(69)] = 4942,
  [SMALL_STATE(70)] = 4995,
  [SMALL_STATE(71)] = 5051,
  [SMALL_STATE(72)] = 5156,
  [SMALL_STATE(73)] = 5206,
  [SMALL_STATE(74)] = 5256,
  [SMALL_STATE(75)] = 5314,
  [SMALL_STATE(76)] = 5364,
  [SMALL_STATE(77)] = 5423,
  [SMALL_STATE(78)] = 5472,
  [SMALL_STATE(79)] = 5521,
  [SMALL_STATE(80)] = 5595,
  [SMALL_STATE(81)] = 5669,
  [SMALL_STATE(82)] = 5743,
  [SMALL_STATE(83)] = 5817,
  [SMALL_STATE(84)] = 5891,
  [SMALL_STATE(85)] = 5965,
  [SMALL_STATE(86)] = 6039,
  [SMALL_STATE(87)] = 6113,
  [SMALL_STATE(88)] = 6187,
  [SMALL_STATE(89)] = 6261,
  [SMALL_STATE(90)] = 6335,
  [SMALL_STATE(91)] = 6409,
  [SMALL_STATE(92)] = 6506,
  [SMALL_STATE(93)] = 6603,
  [SMALL_STATE(94)] = 6674,
  [SMALL_STATE(95)] = 6740,
  [SMALL_STATE(96)] = 6832,
  [SMALL_STATE(97)] = 6926,
  [SMALL_STATE(98)] = 7020,
  [SMALL_STATE(99)] = 7112,
  [SMALL_STATE(100)] = 7204,
  [SMALL_STATE(101)] = 7296,
  [SMALL_STATE(102)] = 7390,
  [SMALL_STATE(103)] = 7484,
  [SMALL_STATE(104)] = 7576,
  [SMALL_STATE(105)] = 7668,
  [SMALL_STATE(106)] = 7760,
  [SMALL_STATE(107)] = 7854,
  [SMALL_STATE(108)] = 7946,
  [SMALL_STATE(109)] = 8040,
  [SMALL_STATE(110)] = 8132,
  [SMALL_STATE(111)] = 8226,
  [SMALL_STATE(112)] = 8318,
  [SMALL_STATE(113)] = 8412,
  [SMALL_STATE(114)] = 8504,
  [SMALL_STATE(115)] = 8598,
  [SMALL_STATE(116)] = 8690,
  [SMALL_STATE(117)] = 8782,
  [SMALL_STATE(118)] = 8876,
  [SMALL_STATE(119)] = 8968,
  [SMALL_STATE(120)] = 9060,
  [SMALL_STATE(121)] = 9152,
  [SMALL_STATE(122)] = 9246,
  [SMALL_STATE(123)] = 9340,
  [SMALL_STATE(124)] = 9432,
  [SMALL_STATE(125)] = 9524,
  [SMALL_STATE(126)] = 9616,
  [SMALL_STATE(127)] = 9710,
  [SMALL_STATE(128)] = 9802,
  [SMALL_STATE(129)] = 9896,
  [SMALL_STATE(130)] = 9990,
  [SMALL_STATE(131)] = 10084,
  [SMALL_STATE(132)] = 10176,
  [SMALL_STATE(133)] = 10268,
  [SMALL_STATE(134)] = 10362,
  [SMALL_STATE(135)] = 10456,
  [SMALL_STATE(136)] = 10550,
  [SMALL_STATE(137)] = 10639,
  [SMALL_STATE(138)] = 10690,
  [SMALL_STATE(139)] = 10743,
  [SMALL_STATE(140)] = 10832,
  [SMALL_STATE(141)] = 10879,
  [SMALL_STATE(142)] = 10968,
  [SMALL_STATE(143)] = 11057,
  [SMALL_STATE(144)] = 11108,
  [SMALL_STATE(145)] = 11197,
  [SMALL_STATE(146)] = 11286,
  [SMALL_STATE(147)] = 11375,
  [SMALL_STATE(148)] = 11464,
  [SMALL_STATE(149)] = 11553,
  [SMALL_STATE(150)] = 11642,
  [SMALL_STATE(151)] = 11710,
  [SMALL_STATE(152)] = 11796,
  [SMALL_STATE(153)] = 11882,
  [SMALL_STATE(154)] = 11968,
  [SMALL_STATE(155)] = 12016,
  [SMALL_STATE(156)] = 12064,
  [SMALL_STATE(157)] = 12150,
  [SMALL_STATE(158)] = 12236,
  [SMALL_STATE(159)] = 12322,
  [SMALL_STATE(160)] = 12408,
  [SMALL_STATE(161)] = 12494,
  [SMALL_STATE(162)] = 12580,
  [SMALL_STATE(163)] = 12626,
  [SMALL_STATE(164)] = 12712,
  [SMALL_STATE(165)] = 12798,
  [SMALL_STATE(166)] = 12884,
  [SMALL_STATE(167)] = 12954,
  [SMALL_STATE(168)] = 13040,
  [SMALL_STATE(169)] = 13126,
  [SMALL_STATE(170)] = 13212,
  [SMALL_STATE(171)] = 13298,
  [SMALL_STATE(172)] = 13384,
  [SMALL_STATE(173)] = 13470,
  [SMALL_STATE(174)] = 13516,
  [SMALL_STATE(175)] = 13602,
  [SMALL_STATE(176)] = 13688,
  [SMALL_STATE(177)] = 13774,
  [SMALL_STATE(178)] = 13860,
  [SMALL_STATE(179)] = 13930,
  [SMALL_STATE(180)] = 13976,
  [SMALL_STATE(181)] = 14022,
  [SMALL_STATE(182)] = 14108,
  [SMALL_STATE(183)] = 14158,
  [SMALL_STATE(184)] = 14244,
  [SMALL_STATE(185)] = 14330,
  [SMALL_STATE(186)] = 14380,
  [SMALL_STATE(187)] = 14466,
  [SMALL_STATE(188)] = 14512,
  [SMALL_STATE(189)] = 14598,
  [SMALL_STATE(190)] = 14684,
  [SMALL_STATE(191)] = 14770,
  [SMALL_STATE(192)] = 14856,
  [SMALL_STATE(193)] = 14902,
  [SMALL_STATE(194)] = 14945,
  [SMALL_STATE(195)] = 14988,
  [SMALL_STATE(196)] = 15033,
  [SMALL_STATE(197)] = 15076,
  [SMALL_STATE(198)] = 15141,
  [SMALL_STATE(199)] = 15188,
  [SMALL_STATE(200)] = 15233,
  [SMALL_STATE(201)] = 15276,
  [SMALL_STATE(202)] = 15319,
  [SMALL_STATE(203)] = 15363,
  [SMALL_STATE(204)] = 15433,
  [SMALL_STATE(205)] = 15503,
  [SMALL_STATE(206)] = 15547,
  [SMALL_STATE(207)] = 15589,
  [SMALL_STATE(208)] = 15631,
  [SMALL_STATE(209)] = 15673,
  [SMALL_STATE(210)] = 15718,
  [SMALL_STATE(211)] = 15761,
  [SMALL_STATE(212)] = 15806,
  [SMALL_STATE(213)] = 15849,
  [SMALL_STATE(214)] = 15894,
  [SMALL_STATE(215)] = 15936,
  [SMALL_STATE(216)] = 15978,
  [SMALL_STATE(217)] = 16020,
  [SMALL_STATE(218)] = 16062,
  [SMALL_STATE(219)] = 16102,
  [SMALL_STATE(220)] = 16142,
  [SMALL_STATE(221)] = 16184,
  [SMALL_STATE(222)] = 16230,
  [SMALL_STATE(223)] = 16270,
  [SMALL_STATE(224)] = 16309,
  [SMALL_STATE(225)] = 16348,
  [SMALL_STATE(226)] = 16387,
  [SMALL_STATE(227)] = 16426,
  [SMALL_STATE(228)] = 16465,
  [SMALL_STATE(229)] = 16504,
  [SMALL_STATE(230)] = 16543,
  [SMALL_STATE(231)] = 16582,
  [SMALL_STATE(232)] = 16621,
  [SMALL_STATE(233)] = 16660,
  [SMALL_STATE(234)] = 16701,
  [SMALL_STATE(235)] = 16740,
  [SMALL_STATE(236)] = 16779,
  [SMALL_STATE(237)] = 16818,
  [SMALL_STATE(238)] = 16857,
  [SMALL_STATE(239)] = 16896,
  [SMALL_STATE(240)] = 16935,
  [SMALL_STATE(241)] = 16974,
  [SMALL_STATE(242)] = 17013,
  [SMALL_STATE(243)] = 17052,
  [SMALL_STATE(244)] = 17090,
  [SMALL_STATE(245)] = 17128,
  [SMALL_STATE(246)] = 17166,
  [SMALL_STATE(247)] = 17209,
  [SMALL_STATE(248)] = 17252,
  [SMALL_STATE(249)] = 17296,
  [SMALL_STATE(250)] = 17328,
  [SMALL_STATE(251)] = 17372,
  [SMALL_STATE(252)] = 17404,
  [SMALL_STATE(253)] = 17439,
  [SMALL_STATE(254)] = 17474,
  [SMALL_STATE(255)] = 17509,
  [SMALL_STATE(256)] = 17544,
  [SMALL_STATE(257)] = 17579,
  [SMALL_STATE(258)] = 17614,
  [SMALL_STATE(259)] = 17657,
  [SMALL_STATE(260)] = 17700,
  [SMALL_STATE(261)] = 17741,
  [SMALL_STATE(262)] = 17787,
  [SMALL_STATE(263)] = 17825,
  [SMALL_STATE(264)] = 17863,
  [SMALL_STATE(265)] = 17906,
  [SMALL_STATE(266)] = 17949,
  [SMALL_STATE(267)] = 17980,
  [SMALL_STATE(268)] = 18013,
  [SMALL_STATE(269)] = 18046,
  [SMALL_STATE(270)] = 18077,
  [SMALL_STATE(271)] = 18120,
  [SMALL_STATE(272)] = 18148,
  [SMALL_STATE(273)] = 18186,
  [SMALL_STATE(274)] = 18216,
  [SMALL_STATE(275)] = 18244,
  [SMALL_STATE(276)] = 18294,
  [SMALL_STATE(277)] = 18328,
  [SMALL_STATE(278)] = 18356,
  [SMALL_STATE(279)] = 18390,
  [SMALL_STATE(280)] = 18428,
  [SMALL_STATE(281)] = 18476,
  [SMALL_STATE(282)] = 18510,
  [SMALL_STATE(283)] = 18544,
  [SMALL_STATE(284)] = 18572,
  [SMALL_STATE(285)] = 18606,
  [SMALL_STATE(286)] = 18642,
  [SMALL_STATE(287)] = 18669,
  [SMALL_STATE(288)] = 18696,
  [SMALL_STATE(289)] = 18727,
  [SMALL_STATE(290)] = 18758,
  [SMALL_STATE(291)] = 18789,
  [SMALL_STATE(292)] = 18820,
  [SMALL_STATE(293)] = 18853,
  [SMALL_STATE(294)] = 18884,
  [SMALL_STATE(295)] = 18917,
  [SMALL_STATE(296)] = 18952,
  [SMALL_STATE(297)] = 18983,
  [SMALL_STATE(298)] = 19014,
  [SMALL_STATE(299)] = 19041,
  [SMALL_STATE(300)] = 19070,
  [SMALL_STATE(301)] = 19114,
  [SMALL_STATE(302)] = 19144,
  [SMALL_STATE(303)] = 19172,
  [SMALL_STATE(304)] = 19196,
  [SMALL_STATE(305)] = 19240,
  [SMALL_STATE(306)] = 19284,
  [SMALL_STATE(307)] = 19328,
  [SMALL_STATE(308)] = 19360,
  [SMALL_STATE(309)] = 19389,
  [SMALL_STATE(310)] = 19418,
  [SMALL_STATE(311)] = 19447,
  [SMALL_STATE(312)] = 19488,
  [SMALL_STATE(313)] = 19517,
  [SMALL_STATE(314)] = 19546,
  [SMALL_STATE(315)] = 19575,
  [SMALL_STATE(316)] = 19604,
  [SMALL_STATE(317)] = 19633,
  [SMALL_STATE(318)] = 19671,
  [SMALL_STATE(319)] = 19693,
  [SMALL_STATE(320)] = 19715,
  [SMALL_STATE(321)] = 19743,
  [SMALL_STATE(322)] = 19765,
  [SMALL_STATE(323)] = 19803,
  [SMALL_STATE(324)] = 19841,
  [SMALL_STATE(325)] = 19863,
  [SMALL_STATE(326)] = 19901,
  [SMALL_STATE(327)] = 19941,
  [SMALL_STATE(328)] = 19979,
  [SMALL_STATE(329)] = 20017,
  [SMALL_STATE(330)] = 20039,
  [SMALL_STATE(331)] = 20074,
  [SMALL_STATE(332)] = 20097,
  [SMALL_STATE(333)] = 20124,
  [SMALL_STATE(334)] = 20149,
  [SMALL_STATE(335)] = 20169,
  [SMALL_STATE(336)] = 20189,
  [SMALL_STATE(337)] = 20223,
  [SMALL_STATE(338)] = 20245,
  [SMALL_STATE(339)] = 20265,
  [SMALL_STATE(340)] = 20289,
  [SMALL_STATE(341)] = 20313,
  [SMALL_STATE(342)] = 20333,
  [SMALL_STATE(343)] = 20355,
  [SMALL_STATE(344)] = 20377,
  [SMALL_STATE(345)] = 20397,
  [SMALL_STATE(346)] = 20419,
  [SMALL_STATE(347)] = 20443,
  [SMALL_STATE(348)] = 20467,
  [SMALL_STATE(349)] = 20487,
  [SMALL_STATE(350)] = 20509,
  [SMALL_STATE(351)] = 20528,
  [SMALL_STATE(352)] = 20547,
  [SMALL_STATE(353)] = 20566,
  [SMALL_STATE(354)] = 20597,
  [SMALL_STATE(355)] = 20616,
  [SMALL_STATE(356)] = 20647,
  [SMALL_STATE(357)] = 20666,
  [SMALL_STATE(358)] = 20687,
  [SMALL_STATE(359)] = 20710,
  [SMALL_STATE(360)] = 20733,
  [SMALL_STATE(361)] = 20752,
  [SMALL_STATE(362)] = 20771,
  [SMALL_STATE(363)] = 20790,
  [SMALL_STATE(364)] = 20819,
  [SMALL_STATE(365)] = 20848,
  [SMALL_STATE(366)] = 20877,
  [SMALL_STATE(367)] = 20896,
  [SMALL_STATE(368)] = 20915,
  [SMALL_STATE(369)] = 20934,
  [SMALL_STATE(370)] = 20953,
  [SMALL_STATE(371)] = 20974,
  [SMALL_STATE(372)] = 20993,
  [SMALL_STATE(373)] = 21012,
  [SMALL_STATE(374)] = 21035,
  [SMALL_STATE(375)] = 21064,
  [SMALL_STATE(376)] = 21093,
  [SMALL_STATE(377)] = 21124,
  [SMALL_STATE(378)] = 21143,
  [SMALL_STATE(379)] = 21170,
  [SMALL_STATE(380)] = 21192,
  [SMALL_STATE(381)] = 21220,
  [SMALL_STATE(382)] = 21248,
  [SMALL_STATE(383)] = 21276,
  [SMALL_STATE(384)] = 21294,
  [SMALL_STATE(385)] = 21322,
  [SMALL_STATE(386)] = 21350,
  [SMALL_STATE(387)] = 21378,
  [SMALL_STATE(388)] = 21406,
  [SMALL_STATE(389)] = 21424,
  [SMALL_STATE(390)] = 21452,
  [SMALL_STATE(391)] = 21478,
  [SMALL_STATE(392)] = 21506,
  [SMALL_STATE(393)] = 21534,
  [SMALL_STATE(394)] = 21562,
  [SMALL_STATE(395)] = 21582,
  [SMALL_STATE(396)] = 21608,
  [SMALL_STATE(397)] = 21636,
  [SMALL_STATE(398)] = 21664,
  [SMALL_STATE(399)] = 21692,
  [SMALL_STATE(400)] = 21720,
  [SMALL_STATE(401)] = 21748,
  [SMALL_STATE(402)] = 21768,
  [SMALL_STATE(403)] = 21786,
  [SMALL_STATE(404)] = 21811,
  [SMALL_STATE(405)] = 21828,
  [SMALL_STATE(406)] = 21845,
  [SMALL_STATE(407)] = 21870,
  [SMALL_STATE(408)] = 21889,
  [SMALL_STATE(409)] = 21908,
  [SMALL_STATE(410)] = 21927,
  [SMALL_STATE(411)] = 21944,
  [SMALL_STATE(412)] = 21969,
  [SMALL_STATE(413)] = 21988,
  [SMALL_STATE(414)] = 22013,
  [SMALL_STATE(415)] = 22038,
  [SMALL_STATE(416)] = 22063,
  [SMALL_STATE(417)] = 22084,
  [SMALL_STATE(418)] = 22105,
  [SMALL_STATE(419)] = 22126,
  [SMALL_STATE(420)] = 22147,
  [SMALL_STATE(421)] = 22164,
  [SMALL_STATE(422)] = 22189,
  [SMALL_STATE(423)] = 22206,
  [SMALL_STATE(424)] = 22223,
  [SMALL_STATE(425)] = 22242,
  [SMALL_STATE(426)] = 22259,
  [SMALL_STATE(427)] = 22282,
  [SMALL_STATE(428)] = 22307,
  [SMALL_STATE(429)] = 22324,
  [SMALL_STATE(430)] = 22341,
  [SMALL_STATE(431)] = 22358,
  [SMALL_STATE(432)] = 22376,
  [SMALL_STATE(433)] = 22394,
  [SMALL_STATE(434)] = 22410,
  [SMALL_STATE(435)] = 22428,
  [SMALL_STATE(436)] = 22448,
  [SMALL_STATE(437)] = 22468,
  [SMALL_STATE(438)] = 22490,
  [SMALL_STATE(439)] = 22510,
  [SMALL_STATE(440)] = 22532,
  [SMALL_STATE(441)] = 22554,
  [SMALL_STATE(442)] = 22572,
  [SMALL_STATE(443)] = 22592,
  [SMALL_STATE(444)] = 22610,
  [SMALL_STATE(445)] = 22626,
  [SMALL_STATE(446)] = 22644,
  [SMALL_STATE(447)] = 22660,
  [SMALL_STATE(448)] = 22678,
  [SMALL_STATE(449)] = 22700,
  [SMALL_STATE(450)] = 22718,
  [SMALL_STATE(451)] = 22736,
  [SMALL_STATE(452)] = 22752,
  [SMALL_STATE(453)] = 22774,
  [SMALL_STATE(454)] = 22796,
  [SMALL_STATE(455)] = 22814,
  [SMALL_STATE(456)] = 22836,
  [SMALL_STATE(457)] = 22856,
  [SMALL_STATE(458)] = 22878,
  [SMALL_STATE(459)] = 22894,
  [SMALL_STATE(460)] = 22916,
  [SMALL_STATE(461)] = 22934,
  [SMALL_STATE(462)] = 22954,
  [SMALL_STATE(463)] = 22972,
  [SMALL_STATE(464)] = 22990,
  [SMALL_STATE(465)] = 23012,
  [SMALL_STATE(466)] = 23032,
  [SMALL_STATE(467)] = 23050,
  [SMALL_STATE(468)] = 23068,
  [SMALL_STATE(469)] = 23088,
  [SMALL_STATE(470)] = 23106,
  [SMALL_STATE(471)] = 23122,
  [SMALL_STATE(472)] = 23138,
  [SMALL_STATE(473)] = 23156,
  [SMALL_STATE(474)] = 23174,
  [SMALL_STATE(475)] = 23192,
  [SMALL_STATE(476)] = 23212,
  [SMALL_STATE(477)] = 23230,
  [SMALL_STATE(478)] = 23250,
  [SMALL_STATE(479)] = 23272,
  [SMALL_STATE(480)] = 23290,
  [SMALL_STATE(481)] = 23308,
  [SMALL_STATE(482)] = 23326,
  [SMALL_STATE(483)] = 23348,
  [SMALL_STATE(484)] = 23365,
  [SMALL_STATE(485)] = 23384,
  [SMALL_STATE(486)] = 23403,
  [SMALL_STATE(487)] = 23422,
  [SMALL_STATE(488)] = 23441,
  [SMALL_STATE(489)] = 23456,
  [SMALL_STATE(490)] = 23475,
  [SMALL_STATE(491)] = 23494,
  [SMALL_STATE(492)] = 23509,
  [SMALL_STATE(493)] = 23524,
  [SMALL_STATE(494)] = 23541,
  [SMALL_STATE(495)] = 23558,
  [SMALL_STATE(496)] = 23573,
  [SMALL_STATE(497)] = 23588,
  [SMALL_STATE(498)] = 23607,
  [SMALL_STATE(499)] = 23626,
  [SMALL_STATE(500)] = 23645,
  [SMALL_STATE(501)] = 23664,
  [SMALL_STATE(502)] = 23681,
  [SMALL_STATE(503)] = 23700,
  [SMALL_STATE(504)] = 23719,
  [SMALL_STATE(505)] = 23734,
  [SMALL_STATE(506)] = 23749,
  [SMALL_STATE(507)] = 23768,
  [SMALL_STATE(508)] = 23787,
  [SMALL_STATE(509)] = 23804,
  [SMALL_STATE(510)] = 23823,
  [SMALL_STATE(511)] = 23838,
  [SMALL_STATE(512)] = 23857,
  [SMALL_STATE(513)] = 23876,
  [SMALL_STATE(514)] = 23895,
  [SMALL_STATE(515)] = 23910,
  [SMALL_STATE(516)] = 23929,
  [SMALL_STATE(517)] = 23948,
  [SMALL_STATE(518)] = 23965,
  [SMALL_STATE(519)] = 23982,
  [SMALL_STATE(520)] = 23999,
  [SMALL_STATE(521)] = 24018,
  [SMALL_STATE(522)] = 24037,
  [SMALL_STATE(523)] = 24056,
  [SMALL_STATE(524)] = 24075,
  [SMALL_STATE(525)] = 24092,
  [SMALL_STATE(526)] = 24109,
  [SMALL_STATE(527)] = 24128,
  [SMALL_STATE(528)] = 24143,
  [SMALL_STATE(529)] = 24158,
  [SMALL_STATE(530)] = 24177,
  [SMALL_STATE(531)] = 24192,
  [SMALL_STATE(532)] = 24211,
  [SMALL_STATE(533)] = 24228,
  [SMALL_STATE(534)] = 24247,
  [SMALL_STATE(535)] = 24266,
  [SMALL_STATE(536)] = 24281,
  [SMALL_STATE(537)] = 24298,
  [SMALL_STATE(538)] = 24317,
  [SMALL_STATE(539)] = 24334,
  [SMALL_STATE(540)] = 24349,
  [SMALL_STATE(541)] = 24366,
  [SMALL_STATE(542)] = 24383,
  [SMALL_STATE(543)] = 24400,
  [SMALL_STATE(544)] = 24417,
  [SMALL_STATE(545)] = 24434,
  [SMALL_STATE(546)] = 24451,
  [SMALL_STATE(547)] = 24470,
  [SMALL_STATE(548)] = 24487,
  [SMALL_STATE(549)] = 24506,
  [SMALL_STATE(550)] = 24523,
  [SMALL_STATE(551)] = 24540,
  [SMALL_STATE(552)] = 24557,
  [SMALL_STATE(553)] = 24574,
  [SMALL_STATE(554)] = 24593,
  [SMALL_STATE(555)] = 24608,
  [SMALL_STATE(556)] = 24627,
  [SMALL_STATE(557)] = 24646,
  [SMALL_STATE(558)] = 24663,
  [SMALL_STATE(559)] = 24682,
  [SMALL_STATE(560)] = 24699,
  [SMALL_STATE(561)] = 24718,
  [SMALL_STATE(562)] = 24737,
  [SMALL_STATE(563)] = 24756,
  [SMALL_STATE(564)] = 24773,
  [SMALL_STATE(565)] = 24792,
  [SMALL_STATE(566)] = 24811,
  [SMALL_STATE(567)] = 24830,
  [SMALL_STATE(568)] = 24845,
  [SMALL_STATE(569)] = 24864,
  [SMALL_STATE(570)] = 24879,
  [SMALL_STATE(571)] = 24896,
  [SMALL_STATE(572)] = 24915,
  [SMALL_STATE(573)] = 24930,
  [SMALL_STATE(574)] = 24949,
  [SMALL_STATE(575)] = 24966,
  [SMALL_STATE(576)] = 24985,
  [SMALL_STATE(577)] = 25000,
  [SMALL_STATE(578)] = 25019,
  [SMALL_STATE(579)] = 25038,
  [SMALL_STATE(580)] = 25057,
  [SMALL_STATE(581)] = 25076,
  [SMALL_STATE(582)] = 25091,
  [SMALL_STATE(583)] = 25108,
  [SMALL_STATE(584)] = 25123,
  [SMALL_STATE(585)] = 25142,
  [SMALL_STATE(586)] = 25159,
  [SMALL_STATE(587)] = 25176,
  [SMALL_STATE(588)] = 25195,
  [SMALL_STATE(589)] = 25214,
  [SMALL_STATE(590)] = 25231,
  [SMALL_STATE(591)] = 25250,
  [SMALL_STATE(592)] = 25266,
  [SMALL_STATE(593)] = 25282,
  [SMALL_STATE(594)] = 25298,
  [SMALL_STATE(595)] = 25314,
  [SMALL_STATE(596)] = 25330,
  [SMALL_STATE(597)] = 25346,
  [SMALL_STATE(598)] = 25362,
  [SMALL_STATE(599)] = 25376,
  [SMALL_STATE(600)] = 25392,
  [SMALL_STATE(601)] = 25408,
  [SMALL_STATE(602)] = 25424,
  [SMALL_STATE(603)] = 25440,
  [SMALL_STATE(604)] = 25456,
  [SMALL_STATE(605)] = 25472,
  [SMALL_STATE(606)] = 25488,
  [SMALL_STATE(607)] = 25504,
  [SMALL_STATE(608)] = 25518,
  [SMALL_STATE(609)] = 25532,
  [SMALL_STATE(610)] = 25548,
  [SMALL_STATE(611)] = 25562,
  [SMALL_STATE(612)] = 25576,
  [SMALL_STATE(613)] = 25592,
  [SMALL_STATE(614)] = 25608,
  [SMALL_STATE(615)] = 25624,
  [SMALL_STATE(616)] = 25640,
  [SMALL_STATE(617)] = 25654,
  [SMALL_STATE(618)] = 25670,
  [SMALL_STATE(619)] = 25684,
  [SMALL_STATE(620)] = 25698,
  [SMALL_STATE(621)] = 25714,
  [SMALL_STATE(622)] = 25730,
  [SMALL_STATE(623)] = 25746,
  [SMALL_STATE(624)] = 25762,
  [SMALL_STATE(625)] = 25776,
  [SMALL_STATE(626)] = 25790,
  [SMALL_STATE(627)] = 25804,
  [SMALL_STATE(628)] = 25820,
  [SMALL_STATE(629)] = 25834,
  [SMALL_STATE(630)] = 25848,
  [SMALL_STATE(631)] = 25862,
  [SMALL_STATE(632)] = 25878,
  [SMALL_STATE(633)] = 25892,
  [SMALL_STATE(634)] = 25908,
  [SMALL_STATE(635)] = 25922,
  [SMALL_STATE(636)] = 25936,
  [SMALL_STATE(637)] = 25952,
  [SMALL_STATE(638)] = 25966,
  [SMALL_STATE(639)] = 25982,
  [SMALL_STATE(640)] = 25998,
  [SMALL_STATE(641)] = 26012,
  [SMALL_STATE(642)] = 26026,
  [SMALL_STATE(643)] = 26042,
  [SMALL_STATE(644)] = 26056,
  [SMALL_STATE(645)] = 26070,
  [SMALL_STATE(646)] = 26084,
  [SMALL_STATE(647)] = 26098,
  [SMALL_STATE(648)] = 26114,
  [SMALL_STATE(649)] = 26128,
  [SMALL_STATE(650)] = 26142,
  [SMALL_STATE(651)] = 26156,
  [SMALL_STATE(652)] = 26172,
  [SMALL_STATE(653)] = 26186,
  [SMALL_STATE(654)] = 26202,
  [SMALL_STATE(655)] = 26218,
  [SMALL_STATE(656)] = 26232,
  [SMALL_STATE(657)] = 26245,
  [SMALL_STATE(658)] = 26258,
  [SMALL_STATE(659)] = 26271,
  [SMALL_STATE(660)] = 26284,
  [SMALL_STATE(661)] = 26297,
  [SMALL_STATE(662)] = 26310,
  [SMALL_STATE(663)] = 26323,
  [SMALL_STATE(664)] = 26336,
  [SMALL_STATE(665)] = 26349,
  [SMALL_STATE(666)] = 26362,
  [SMALL_STATE(667)] = 26375,
  [SMALL_STATE(668)] = 26388,
  [SMALL_STATE(669)] = 26401,
  [SMALL_STATE(670)] = 26414,
  [SMALL_STATE(671)] = 26427,
  [SMALL_STATE(672)] = 26440,
  [SMALL_STATE(673)] = 26453,
  [SMALL_STATE(674)] = 26466,
  [SMALL_STATE(675)] = 26479,
  [SMALL_STATE(676)] = 26492,
  [SMALL_STATE(677)] = 26505,
  [SMALL_STATE(678)] = 26518,
  [SMALL_STATE(679)] = 26531,
  [SMALL_STATE(680)] = 26544,
  [SMALL_STATE(681)] = 26557,
  [SMALL_STATE(682)] = 26570,
  [SMALL_STATE(683)] = 26583,
  [SMALL_STATE(684)] = 26596,
  [SMALL_STATE(685)] = 26609,
  [SMALL_STATE(686)] = 26622,
  [SMALL_STATE(687)] = 26635,
  [SMALL_STATE(688)] = 26648,
  [SMALL_STATE(689)] = 26661,
  [SMALL_STATE(690)] = 26674,
  [SMALL_STATE(691)] = 26687,
  [SMALL_STATE(692)] = 26700,
  [SMALL_STATE(693)] = 26713,
  [SMALL_STATE(694)] = 26726,
  [SMALL_STATE(695)] = 26739,
  [SMALL_STATE(696)] = 26752,
  [SMALL_STATE(697)] = 26765,
  [SMALL_STATE(698)] = 26778,
  [SMALL_STATE(699)] = 26791,
  [SMALL_STATE(700)] = 26804,
  [SMALL_STATE(701)] = 26817,
  [SMALL_STATE(702)] = 26830,
  [SMALL_STATE(703)] = 26843,
  [SMALL_STATE(704)] = 26856,
  [SMALL_STATE(705)] = 26869,
  [SMALL_STATE(706)] = 26882,
  [SMALL_STATE(707)] = 26895,
  [SMALL_STATE(708)] = 26908,
  [SMALL_STATE(709)] = 26921,
  [SMALL_STATE(710)] = 26934,
  [SMALL_STATE(711)] = 26947,
  [SMALL_STATE(712)] = 26960,
  [SMALL_STATE(713)] = 26973,
  [SMALL_STATE(714)] = 26986,
  [SMALL_STATE(715)] = 26999,
  [SMALL_STATE(716)] = 27012,
  [SMALL_STATE(717)] = 27025,
  [SMALL_STATE(718)] = 27038,
  [SMALL_STATE(719)] = 27051,
  [SMALL_STATE(720)] = 27064,
  [SMALL_STATE(721)] = 27077,
  [SMALL_STATE(722)] = 27090,
  [SMALL_STATE(723)] = 27103,
  [SMALL_STATE(724)] = 27116,
  [SMALL_STATE(725)] = 27129,
  [SMALL_STATE(726)] = 27142,
  [SMALL_STATE(727)] = 27155,
  [SMALL_STATE(728)] = 27168,
  [SMALL_STATE(729)] = 27181,
  [SMALL_STATE(730)] = 27194,
  [SMALL_STATE(731)] = 27207,
  [SMALL_STATE(732)] = 27220,
  [SMALL_STATE(733)] = 27233,
  [SMALL_STATE(734)] = 27246,
  [SMALL_STATE(735)] = 27259,
  [SMALL_STATE(736)] = 27272,
  [SMALL_STATE(737)] = 27285,
  [SMALL_STATE(738)] = 27298,
  [SMALL_STATE(739)] = 27311,
  [SMALL_STATE(740)] = 27324,
  [SMALL_STATE(741)] = 27337,
  [SMALL_STATE(742)] = 27350,
  [SMALL_STATE(743)] = 27363,
  [SMALL_STATE(744)] = 27376,
  [SMALL_STATE(745)] = 27389,
  [SMALL_STATE(746)] = 27402,
  [SMALL_STATE(747)] = 27415,
  [SMALL_STATE(748)] = 27428,
  [SMALL_STATE(749)] = 27441,
  [SMALL_STATE(750)] = 27454,
  [SMALL_STATE(751)] = 27467,
  [SMALL_STATE(752)] = 27480,
  [SMALL_STATE(753)] = 27493,
  [SMALL_STATE(754)] = 27506,
  [SMALL_STATE(755)] = 27519,
  [SMALL_STATE(756)] = 27532,
  [SMALL_STATE(757)] = 27545,
  [SMALL_STATE(758)] = 27558,
  [SMALL_STATE(759)] = 27571,
  [SMALL_STATE(760)] = 27584,
  [SMALL_STATE(761)] = 27597,
  [SMALL_STATE(762)] = 27610,
  [SMALL_STATE(763)] = 27623,
  [SMALL_STATE(764)] = 27636,
  [SMALL_STATE(765)] = 27649,
  [SMALL_STATE(766)] = 27662,
  [SMALL_STATE(767)] = 27675,
  [SMALL_STATE(768)] = 27688,
  [SMALL_STATE(769)] = 27701,
  [SMALL_STATE(770)] = 27714,
  [SMALL_STATE(771)] = 27727,
  [SMALL_STATE(772)] = 27740,
  [SMALL_STATE(773)] = 27753,
  [SMALL_STATE(774)] = 27766,
  [SMALL_STATE(775)] = 27779,
  [SMALL_STATE(776)] = 27792,
  [SMALL_STATE(777)] = 27805,
  [SMALL_STATE(778)] = 27818,
  [SMALL_STATE(779)] = 27831,
  [SMALL_STATE(780)] = 27844,
  [SMALL_STATE(781)] = 27857,
  [SMALL_STATE(782)] = 27870,
  [SMALL_STATE(783)] = 27883,
  [SMALL_STATE(784)] = 27896,
  [SMALL_STATE(785)] = 27909,
  [SMALL_STATE(786)] = 27922,
  [SMALL_STATE(787)] = 27935,
  [SMALL_STATE(788)] = 27948,
  [SMALL_STATE(789)] = 27961,
  [SMALL_STATE(790)] = 27974,
  [SMALL_STATE(791)] = 27987,
  [SMALL_STATE(792)] = 28000,
  [SMALL_STATE(793)] = 28013,
  [SMALL_STATE(794)] = 28026,
  [SMALL_STATE(795)] = 28039,
  [SMALL_STATE(796)] = 28052,
  [SMALL_STATE(797)] = 28065,
  [SMALL_STATE(798)] = 28078,
  [SMALL_STATE(799)] = 28091,
  [SMALL_STATE(800)] = 28104,
  [SMALL_STATE(801)] = 28117,
  [SMALL_STATE(802)] = 28130,
  [SMALL_STATE(803)] = 28143,
  [SMALL_STATE(804)] = 28156,
  [SMALL_STATE(805)] = 28169,
  [SMALL_STATE(806)] = 28182,
  [SMALL_STATE(807)] = 28195,
  [SMALL_STATE(808)] = 28208,
  [SMALL_STATE(809)] = 28221,
  [SMALL_STATE(810)] = 28234,
  [SMALL_STATE(811)] = 28247,
  [SMALL_STATE(812)] = 28260,
  [SMALL_STATE(813)] = 28273,
  [SMALL_STATE(814)] = 28286,
  [SMALL_STATE(815)] = 28299,
  [SMALL_STATE(816)] = 28312,
  [SMALL_STATE(817)] = 28325,
  [SMALL_STATE(818)] = 28338,
  [SMALL_STATE(819)] = 28351,
  [SMALL_STATE(820)] = 28364,
  [SMALL_STATE(821)] = 28377,
  [SMALL_STATE(822)] = 28390,
  [SMALL_STATE(823)] = 28403,
  [SMALL_STATE(824)] = 28416,
  [SMALL_STATE(825)] = 28429,
  [SMALL_STATE(826)] = 28442,
  [SMALL_STATE(827)] = 28455,
  [SMALL_STATE(828)] = 28468,
  [SMALL_STATE(829)] = 28481,
  [SMALL_STATE(830)] = 28494,
  [SMALL_STATE(831)] = 28507,
  [SMALL_STATE(832)] = 28520,
  [SMALL_STATE(833)] = 28533,
  [SMALL_STATE(834)] = 28546,
  [SMALL_STATE(835)] = 28559,
  [SMALL_STATE(836)] = 28572,
  [SMALL_STATE(837)] = 28585,
  [SMALL_STATE(838)] = 28598,
  [SMALL_STATE(839)] = 28611,
  [SMALL_STATE(840)] = 28624,
  [SMALL_STATE(841)] = 28637,
  [SMALL_STATE(842)] = 28650,
  [SMALL_STATE(843)] = 28663,
  [SMALL_STATE(844)] = 28676,
  [SMALL_STATE(845)] = 28689,
  [SMALL_STATE(846)] = 28702,
  [SMALL_STATE(847)] = 28715,
  [SMALL_STATE(848)] = 28728,
  [SMALL_STATE(849)] = 28741,
  [SMALL_STATE(850)] = 28754,
  [SMALL_STATE(851)] = 28767,
  [SMALL_STATE(852)] = 28780,
  [SMALL_STATE(853)] = 28793,
  [SMALL_STATE(854)] = 28806,
  [SMALL_STATE(855)] = 28819,
  [SMALL_STATE(856)] = 28832,
  [SMALL_STATE(857)] = 28845,
  [SMALL_STATE(858)] = 28858,
  [SMALL_STATE(859)] = 28871,
  [SMALL_STATE(860)] = 28884,
  [SMALL_STATE(861)] = 28897,
  [SMALL_STATE(862)] = 28910,
  [SMALL_STATE(863)] = 28923,
  [SMALL_STATE(864)] = 28936,
  [SMALL_STATE(865)] = 28949,
  [SMALL_STATE(866)] = 28962,
  [SMALL_STATE(867)] = 28975,
  [SMALL_STATE(868)] = 28988,
  [SMALL_STATE(869)] = 29001,
  [SMALL_STATE(870)] = 29014,
  [SMALL_STATE(871)] = 29027,
  [SMALL_STATE(872)] = 29040,
  [SMALL_STATE(873)] = 29053,
  [SMALL_STATE(874)] = 29066,
  [SMALL_STATE(875)] = 29079,
  [SMALL_STATE(876)] = 29092,
  [SMALL_STATE(877)] = 29105,
  [SMALL_STATE(878)] = 29118,
  [SMALL_STATE(879)] = 29131,
  [SMALL_STATE(880)] = 29144,
  [SMALL_STATE(881)] = 29157,
  [SMALL_STATE(882)] = 29170,
  [SMALL_STATE(883)] = 29183,
  [SMALL_STATE(884)] = 29196,
  [SMALL_STATE(885)] = 29200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(121),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(125),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(126),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(374),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(837),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(496),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(833),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(467),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(831),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(830),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(829),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(828),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(825),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(822),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(657),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(816),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(118),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(445),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(421),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(673),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(876),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(656),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(50),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(841),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmt, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(835),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(882),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(881),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(222),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(496),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(445),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(302),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(284),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(757),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(93),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(783),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(784),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(580),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(515),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(883),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(103),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(330),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(79),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(97),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(175),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(884),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(151),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(129),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(491),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(265),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(288),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(718),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(148),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(390),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(448),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(262),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(692),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(668),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(616),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(619),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(700),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(457),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(261),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(725),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(475),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(278),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_param, 4),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_stmt, 1),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1915] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
