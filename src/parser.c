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
#define STATE_COUNT 881
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 260
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
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
  sym_spacing_line = 130,
  sym_comment_contents = 131,
  anon_sym_SLASH_STAR = 132,
  anon_sym_STAR_SLASH = 133,
  sym_line_comment = 134,
  sym_gsql = 135,
  sym__definition = 136,
  sym_create_query = 137,
  sym_interpret_query = 138,
  sym_parameter_list = 139,
  sym_query_params = 140,
  sym_query_param = 141,
  sym_set_param = 142,
  sym_query_body = 143,
  sym_typedef = 144,
  sym_tuple_fields = 145,
  sym_tuple_field = 146,
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
  sym__numeric = 217,
  sym_integer = 218,
  sym_real = 219,
  sym_string_literal = 220,
  sym_math_operator = 221,
  sym_comparison_operator = 222,
  sym_block_comment = 223,
  aux_sym_gsql_repeat1 = 224,
  aux_sym_query_params_repeat1 = 225,
  aux_sym_query_body_repeat1 = 226,
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
  [sym_spacing_line] = "spacing_line",
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
  [sym__numeric] = "_numeric",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_string_literal] = "string_literal",
  [sym_math_operator] = "math_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_block_comment] = "block_comment",
  [aux_sym_gsql_repeat1] = "gsql_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_query_body_repeat1] = "query_body_repeat1",
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
  [sym_spacing_line] = sym_spacing_line,
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
  [sym__numeric] = sym__numeric,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_string_literal] = sym_string_literal,
  [sym_math_operator] = sym_math_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_gsql_repeat1] = aux_sym_gsql_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_query_body_repeat1] = aux_sym_query_body_repeat1,
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
  [sym_spacing_line] = {
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
  [sym__numeric] = {
    .visible = false,
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
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 29,
  [44] = 44,
  [45] = 32,
  [46] = 46,
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
  [74] = 73,
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
  [89] = 87,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 92,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 99,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 103,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 112,
  [123] = 113,
  [124] = 90,
  [125] = 125,
  [126] = 126,
  [127] = 90,
  [128] = 90,
  [129] = 104,
  [130] = 130,
  [131] = 98,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 73,
  [139] = 139,
  [140] = 133,
  [141] = 135,
  [142] = 142,
  [143] = 18,
  [144] = 132,
  [145] = 139,
  [146] = 20,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 22,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 149,
  [155] = 155,
  [156] = 156,
  [157] = 25,
  [158] = 149,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 21,
  [163] = 163,
  [164] = 160,
  [165] = 23,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 149,
  [172] = 24,
  [173] = 19,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 27,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 168,
  [182] = 182,
  [183] = 26,
  [184] = 184,
  [185] = 168,
  [186] = 186,
  [187] = 187,
  [188] = 168,
  [189] = 17,
  [190] = 134,
  [191] = 30,
  [192] = 192,
  [193] = 32,
  [194] = 29,
  [195] = 28,
  [196] = 31,
  [197] = 136,
  [198] = 33,
  [199] = 35,
  [200] = 200,
  [201] = 200,
  [202] = 36,
  [203] = 34,
  [204] = 204,
  [205] = 27,
  [206] = 40,
  [207] = 39,
  [208] = 38,
  [209] = 41,
  [210] = 29,
  [211] = 32,
  [212] = 44,
  [213] = 48,
  [214] = 134,
  [215] = 42,
  [216] = 136,
  [217] = 46,
  [218] = 47,
  [219] = 60,
  [220] = 66,
  [221] = 63,
  [222] = 153,
  [223] = 64,
  [224] = 49,
  [225] = 50,
  [226] = 55,
  [227] = 59,
  [228] = 57,
  [229] = 52,
  [230] = 67,
  [231] = 62,
  [232] = 51,
  [233] = 58,
  [234] = 61,
  [235] = 53,
  [236] = 54,
  [237] = 65,
  [238] = 56,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 73,
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
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 270,
  [279] = 204,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 136,
  [290] = 290,
  [291] = 286,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 134,
  [296] = 30,
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
  [370] = 351,
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
  [388] = 388,
  [389] = 384,
  [390] = 390,
  [391] = 391,
  [392] = 378,
  [393] = 385,
  [394] = 394,
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
  [410] = 410,
  [411] = 17,
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
  [430] = 262,
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
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 455,
  [470] = 427,
  [471] = 471,
  [472] = 462,
  [473] = 473,
  [474] = 467,
  [475] = 475,
  [476] = 476,
  [477] = 17,
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
  [493] = 69,
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
  [510] = 500,
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
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
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
  [542] = 542,
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
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 508,
  [560] = 503,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 484,
  [567] = 272,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 523,
  [574] = 541,
  [575] = 575,
  [576] = 576,
  [577] = 558,
  [578] = 578,
  [579] = 579,
  [580] = 517,
  [581] = 268,
  [582] = 582,
  [583] = 565,
  [584] = 584,
  [585] = 570,
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
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 601,
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
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 611,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 603,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 636,
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
  [798] = 789,
  [799] = 788,
  [800] = 785,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 723,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 716,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 665,
  [819] = 667,
  [820] = 820,
  [821] = 740,
  [822] = 741,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 767,
  [827] = 827,
  [828] = 828,
  [829] = 817,
  [830] = 816,
  [831] = 831,
  [832] = 780,
  [833] = 743,
  [834] = 721,
  [835] = 827,
  [836] = 836,
  [837] = 691,
  [838] = 668,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 789,
  [844] = 788,
  [845] = 845,
  [846] = 846,
  [847] = 780,
  [848] = 789,
  [849] = 849,
  [850] = 780,
  [851] = 851,
  [852] = 852,
  [853] = 761,
  [854] = 854,
  [855] = 742,
  [856] = 856,
  [857] = 857,
  [858] = 710,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 783,
  [863] = 863,
  [864] = 864,
  [865] = 710,
  [866] = 710,
  [867] = 760,
  [868] = 755,
  [869] = 739,
  [870] = 870,
  [871] = 861,
  [872] = 672,
  [873] = 656,
  [874] = 739,
  [875] = 739,
  [876] = 876,
  [877] = 705,
  [878] = 669,
  [879] = 879,
  [880] = 880,
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
      if (eof) ADVANCE(422);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(853);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(453);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(255);
      if (lookahead == 'H') ADVANCE(366);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'J') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(239);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(245);
      if (lookahead == 'Q') ADVANCE(309);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == 'U') ADVANCE(177);
      if (lookahead == 'V') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(157);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '_') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead == '|') ADVANCE(496);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(862);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(799);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(806);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(807);
      if (lookahead == 'P') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'T') ADVANCE(733);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_name_character_set_1(lookahead)) ADVANCE(834);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(799);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(806);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(807);
      if (lookahead == 'P') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'T') ADVANCE(733);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_name_character_set_1(lookahead)) ADVANCE(834);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(254);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'G') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(254);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'G') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(495);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(799);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(806);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(807);
      if (lookahead == 'P') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (sym_name_character_set_1(lookahead)) ADVANCE(834);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'A') ADVANCE(799);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'G') ADVANCE(806);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(807);
      if (lookahead == 'P') ADVANCE(702);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (sym_name_character_set_1(lookahead)) ADVANCE(834);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(853);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(853);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'C') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'G') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(707);
      if (lookahead == 'S') ADVANCE(641);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'C') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'G') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(707);
      if (lookahead == 'S') ADVANCE(641);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'C') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'G') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'C') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'G') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(692);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'C') ADVANCE(689);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'G') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == 'W') ADVANCE(649);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(843);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(847);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(679);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == '}') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_3(lookahead)) ADVANCE(834);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(235);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'F') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(230);
      if (lookahead == 'J') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'S') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(125);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '|') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'W') ADVANCE(164);
      if (lookahead == '|') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(458);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '/') ADVANCE(870);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(441);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(663);
      if (lookahead == 'I') ADVANCE(676);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(727);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(540);
      if (lookahead == 'B') ADVANCE(687);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(727);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == 'W') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_2(lookahead)) ADVANCE(834);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(799);
      if (lookahead == 'B') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(663);
      if (lookahead == 'G') ADVANCE(806);
      if (lookahead == 'H') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(676);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead == 'M') ADVANCE(740);
      if (lookahead == 'O') ADVANCE(807);
      if (lookahead == 'S') ADVANCE(726);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead == 'V') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (sym_name_character_set_4(lookahead)) ADVANCE(834);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(433);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(854);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(860);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(462);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(859);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(855);
      END_STATE();
    case 44:
      if (lookahead == '@') ADVANCE(539);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(257);
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(335);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(301);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'O') ADVANCE(480);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(301);
      if (lookahead == 'O') ADVANCE(310);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(231);
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(247);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(325);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(321);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'U') ADVANCE(227);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(262);
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(337);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(339);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(341);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(304);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(343);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(345);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(347);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(349);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(351);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(353);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(355);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(357);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(359);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(361);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(363);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(182);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(315);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(571);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(571);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(534);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(533);
      END_STATE();
    case 87:
      if (lookahead == 'C') ADVANCE(311);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(159);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(270);
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
      if (lookahead == 'C') ADVANCE(295);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(313);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(555);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(555);
      if (lookahead == 'Y') ADVANCE(456);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(472);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(426);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(276);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(199);
      if (lookahead == 'Y') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'I') ADVANCE(194);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(473);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(578);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(560);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(556);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(558);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(477);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(423);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(425);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(542);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(584);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(271);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(264);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 148:
      if (lookahead == 'F') ADVANCE(468);
      if (lookahead == 'N') ADVANCE(484);
      if (lookahead == 'S') ADVANCE(552);
      END_STATE();
    case 149:
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 150:
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 151:
      if (lookahead == 'F') ADVANCE(448);
      END_STATE();
    case 152:
      if (lookahead == 'F') ADVANCE(278);
      END_STATE();
    case 153:
      if (lookahead == 'G') ADVANCE(566);
      END_STATE();
    case 154:
      if (lookahead == 'G') ADVANCE(507);
      END_STATE();
    case 155:
      if (lookahead == 'G') ADVANCE(110);
      END_STATE();
    case 156:
      if (lookahead == 'G') ADVANCE(115);
      END_STATE();
    case 157:
      if (lookahead == 'H') ADVANCE(108);
      END_STATE();
    case 158:
      if (lookahead == 'H') ADVANCE(430);
      END_STATE();
    case 159:
      if (lookahead == 'H') ADVANCE(481);
      END_STATE();
    case 160:
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(327);
      END_STATE();
    case 161:
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 162:
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(252);
      if (lookahead == 'Y') ADVANCE(249);
      END_STATE();
    case 163:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 164:
      if (lookahead == 'H') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'I') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 167:
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 169:
      if (lookahead == 'I') ADVANCE(207);
      END_STATE();
    case 170:
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 172:
      if (lookahead == 'I') ADVANCE(204);
      END_STATE();
    case 173:
      if (lookahead == 'I') ADVANCE(289);
      END_STATE();
    case 174:
      if (lookahead == 'I') ADVANCE(222);
      END_STATE();
    case 175:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'I') ADVANCE(226);
      END_STATE();
    case 177:
      if (lookahead == 'I') ADVANCE(226);
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'I') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'I') ADVANCE(228);
      END_STATE();
    case 180:
      if (lookahead == 'I') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'I') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'J') ADVANCE(147);
      END_STATE();
    case 183:
      if (lookahead == 'K') ADVANCE(112);
      END_STATE();
    case 184:
      if (lookahead == 'K') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(173);
      END_STATE();
    case 185:
      if (lookahead == 'L') ADVANCE(572);
      END_STATE();
    case 186:
      if (lookahead == 'L') ADVANCE(553);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(241);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(326);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 190:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(440);
      END_STATE();
    case 192:
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 194:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 195:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 196:
      if (lookahead == 'L') ADVANCE(276);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 197:
      if (lookahead == 'L') ADVANCE(307);
      END_STATE();
    case 198:
      if (lookahead == 'L') ADVANCE(277);
      END_STATE();
    case 199:
      if (lookahead == 'M') ADVANCE(567);
      END_STATE();
    case 200:
      if (lookahead == 'M') ADVANCE(465);
      END_STATE();
    case 201:
      if (lookahead == 'M') ADVANCE(467);
      END_STATE();
    case 202:
      if (lookahead == 'M') ADVANCE(491);
      END_STATE();
    case 203:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 204:
      if (lookahead == 'M') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'M') ADVANCE(251);
      END_STATE();
    case 206:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 207:
      if (lookahead == 'M') ADVANCE(122);
      END_STATE();
    case 208:
      if (lookahead == 'N') ADVANCE(484);
      if (lookahead == 'S') ADVANCE(551);
      END_STATE();
    case 209:
      if (lookahead == 'N') ADVANCE(565);
      END_STATE();
    case 210:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 211:
      if (lookahead == 'N') ADVANCE(470);
      END_STATE();
    case 212:
      if (lookahead == 'N') ADVANCE(475);
      END_STATE();
    case 213:
      if (lookahead == 'N') ADVANCE(475);
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 214:
      if (lookahead == 'N') ADVANCE(459);
      END_STATE();
    case 215:
      if (lookahead == 'N') ADVANCE(554);
      END_STATE();
    case 216:
      if (lookahead == 'N') ADVANCE(839);
      END_STATE();
    case 217:
      if (lookahead == 'N') ADVANCE(483);
      END_STATE();
    case 218:
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead == 'S') ADVANCE(551);
      END_STATE();
    case 219:
      if (lookahead == 'N') ADVANCE(564);
      END_STATE();
    case 220:
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 221:
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 222:
      if (lookahead == 'N') ADVANCE(312);
      END_STATE();
    case 223:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 224:
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 225:
      if (lookahead == 'N') ADVANCE(302);
      END_STATE();
    case 226:
      if (lookahead == 'N') ADVANCE(286);
      END_STATE();
    case 227:
      if (lookahead == 'N') ADVANCE(287);
      END_STATE();
    case 228:
      if (lookahead == 'N') ADVANCE(290);
      END_STATE();
    case 229:
      if (lookahead == 'N') ADVANCE(299);
      END_STATE();
    case 230:
      if (lookahead == 'N') ADVANCE(297);
      END_STATE();
    case 231:
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 232:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 233:
      if (lookahead == 'N') ADVANCE(306);
      END_STATE();
    case 234:
      if (lookahead == 'N') ADVANCE(308);
      END_STATE();
    case 235:
      if (lookahead == 'O') ADVANCE(240);
      END_STATE();
    case 236:
      if (lookahead == 'O') ADVANCE(480);
      END_STATE();
    case 237:
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 238:
      if (lookahead == 'O') ADVANCE(282);
      END_STATE();
    case 239:
      if (lookahead == 'O') ADVANCE(282);
      if (lookahead == 'U') ADVANCE(190);
      END_STATE();
    case 240:
      if (lookahead == 'O') ADVANCE(185);
      END_STATE();
    case 241:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 243:
      if (lookahead == 'O') ADVANCE(214);
      END_STATE();
    case 244:
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 245:
      if (lookahead == 'O') ADVANCE(275);
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 246:
      if (lookahead == 'P') ADVANCE(490);
      END_STATE();
    case 247:
      if (lookahead == 'P') ADVANCE(158);
      END_STATE();
    case 248:
      if (lookahead == 'P') ADVANCE(189);
      END_STATE();
    case 249:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 250:
      if (lookahead == 'P') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 251:
      if (lookahead == 'P') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 253:
      if (lookahead == 'Q') ADVANCE(188);
      END_STATE();
    case 254:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 256:
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 257:
      if (lookahead == 'R') ADVANCE(429);
      END_STATE();
    case 258:
      if (lookahead == 'R') ADVANCE(323);
      END_STATE();
    case 259:
      if (lookahead == 'R') ADVANCE(541);
      END_STATE();
    case 260:
      if (lookahead == 'R') ADVANCE(428);
      END_STATE();
    case 261:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 262:
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 264:
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 265:
      if (lookahead == 'R') ADVANCE(303);
      END_STATE();
    case 266:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 267:
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 268:
      if (lookahead == 'S') ADVANCE(253);
      END_STATE();
    case 269:
      if (lookahead == 'S') ADVANCE(461);
      END_STATE();
    case 270:
      if (lookahead == 'S') ADVANCE(316);
      END_STATE();
    case 271:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 272:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 273:
      if (lookahead == 'S') ADVANCE(242);
      END_STATE();
    case 274:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 275:
      if (lookahead == 'S') ADVANCE(285);
      END_STATE();
    case 276:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(317);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(440);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(574);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(561);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(503);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(479);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(568);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(492);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(544);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(460);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(580);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(434);
      END_STATE();
    case 297:
      if (lookahead == 'T') ADVANCE(501);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 299:
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 300:
      if (lookahead == 'T') ADVANCE(169);
      END_STATE();
    case 301:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 302:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 304:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 305:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 306:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 307:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 308:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 309:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 310:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 311:
      if (lookahead == 'U') ADVANCE(201);
      END_STATE();
    case 312:
      if (lookahead == 'U') ADVANCE(269);
      END_STATE();
    case 313:
      if (lookahead == 'U') ADVANCE(202);
      END_STATE();
    case 314:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 315:
      if (lookahead == 'U') ADVANCE(305);
      END_STATE();
    case 316:
      if (lookahead == 'V') ADVANCE(570);
      END_STATE();
    case 317:
      if (lookahead == 'W') ADVANCE(145);
      END_STATE();
    case 318:
      if (lookahead == 'X') ADVANCE(563);
      END_STATE();
    case 319:
      if (lookahead == 'X') ADVANCE(431);
      END_STATE();
    case 320:
      if (lookahead == 'X') ADVANCE(576);
      END_STATE();
    case 321:
      if (lookahead == 'X') ADVANCE(837);
      END_STATE();
    case 322:
      if (lookahead == 'X') ADVANCE(835);
      END_STATE();
    case 323:
      if (lookahead == 'Y') ADVANCE(427);
      END_STATE();
    case 324:
      if (lookahead == 'Y') ADVANCE(546);
      END_STATE();
    case 325:
      if (lookahead == 'Y') ADVANCE(582);
      END_STATE();
    case 326:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 327:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 328:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 329:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 373:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 374:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 375:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 381:
      if (lookahead == 'm') ADVANCE(499);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 383:
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 392:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 393:
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 394:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(392);
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
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 418:
      if (lookahead == 'w') ADVANCE(370);
      END_STATE();
    case 419:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 420:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 421:
      if (eof) ADVANCE(422);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(842);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '&') ADVANCE(856);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '+') ADVANCE(852);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(442);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'C') ADVANCE(254);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'G') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'P') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead == 'W') ADVANCE(163);
      if (lookahead == '[') ADVANCE(488);
      if (lookahead == ']') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(421)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_V2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(859);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(854);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(854);
      if (lookahead == '=') ADVANCE(857);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(858);
      if (lookahead == '>') ADVANCE(855);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(458);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_POST_DASHACCUM);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(548);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(269);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_TO_CSV);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(722);
      if (lookahead == 'O') ADVANCE(728);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(746);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(614);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(704);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(734);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(731);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(668);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(732);
      if (lookahead == 'I') ADVANCE(673);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == 'O') ADVANCE(612);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(712);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(683);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(748);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(750);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(752);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(666);
      if (lookahead == 'U') ADVANCE(681);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(754);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(756);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(758);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(760);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(762);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(764);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(766);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(768);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(770);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(772);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(774);
      if (sym_name_character_set_6(lookahead)) ADVANCE(834);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(474);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(579);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(478);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(506);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(585);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(557);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(559);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(543);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(487);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(670);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(588);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(721);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(674);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(667);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(449);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(508);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(482);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(678);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(672);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(677);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(680);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(682);
      if (lookahead == 'U') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(573);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(691);
      if (lookahead == 'O') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(593);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(591);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(476);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(594);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(713);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(688);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == 'i') ADVANCE(812);
      if (sym_name_character_set_7(lookahead)) ADVANCE(834);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(600);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(675);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(595);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(590);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(502);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(575);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(504);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(569);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(581);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(562);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(464);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(545);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == 'u') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(577);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(583);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(547);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(457);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(657);
      if (sym_name_character_set_8(lookahead)) ADVANCE(834);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(671);
      if (sym_name_character_set_8(lookahead)) ADVANCE(834);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(669);
      if (sym_name_character_set_8(lookahead)) ADVANCE(834);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(800);
      if (sym_name_character_set_7(lookahead)) ADVANCE(834);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(805);
      if (sym_name_character_set_7(lookahead)) ADVANCE(834);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(832);
      if (sym_name_character_set_7(lookahead)) ADVANCE(834);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'o') ADVANCE(809);
      if (sym_name_character_set_7(lookahead)) ADVANCE(834);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(759);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(763);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(765);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(769);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(771);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(597);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(599);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(516);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(518);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(514);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(528);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(510);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(512);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(526);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(500);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(524);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(520);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(522);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(808);
      if (lookahead == 'v') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(603);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'x') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(587);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(610);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(803);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(791);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(796);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(797);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(834);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '/') ADVANCE(870);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(843);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '/') ADVANCE(870);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(847);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '/') ADVANCE(870);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(462);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(863);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_spacing_line);
      if (lookahead == '\n') ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '\n') ADVANCE(861);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(863);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '*') ADVANCE(868);
      if (lookahead == '/') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(866);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '/') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(866);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(866);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(866);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(870);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 421},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
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
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
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
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
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
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 421},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 22},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 20},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 17},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 20},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 20},
  [167] = {.lex_state = 20},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 20},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 17},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 421},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 421},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 19},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 19},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 19},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 19},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 19},
  [234] = {.lex_state = 19},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 19},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 421},
  [240] = {.lex_state = 421},
  [241] = {.lex_state = 421},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 29},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 421},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 421},
  [249] = {.lex_state = 33},
  [250] = {.lex_state = 421},
  [251] = {.lex_state = 421},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 421},
  [254] = {.lex_state = 421},
  [255] = {.lex_state = 33},
  [256] = {.lex_state = 421},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 29},
  [259] = {.lex_state = 421},
  [260] = {.lex_state = 421},
  [261] = {.lex_state = 33},
  [262] = {.lex_state = 33},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 421},
  [265] = {.lex_state = 421},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 26},
  [268] = {.lex_state = 33},
  [269] = {.lex_state = 33},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 33},
  [273] = {.lex_state = 33},
  [274] = {.lex_state = 33},
  [275] = {.lex_state = 33},
  [276] = {.lex_state = 421},
  [277] = {.lex_state = 33},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 421},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 33},
  [282] = {.lex_state = 421},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 421},
  [286] = {.lex_state = 29},
  [287] = {.lex_state = 421},
  [288] = {.lex_state = 421},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 33},
  [291] = {.lex_state = 29},
  [292] = {.lex_state = 421},
  [293] = {.lex_state = 29},
  [294] = {.lex_state = 421},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 30},
  [297] = {.lex_state = 26},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 421},
  [300] = {.lex_state = 29},
  [301] = {.lex_state = 26},
  [302] = {.lex_state = 421},
  [303] = {.lex_state = 26},
  [304] = {.lex_state = 421},
  [305] = {.lex_state = 421},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 421},
  [308] = {.lex_state = 421},
  [309] = {.lex_state = 421},
  [310] = {.lex_state = 421},
  [311] = {.lex_state = 421},
  [312] = {.lex_state = 421},
  [313] = {.lex_state = 26},
  [314] = {.lex_state = 26},
  [315] = {.lex_state = 26},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 26},
  [323] = {.lex_state = 26},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 421},
  [327] = {.lex_state = 26},
  [328] = {.lex_state = 421},
  [329] = {.lex_state = 421},
  [330] = {.lex_state = 421},
  [331] = {.lex_state = 421},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 421},
  [334] = {.lex_state = 421},
  [335] = {.lex_state = 421},
  [336] = {.lex_state = 421},
  [337] = {.lex_state = 421},
  [338] = {.lex_state = 421},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 421},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 421},
  [344] = {.lex_state = 421},
  [345] = {.lex_state = 421},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 421},
  [350] = {.lex_state = 421},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 421},
  [353] = {.lex_state = 28},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 421},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 421},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 421},
  [364] = {.lex_state = 26},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 421},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 27},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 421},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 21},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 421},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 21},
  [386] = {.lex_state = 21},
  [387] = {.lex_state = 421},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 21},
  [391] = {.lex_state = 421},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 421},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 26},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 421},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 21},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 421},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 421},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 15},
  [415] = {.lex_state = 421},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 421},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 421},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 421},
  [422] = {.lex_state = 21},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 421},
  [426] = {.lex_state = 421},
  [427] = {.lex_state = 421},
  [428] = {.lex_state = 863},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 21},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 421},
  [440] = {.lex_state = 21},
  [441] = {.lex_state = 421},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 21},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 421},
  [450] = {.lex_state = 421},
  [451] = {.lex_state = 421},
  [452] = {.lex_state = 21},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 421},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 863},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 863},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 29},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 421},
  [471] = {.lex_state = 421},
  [472] = {.lex_state = 421},
  [473] = {.lex_state = 421},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 421},
  [476] = {.lex_state = 421},
  [477] = {.lex_state = 30},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 421},
  [481] = {.lex_state = 25},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 29},
  [484] = {.lex_state = 25},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 421},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 7},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 15},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 21},
  [503] = {.lex_state = 24},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 421},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 15},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 21},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 21},
  [518] = {.lex_state = 21},
  [519] = {.lex_state = 21},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 21},
  [522] = {.lex_state = 421},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 421},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 421},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 421},
  [532] = {.lex_state = 421},
  [533] = {.lex_state = 15},
  [534] = {.lex_state = 421},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 15},
  [541] = {.lex_state = 24},
  [542] = {.lex_state = 421},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 21},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 421},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 15},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 421},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 25},
  [559] = {.lex_state = 15},
  [560] = {.lex_state = 24},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 863},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 25},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 21},
  [574] = {.lex_state = 24},
  [575] = {.lex_state = 15},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 25},
  [578] = {.lex_state = 421},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 21},
  [581] = {.lex_state = 21},
  [582] = {.lex_state = 421},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 421},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 17},
  [592] = {.lex_state = 15},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 15},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 13},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 421},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 13},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 421},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 25},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 421},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 15},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 17},
  [624] = {.lex_state = 24},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 421},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
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
  [645] = {.lex_state = 13},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 421},
  [649] = {.lex_state = 421},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 421},
  [652] = {.lex_state = 21},
  [653] = {.lex_state = 21},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 15},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 15},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 421},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 21},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 421},
  [665] = {.lex_state = 15},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 421},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 21},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 21},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 421},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 21},
  [687] = {.lex_state = 21},
  [688] = {.lex_state = 421},
  [689] = {.lex_state = 21},
  [690] = {.lex_state = 21},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 21},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 21},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 21},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 21},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 421},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 21},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 15},
  [720] = {.lex_state = 13},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 21},
  [727] = {.lex_state = 21},
  [728] = {.lex_state = 21},
  [729] = {.lex_state = 421},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 21},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 21},
  [738] = {.lex_state = 21},
  [739] = {.lex_state = 21},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 21},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 21},
  [746] = {.lex_state = 21},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 21},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 21},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 421},
  [774] = {.lex_state = 421},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 21},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 21},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 21},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 21},
  [789] = {.lex_state = 21},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 21},
  [799] = {.lex_state = 21},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 21},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 15},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 21},
  [817] = {.lex_state = 21},
  [818] = {.lex_state = 15},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 421},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 21},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 21},
  [830] = {.lex_state = 21},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 21},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 21},
  [842] = {.lex_state = 21},
  [843] = {.lex_state = 21},
  [844] = {.lex_state = 21},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 21},
  [849] = {.lex_state = 21},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 421},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 21},
  [856] = {.lex_state = 21},
  [857] = {.lex_state = 21},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 21},
  [870] = {.lex_state = 21},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 21},
  [875] = {.lex_state = 21},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {(TSStateId)(-1)},
  [880] = {(TSStateId)(-1)},
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
    [sym_gsql] = STATE(863),
    [sym__definition] = STATE(522),
    [sym_create_query] = STATE(617),
    [sym_interpret_query] = STATE(617),
    [sym_block_comment] = STATE(1),
    [aux_sym_gsql_repeat1] = STATE(363),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_INTERPRET] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_TYPEDEF,
    ACTIONS(18), 1,
      anon_sym_IF,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(24), 1,
      anon_sym_WHILE,
    ACTIONS(27), 1,
      anon_sym_FOREACH,
    ACTIONS(30), 1,
      anon_sym_SumAccum,
    ACTIONS(42), 1,
      anon_sym_ListAccum,
    ACTIONS(48), 1,
      anon_sym_MapAccum,
    ACTIONS(51), 1,
      anon_sym_HeapAccum,
    ACTIONS(54), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(57), 1,
      anon_sym_ArrayAccum,
    ACTIONS(60), 1,
      anon_sym_AT_AT,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_PRINT,
    ACTIONS(69), 1,
      anon_sym_VERTEX,
    ACTIONS(72), 1,
      sym_name,
    ACTIONS(75), 1,
      sym_spacing_line,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(36), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(45), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(2), 2,
      sym_block_comment,
      aux_sym_query_body_repeat1,
    STATE(71), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(39), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(33), 10,
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
    STATE(785), 13,
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
  [133] = 35,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_TYPEDEF,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(114), 1,
      anon_sym_AT_AT,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(124), 1,
      sym_spacing_line,
    STATE(2), 1,
      aux_sym_query_body_repeat1,
    STATE(3), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(71), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(785), 13,
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
  [268] = 35,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_TYPEDEF,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(114), 1,
      anon_sym_AT_AT,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(124), 1,
      sym_spacing_line,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_query_body_repeat1,
    STATE(4), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(71), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(785), 13,
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
  [403] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    STATE(807), 1,
      sym_query_body_stmt,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [525] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(485), 1,
      sym_query_body_stmt,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [647] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(7), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(571), 1,
      sym_query_body_stmt,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [769] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    STATE(812), 1,
      sym_query_body_stmt,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [891] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(9), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(589), 1,
      sym_query_body_stmt,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1013] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(10), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(731), 1,
      sym_query_body_stmt,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1135] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(11), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(766), 1,
      sym_query_body_stmt,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1257] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(12), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(781), 1,
      sym_query_body_stmt,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1379] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(13), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(499), 1,
      sym_query_body_stmt,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1501] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(130), 1,
      anon_sym_IF,
    STATE(14), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(736), 1,
      sym_query_body_stmt,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1623] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_IF,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(15), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(491), 1,
      sym_query_body_stmt,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1745] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      anon_sym_CASE,
    ACTIONS(90), 1,
      anon_sym_WHILE,
    ACTIONS(92), 1,
      anon_sym_FOREACH,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_PRINT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(130), 1,
      anon_sym_IF,
    STATE(16), 1,
      sym_block_comment,
    STATE(436), 1,
      sym_accum_type,
    STATE(438), 1,
      sym_global_accum_name,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(703), 1,
      sym_query_body_stmt,
    STATE(778), 1,
      sym_base_type,
    STATE(784), 1,
      sym_gsql_select_block,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(782), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
    STATE(800), 13,
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
  [1867] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_block_comment,
    ACTIONS(134), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(132), 41,
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
  [1928] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_block_comment,
    STATE(21), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(140), 4,
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
  [1993] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(19), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
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
  [2053] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(20), 1,
      sym_block_comment,
    STATE(21), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(140), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(136), 39,
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
  [2113] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(19), 1,
      aux_sym_name_dot_repeat1,
    STATE(21), 1,
      sym_block_comment,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(151), 39,
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
  [2173] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym_block_comment,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 35,
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
  [2237] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_block_comment,
    STATE(26), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 35,
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
  [2301] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_block_comment,
    ACTIONS(146), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(144), 39,
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
  [2361] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_block_comment,
    STATE(26), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(161), 38,
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
  [2423] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_block_comment,
    STATE(27), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(169), 38,
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
  [2485] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(175), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(173), 38,
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
  [2545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(146), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(144), 39,
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
  [2602] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(180), 39,
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
  [2659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(186), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(184), 39,
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
  [2716] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(161), 38,
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
  [2775] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(192), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(190), 39,
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
  [2832] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(161), 38,
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
  [2888] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(194), 38,
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
  [2944] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(194), 38,
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
  [3000] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 35,
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
  [3058] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(37), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(175), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(173), 36,
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
  [3115] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(205), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(203), 36,
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
  [3174] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(39), 1,
      sym_block_comment,
    STATE(41), 1,
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
  [3233] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(40), 1,
      sym_block_comment,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(216), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(213), 36,
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
  [3292] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_digit,
    STATE(41), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(221), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(219), 36,
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
  [3349] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_block_comment,
    ACTIONS(229), 3,
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
  [3405] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(180), 37,
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
  [3459] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(236), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(234), 37,
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
  [3513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 37,
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
  [3567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      anon_sym_DOT,
    STATE(46), 1,
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
  [3623] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(47), 1,
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
  [3679] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(48), 1,
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
  [3735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(49), 1,
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
  [3788] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(50), 1,
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
  [3841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(51), 1,
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
  [3894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(271), 3,
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
  [3947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(53), 1,
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
  [4000] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(54), 1,
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
  [4053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(55), 1,
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
  [4106] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(157), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(155), 36,
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
  [4159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(57), 1,
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
  [4212] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(58), 1,
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
  [4265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(59), 1,
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
  [4318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(60), 1,
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
  [4371] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(61), 1,
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
  [4424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(62), 1,
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
  [4477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(63), 1,
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
  [4530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(64), 1,
      sym_block_comment,
    ACTIONS(316), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(314), 36,
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
  [4583] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_block_comment,
    ACTIONS(320), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(318), 36,
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
  [4636] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(66), 1,
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
  [4689] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(324), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(322), 36,
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
  [4742] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_SELECT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_name,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(68), 1,
      sym_block_comment,
    STATE(256), 1,
      sym_expr,
    STATE(439), 1,
      sym_simple_set,
    STATE(625), 1,
      sym_gsql_select_clause,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(784), 1,
      sym_gsql_select_block,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    STATE(676), 2,
      sym_seed_set,
      sym__select_stmt,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [4847] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      sym_spacing_line,
    STATE(69), 1,
      sym_block_comment,
    ACTIONS(354), 36,
      anon_sym_RBRACE,
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
      anon_sym_AT_AT,
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
  [4898] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_spacing_line,
    STATE(70), 1,
      sym_block_comment,
    ACTIONS(358), 36,
      anon_sym_RBRACE,
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
      anon_sym_AT_AT,
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
  [4949] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_spacing_line,
    STATE(71), 1,
      sym_block_comment,
    ACTIONS(362), 36,
      anon_sym_RBRACE,
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
      anon_sym_AT_AT,
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
  [5000] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym_spacing_line,
    STATE(72), 1,
      sym_block_comment,
    ACTIONS(366), 36,
      anon_sym_RBRACE,
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
      anon_sym_AT_AT,
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
  [5051] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(73), 1,
      sym_block_comment,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 26,
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
  [5109] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LT,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(74), 1,
      sym_block_comment,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(155), 27,
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
  [5168] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(75), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(679), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5242] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(386), 1,
      anon_sym_IF,
    STATE(76), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(694), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5316] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(77), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(511), 1,
      sym_dml_sub_stmt_list,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5390] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(78), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(568), 1,
      sym_dml_sub_stmt_list,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5464] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(79), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(683), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5538] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(80), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(680), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5612] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(81), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5686] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(82), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(528), 1,
      sym_dml_sub_stmt_list,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5760] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(386), 1,
      anon_sym_IF,
    STATE(83), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(675), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5834] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(84), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(547), 1,
      sym_dml_sub_stmt_list,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5908] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(85), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(537), 1,
      sym_dml_sub_stmt_list,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [5982] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(86), 1,
      sym_block_comment,
    STATE(342), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(678), 1,
      sym_dml_sub_stmt_list,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [6056] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(406), 1,
      sym_name,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(200), 1,
      sym_expr,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(515), 1,
      sym_condition,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(640), 1,
      sym_arg_list,
    STATE(868), 1,
      sym_aggregator,
    ACTIONS(404), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6153] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      anon_sym_IF,
    ACTIONS(378), 1,
      anon_sym_CASE,
    ACTIONS(380), 1,
      anon_sym_WHILE,
    ACTIONS(382), 1,
      anon_sym_FOREACH,
    ACTIONS(384), 1,
      sym_name,
    STATE(88), 1,
      sym_block_comment,
    STATE(367), 1,
      sym_dml_sub_stmt,
    STATE(538), 1,
      sym_global_accum_name,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [6224] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(406), 1,
      sym_name,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(201), 1,
      sym_expr,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(515), 1,
      sym_condition,
    STATE(603), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    ACTIONS(404), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6321] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(90), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(832), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6413] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(91), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(569), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6507] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(92), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(585), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6601] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(93), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(316), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6695] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(556), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6789] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(95), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(394), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6883] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(497), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6977] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(97), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_expr,
    STATE(570), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7071] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(98), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7163] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(99), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(668), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7255] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_IN,
    ACTIONS(442), 1,
      anon_sym_NOT,
    ACTIONS(444), 1,
      anon_sym_IS,
    ACTIONS(446), 1,
      anon_sym_BETWEEN,
    ACTIONS(448), 1,
      anon_sym_LIKE,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_block_comment,
    STATE(167), 1,
      sym_comparison_operator,
    STATE(168), 1,
      sym_math_operator,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(434), 10,
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
  [7321] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(101), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(833), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7413] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(102), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(743), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7505] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(462), 1,
      sym_name,
    STATE(103), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(471), 1,
      sym_simple_set,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(640), 1,
      sym_arg_list,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7597] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(104), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(834), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7689] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(105), 1,
      sym_block_comment,
    STATE(460), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7783] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(106), 1,
      sym_block_comment,
    STATE(324), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7877] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(107), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(837), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7969] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(108), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(838), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8061] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(109), 1,
      sym_block_comment,
    STATE(489), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8155] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(110), 1,
      sym_block_comment,
    STATE(457), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8249] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(111), 1,
      sym_block_comment,
    STATE(259), 1,
      sym_expr,
    STATE(400), 1,
      sym_v_expr_set,
    STATE(456), 1,
      sym_print_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8341] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(112), 1,
      sym_block_comment,
    STATE(583), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8435] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(113), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(667), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8527] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(114), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(691), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8619] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(115), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(698), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8711] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(476), 1,
      anon_sym_WHEN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(116), 1,
      sym_block_comment,
    STATE(302), 1,
      sym_expr,
    STATE(463), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8803] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(117), 1,
      sym_block_comment,
    STATE(432), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8897] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(462), 1,
      sym_name,
    STATE(118), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(471), 1,
      sym_simple_set,
    STATE(603), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8989] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(119), 1,
      sym_block_comment,
    STATE(465), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9083] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(120), 1,
      sym_block_comment,
    STATE(524), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9177] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(121), 1,
      sym_block_comment,
    STATE(505), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9271] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(122), 1,
      sym_block_comment,
    STATE(565), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9365] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(123), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(819), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9457] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(124), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(847), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9549] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(125), 1,
      sym_block_comment,
    STATE(579), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9643] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(126), 1,
      sym_block_comment,
    STATE(259), 1,
      sym_expr,
    STATE(400), 1,
      sym_v_expr_set,
    STATE(408), 1,
      sym_print_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9735] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(127), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(780), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9827] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(128), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(850), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9919] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(129), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(721), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10011] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(100), 1,
      sym_expr,
    STATE(130), 1,
      sym_block_comment,
    STATE(544), 1,
      sym_condition,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10105] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(131), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10197] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_name,
    STATE(132), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(603), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10286] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(133), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10375] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_math_operator,
    ACTIONS(496), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(494), 19,
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
  [10426] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(135), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(809), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10515] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(136), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_math_operator,
    ACTIONS(312), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(310), 27,
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
  [10562] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(137), 1,
      sym_block_comment,
    STATE(294), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(637), 1,
      sym_v_set_proj,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10651] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(138), 1,
      sym_block_comment,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 20,
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
  [10704] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(139), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(279), 1,
      sym_set_bag_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(826), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10793] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(140), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(835), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10882] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(141), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(723), 1,
      sym_arg_list,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10971] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(142), 1,
      sym_block_comment,
    STATE(294), 1,
      sym_expr,
    STATE(576), 1,
      sym_v_set_proj,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11060] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(143), 1,
      sym_block_comment,
    STATE(162), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(140), 5,
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
  [11111] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_name,
    STATE(144), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(204), 1,
      sym_set_bag_expr,
    STATE(278), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(640), 1,
      sym_arg_list,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11200] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(145), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(279), 1,
      sym_set_bag_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(767), 1,
      sym_arg_list,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(146), 1,
      sym_block_comment,
    STATE(162), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(136), 24,
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
  [11335] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(147), 1,
      sym_block_comment,
    STATE(248), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11421] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(148), 1,
      sym_block_comment,
    STATE(287), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11507] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_name,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_digit,
    STATE(149), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(295), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11593] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_block_comment,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 20,
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
  [11643] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(151), 1,
      sym_block_comment,
    STATE(312), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11729] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(152), 1,
      sym_block_comment,
    STATE(250), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11815] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(153), 1,
      sym_block_comment,
    ACTIONS(292), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(434), 10,
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
  [11861] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_name,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_digit,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(154), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_name_dot,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(214), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11947] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(155), 1,
      sym_block_comment,
    STATE(309), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12033] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(156), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(696), 1,
      sym_accum_type,
    STATE(727), 1,
      sym__element_type,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
  [12103] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(157), 1,
      sym_block_comment,
    STATE(183), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(161), 23,
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
  [12151] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      sym_digit,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(134), 1,
      sym_expr,
    STATE(158), 1,
      sym_block_comment,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12237] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(159), 1,
      sym_block_comment,
    STATE(254), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12323] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_name,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(160), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_name_dot,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(284), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12409] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(161), 1,
      sym_block_comment,
    STATE(292), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12495] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(162), 1,
      sym_block_comment,
    STATE(173), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(151), 24,
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
  [12541] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(163), 1,
      sym_block_comment,
    STATE(241), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12627] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(164), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12713] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(165), 1,
      sym_block_comment,
    STATE(183), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 20,
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
  [12763] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(166), 1,
      sym_block_comment,
    STATE(311), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12849] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(167), 1,
      sym_block_comment,
    STATE(239), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12935] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(168), 1,
      sym_block_comment,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13021] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(169), 1,
      sym_block_comment,
    STATE(304), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13107] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(170), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(657), 2,
      sym_accum_type,
      sym__element_type,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
  [13175] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      sym_digit,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(171), 1,
      sym_block_comment,
    STATE(190), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13261] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_block_comment,
    ACTIONS(146), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(144), 24,
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
  [13307] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_DOT,
    STATE(173), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
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
  [13353] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(174), 1,
      sym_block_comment,
    STATE(251), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13439] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(175), 1,
      sym_block_comment,
    STATE(308), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13525] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(176), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(727), 1,
      sym__element_type,
    STATE(728), 1,
      sym_accum_type,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
  [13595] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_DOT,
    STATE(177), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(175), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(173), 23,
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
  [13641] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(178), 1,
      sym_block_comment,
    STATE(253), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13727] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(179), 1,
      sym_block_comment,
    STATE(307), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13813] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(180), 1,
      sym_block_comment,
    STATE(299), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13899] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_name,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(181), 1,
      sym_block_comment,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(289), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13985] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(182), 1,
      sym_block_comment,
    STATE(310), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14071] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(183), 1,
      sym_block_comment,
    ACTIONS(171), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(169), 23,
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
  [14119] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(184), 1,
      sym_block_comment,
    STATE(240), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14205] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(185), 1,
      sym_block_comment,
    STATE(197), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14291] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(186), 1,
      sym_block_comment,
    STATE(256), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14377] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      anon_sym_COALESCE,
    ACTIONS(340), 1,
      anon_sym_ISEMPTY,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_name,
    STATE(22), 1,
      sym_global_accum_name,
    STATE(23), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(187), 1,
      sym_block_comment,
    STATE(305), 1,
      sym_expr,
    STATE(630), 1,
      sym_local_accum_name,
    STATE(755), 1,
      sym_aggregator,
    STATE(56), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(342), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14463] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_COUNT,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      anon_sym_COALESCE,
    ACTIONS(400), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_name,
    ACTIONS(410), 1,
      sym_digit,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_global_accum_name,
    STATE(165), 1,
      sym_name_dot,
    STATE(188), 1,
      sym_block_comment,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(216), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(868), 1,
      sym_aggregator,
    STATE(228), 2,
      sym_integer,
      sym_real,
    STATE(233), 2,
      sym__numeric,
      sym_string_literal,
    STATE(238), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(408), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(189), 1,
      sym_block_comment,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(132), 24,
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
  [14592] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(190), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(494), 19,
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
  [14639] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(191), 1,
      sym_block_comment,
    ACTIONS(186), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(184), 24,
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
  [14682] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_SumAccum,
    ACTIONS(102), 1,
      anon_sym_ListAccum,
    ACTIONS(106), 1,
      anon_sym_MapAccum,
    ACTIONS(108), 1,
      anon_sym_HeapAccum,
    ACTIONS(110), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(112), 1,
      anon_sym_ArrayAccum,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(528), 1,
      sym_name,
    STATE(192), 1,
      sym_block_comment,
    ACTIONS(98), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(104), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(804), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(100), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(96), 10,
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
  [14747] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(193), 1,
      sym_block_comment,
    ACTIONS(192), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(190), 24,
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
  [14790] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(194), 1,
      sym_block_comment,
    ACTIONS(182), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(180), 24,
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
  [14833] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(195), 1,
      sym_block_comment,
    ACTIONS(146), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(144), 24,
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
  [14876] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_block_comment,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(161), 23,
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
  [14921] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(197), 1,
      sym_block_comment,
    ACTIONS(310), 27,
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
  [14966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(198), 1,
      sym_block_comment,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(161), 23,
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
  [15008] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(199), 1,
      sym_block_comment,
    ACTIONS(196), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(194), 23,
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
  [15050] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_IN,
    ACTIONS(442), 1,
      anon_sym_NOT,
    ACTIONS(444), 1,
      anon_sym_IS,
    ACTIONS(446), 1,
      anon_sym_BETWEEN,
    ACTIONS(448), 1,
      anon_sym_LIKE,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_DASH_GT,
    STATE(167), 1,
      sym_comparison_operator,
    STATE(188), 1,
      sym_math_operator,
    STATE(200), 1,
      sym_block_comment,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(452), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15120] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_IN,
    ACTIONS(442), 1,
      anon_sym_NOT,
    ACTIONS(444), 1,
      anon_sym_IS,
    ACTIONS(446), 1,
      anon_sym_BETWEEN,
    ACTIONS(448), 1,
      anon_sym_LIKE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_DASH_GT,
    STATE(167), 1,
      sym_comparison_operator,
    STATE(188), 1,
      sym_math_operator,
    STATE(201), 1,
      sym_block_comment,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(434), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(436), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(452), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15190] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(202), 1,
      sym_block_comment,
    ACTIONS(536), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 20,
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
  [15234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(203), 1,
      sym_block_comment,
    ACTIONS(196), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(194), 23,
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
  [15276] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(204), 1,
      sym_block_comment,
    ACTIONS(536), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 20,
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
  [15320] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_DOT,
    STATE(205), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(175), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(173), 21,
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
  [15363] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym_digit,
    STATE(206), 1,
      sym_block_comment,
    STATE(209), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(216), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(213), 21,
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
  [15408] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym_digit,
    STATE(207), 1,
      sym_block_comment,
    STATE(209), 1,
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
  [15453] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(208), 1,
      sym_block_comment,
    ACTIONS(205), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(203), 21,
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
  [15498] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(543), 1,
      sym_digit,
    STATE(209), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(219), 21,
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
  [15541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(210), 1,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(180), 22,
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
  [15581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(211), 1,
      sym_block_comment,
    ACTIONS(192), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(190), 22,
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
  [15621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(212), 1,
      sym_block_comment,
    ACTIONS(236), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(234), 22,
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
  [15661] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(213), 1,
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
  [15703] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(188), 1,
      sym_math_operator,
    STATE(214), 1,
      sym_block_comment,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(496), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(494), 14,
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
  [15749] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_DOT,
    STATE(215), 1,
      sym_block_comment,
    ACTIONS(229), 4,
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
  [15791] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(188), 1,
      sym_math_operator,
    STATE(216), 1,
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
  [15833] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_DOT,
    STATE(217), 1,
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
  [15875] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_DOT,
    STATE(218), 1,
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
  [15917] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(219), 1,
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
  [15956] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(220), 1,
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
  [15995] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(221), 1,
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
  [16034] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(222), 1,
      sym_block_comment,
    ACTIONS(434), 3,
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
  [16075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(223), 1,
      sym_block_comment,
    ACTIONS(316), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(314), 21,
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
  [16114] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(224), 1,
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
  [16153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(225), 1,
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
  [16192] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(226), 1,
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
  [16231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(227), 1,
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
  [16270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(228), 1,
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
  [16309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(229), 1,
      sym_block_comment,
    ACTIONS(271), 4,
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
    STATE(230), 1,
      sym_block_comment,
    ACTIONS(324), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(322), 21,
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
    STATE(231), 1,
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
  [16426] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(232), 1,
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
  [16465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(233), 1,
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
  [16504] = 5,
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
  [16543] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(235), 1,
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
  [16582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(236), 1,
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
  [16621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(237), 1,
      sym_block_comment,
    ACTIONS(320), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(318), 21,
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
  [16660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(238), 1,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 21,
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
  [16699] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(239), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(554), 10,
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
  [16737] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(240), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(556), 10,
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
  [16775] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(241), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(558), 10,
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
  [16813] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(560), 1,
      anon_sym_LT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(242), 1,
      sym_block_comment,
    ACTIONS(157), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(562), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(155), 10,
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
  [16856] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(560), 1,
      anon_sym_LT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(243), 1,
      sym_block_comment,
    ACTIONS(157), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(161), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(155), 10,
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
  [16899] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_SET,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(244), 1,
      sym_block_comment,
    STATE(504), 1,
      sym_query_param,
    STATE(513), 1,
      sym_base_type,
    STATE(771), 1,
      sym_query_params,
    STATE(769), 2,
      sym_set_param,
      sym__type,
    ACTIONS(568), 10,
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
  [16943] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(245), 1,
      sym_block_comment,
    ACTIONS(572), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(574), 10,
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
  [16975] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_LT,
    ACTIONS(576), 1,
      anon_sym_EQ,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(246), 1,
      sym_block_comment,
    ACTIONS(562), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(155), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17019] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(247), 1,
      sym_block_comment,
    ACTIONS(578), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(580), 10,
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
  [17051] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(248), 1,
      sym_block_comment,
    ACTIONS(582), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17086] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(584), 1,
      anon_sym_GT,
    ACTIONS(586), 1,
      sym_name,
    STATE(249), 1,
      sym_block_comment,
    STATE(252), 1,
      aux_sym_typedef_repeat1,
    STATE(261), 1,
      sym_tuple_field,
    STATE(290), 1,
      sym_tuple_fields,
    STATE(738), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [17129] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(250), 1,
      sym_block_comment,
    ACTIONS(588), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17164] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(251), 1,
      sym_block_comment,
    ACTIONS(590), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17199] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(586), 1,
      sym_name,
    ACTIONS(592), 1,
      anon_sym_GT,
    STATE(252), 1,
      sym_block_comment,
    STATE(255), 1,
      aux_sym_typedef_repeat1,
    STATE(261), 1,
      sym_tuple_field,
    STATE(290), 1,
      sym_tuple_fields,
    STATE(738), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [17242] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(253), 1,
      sym_block_comment,
    ACTIONS(594), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17277] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(254), 1,
      sym_block_comment,
    ACTIONS(596), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17312] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(598), 1,
      anon_sym_GT,
    ACTIONS(603), 1,
      anon_sym_VERTEX,
    ACTIONS(606), 1,
      sym_name,
    STATE(261), 1,
      sym_tuple_field,
    STATE(290), 1,
      sym_tuple_fields,
    STATE(738), 1,
      sym_base_type,
    STATE(255), 2,
      sym_block_comment,
      aux_sym_typedef_repeat1,
    ACTIONS(600), 10,
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
  [17353] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(256), 1,
      sym_block_comment,
    ACTIONS(609), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17388] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_SumAccum,
    ACTIONS(617), 1,
      anon_sym_ListAccum,
    ACTIONS(621), 1,
      anon_sym_MapAccum,
    ACTIONS(623), 1,
      anon_sym_HeapAccum,
    ACTIONS(625), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(627), 1,
      anon_sym_ArrayAccum,
    STATE(257), 1,
      sym_block_comment,
    STATE(662), 1,
      sym_accum_type,
    ACTIONS(613), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(619), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(615), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
  [17434] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      anon_sym_SET,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(258), 1,
      sym_block_comment,
    STATE(513), 1,
      sym_base_type,
    STATE(586), 1,
      sym_query_param,
    STATE(769), 2,
      sym_set_param,
      sym__type,
    ACTIONS(568), 10,
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
  [17472] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
    ACTIONS(633), 1,
      anon_sym_AS,
    STATE(185), 1,
      sym_math_operator,
    STATE(259), 1,
      sym_block_comment,
    ACTIONS(629), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17510] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(635), 1,
      anon_sym_DASH,
    STATE(260), 1,
      sym_block_comment,
    STATE(553), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(637), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17553] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(261), 1,
      sym_block_comment,
    STATE(266), 1,
      aux_sym_tuple_fields_repeat1,
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
  [17586] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_LT,
    STATE(262), 1,
      sym_block_comment,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(649), 12,
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
  [17617] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_GT,
    STATE(263), 2,
      sym_block_comment,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(656), 12,
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
  [17648] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(635), 1,
      anon_sym_DASH,
    STATE(264), 1,
      sym_block_comment,
    STATE(608), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(637), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17691] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(635), 1,
      anon_sym_DASH,
    STATE(265), 1,
      sym_block_comment,
    STATE(751), 1,
      sym_constant,
    STATE(57), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(637), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17734] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      anon_sym_GT,
    STATE(263), 1,
      aux_sym_tuple_fields_repeat1,
    STATE(266), 1,
      sym_block_comment,
    ACTIONS(660), 12,
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
  [17767] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      sym_name,
    STATE(267), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(328), 1,
      sym_step_source_set,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_path_pattern,
    STATE(395), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(401), 2,
      sym_step,
      sym_step_v2,
  [17815] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(268), 1,
      sym_block_comment,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(670), 12,
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
  [17843] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(269), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(657), 1,
      sym__element_type,
    ACTIONS(96), 10,
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
  [17877] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_DASH_GT,
    STATE(181), 1,
      sym_math_operator,
    STATE(270), 1,
      sym_block_comment,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17915] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(271), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(659), 1,
      sym__element_type,
    ACTIONS(96), 10,
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
  [17949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(272), 1,
      sym_block_comment,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(649), 12,
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
  [17977] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(273), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(727), 1,
      sym__element_type,
    ACTIONS(96), 10,
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
  [18011] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(586), 1,
      sym_name,
    STATE(274), 1,
      sym_block_comment,
    STATE(275), 1,
      sym_tuple_field,
    STATE(738), 1,
      sym_base_type,
    ACTIONS(96), 10,
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
  [18045] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(275), 1,
      sym_block_comment,
    ACTIONS(654), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(656), 12,
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
  [18073] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      sym_math_operator,
    STATE(276), 1,
      sym_block_comment,
    STATE(467), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18109] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(277), 1,
      sym_block_comment,
    STATE(518), 1,
      sym_base_type,
    STATE(653), 1,
      sym__element_type,
    ACTIONS(96), 10,
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
  [18143] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_DASH_GT,
    STATE(181), 1,
      sym_math_operator,
    STATE(278), 1,
      sym_block_comment,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18181] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    STATE(279), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(155), 10,
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
  [18211] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    STATE(280), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_atomic_edge_type,
    STATE(480), 1,
      sym_path_edge_pattern,
    STATE(534), 1,
      sym_disj_pattern,
    STATE(626), 1,
      sym_step_edge_types,
    STATE(714), 1,
      sym_step_edge_set,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [18261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(281), 1,
      sym_block_comment,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(686), 12,
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
  [18289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(282), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(554), 10,
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
  [18316] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_block_comment,
    STATE(513), 1,
      sym_base_type,
    STATE(719), 1,
      sym__type,
    ACTIONS(568), 10,
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
  [18347] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(181), 1,
      sym_math_operator,
    STATE(284), 1,
      sym_block_comment,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(688), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18378] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(285), 1,
      sym_block_comment,
    ACTIONS(688), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18409] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(286), 1,
      sym_block_comment,
    STATE(513), 1,
      sym_base_type,
    STATE(559), 1,
      sym__type,
    ACTIONS(568), 10,
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
  [18440] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(287), 1,
      sym_block_comment,
    STATE(490), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18475] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(288), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(556), 10,
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
  [18502] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(181), 1,
      sym_math_operator,
    STATE(289), 1,
      sym_block_comment,
    ACTIONS(312), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(310), 10,
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
  [18531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      anon_sym_GT,
    STATE(290), 1,
      sym_block_comment,
    ACTIONS(696), 12,
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
  [18558] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_block_comment,
    STATE(508), 1,
      sym__type,
    STATE(513), 1,
      sym_base_type,
    ACTIONS(568), 10,
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
  [18589] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(292), 1,
      sym_block_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18622] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_VERTEX,
    STATE(293), 1,
      sym_block_comment,
    STATE(513), 1,
      sym_base_type,
    STATE(621), 1,
      sym__type,
    ACTIONS(568), 10,
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
  [18653] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(704), 1,
      anon_sym_AS,
    STATE(185), 1,
      sym_math_operator,
    STATE(294), 1,
      sym_block_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18686] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(181), 1,
      sym_math_operator,
    STATE(295), 1,
      sym_block_comment,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(494), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(440), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(296), 1,
      sym_block_comment,
    ACTIONS(184), 12,
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
  [18741] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym_block_comment,
    STATE(410), 1,
      sym_atomic_edge_type,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(534), 1,
      sym_disj_pattern,
    STATE(588), 1,
      sym_path_edge_pattern,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [18785] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_block_comment,
    STATE(410), 1,
      sym_atomic_edge_type,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(480), 1,
      sym_path_edge_pattern,
    STATE(534), 1,
      sym_disj_pattern,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [18829] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_math_operator,
    STATE(299), 1,
      sym_block_comment,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18859] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_VERTEX,
    STATE(281), 1,
      sym_base_type,
    STATE(300), 1,
      sym_block_comment,
    ACTIONS(710), 10,
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
  [18887] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_block_comment,
    STATE(410), 1,
      sym_atomic_edge_type,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(525), 1,
      sym_path_edge_pattern,
    STATE(534), 1,
      sym_disj_pattern,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [18931] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(714), 1,
      anon_sym_WHEN,
    STATE(185), 1,
      sym_math_operator,
    STATE(302), 1,
      sym_block_comment,
    STATE(429), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18963] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_block_comment,
    STATE(410), 1,
      sym_atomic_edge_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(424), 1,
      sym_edge_set_type,
    STATE(534), 1,
      sym_disj_pattern,
    STATE(588), 1,
      sym_path_edge_pattern,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [19007] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      sym_math_operator,
    STATE(304), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19036] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(305), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19065] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_GT,
    ACTIONS(722), 1,
      sym_name,
    STATE(306), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(387), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
  [19106] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(307), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19135] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      sym_math_operator,
    STATE(308), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19164] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_math_operator,
    STATE(309), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19193] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(310), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19222] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(730), 1,
      anon_sym_AND,
    STATE(185), 1,
      sym_math_operator,
    STATE(311), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19251] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_math_operator,
    STATE(312), 1,
      sym_block_comment,
    ACTIONS(440), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19280] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      sym_name,
    STATE(313), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(368), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
  [19318] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      sym_name,
    STATE(314), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(360), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
  [19356] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(620), 1,
      sym_atomic_edge_type,
    STATE(626), 1,
      sym_step_edge_types,
    STATE(714), 1,
      sym_step_edge_set,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [19394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(316), 1,
      sym_block_comment,
    ACTIONS(554), 10,
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
  [19416] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      sym_name,
    STATE(317), 1,
      sym_block_comment,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(423), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
  [19454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(318), 1,
      sym_block_comment,
    ACTIONS(736), 10,
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
  [19476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(319), 1,
      sym_block_comment,
    ACTIONS(554), 10,
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
  [19498] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      anon_sym_WHERE,
    ACTIONS(742), 1,
      anon_sym_ACCUM,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    STATE(320), 1,
      sym_block_comment,
    STATE(340), 1,
      sym_where_clause,
    STATE(375), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(382), 1,
      sym_accum_clause,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(709), 1,
      sym_limit_clause,
  [19538] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      anon_sym_DOT,
    ACTIONS(752), 1,
      anon_sym_PLUS_EQ,
    STATE(321), 1,
      sym_block_comment,
    STATE(326), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(748), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19566] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(620), 1,
      sym_atomic_edge_type,
    STATE(626), 1,
      sym_step_edge_types,
    STATE(712), 1,
      sym_step_edge_set,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [19604] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      sym_name,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(323), 1,
      sym_block_comment,
    STATE(330), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_atomic_vertex_type,
    STATE(344), 1,
      sym_vertex_set_type,
    STATE(391), 1,
      sym_step_vertex_set,
    ACTIONS(664), 2,
      anon_sym__,
      anon_sym_ANY,
  [19642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(324), 1,
      sym_block_comment,
    ACTIONS(754), 10,
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
  [19664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(325), 1,
      sym_block_comment,
    ACTIONS(556), 10,
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
  [19686] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      anon_sym_DOT,
    STATE(326), 1,
      sym_block_comment,
    STATE(329), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(756), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19711] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_LT,
    ACTIONS(680), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    STATE(327), 1,
      sym_block_comment,
    STATE(410), 1,
      sym_atomic_edge_type,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(441), 1,
      sym_atomic_edge_pattern,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [19746] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(760), 1,
      anon_sym_DASH,
    STATE(328), 1,
      sym_block_comment,
    STATE(345), 1,
      aux_sym_path_pattern_repeat1,
    STATE(350), 1,
      aux_sym_step_repeat1,
    ACTIONS(758), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19773] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      anon_sym_DOT,
    STATE(329), 2,
      sym_block_comment,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(762), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(769), 1,
      anon_sym_COLON,
    STATE(330), 1,
      sym_block_comment,
    ACTIONS(767), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_COLON,
    STATE(331), 1,
      sym_block_comment,
    ACTIONS(771), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19840] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      sym_block_comment,
    STATE(339), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(777), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19864] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(781), 1,
      anon_sym_DASH,
    STATE(333), 2,
      sym_block_comment,
      aux_sym_path_pattern_repeat1,
    ACTIONS(779), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19886] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_DASH,
    STATE(334), 1,
      sym_block_comment,
    STATE(345), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(758), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19910] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_COLON,
    STATE(335), 1,
      sym_block_comment,
    ACTIONS(771), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(336), 1,
      sym_block_comment,
    ACTIONS(786), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(337), 1,
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
  [19972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(338), 1,
      sym_block_comment,
    ACTIONS(790), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(339), 2,
      sym_block_comment,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(795), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20014] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_ACCUM,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      sym_block_comment,
    STATE(381), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(383), 1,
      sym_accum_clause,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(854), 1,
      sym_limit_clause,
  [20048] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(341), 1,
      sym_block_comment,
    ACTIONS(799), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20068] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    STATE(342), 1,
      sym_block_comment,
    ACTIONS(801), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(343), 1,
      sym_block_comment,
    ACTIONS(803), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20112] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(344), 1,
      sym_block_comment,
    ACTIONS(805), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20132] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_DASH,
    STATE(333), 1,
      aux_sym_path_pattern_repeat1,
    STATE(345), 1,
      sym_block_comment,
    ACTIONS(807), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20156] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_AT_AT,
    ACTIONS(813), 1,
      sym_name,
    STATE(346), 1,
      sym_block_comment,
    STATE(750), 1,
      sym_for_each_control,
    STATE(645), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20185] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      sym_block_comment,
    STATE(348), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(817), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      sym_block_comment,
    STATE(354), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(819), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(349), 1,
      sym_block_comment,
    ACTIONS(821), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_DASH,
    STATE(350), 1,
      sym_block_comment,
    STATE(352), 1,
      aux_sym_step_repeat1,
    ACTIONS(823), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20273] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym_DISTINCT,
    ACTIONS(831), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(351), 1,
      sym_block_comment,
    STATE(462), 1,
      sym_set_bag_expr,
  [20304] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_DASH,
    STATE(352), 2,
      sym_block_comment,
      aux_sym_step_repeat1,
    ACTIONS(833), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20325] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      sym_name,
    ACTIONS(838), 1,
      anon_sym_RANGE,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(353), 1,
      sym_block_comment,
    STATE(449), 1,
      sym_set_bag_expr,
  [20356] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(354), 2,
      sym_block_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(843), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20377] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_AT_AT,
    ACTIONS(813), 1,
      sym_name,
    STATE(355), 1,
      sym_block_comment,
    STATE(764), 1,
      sym_for_each_control,
    STATE(645), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(356), 1,
      sym_block_comment,
    ACTIONS(845), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(357), 1,
      sym_block_comment,
    ACTIONS(847), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(358), 1,
      sym_block_comment,
    ACTIONS(849), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20463] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(855), 1,
      sym_name,
    STATE(359), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_seed,
    STATE(634), 1,
      sym_global_accum_name,
    ACTIONS(853), 2,
      anon_sym__,
      anon_sym_ANY,
  [20492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(360), 1,
      sym_block_comment,
    ACTIONS(857), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(361), 1,
      sym_block_comment,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(362), 1,
      sym_block_comment,
    ACTIONS(861), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20549] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_CREATE,
    ACTIONS(11), 1,
      anon_sym_INTERPRET,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    STATE(363), 1,
      sym_block_comment,
    STATE(372), 1,
      aux_sym_gsql_repeat1,
    STATE(522), 1,
      sym__definition,
    STATE(617), 2,
      sym_create_query,
      sym_interpret_query,
  [20578] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(682), 1,
      sym_name,
    STATE(364), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_edge_set_type,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(476), 1,
      sym_atomic_edge_type,
    ACTIONS(678), 2,
      anon_sym__,
      anon_sym_ANY,
  [20607] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(365), 1,
      sym_block_comment,
    ACTIONS(865), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(366), 1,
      sym_block_comment,
    ACTIONS(867), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(367), 1,
      sym_block_comment,
    ACTIONS(795), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(368), 1,
      sym_block_comment,
    ACTIONS(869), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20683] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(369), 1,
      sym_block_comment,
    ACTIONS(871), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20702] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      sym_name,
    ACTIONS(873), 1,
      anon_sym_DISTINCT,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(370), 1,
      sym_block_comment,
    STATE(472), 1,
      sym_set_bag_expr,
  [20733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(371), 1,
      sym_block_comment,
    ACTIONS(875), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20752] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      ts_builtin_sym_end,
    ACTIONS(879), 1,
      anon_sym_CREATE,
    ACTIONS(882), 1,
      anon_sym_INTERPRET,
    STATE(522), 1,
      sym__definition,
    STATE(372), 2,
      sym_block_comment,
      aux_sym_gsql_repeat1,
    STATE(617), 2,
      sym_create_query,
      sym_interpret_query,
  [20779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(373), 1,
      sym_block_comment,
    ACTIONS(885), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(374), 1,
      sym_block_comment,
    ACTIONS(887), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(375), 1,
      sym_block_comment,
    STATE(399), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(854), 1,
      sym_limit_clause,
  [20845] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(376), 1,
      sym_block_comment,
    STATE(449), 1,
      sym_set_bag_expr,
  [20873] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(377), 1,
      sym_block_comment,
    STATE(450), 1,
      sym_set_bag_expr,
  [20901] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(378), 1,
      sym_block_comment,
  [20929] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(379), 1,
      sym_block_comment,
    ACTIONS(318), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20951] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      sym_digit,
    ACTIONS(635), 1,
      anon_sym_DASH,
    STATE(380), 1,
      sym_block_comment,
    STATE(593), 1,
      sym__numeric,
    STATE(57), 2,
      sym_integer,
      sym_real,
  [20977] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(381), 1,
      sym_block_comment,
    STATE(399), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(756), 1,
      sym_limit_clause,
  [21005] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(381), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(382), 1,
      sym_block_comment,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(854), 1,
      sym_limit_clause,
  [21033] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      sym_block_comment,
    STATE(388), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(756), 1,
      sym_limit_clause,
  [21061] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(384), 1,
      sym_block_comment,
    STATE(470), 1,
      sym_set_bag_expr,
  [21089] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(385), 1,
      sym_block_comment,
    STATE(472), 1,
      sym_set_bag_expr,
  [21117] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(288), 1,
      sym_set_bag_expr,
    STATE(386), 1,
      sym_block_comment,
  [21145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(387), 1,
      sym_block_comment,
    ACTIONS(893), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21163] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_LIMIT,
    ACTIONS(746), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    STATE(388), 1,
      sym_block_comment,
    STATE(399), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(557), 1,
      sym_post_accum_clause,
    STATE(708), 1,
      sym_limit_clause,
  [21191] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(389), 1,
      sym_block_comment,
    STATE(427), 1,
      sym_set_bag_expr,
  [21219] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(390), 1,
      sym_block_comment,
    STATE(451), 1,
      sym_set_bag_expr,
  [21247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(391), 1,
      sym_block_comment,
    ACTIONS(897), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [21265] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      anon_sym_AT_AT,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_global_accum_name,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(392), 1,
      sym_block_comment,
  [21293] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(393), 1,
      sym_block_comment,
    STATE(462), 1,
      sym_set_bag_expr,
  [21321] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(394), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(905), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym_block_comment,
    ACTIONS(907), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(396), 1,
      sym_block_comment,
    ACTIONS(843), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21379] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(855), 1,
      sym_name,
    STATE(397), 1,
      sym_block_comment,
    STATE(634), 1,
      sym_global_accum_name,
    STATE(635), 1,
      sym_seed,
    ACTIONS(853), 2,
      anon_sym__,
      anon_sym_ANY,
  [21405] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_name,
    STATE(25), 1,
      sym_name_dot,
    STATE(33), 1,
      sym_global_accum_name,
    STATE(282), 1,
      sym_set_bag_expr,
    STATE(398), 1,
      sym_block_comment,
  [21433] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_POST_DASHACCUM,
    STATE(557), 1,
      sym_post_accum_clause,
    ACTIONS(911), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(399), 2,
      sym_block_comment,
      aux_sym_gsql_select_block_repeat1,
  [21454] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_AS,
    STATE(400), 1,
      sym_block_comment,
    ACTIONS(629), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(401), 1,
      sym_block_comment,
    ACTIONS(817), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21490] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(402), 1,
      sym_block_comment,
    ACTIONS(916), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [21507] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(920), 1,
      anon_sym_DOT,
    STATE(403), 1,
      sym_block_comment,
    ACTIONS(918), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21526] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_WHERE,
    ACTIONS(928), 1,
      anon_sym_TO_CSV,
    STATE(404), 1,
      sym_block_comment,
    STATE(407), 1,
      aux_sym_print_stmt_repeat1,
  [21551] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(930), 1,
      sym_name,
    STATE(405), 1,
      sym_block_comment,
    STATE(828), 1,
      sym_file_path,
    STATE(831), 1,
      sym_string_literal,
  [21576] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(932), 1,
      sym_name,
    STATE(406), 1,
      sym_block_comment,
    STATE(793), 1,
      sym_file_path,
    STATE(831), 1,
      sym_string_literal,
  [21601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(407), 2,
      sym_block_comment,
      aux_sym_print_stmt_repeat1,
    ACTIONS(937), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21620] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(941), 1,
      anon_sym_WHERE,
    ACTIONS(943), 1,
      anon_sym_TO_CSV,
    STATE(404), 1,
      aux_sym_print_stmt_repeat1,
    STATE(408), 1,
      sym_block_comment,
  [21645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(947), 1,
      anon_sym_PIPE,
    STATE(409), 1,
      sym_block_comment,
    STATE(415), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(945), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21666] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(951), 1,
      anon_sym_GT,
    STATE(410), 1,
      sym_block_comment,
    ACTIONS(949), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(411), 1,
      sym_block_comment,
    ACTIONS(132), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21702] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      anon_sym_EQ,
    ACTIONS(955), 1,
      anon_sym_LT,
    ACTIONS(957), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(412), 1,
      sym_block_comment,
  [21727] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(959), 1,
      sym_name,
    STATE(413), 1,
      sym_block_comment,
    STATE(692), 1,
      sym_file_path,
    STATE(831), 1,
      sym_string_literal,
  [21752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(414), 1,
      sym_block_comment,
    ACTIONS(961), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_PIPE,
    STATE(415), 2,
      sym_block_comment,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(963), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(416), 1,
      sym_block_comment,
    ACTIONS(968), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21805] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(947), 1,
      anon_sym_PIPE,
    STATE(409), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(417), 1,
      sym_block_comment,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21826] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(951), 1,
      anon_sym_GT,
    STATE(418), 1,
      sym_block_comment,
    ACTIONS(949), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(972), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [21847] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(419), 1,
      sym_block_comment,
    ACTIONS(974), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(420), 1,
      sym_block_comment,
    ACTIONS(976), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [21881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(421), 1,
      sym_block_comment,
    ACTIONS(562), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21898] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(978), 1,
      sym_name,
    STATE(422), 1,
      sym_block_comment,
    STATE(724), 1,
      sym_file_path,
    STATE(831), 1,
      sym_string_literal,
  [21923] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(423), 1,
      sym_block_comment,
    ACTIONS(980), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21940] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(424), 1,
      sym_block_comment,
    STATE(529), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(961), 2,
      anon_sym_GT,
      anon_sym_DOT,
  [21963] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_LT,
    ACTIONS(986), 1,
      anon_sym_EQ,
    ACTIONS(988), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(425), 1,
      sym_block_comment,
  [21988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(426), 1,
      sym_block_comment,
    ACTIONS(974), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22005] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22023] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_STAR_SLASH,
    STATE(428), 1,
      sym_block_comment,
    STATE(464), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(992), 2,
      sym_newline,
      sym_comment_contents,
  [22043] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_WHEN,
    ACTIONS(996), 1,
      anon_sym_ELSE,
    ACTIONS(998), 1,
      anon_sym_END,
    STATE(429), 1,
      sym_block_comment,
    STATE(458), 1,
      aux_sym_query_body_case_stmt_repeat2,
  [22065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_LT,
    STATE(430), 1,
      sym_block_comment,
    ACTIONS(645), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22083] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(1002), 1,
      sym_name,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(431), 1,
      sym_block_comment,
    STATE(532), 1,
      sym_edge_set_type,
  [22105] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    ACTIONS(1006), 1,
      anon_sym_TO_CSV,
    STATE(432), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22125] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_WHEN,
    ACTIONS(1008), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(433), 2,
      sym_block_comment,
      aux_sym_dml_sub_case_stmt_repeat1,
  [22143] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    ACTIONS(1013), 1,
      sym_name,
    STATE(434), 1,
      sym_block_comment,
    STATE(530), 1,
      aux_sym_accum_type_repeat1,
    STATE(682), 1,
      sym_simple_size,
  [22165] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1017), 1,
      anon_sym_AT,
    STATE(435), 1,
      sym_block_comment,
    ACTIONS(1015), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22183] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(436), 1,
      sym_block_comment,
    STATE(473), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22203] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(437), 1,
      sym_block_comment,
    STATE(549), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22223] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(1019), 1,
      anon_sym_EQ,
    ACTIONS(1021), 1,
      anon_sym_PLUS_EQ,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(438), 1,
      sym_block_comment,
  [22245] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(439), 1,
      sym_block_comment,
    ACTIONS(1025), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22263] = 5,
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
  [22281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(441), 1,
      sym_block_comment,
    ACTIONS(963), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_AT,
    STATE(442), 1,
      sym_block_comment,
    ACTIONS(1031), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22315] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_AT_AT,
    ACTIONS(1035), 1,
      sym_name,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(443), 1,
      sym_block_comment,
    STATE(632), 1,
      sym_vertex_set_type,
  [22337] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(1002), 1,
      sym_name,
    STATE(416), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_block_comment,
    STATE(619), 1,
      sym_edge_set_type,
  [22359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_AT,
    STATE(445), 1,
      sym_block_comment,
    ACTIONS(1037), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1043), 1,
      anon_sym_WHEN,
    ACTIONS(1041), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(446), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat1,
  [22395] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_AT,
    STATE(447), 1,
      sym_block_comment,
    ACTIONS(1046), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(448), 1,
      sym_block_comment,
    ACTIONS(1050), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [22429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1052), 1,
      anon_sym_DO,
    STATE(449), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22447] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      anon_sym_DO,
    STATE(450), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      anon_sym_DO,
    STATE(451), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1058), 1,
      anon_sym_AT,
    STATE(452), 1,
      sym_block_comment,
    ACTIONS(1056), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1062), 1,
      anon_sym_AT,
    STATE(453), 1,
      sym_block_comment,
    ACTIONS(1060), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(454), 1,
      sym_block_comment,
    ACTIONS(1064), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [22535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    ACTIONS(688), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(455), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22553] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(456), 1,
      sym_block_comment,
    ACTIONS(937), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [22569] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    ACTIONS(1071), 1,
      anon_sym_TO_CSV,
    STATE(457), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1075), 1,
      anon_sym_WHEN,
    ACTIONS(1073), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(458), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat2,
  [22607] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1078), 1,
      anon_sym_ELSE,
    ACTIONS(1080), 1,
      anon_sym_END,
    ACTIONS(1082), 1,
      anon_sym_WHEN,
    STATE(433), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(459), 1,
      sym_block_comment,
  [22629] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1084), 1,
      anon_sym_LIMIT,
    ACTIONS(1086), 1,
      anon_sym_DO,
    STATE(460), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22649] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    ACTIONS(1013), 1,
      sym_name,
    STATE(461), 1,
      sym_block_comment,
    STATE(530), 1,
      aux_sym_accum_type_repeat1,
    STATE(779), 1,
      sym_simple_size,
  [22671] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22689] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1090), 1,
      anon_sym_ELSE,
    ACTIONS(1092), 1,
      anon_sym_END,
    ACTIONS(1094), 1,
      anon_sym_WHEN,
    STATE(446), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(463), 1,
      sym_block_comment,
  [22711] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1096), 2,
      sym_newline,
      sym_comment_contents,
    STATE(464), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [22729] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1101), 1,
      anon_sym_LIMIT,
    ACTIONS(1103), 1,
      anon_sym_DO,
    STATE(465), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22749] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1105), 1,
      anon_sym_STAR_SLASH,
    STATE(428), 1,
      aux_sym_block_comment_repeat1,
    STATE(466), 1,
      sym_block_comment,
    ACTIONS(992), 2,
      sym_newline,
      sym_comment_contents,
  [22769] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_arg_list_repeat1,
    STATE(467), 1,
      sym_block_comment,
    ACTIONS(1107), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [22789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(468), 1,
      sym_block_comment,
    ACTIONS(1109), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [22805] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    ACTIONS(688), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    STATE(469), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_block_comment,
    ACTIONS(1025), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22859] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22877] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_EQ,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
    STATE(473), 1,
      sym_block_comment,
    STATE(550), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [22899] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    STATE(474), 1,
      sym_block_comment,
    ACTIONS(1107), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [22919] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_EQ,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
    STATE(475), 1,
      sym_block_comment,
    STATE(543), 1,
      aux_sym_base_decl_stmt_repeat1,
  [22941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(476), 1,
      sym_block_comment,
    ACTIONS(1130), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(477), 1,
      sym_block_comment,
    ACTIONS(132), 4,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [22973] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_AT_AT,
    ACTIONS(1035), 1,
      sym_name,
    STATE(318), 1,
      sym_global_accum_name,
    STATE(478), 1,
      sym_block_comment,
    STATE(516), 1,
      sym_vertex_set_type,
  [22995] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(479), 2,
      sym_block_comment,
      aux_sym_for_each_control_repeat1,
  [23012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1141), 1,
      anon_sym_COLON,
    STATE(480), 1,
      sym_block_comment,
  [23031] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1143), 1,
      anon_sym_SQUOTE,
    ACTIONS(1145), 1,
      aux_sym_string_literal_token2,
    STATE(481), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat2,
  [23048] = 5,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1148), 1,
      anon_sym_DQUOTE,
    ACTIONS(1150), 1,
      aux_sym_string_literal_token1,
    STATE(482), 2,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [23065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(483), 1,
      sym_block_comment,
    ACTIONS(1109), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [23080] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1153), 1,
      anon_sym_SQUOTE,
    ACTIONS(1155), 1,
      aux_sym_string_literal_token2,
    STATE(484), 1,
      sym_block_comment,
    STATE(558), 1,
      aux_sym_string_literal_repeat2,
  [23099] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1157), 1,
      anon_sym_ELSE,
    ACTIONS(1159), 1,
      anon_sym_END,
    STATE(485), 1,
      sym_block_comment,
    STATE(572), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [23118] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    STATE(486), 1,
      sym_block_comment,
    STATE(554), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [23137] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1163), 1,
      anon_sym_AT,
    ACTIONS(1165), 1,
      sym_name,
    STATE(487), 1,
      sym_block_comment,
    STATE(595), 1,
      sym_local_accum_name,
  [23156] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      sym_block_comment,
    STATE(584), 1,
      aux_sym_accum_type_repeat2,
  [23175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1171), 1,
      anon_sym_THEN,
    STATE(489), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23192] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_block_comment,
    STATE(561), 1,
      aux_sym_base_decl_stmt_repeat1,
  [23211] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1157), 1,
      anon_sym_ELSE,
    ACTIONS(1159), 1,
      anon_sym_END,
    STATE(491), 1,
      sym_block_comment,
    STATE(572), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [23230] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(492), 1,
      sym_block_comment,
    ACTIONS(1175), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(493), 1,
      sym_block_comment,
    ACTIONS(356), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1179), 1,
      anon_sym_DOT_STAR,
    STATE(494), 1,
      sym_block_comment,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [23277] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    STATE(495), 1,
      sym_block_comment,
    STATE(546), 1,
      aux_sym_seed_set_repeat1,
  [23296] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1185), 1,
      anon_sym_ELSE,
    ACTIONS(1188), 1,
      anon_sym_END,
    STATE(496), 2,
      sym_block_comment,
      aux_sym_query_body_if_stmt_repeat1,
  [23313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1190), 1,
      anon_sym_THEN,
    STATE(497), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23330] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_OR,
    ACTIONS(1194), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1196), 1,
      anon_sym_QUERY,
    STATE(498), 1,
      sym_block_comment,
  [23349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(499), 1,
      sym_block_comment,
    ACTIONS(1198), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23364] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_GT,
    STATE(500), 1,
      sym_block_comment,
    STATE(533), 1,
      aux_sym_func_call_stmt_repeat1,
  [23383] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      sym_block_comment,
    STATE(509), 1,
      aux_sym_query_params_repeat1,
  [23402] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
    ACTIONS(1210), 1,
      sym_name,
    STATE(419), 1,
      sym_simple_set,
    STATE(502), 1,
      sym_block_comment,
  [23421] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
    ACTIONS(1212), 1,
      aux_sym_string_literal_token1,
    STATE(503), 1,
      sym_block_comment,
    STATE(541), 1,
      aux_sym_string_literal_repeat1,
  [23440] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_query_params_repeat1,
    STATE(504), 1,
      sym_block_comment,
  [23459] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1216), 1,
      anon_sym_THEN,
    STATE(505), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23476] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(506), 1,
      sym_block_comment,
  [23495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1222), 1,
      anon_sym_EQ,
    STATE(507), 1,
      sym_block_comment,
    ACTIONS(1220), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23512] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_GT,
    STATE(500), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(508), 1,
      sym_block_comment,
  [23531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    STATE(509), 2,
      sym_block_comment,
      aux_sym_query_params_repeat1,
  [23548] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_GT,
    STATE(510), 1,
      sym_block_comment,
    STATE(533), 1,
      aux_sym_func_call_stmt_repeat1,
  [23567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(511), 1,
      sym_block_comment,
    ACTIONS(1233), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23582] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1235), 1,
      anon_sym_ELSE,
    ACTIONS(1237), 1,
      anon_sym_END,
    STATE(512), 1,
      sym_block_comment,
    STATE(562), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
  [23601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(513), 1,
      sym_block_comment,
    ACTIONS(1239), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23616] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_RBRACK,
    STATE(514), 2,
      sym_block_comment,
      aux_sym_v_expr_set_repeat1,
  [23633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23650] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(1250), 1,
      anon_sym_PIPE2,
    STATE(516), 1,
      sym_block_comment,
    STATE(526), 1,
      aux_sym_step_vertex_types_repeat1,
  [23669] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1252), 1,
      anon_sym_AT,
    ACTIONS(1254), 1,
      sym_name,
    STATE(146), 1,
      sym_local_accum_name,
    STATE(517), 1,
      sym_block_comment,
  [23688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(518), 1,
      sym_block_comment,
    ACTIONS(1256), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1258), 1,
      sym_name,
    STATE(334), 1,
      sym_step_source_set,
    STATE(396), 1,
      sym_path_pattern,
    STATE(519), 1,
      sym_block_comment,
  [23722] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_RBRACE,
    STATE(520), 2,
      sym_block_comment,
      aux_sym_seed_set_repeat1,
  [23739] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1163), 1,
      anon_sym_AT,
    ACTIONS(1265), 1,
      sym_name,
    STATE(321), 1,
      sym_local_accum_name,
    STATE(521), 1,
      sym_block_comment,
  [23758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(522), 1,
      sym_block_comment,
    ACTIONS(1267), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23773] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1269), 1,
      anon_sym_AT,
    ACTIONS(1271), 1,
      sym_name,
    STATE(20), 1,
      sym_local_accum_name,
    STATE(523), 1,
      sym_block_comment,
  [23792] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1273), 1,
      anon_sym_THEN,
    STATE(524), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(525), 1,
      sym_block_comment,
    ACTIONS(1275), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23824] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1250), 1,
      anon_sym_PIPE2,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      sym_block_comment,
    STATE(527), 1,
      aux_sym_step_vertex_types_repeat1,
  [23843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    ACTIONS(1281), 1,
      anon_sym_PIPE2,
    STATE(527), 2,
      sym_block_comment,
      aux_sym_step_vertex_types_repeat1,
  [23860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(512), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(528), 1,
      sym_block_comment,
    ACTIONS(1284), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [23877] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym_block_comment,
    STATE(542), 1,
      aux_sym_step_edge_types_repeat1,
  [23896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    ACTIONS(1288), 1,
      anon_sym_DO,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(530), 1,
      sym_block_comment,
  [23915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(531), 1,
      sym_block_comment,
    ACTIONS(1275), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23930] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(529), 1,
      aux_sym_step_edge_types_repeat1,
    STATE(532), 1,
      sym_block_comment,
  [23949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_GT,
    STATE(533), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat1,
  [23966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(534), 1,
      sym_block_comment,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23981] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_GT,
    STATE(535), 1,
      sym_block_comment,
    STATE(540), 1,
      aux_sym_accum_type_repeat4,
  [24000] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_GT,
    STATE(536), 1,
      sym_block_comment,
    STATE(539), 1,
      aux_sym_accum_type_repeat4,
  [24019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(537), 1,
      sym_block_comment,
    ACTIONS(1299), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24034] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(1301), 1,
      anon_sym_PLUS_EQ,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(538), 1,
      sym_block_comment,
  [24053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_GT,
    STATE(539), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat4,
  [24070] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1167), 1,
      anon_sym_GT,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_accum_type_repeat4,
    STATE(540), 1,
      sym_block_comment,
  [24089] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1212), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    STATE(482), 1,
      aux_sym_string_literal_repeat1,
    STATE(541), 1,
      sym_block_comment,
  [24108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(1312), 1,
      anon_sym_PIPE,
    STATE(542), 2,
      sym_block_comment,
      aux_sym_step_edge_types_repeat1,
  [24125] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_SEMI,
    STATE(543), 1,
      sym_block_comment,
    STATE(561), 1,
      aux_sym_base_decl_stmt_repeat1,
  [24144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1317), 1,
      anon_sym_THEN,
    STATE(544), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24161] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
    ACTIONS(1210), 1,
      sym_name,
    STATE(471), 1,
      sym_simple_set,
    STATE(545), 1,
      sym_block_comment,
  [24180] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1319), 1,
      anon_sym_RBRACE,
    STATE(520), 1,
      aux_sym_seed_set_repeat1,
    STATE(546), 1,
      sym_block_comment,
  [24199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(547), 1,
      sym_block_comment,
    ACTIONS(1321), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24214] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RBRACK,
    STATE(514), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(548), 1,
      sym_block_comment,
  [24233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1329), 1,
      anon_sym_EQ,
    STATE(549), 1,
      sym_block_comment,
    ACTIONS(1327), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_SEMI,
    STATE(550), 1,
      sym_block_comment,
    STATE(554), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [24269] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    ACTIONS(1335), 1,
      anon_sym_EQ,
    ACTIONS(1337), 1,
      anon_sym_PLUS_EQ,
    STATE(551), 1,
      sym_block_comment,
  [24288] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    STATE(479), 1,
      aux_sym_for_each_control_repeat1,
    STATE(552), 1,
      sym_block_comment,
  [24307] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    STATE(486), 1,
      aux_sym_accum_decl_stmt_repeat1,
    STATE(553), 1,
      sym_block_comment,
  [24326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    STATE(554), 2,
      sym_block_comment,
      aux_sym_accum_decl_stmt_repeat1,
  [24343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_EQ,
    STATE(555), 1,
      sym_block_comment,
    ACTIONS(1348), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24360] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1352), 1,
      anon_sym_THEN,
    STATE(556), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(557), 1,
      sym_block_comment,
    ACTIONS(1354), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24392] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1155), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1308), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(558), 1,
      sym_block_comment,
  [24411] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_GT,
    STATE(510), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(559), 1,
      sym_block_comment,
  [24430] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1212), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    STATE(560), 1,
      sym_block_comment,
    STATE(574), 1,
      aux_sym_string_literal_repeat1,
  [24449] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1348), 1,
      anon_sym_SEMI,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    STATE(561), 2,
      sym_block_comment,
      aux_sym_base_decl_stmt_repeat1,
  [24466] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1363), 1,
      anon_sym_ELSE,
    ACTIONS(1366), 1,
      anon_sym_END,
    STATE(562), 2,
      sym_block_comment,
      aux_sym_dml_sub_if_stmt_repeat1,
  [24483] = 4,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    STATE(563), 1,
      sym_block_comment,
    ACTIONS(1368), 3,
      sym_newline,
      sym_comment_contents,
      anon_sym_STAR_SLASH,
  [24498] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    STATE(564), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat2,
  [24515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24532] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1155), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1358), 1,
      anon_sym_SQUOTE,
    STATE(566), 1,
      sym_block_comment,
    STATE(577), 1,
      aux_sym_string_literal_repeat2,
  [24551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(567), 1,
      sym_block_comment,
    ACTIONS(645), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24566] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1377), 1,
      anon_sym_ELSE,
    ACTIONS(1379), 1,
      anon_sym_END,
    STATE(512), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(568), 1,
      sym_block_comment,
  [24585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1381), 1,
      anon_sym_THEN,
    STATE(569), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24602] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(571), 1,
      sym_block_comment,
    ACTIONS(1385), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24634] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1387), 1,
      anon_sym_ELSE,
    ACTIONS(1389), 1,
      anon_sym_END,
    STATE(496), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(572), 1,
      sym_block_comment,
  [24653] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1252), 1,
      anon_sym_AT,
    ACTIONS(1391), 1,
      sym_name,
    STATE(146), 1,
      sym_local_accum_name,
    STATE(573), 1,
      sym_block_comment,
  [24672] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1212), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1393), 1,
      anon_sym_DQUOTE,
    STATE(482), 1,
      aux_sym_string_literal_repeat1,
    STATE(574), 1,
      sym_block_comment,
  [24691] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_GT,
    STATE(536), 1,
      aux_sym_accum_type_repeat4,
    STATE(575), 1,
      sym_block_comment,
  [24710] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1397), 1,
      anon_sym_RBRACK,
    STATE(548), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(576), 1,
      sym_block_comment,
  [24729] = 6,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    ACTIONS(1155), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1393), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      aux_sym_string_literal_repeat2,
    STATE(577), 1,
      sym_block_comment,
  [24748] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(578), 1,
      sym_block_comment,
    ACTIONS(1399), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24763] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1401), 1,
      anon_sym_THEN,
    STATE(579), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24780] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1269), 1,
      anon_sym_AT,
    ACTIONS(1403), 1,
      sym_name,
    STATE(20), 1,
      sym_local_accum_name,
    STATE(580), 1,
      sym_block_comment,
  [24799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(581), 1,
      sym_block_comment,
    ACTIONS(668), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(582), 1,
      sym_block_comment,
    ACTIONS(1405), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24846] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(564), 1,
      aux_sym_accum_type_repeat2,
    STATE(584), 1,
      sym_block_comment,
  [24865] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(586), 1,
      sym_block_comment,
    ACTIONS(1226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1413), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1415), 1,
      anon_sym_QUERY,
    STATE(587), 1,
      sym_block_comment,
  [24912] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      sym_block_comment,
  [24928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(589), 1,
      sym_block_comment,
    ACTIONS(1419), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [24942] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      sym_block_comment,
    STATE(614), 1,
      aux_sym_accum_type_repeat3,
  [24958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(591), 1,
      sym_block_comment,
    ACTIONS(1423), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [24972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(592), 1,
      sym_block_comment,
    ACTIONS(1425), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [24986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(593), 1,
      sym_block_comment,
    ACTIONS(1427), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25000] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_block_comment,
    STATE(774), 1,
      sym_parameter_list,
  [25016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(595), 1,
      sym_block_comment,
    ACTIONS(1431), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [25030] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(379), 1,
      aux_sym_accum_type_repeat1,
    STATE(596), 1,
      sym_block_comment,
  [25046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1433), 1,
      anon_sym_SYNTAX,
    ACTIONS(1435), 1,
      anon_sym_LBRACE,
    STATE(597), 1,
      sym_block_comment,
  [25062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1246), 1,
      anon_sym_NULL,
    ACTIONS(1437), 1,
      anon_sym_NOT,
    STATE(598), 1,
      sym_block_comment,
  [25078] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1439), 1,
      anon_sym_IN,
    ACTIONS(1441), 1,
      anon_sym_LIKE,
    STATE(599), 1,
      sym_block_comment,
  [25094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
    STATE(600), 1,
      sym_block_comment,
    STATE(820), 1,
      sym_parameter_list,
  [25110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(601), 1,
      sym_block_comment,
  [25126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    ACTIONS(1335), 1,
      anon_sym_EQ,
    STATE(602), 1,
      sym_block_comment,
  [25142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    ACTIONS(1445), 1,
      anon_sym_DASH_GT,
    STATE(603), 1,
      sym_block_comment,
  [25158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(604), 1,
      sym_block_comment,
    ACTIONS(1447), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(605), 1,
      sym_block_comment,
    ACTIONS(1449), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1451), 1,
      anon_sym_SYNTAX,
    ACTIONS(1453), 1,
      anon_sym_LBRACE,
    STATE(606), 1,
      sym_block_comment,
  [25202] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1455), 1,
      anon_sym_IN,
    ACTIONS(1457), 1,
      anon_sym_COLON,
    STATE(607), 1,
      sym_block_comment,
  [25218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(608), 1,
      sym_block_comment,
    ACTIONS(1459), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [25232] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym_digit,
    STATE(207), 1,
      aux_sym_accum_type_repeat1,
    STATE(609), 1,
      sym_block_comment,
  [25248] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(506), 1,
      aux_sym_accum_type_repeat1,
    STATE(610), 1,
      sym_block_comment,
  [25264] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(611), 1,
      sym_block_comment,
  [25280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1461), 1,
      anon_sym_SYNTAX,
    ACTIONS(1463), 1,
      anon_sym_LBRACE,
    STATE(612), 1,
      sym_block_comment,
  [25296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(613), 1,
      sym_block_comment,
    ACTIONS(1465), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      sym_block_comment,
    STATE(639), 1,
      aux_sym_accum_type_repeat3,
  [25326] = 4,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    STATE(615), 1,
      sym_block_comment,
    ACTIONS(1469), 2,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token2,
  [25340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(616), 1,
      sym_block_comment,
    ACTIONS(1471), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1473), 1,
      anon_sym_LBRACE,
    STATE(582), 1,
      sym_query_body,
    STATE(617), 1,
      sym_block_comment,
  [25370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(618), 1,
      sym_block_comment,
    ACTIONS(1475), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(619), 1,
      sym_block_comment,
    ACTIONS(1310), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [25398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(620), 1,
      sym_block_comment,
    ACTIONS(972), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(621), 1,
      sym_block_comment,
    ACTIONS(1293), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [25426] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
    STATE(622), 1,
      sym_block_comment,
    STATE(852), 1,
      sym_parameter_list,
  [25442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(623), 1,
      sym_block_comment,
    ACTIONS(1477), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25456] = 4,
    ACTIONS(78), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_line_comment,
    STATE(624), 1,
      sym_block_comment,
    ACTIONS(1479), 2,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
  [25470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1481), 1,
      anon_sym_FROM,
    STATE(320), 1,
      sym_from_clause,
    STATE(625), 1,
      sym_block_comment,
  [25486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    ACTIONS(1485), 1,
      anon_sym_COLON,
    STATE(626), 1,
      sym_block_comment,
  [25502] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(627), 1,
      sym_block_comment,
    ACTIONS(1487), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(628), 1,
      sym_block_comment,
    ACTIONS(1489), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1082), 1,
      anon_sym_WHEN,
    STATE(459), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(629), 1,
      sym_block_comment,
  [25546] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(630), 1,
      sym_block_comment,
  [25562] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
    STATE(631), 1,
      sym_block_comment,
    STATE(660), 1,
      sym_parameter_list,
  [25578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(632), 1,
      sym_block_comment,
    ACTIONS(1279), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
  [25592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(633), 1,
      sym_block_comment,
    ACTIONS(1284), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(634), 1,
      sym_block_comment,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(635), 1,
      sym_block_comment,
    ACTIONS(1263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25634] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      sym_digit,
    STATE(40), 1,
      aux_sym_accum_type_repeat1,
    STATE(636), 1,
      sym_block_comment,
  [25650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(637), 1,
      sym_block_comment,
    ACTIONS(1244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(638), 1,
      sym_block_comment,
    ACTIONS(1491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    STATE(639), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat3,
  [25692] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    ACTIONS(1498), 1,
      anon_sym_DASH_GT,
    STATE(640), 1,
      sym_block_comment,
  [25708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(641), 1,
      sym_block_comment,
    ACTIONS(1500), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25722] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1502), 1,
      anon_sym_SYNTAX,
    ACTIONS(1504), 1,
      anon_sym_LBRACE,
    STATE(642), 1,
      sym_block_comment,
  [25738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    STATE(552), 1,
      aux_sym_for_each_control_repeat1,
    STATE(643), 1,
      sym_block_comment,
  [25754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(644), 1,
      sym_block_comment,
    ACTIONS(1506), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25768] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1508), 1,
      anon_sym_IN,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    STATE(645), 1,
      sym_block_comment,
  [25784] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
    STATE(646), 1,
      sym_block_comment,
    STATE(713), 1,
      sym_parameter_list,
  [25800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1512), 1,
      anon_sym_SYNTAX,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
    STATE(647), 1,
      sym_block_comment,
  [25816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1516), 1,
      anon_sym_DOT,
    ACTIONS(1518), 1,
      sym_digit,
    STATE(648), 1,
      sym_block_comment,
  [25832] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1520), 1,
      anon_sym_DOT,
    ACTIONS(1522), 1,
      anon_sym_DO,
    STATE(649), 1,
      sym_block_comment,
  [25848] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym_digit,
    STATE(206), 1,
      aux_sym_accum_type_repeat1,
    STATE(650), 1,
      sym_block_comment,
  [25864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1524), 1,
      anon_sym_EQ,
    STATE(651), 1,
      sym_block_comment,
  [25877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1526), 1,
      sym_name,
    STATE(652), 1,
      sym_block_comment,
  [25890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1528), 1,
      sym_name,
    STATE(653), 1,
      sym_block_comment,
  [25903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1530), 1,
      anon_sym_LBRACE,
    STATE(654), 1,
      sym_block_comment,
  [25916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1532), 1,
      anon_sym_GT,
    STATE(655), 1,
      sym_block_comment,
  [25929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1534), 1,
      anon_sym_LPAREN,
    STATE(656), 1,
      sym_block_comment,
  [25942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1536), 1,
      anon_sym_GT,
    STATE(657), 1,
      sym_block_comment,
  [25955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      sym_block_comment,
  [25968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1540), 1,
      anon_sym_COMMA,
    STATE(659), 1,
      sym_block_comment,
  [25981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1542), 1,
      anon_sym_FOR,
    STATE(660), 1,
      sym_block_comment,
  [25994] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1544), 1,
      anon_sym_LPAREN,
    STATE(661), 1,
      sym_block_comment,
  [26007] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1546), 1,
      sym_name,
    STATE(662), 1,
      sym_block_comment,
  [26020] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1548), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_block_comment,
  [26033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1550), 1,
      anon_sym_DASH,
    STATE(664), 1,
      sym_block_comment,
  [26046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1552), 1,
      anon_sym_GT,
    STATE(665), 1,
      sym_block_comment,
  [26059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1554), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_block_comment,
  [26072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      sym_block_comment,
  [26085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_block_comment,
  [26098] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1560), 1,
      anon_sym_FILTER,
    STATE(669), 1,
      sym_block_comment,
  [26111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1562), 1,
      anon_sym_DASH,
    STATE(670), 1,
      sym_block_comment,
  [26124] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1564), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_block_comment,
  [26137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1566), 1,
      anon_sym_LPAREN,
    STATE(672), 1,
      sym_block_comment,
  [26150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(673), 1,
      sym_block_comment,
  [26163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1570), 1,
      sym_name,
    STATE(674), 1,
      sym_block_comment,
  [26176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1572), 1,
      anon_sym_END,
    STATE(675), 1,
      sym_block_comment,
  [26189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(676), 1,
      sym_block_comment,
  [26202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1574), 1,
      sym_name,
    STATE(677), 1,
      sym_block_comment,
  [26215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1576), 1,
      anon_sym_END,
    STATE(678), 1,
      sym_block_comment,
  [26228] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1578), 1,
      anon_sym_END,
    STATE(679), 1,
      sym_block_comment,
  [26241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1580), 1,
      anon_sym_END,
    STATE(680), 1,
      sym_block_comment,
  [26254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1582), 1,
      anon_sym_LBRACE,
    STATE(681), 1,
      sym_block_comment,
  [26267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1584), 1,
      anon_sym_DO,
    STATE(682), 1,
      sym_block_comment,
  [26280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1586), 1,
      anon_sym_END,
    STATE(683), 1,
      sym_block_comment,
  [26293] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1588), 1,
      anon_sym_DASH,
    STATE(684), 1,
      sym_block_comment,
  [26306] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1590), 1,
      anon_sym_STEP,
    STATE(685), 1,
      sym_block_comment,
  [26319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1592), 1,
      sym_name,
    STATE(686), 1,
      sym_block_comment,
  [26332] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1594), 1,
      sym_name,
    STATE(687), 1,
      sym_block_comment,
  [26345] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1596), 1,
      anon_sym_DASH,
    STATE(688), 1,
      sym_block_comment,
  [26358] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1598), 1,
      sym_name,
    STATE(689), 1,
      sym_block_comment,
  [26371] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1600), 1,
      sym_name,
    STATE(690), 1,
      sym_block_comment,
  [26384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      sym_block_comment,
  [26397] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1604), 1,
      anon_sym_SEMI,
    STATE(692), 1,
      sym_block_comment,
  [26410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1604), 1,
      anon_sym_SEMI,
    STATE(693), 1,
      sym_block_comment,
  [26423] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1606), 1,
      anon_sym_END,
    STATE(694), 1,
      sym_block_comment,
  [26436] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1608), 1,
      anon_sym_IF,
    STATE(695), 1,
      sym_block_comment,
  [26449] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1610), 1,
      sym_name,
    STATE(696), 1,
      sym_block_comment,
  [26462] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(697), 1,
      sym_block_comment,
  [26475] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1614), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      sym_block_comment,
  [26488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1616), 1,
      sym_name,
    STATE(699), 1,
      sym_block_comment,
  [26501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1618), 1,
      anon_sym_SEMI,
    STATE(700), 1,
      sym_block_comment,
  [26514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1620), 1,
      anon_sym_IF,
    STATE(701), 1,
      sym_block_comment,
  [26527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1622), 1,
      anon_sym_LPAREN,
    STATE(702), 1,
      sym_block_comment,
  [26540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1624), 1,
      anon_sym_END,
    STATE(703), 1,
      sym_block_comment,
  [26553] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1626), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      sym_block_comment,
  [26566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1628), 1,
      anon_sym_FILTER,
    STATE(705), 1,
      sym_block_comment,
  [26579] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1630), 1,
      anon_sym_LBRACE,
    STATE(706), 1,
      sym_block_comment,
  [26592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1632), 1,
      sym_name,
    STATE(707), 1,
      sym_block_comment,
  [26605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1634), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      sym_block_comment,
  [26618] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(709), 1,
      sym_block_comment,
  [26631] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    STATE(710), 1,
      sym_block_comment,
  [26644] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1636), 1,
      sym_name,
    STATE(711), 1,
      sym_block_comment,
  [26657] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      sym_block_comment,
  [26670] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1640), 1,
      anon_sym_FOR,
    STATE(713), 1,
      sym_block_comment,
  [26683] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      sym_block_comment,
  [26696] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1644), 1,
      anon_sym_GRAPH,
    STATE(715), 1,
      sym_block_comment,
  [26709] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1646), 1,
      sym_digit,
    STATE(716), 1,
      sym_block_comment,
  [26722] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1648), 1,
      sym_name,
    STATE(717), 1,
      sym_block_comment,
  [26735] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1650), 1,
      anon_sym_DO,
    STATE(718), 1,
      sym_block_comment,
  [26748] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1652), 1,
      anon_sym_GT,
    STATE(719), 1,
      sym_block_comment,
  [26761] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1654), 1,
      anon_sym_MIN,
    STATE(720), 1,
      sym_block_comment,
  [26774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(721), 1,
      sym_block_comment,
  [26787] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
    STATE(722), 1,
      sym_block_comment,
  [26800] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(723), 1,
      sym_block_comment,
  [26813] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1658), 1,
      anon_sym_SEMI,
    STATE(724), 1,
      sym_block_comment,
  [26826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1658), 1,
      anon_sym_SEMI,
    STATE(725), 1,
      sym_block_comment,
  [26839] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1660), 1,
      sym_name,
    STATE(726), 1,
      sym_block_comment,
  [26852] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1662), 1,
      sym_name,
    STATE(727), 1,
      sym_block_comment,
  [26865] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1664), 1,
      sym_name,
    STATE(728), 1,
      sym_block_comment,
  [26878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1666), 1,
      anon_sym_FOR,
    STATE(729), 1,
      sym_block_comment,
  [26891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1668), 1,
      anon_sym_GRAPH,
    STATE(730), 1,
      sym_block_comment,
  [26904] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1670), 1,
      anon_sym_END,
    STATE(731), 1,
      sym_block_comment,
  [26917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1672), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_block_comment,
  [26930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1674), 1,
      sym_digit,
    STATE(733), 1,
      sym_block_comment,
  [26943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1676), 1,
      anon_sym_SEMI,
    STATE(734), 1,
      sym_block_comment,
  [26956] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1678), 1,
      sym_name,
    STATE(735), 1,
      sym_block_comment,
  [26969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1680), 1,
      anon_sym_END,
    STATE(736), 1,
      sym_block_comment,
  [26982] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1682), 1,
      sym_name,
    STATE(737), 1,
      sym_block_comment,
  [26995] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1684), 1,
      sym_name,
    STATE(738), 1,
      sym_block_comment,
  [27008] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1686), 1,
      sym_name,
    STATE(739), 1,
      sym_block_comment,
  [27021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1688), 1,
      sym_digit,
    STATE(740), 1,
      sym_block_comment,
  [27034] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(741), 1,
      sym_block_comment,
  [27047] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1690), 1,
      sym_name,
    STATE(742), 1,
      sym_block_comment,
  [27060] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
    STATE(743), 1,
      sym_block_comment,
  [27073] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1694), 1,
      anon_sym_LPAREN,
    STATE(744), 1,
      sym_block_comment,
  [27086] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1109), 1,
      sym_name,
    STATE(745), 1,
      sym_block_comment,
  [27099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1696), 1,
      sym_name,
    STATE(746), 1,
      sym_block_comment,
  [27112] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1698), 1,
      anon_sym_AVG,
    STATE(747), 1,
      sym_block_comment,
  [27125] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1700), 1,
      anon_sym_SEMI,
    STATE(748), 1,
      sym_block_comment,
  [27138] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1702), 1,
      anon_sym_LBRACE,
    STATE(749), 1,
      sym_block_comment,
  [27151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1704), 1,
      anon_sym_DO,
    STATE(750), 1,
      sym_block_comment,
  [27164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1706), 1,
      anon_sym_THEN,
    STATE(751), 1,
      sym_block_comment,
  [27177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1708), 1,
      sym_name,
    STATE(752), 1,
      sym_block_comment,
  [27190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1710), 1,
      anon_sym_GRAPH,
    STATE(753), 1,
      sym_block_comment,
  [27203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1712), 1,
      anon_sym_NULL,
    STATE(754), 1,
      sym_block_comment,
  [27216] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1714), 1,
      anon_sym_LPAREN,
    STATE(755), 1,
      sym_block_comment,
  [27229] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    STATE(756), 1,
      sym_block_comment,
  [27242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1716), 1,
      anon_sym_SEMI,
    STATE(757), 1,
      sym_block_comment,
  [27255] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1718), 1,
      anon_sym_FROM,
    STATE(758), 1,
      sym_block_comment,
  [27268] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1720), 1,
      anon_sym_MAX,
    STATE(759), 1,
      sym_block_comment,
  [27281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1722), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_block_comment,
  [27294] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1724), 1,
      anon_sym_LPAREN,
    STATE(761), 1,
      sym_block_comment,
  [27307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1726), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_block_comment,
  [27320] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1728), 1,
      anon_sym_LT,
    STATE(763), 1,
      sym_block_comment,
  [27333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1730), 1,
      anon_sym_DO,
    STATE(764), 1,
      sym_block_comment,
  [27346] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1732), 1,
      anon_sym_GRAPH,
    STATE(765), 1,
      sym_block_comment,
  [27359] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1734), 1,
      anon_sym_END,
    STATE(766), 1,
      sym_block_comment,
  [27372] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(767), 1,
      sym_block_comment,
  [27385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1736), 1,
      anon_sym_LPAREN,
    STATE(768), 1,
      sym_block_comment,
  [27398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1738), 1,
      sym_name,
    STATE(769), 1,
      sym_block_comment,
  [27411] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1740), 1,
      anon_sym_LPAREN,
    STATE(770), 1,
      sym_block_comment,
  [27424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1742), 1,
      anon_sym_RPAREN,
    STATE(771), 1,
      sym_block_comment,
  [27437] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1744), 1,
      anon_sym_LT,
    STATE(772), 1,
      sym_block_comment,
  [27450] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1746), 1,
      anon_sym_FOR,
    STATE(773), 1,
      sym_block_comment,
  [27463] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1748), 1,
      anon_sym_FOR,
    STATE(774), 1,
      sym_block_comment,
  [27476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1288), 1,
      anon_sym_DO,
    STATE(775), 1,
      sym_block_comment,
  [27489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1750), 1,
      sym_name,
    STATE(776), 1,
      sym_block_comment,
  [27502] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1752), 1,
      anon_sym_QUERY,
    STATE(777), 1,
      sym_block_comment,
  [27515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1754), 1,
      sym_name,
    STATE(778), 1,
      sym_block_comment,
  [27528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1756), 1,
      anon_sym_DO,
    STATE(779), 1,
      sym_block_comment,
  [27541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1758), 1,
      anon_sym_RPAREN,
    STATE(780), 1,
      sym_block_comment,
  [27554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1760), 1,
      anon_sym_END,
    STATE(781), 1,
      sym_block_comment,
  [27567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1762), 1,
      anon_sym_SEMI,
    STATE(782), 1,
      sym_block_comment,
  [27580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1764), 1,
      anon_sym_LPAREN,
    STATE(783), 1,
      sym_block_comment,
  [27593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1766), 1,
      anon_sym_SEMI,
    STATE(784), 1,
      sym_block_comment,
  [27606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1768), 1,
      anon_sym_SEMI,
    STATE(785), 1,
      sym_block_comment,
  [27619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1770), 1,
      sym_name,
    STATE(786), 1,
      sym_block_comment,
  [27632] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1772), 1,
      anon_sym_SEMI,
    STATE(787), 1,
      sym_block_comment,
  [27645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1774), 1,
      sym_name,
    STATE(788), 1,
      sym_block_comment,
  [27658] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1776), 1,
      sym_name,
    STATE(789), 1,
      sym_block_comment,
  [27671] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1778), 1,
      anon_sym_LT,
    STATE(790), 1,
      sym_block_comment,
  [27684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1780), 1,
      anon_sym_LT,
    STATE(791), 1,
      sym_block_comment,
  [27697] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1782), 1,
      anon_sym_LT,
    STATE(792), 1,
      sym_block_comment,
  [27710] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(793), 1,
      sym_block_comment,
  [27723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1784), 1,
      anon_sym_LT,
    STATE(794), 1,
      sym_block_comment,
  [27736] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1786), 1,
      anon_sym_LT,
    STATE(795), 1,
      sym_block_comment,
  [27749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1788), 1,
      anon_sym_LT,
    STATE(796), 1,
      sym_block_comment,
  [27762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(797), 1,
      sym_block_comment,
  [27775] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1790), 1,
      sym_name,
    STATE(798), 1,
      sym_block_comment,
  [27788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1792), 1,
      sym_name,
    STATE(799), 1,
      sym_block_comment,
  [27801] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1794), 1,
      anon_sym_SEMI,
    STATE(800), 1,
      sym_block_comment,
  [27814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1796), 1,
      sym_name,
    STATE(801), 1,
      sym_block_comment,
  [27827] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1798), 1,
      anon_sym_LBRACK,
    STATE(802), 1,
      sym_block_comment,
  [27840] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1800), 1,
      anon_sym_LT,
    STATE(803), 1,
      sym_block_comment,
  [27853] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1802), 1,
      anon_sym_GT,
    STATE(804), 1,
      sym_block_comment,
  [27866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1804), 1,
      anon_sym_SEMI,
    STATE(805), 1,
      sym_block_comment,
  [27879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1806), 1,
      anon_sym_SEMI,
    STATE(806), 1,
      sym_block_comment,
  [27892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1808), 1,
      anon_sym_END,
    STATE(807), 1,
      sym_block_comment,
  [27905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1810), 1,
      anon_sym_LT,
    STATE(808), 1,
      sym_block_comment,
  [27918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(809), 1,
      sym_block_comment,
  [27931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1812), 1,
      anon_sym_SEMI,
    STATE(810), 1,
      sym_block_comment,
  [27944] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1814), 1,
      anon_sym_TUPLE,
    STATE(811), 1,
      sym_block_comment,
  [27957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1816), 1,
      anon_sym_END,
    STATE(812), 1,
      sym_block_comment,
  [27970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1818), 1,
      sym_digit,
    STATE(813), 1,
      sym_block_comment,
  [27983] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1820), 1,
      anon_sym_SEMI,
    STATE(814), 1,
      sym_block_comment,
  [27996] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1822), 1,
      anon_sym_LPAREN,
    STATE(815), 1,
      sym_block_comment,
  [28009] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1824), 1,
      sym_name,
    STATE(816), 1,
      sym_block_comment,
  [28022] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1826), 1,
      sym_name,
    STATE(817), 1,
      sym_block_comment,
  [28035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1828), 1,
      anon_sym_GT,
    STATE(818), 1,
      sym_block_comment,
  [28048] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
    STATE(819), 1,
      sym_block_comment,
  [28061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1832), 1,
      anon_sym_FOR,
    STATE(820), 1,
      sym_block_comment,
  [28074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1834), 1,
      sym_digit,
    STATE(821), 1,
      sym_block_comment,
  [28087] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(822), 1,
      sym_block_comment,
  [28100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    STATE(823), 1,
      sym_block_comment,
  [28113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1836), 1,
      anon_sym_SUM,
    STATE(824), 1,
      sym_block_comment,
  [28126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1838), 1,
      sym_name,
    STATE(825), 1,
      sym_block_comment,
  [28139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(826), 1,
      sym_block_comment,
  [28152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_block_comment,
  [28165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    STATE(828), 1,
      sym_block_comment,
  [28178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1840), 1,
      sym_name,
    STATE(829), 1,
      sym_block_comment,
  [28191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1842), 1,
      sym_name,
    STATE(830), 1,
      sym_block_comment,
  [28204] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1844), 1,
      anon_sym_SEMI,
    STATE(831), 1,
      sym_block_comment,
  [28217] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1846), 1,
      anon_sym_RPAREN,
    STATE(832), 1,
      sym_block_comment,
  [28230] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
    STATE(833), 1,
      sym_block_comment,
  [28243] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(834), 1,
      sym_block_comment,
  [28256] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(835), 1,
      sym_block_comment,
  [28269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1850), 1,
      sym_name,
    STATE(836), 1,
      sym_block_comment,
  [28282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1852), 1,
      anon_sym_RPAREN,
    STATE(837), 1,
      sym_block_comment,
  [28295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_block_comment,
  [28308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1856), 1,
      anon_sym_SEMI,
    STATE(839), 1,
      sym_block_comment,
  [28321] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1858), 1,
      anon_sym_V2,
    STATE(840), 1,
      sym_block_comment,
  [28334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1860), 1,
      sym_name,
    STATE(841), 1,
      sym_block_comment,
  [28347] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1862), 1,
      sym_name,
    STATE(842), 1,
      sym_block_comment,
  [28360] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1864), 1,
      sym_name,
    STATE(843), 1,
      sym_block_comment,
  [28373] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1866), 1,
      sym_name,
    STATE(844), 1,
      sym_block_comment,
  [28386] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1868), 1,
      anon_sym_QUERY,
    STATE(845), 1,
      sym_block_comment,
  [28399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1870), 1,
      anon_sym_REPLACE,
    STATE(846), 1,
      sym_block_comment,
  [28412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
    STATE(847), 1,
      sym_block_comment,
  [28425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1874), 1,
      sym_name,
    STATE(848), 1,
      sym_block_comment,
  [28438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1876), 1,
      sym_name,
    STATE(849), 1,
      sym_block_comment,
  [28451] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
    STATE(850), 1,
      sym_block_comment,
  [28464] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1880), 1,
      anon_sym_GRAPH,
    STATE(851), 1,
      sym_block_comment,
  [28477] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1882), 1,
      anon_sym_FOR,
    STATE(852), 1,
      sym_block_comment,
  [28490] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1884), 1,
      anon_sym_LPAREN,
    STATE(853), 1,
      sym_block_comment,
  [28503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    STATE(854), 1,
      sym_block_comment,
  [28516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1886), 1,
      sym_name,
    STATE(855), 1,
      sym_block_comment,
  [28529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1888), 1,
      sym_name,
    STATE(856), 1,
      sym_block_comment,
  [28542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1890), 1,
      sym_name,
    STATE(857), 1,
      sym_block_comment,
  [28555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1892), 1,
      anon_sym_LPAREN,
    STATE(858), 1,
      sym_block_comment,
  [28568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1894), 1,
      anon_sym_LPAREN,
    STATE(859), 1,
      sym_block_comment,
  [28581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1896), 1,
      anon_sym_LPAREN,
    STATE(860), 1,
      sym_block_comment,
  [28594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
    STATE(861), 1,
      sym_block_comment,
  [28607] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
    STATE(862), 1,
      sym_block_comment,
  [28620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1902), 1,
      ts_builtin_sym_end,
    STATE(863), 1,
      sym_block_comment,
  [28633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1904), 1,
      anon_sym_QUERY,
    STATE(864), 1,
      sym_block_comment,
  [28646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1906), 1,
      anon_sym_LPAREN,
    STATE(865), 1,
      sym_block_comment,
  [28659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1908), 1,
      anon_sym_LPAREN,
    STATE(866), 1,
      sym_block_comment,
  [28672] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1910), 1,
      anon_sym_LPAREN,
    STATE(867), 1,
      sym_block_comment,
  [28685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1912), 1,
      anon_sym_LPAREN,
    STATE(868), 1,
      sym_block_comment,
  [28698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1914), 1,
      sym_name,
    STATE(869), 1,
      sym_block_comment,
  [28711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1916), 1,
      sym_name,
    STATE(870), 1,
      sym_block_comment,
  [28724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1918), 1,
      anon_sym_LPAREN,
    STATE(871), 1,
      sym_block_comment,
  [28737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1920), 1,
      anon_sym_LPAREN,
    STATE(872), 1,
      sym_block_comment,
  [28750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1922), 1,
      anon_sym_LPAREN,
    STATE(873), 1,
      sym_block_comment,
  [28763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1924), 1,
      sym_name,
    STATE(874), 1,
      sym_block_comment,
  [28776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1926), 1,
      sym_name,
    STATE(875), 1,
      sym_block_comment,
  [28789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1928), 1,
      anon_sym_SELECT,
    STATE(876), 1,
      sym_block_comment,
  [28802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1930), 1,
      anon_sym_FILTER,
    STATE(877), 1,
      sym_block_comment,
  [28815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1932), 1,
      anon_sym_FILTER,
    STATE(878), 1,
      sym_block_comment,
  [28828] = 1,
    ACTIONS(1934), 1,
      ts_builtin_sym_end,
  [28832] = 1,
    ACTIONS(1936), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 133,
  [SMALL_STATE(4)] = 268,
  [SMALL_STATE(5)] = 403,
  [SMALL_STATE(6)] = 525,
  [SMALL_STATE(7)] = 647,
  [SMALL_STATE(8)] = 769,
  [SMALL_STATE(9)] = 891,
  [SMALL_STATE(10)] = 1013,
  [SMALL_STATE(11)] = 1135,
  [SMALL_STATE(12)] = 1257,
  [SMALL_STATE(13)] = 1379,
  [SMALL_STATE(14)] = 1501,
  [SMALL_STATE(15)] = 1623,
  [SMALL_STATE(16)] = 1745,
  [SMALL_STATE(17)] = 1867,
  [SMALL_STATE(18)] = 1928,
  [SMALL_STATE(19)] = 1993,
  [SMALL_STATE(20)] = 2053,
  [SMALL_STATE(21)] = 2113,
  [SMALL_STATE(22)] = 2173,
  [SMALL_STATE(23)] = 2237,
  [SMALL_STATE(24)] = 2301,
  [SMALL_STATE(25)] = 2361,
  [SMALL_STATE(26)] = 2423,
  [SMALL_STATE(27)] = 2485,
  [SMALL_STATE(28)] = 2545,
  [SMALL_STATE(29)] = 2602,
  [SMALL_STATE(30)] = 2659,
  [SMALL_STATE(31)] = 2716,
  [SMALL_STATE(32)] = 2775,
  [SMALL_STATE(33)] = 2832,
  [SMALL_STATE(34)] = 2888,
  [SMALL_STATE(35)] = 2944,
  [SMALL_STATE(36)] = 3000,
  [SMALL_STATE(37)] = 3058,
  [SMALL_STATE(38)] = 3115,
  [SMALL_STATE(39)] = 3174,
  [SMALL_STATE(40)] = 3233,
  [SMALL_STATE(41)] = 3292,
  [SMALL_STATE(42)] = 3349,
  [SMALL_STATE(43)] = 3405,
  [SMALL_STATE(44)] = 3459,
  [SMALL_STATE(45)] = 3513,
  [SMALL_STATE(46)] = 3567,
  [SMALL_STATE(47)] = 3623,
  [SMALL_STATE(48)] = 3679,
  [SMALL_STATE(49)] = 3735,
  [SMALL_STATE(50)] = 3788,
  [SMALL_STATE(51)] = 3841,
  [SMALL_STATE(52)] = 3894,
  [SMALL_STATE(53)] = 3947,
  [SMALL_STATE(54)] = 4000,
  [SMALL_STATE(55)] = 4053,
  [SMALL_STATE(56)] = 4106,
  [SMALL_STATE(57)] = 4159,
  [SMALL_STATE(58)] = 4212,
  [SMALL_STATE(59)] = 4265,
  [SMALL_STATE(60)] = 4318,
  [SMALL_STATE(61)] = 4371,
  [SMALL_STATE(62)] = 4424,
  [SMALL_STATE(63)] = 4477,
  [SMALL_STATE(64)] = 4530,
  [SMALL_STATE(65)] = 4583,
  [SMALL_STATE(66)] = 4636,
  [SMALL_STATE(67)] = 4689,
  [SMALL_STATE(68)] = 4742,
  [SMALL_STATE(69)] = 4847,
  [SMALL_STATE(70)] = 4898,
  [SMALL_STATE(71)] = 4949,
  [SMALL_STATE(72)] = 5000,
  [SMALL_STATE(73)] = 5051,
  [SMALL_STATE(74)] = 5109,
  [SMALL_STATE(75)] = 5168,
  [SMALL_STATE(76)] = 5242,
  [SMALL_STATE(77)] = 5316,
  [SMALL_STATE(78)] = 5390,
  [SMALL_STATE(79)] = 5464,
  [SMALL_STATE(80)] = 5538,
  [SMALL_STATE(81)] = 5612,
  [SMALL_STATE(82)] = 5686,
  [SMALL_STATE(83)] = 5760,
  [SMALL_STATE(84)] = 5834,
  [SMALL_STATE(85)] = 5908,
  [SMALL_STATE(86)] = 5982,
  [SMALL_STATE(87)] = 6056,
  [SMALL_STATE(88)] = 6153,
  [SMALL_STATE(89)] = 6224,
  [SMALL_STATE(90)] = 6321,
  [SMALL_STATE(91)] = 6413,
  [SMALL_STATE(92)] = 6507,
  [SMALL_STATE(93)] = 6601,
  [SMALL_STATE(94)] = 6695,
  [SMALL_STATE(95)] = 6789,
  [SMALL_STATE(96)] = 6883,
  [SMALL_STATE(97)] = 6977,
  [SMALL_STATE(98)] = 7071,
  [SMALL_STATE(99)] = 7163,
  [SMALL_STATE(100)] = 7255,
  [SMALL_STATE(101)] = 7321,
  [SMALL_STATE(102)] = 7413,
  [SMALL_STATE(103)] = 7505,
  [SMALL_STATE(104)] = 7597,
  [SMALL_STATE(105)] = 7689,
  [SMALL_STATE(106)] = 7783,
  [SMALL_STATE(107)] = 7877,
  [SMALL_STATE(108)] = 7969,
  [SMALL_STATE(109)] = 8061,
  [SMALL_STATE(110)] = 8155,
  [SMALL_STATE(111)] = 8249,
  [SMALL_STATE(112)] = 8341,
  [SMALL_STATE(113)] = 8435,
  [SMALL_STATE(114)] = 8527,
  [SMALL_STATE(115)] = 8619,
  [SMALL_STATE(116)] = 8711,
  [SMALL_STATE(117)] = 8803,
  [SMALL_STATE(118)] = 8897,
  [SMALL_STATE(119)] = 8989,
  [SMALL_STATE(120)] = 9083,
  [SMALL_STATE(121)] = 9177,
  [SMALL_STATE(122)] = 9271,
  [SMALL_STATE(123)] = 9365,
  [SMALL_STATE(124)] = 9457,
  [SMALL_STATE(125)] = 9549,
  [SMALL_STATE(126)] = 9643,
  [SMALL_STATE(127)] = 9735,
  [SMALL_STATE(128)] = 9827,
  [SMALL_STATE(129)] = 9919,
  [SMALL_STATE(130)] = 10011,
  [SMALL_STATE(131)] = 10105,
  [SMALL_STATE(132)] = 10197,
  [SMALL_STATE(133)] = 10286,
  [SMALL_STATE(134)] = 10375,
  [SMALL_STATE(135)] = 10426,
  [SMALL_STATE(136)] = 10515,
  [SMALL_STATE(137)] = 10562,
  [SMALL_STATE(138)] = 10651,
  [SMALL_STATE(139)] = 10704,
  [SMALL_STATE(140)] = 10793,
  [SMALL_STATE(141)] = 10882,
  [SMALL_STATE(142)] = 10971,
  [SMALL_STATE(143)] = 11060,
  [SMALL_STATE(144)] = 11111,
  [SMALL_STATE(145)] = 11200,
  [SMALL_STATE(146)] = 11289,
  [SMALL_STATE(147)] = 11335,
  [SMALL_STATE(148)] = 11421,
  [SMALL_STATE(149)] = 11507,
  [SMALL_STATE(150)] = 11593,
  [SMALL_STATE(151)] = 11643,
  [SMALL_STATE(152)] = 11729,
  [SMALL_STATE(153)] = 11815,
  [SMALL_STATE(154)] = 11861,
  [SMALL_STATE(155)] = 11947,
  [SMALL_STATE(156)] = 12033,
  [SMALL_STATE(157)] = 12103,
  [SMALL_STATE(158)] = 12151,
  [SMALL_STATE(159)] = 12237,
  [SMALL_STATE(160)] = 12323,
  [SMALL_STATE(161)] = 12409,
  [SMALL_STATE(162)] = 12495,
  [SMALL_STATE(163)] = 12541,
  [SMALL_STATE(164)] = 12627,
  [SMALL_STATE(165)] = 12713,
  [SMALL_STATE(166)] = 12763,
  [SMALL_STATE(167)] = 12849,
  [SMALL_STATE(168)] = 12935,
  [SMALL_STATE(169)] = 13021,
  [SMALL_STATE(170)] = 13107,
  [SMALL_STATE(171)] = 13175,
  [SMALL_STATE(172)] = 13261,
  [SMALL_STATE(173)] = 13307,
  [SMALL_STATE(174)] = 13353,
  [SMALL_STATE(175)] = 13439,
  [SMALL_STATE(176)] = 13525,
  [SMALL_STATE(177)] = 13595,
  [SMALL_STATE(178)] = 13641,
  [SMALL_STATE(179)] = 13727,
  [SMALL_STATE(180)] = 13813,
  [SMALL_STATE(181)] = 13899,
  [SMALL_STATE(182)] = 13985,
  [SMALL_STATE(183)] = 14071,
  [SMALL_STATE(184)] = 14119,
  [SMALL_STATE(185)] = 14205,
  [SMALL_STATE(186)] = 14291,
  [SMALL_STATE(187)] = 14377,
  [SMALL_STATE(188)] = 14463,
  [SMALL_STATE(189)] = 14549,
  [SMALL_STATE(190)] = 14592,
  [SMALL_STATE(191)] = 14639,
  [SMALL_STATE(192)] = 14682,
  [SMALL_STATE(193)] = 14747,
  [SMALL_STATE(194)] = 14790,
  [SMALL_STATE(195)] = 14833,
  [SMALL_STATE(196)] = 14876,
  [SMALL_STATE(197)] = 14921,
  [SMALL_STATE(198)] = 14966,
  [SMALL_STATE(199)] = 15008,
  [SMALL_STATE(200)] = 15050,
  [SMALL_STATE(201)] = 15120,
  [SMALL_STATE(202)] = 15190,
  [SMALL_STATE(203)] = 15234,
  [SMALL_STATE(204)] = 15276,
  [SMALL_STATE(205)] = 15320,
  [SMALL_STATE(206)] = 15363,
  [SMALL_STATE(207)] = 15408,
  [SMALL_STATE(208)] = 15453,
  [SMALL_STATE(209)] = 15498,
  [SMALL_STATE(210)] = 15541,
  [SMALL_STATE(211)] = 15581,
  [SMALL_STATE(212)] = 15621,
  [SMALL_STATE(213)] = 15661,
  [SMALL_STATE(214)] = 15703,
  [SMALL_STATE(215)] = 15749,
  [SMALL_STATE(216)] = 15791,
  [SMALL_STATE(217)] = 15833,
  [SMALL_STATE(218)] = 15875,
  [SMALL_STATE(219)] = 15917,
  [SMALL_STATE(220)] = 15956,
  [SMALL_STATE(221)] = 15995,
  [SMALL_STATE(222)] = 16034,
  [SMALL_STATE(223)] = 16075,
  [SMALL_STATE(224)] = 16114,
  [SMALL_STATE(225)] = 16153,
  [SMALL_STATE(226)] = 16192,
  [SMALL_STATE(227)] = 16231,
  [SMALL_STATE(228)] = 16270,
  [SMALL_STATE(229)] = 16309,
  [SMALL_STATE(230)] = 16348,
  [SMALL_STATE(231)] = 16387,
  [SMALL_STATE(232)] = 16426,
  [SMALL_STATE(233)] = 16465,
  [SMALL_STATE(234)] = 16504,
  [SMALL_STATE(235)] = 16543,
  [SMALL_STATE(236)] = 16582,
  [SMALL_STATE(237)] = 16621,
  [SMALL_STATE(238)] = 16660,
  [SMALL_STATE(239)] = 16699,
  [SMALL_STATE(240)] = 16737,
  [SMALL_STATE(241)] = 16775,
  [SMALL_STATE(242)] = 16813,
  [SMALL_STATE(243)] = 16856,
  [SMALL_STATE(244)] = 16899,
  [SMALL_STATE(245)] = 16943,
  [SMALL_STATE(246)] = 16975,
  [SMALL_STATE(247)] = 17019,
  [SMALL_STATE(248)] = 17051,
  [SMALL_STATE(249)] = 17086,
  [SMALL_STATE(250)] = 17129,
  [SMALL_STATE(251)] = 17164,
  [SMALL_STATE(252)] = 17199,
  [SMALL_STATE(253)] = 17242,
  [SMALL_STATE(254)] = 17277,
  [SMALL_STATE(255)] = 17312,
  [SMALL_STATE(256)] = 17353,
  [SMALL_STATE(257)] = 17388,
  [SMALL_STATE(258)] = 17434,
  [SMALL_STATE(259)] = 17472,
  [SMALL_STATE(260)] = 17510,
  [SMALL_STATE(261)] = 17553,
  [SMALL_STATE(262)] = 17586,
  [SMALL_STATE(263)] = 17617,
  [SMALL_STATE(264)] = 17648,
  [SMALL_STATE(265)] = 17691,
  [SMALL_STATE(266)] = 17734,
  [SMALL_STATE(267)] = 17767,
  [SMALL_STATE(268)] = 17815,
  [SMALL_STATE(269)] = 17843,
  [SMALL_STATE(270)] = 17877,
  [SMALL_STATE(271)] = 17915,
  [SMALL_STATE(272)] = 17949,
  [SMALL_STATE(273)] = 17977,
  [SMALL_STATE(274)] = 18011,
  [SMALL_STATE(275)] = 18045,
  [SMALL_STATE(276)] = 18073,
  [SMALL_STATE(277)] = 18109,
  [SMALL_STATE(278)] = 18143,
  [SMALL_STATE(279)] = 18181,
  [SMALL_STATE(280)] = 18211,
  [SMALL_STATE(281)] = 18261,
  [SMALL_STATE(282)] = 18289,
  [SMALL_STATE(283)] = 18316,
  [SMALL_STATE(284)] = 18347,
  [SMALL_STATE(285)] = 18378,
  [SMALL_STATE(286)] = 18409,
  [SMALL_STATE(287)] = 18440,
  [SMALL_STATE(288)] = 18475,
  [SMALL_STATE(289)] = 18502,
  [SMALL_STATE(290)] = 18531,
  [SMALL_STATE(291)] = 18558,
  [SMALL_STATE(292)] = 18589,
  [SMALL_STATE(293)] = 18622,
  [SMALL_STATE(294)] = 18653,
  [SMALL_STATE(295)] = 18686,
  [SMALL_STATE(296)] = 18717,
  [SMALL_STATE(297)] = 18741,
  [SMALL_STATE(298)] = 18785,
  [SMALL_STATE(299)] = 18829,
  [SMALL_STATE(300)] = 18859,
  [SMALL_STATE(301)] = 18887,
  [SMALL_STATE(302)] = 18931,
  [SMALL_STATE(303)] = 18963,
  [SMALL_STATE(304)] = 19007,
  [SMALL_STATE(305)] = 19036,
  [SMALL_STATE(306)] = 19065,
  [SMALL_STATE(307)] = 19106,
  [SMALL_STATE(308)] = 19135,
  [SMALL_STATE(309)] = 19164,
  [SMALL_STATE(310)] = 19193,
  [SMALL_STATE(311)] = 19222,
  [SMALL_STATE(312)] = 19251,
  [SMALL_STATE(313)] = 19280,
  [SMALL_STATE(314)] = 19318,
  [SMALL_STATE(315)] = 19356,
  [SMALL_STATE(316)] = 19394,
  [SMALL_STATE(317)] = 19416,
  [SMALL_STATE(318)] = 19454,
  [SMALL_STATE(319)] = 19476,
  [SMALL_STATE(320)] = 19498,
  [SMALL_STATE(321)] = 19538,
  [SMALL_STATE(322)] = 19566,
  [SMALL_STATE(323)] = 19604,
  [SMALL_STATE(324)] = 19642,
  [SMALL_STATE(325)] = 19664,
  [SMALL_STATE(326)] = 19686,
  [SMALL_STATE(327)] = 19711,
  [SMALL_STATE(328)] = 19746,
  [SMALL_STATE(329)] = 19773,
  [SMALL_STATE(330)] = 19796,
  [SMALL_STATE(331)] = 19818,
  [SMALL_STATE(332)] = 19840,
  [SMALL_STATE(333)] = 19864,
  [SMALL_STATE(334)] = 19886,
  [SMALL_STATE(335)] = 19910,
  [SMALL_STATE(336)] = 19932,
  [SMALL_STATE(337)] = 19952,
  [SMALL_STATE(338)] = 19972,
  [SMALL_STATE(339)] = 19992,
  [SMALL_STATE(340)] = 20014,
  [SMALL_STATE(341)] = 20048,
  [SMALL_STATE(342)] = 20068,
  [SMALL_STATE(343)] = 20092,
  [SMALL_STATE(344)] = 20112,
  [SMALL_STATE(345)] = 20132,
  [SMALL_STATE(346)] = 20156,
  [SMALL_STATE(347)] = 20185,
  [SMALL_STATE(348)] = 20208,
  [SMALL_STATE(349)] = 20231,
  [SMALL_STATE(350)] = 20250,
  [SMALL_STATE(351)] = 20273,
  [SMALL_STATE(352)] = 20304,
  [SMALL_STATE(353)] = 20325,
  [SMALL_STATE(354)] = 20356,
  [SMALL_STATE(355)] = 20377,
  [SMALL_STATE(356)] = 20406,
  [SMALL_STATE(357)] = 20425,
  [SMALL_STATE(358)] = 20444,
  [SMALL_STATE(359)] = 20463,
  [SMALL_STATE(360)] = 20492,
  [SMALL_STATE(361)] = 20511,
  [SMALL_STATE(362)] = 20530,
  [SMALL_STATE(363)] = 20549,
  [SMALL_STATE(364)] = 20578,
  [SMALL_STATE(365)] = 20607,
  [SMALL_STATE(366)] = 20626,
  [SMALL_STATE(367)] = 20645,
  [SMALL_STATE(368)] = 20664,
  [SMALL_STATE(369)] = 20683,
  [SMALL_STATE(370)] = 20702,
  [SMALL_STATE(371)] = 20733,
  [SMALL_STATE(372)] = 20752,
  [SMALL_STATE(373)] = 20779,
  [SMALL_STATE(374)] = 20798,
  [SMALL_STATE(375)] = 20817,
  [SMALL_STATE(376)] = 20845,
  [SMALL_STATE(377)] = 20873,
  [SMALL_STATE(378)] = 20901,
  [SMALL_STATE(379)] = 20929,
  [SMALL_STATE(380)] = 20951,
  [SMALL_STATE(381)] = 20977,
  [SMALL_STATE(382)] = 21005,
  [SMALL_STATE(383)] = 21033,
  [SMALL_STATE(384)] = 21061,
  [SMALL_STATE(385)] = 21089,
  [SMALL_STATE(386)] = 21117,
  [SMALL_STATE(387)] = 21145,
  [SMALL_STATE(388)] = 21163,
  [SMALL_STATE(389)] = 21191,
  [SMALL_STATE(390)] = 21219,
  [SMALL_STATE(391)] = 21247,
  [SMALL_STATE(392)] = 21265,
  [SMALL_STATE(393)] = 21293,
  [SMALL_STATE(394)] = 21321,
  [SMALL_STATE(395)] = 21341,
  [SMALL_STATE(396)] = 21361,
  [SMALL_STATE(397)] = 21379,
  [SMALL_STATE(398)] = 21405,
  [SMALL_STATE(399)] = 21433,
  [SMALL_STATE(400)] = 21454,
  [SMALL_STATE(401)] = 21473,
  [SMALL_STATE(402)] = 21490,
  [SMALL_STATE(403)] = 21507,
  [SMALL_STATE(404)] = 21526,
  [SMALL_STATE(405)] = 21551,
  [SMALL_STATE(406)] = 21576,
  [SMALL_STATE(407)] = 21601,
  [SMALL_STATE(408)] = 21620,
  [SMALL_STATE(409)] = 21645,
  [SMALL_STATE(410)] = 21666,
  [SMALL_STATE(411)] = 21685,
  [SMALL_STATE(412)] = 21702,
  [SMALL_STATE(413)] = 21727,
  [SMALL_STATE(414)] = 21752,
  [SMALL_STATE(415)] = 21769,
  [SMALL_STATE(416)] = 21788,
  [SMALL_STATE(417)] = 21805,
  [SMALL_STATE(418)] = 21826,
  [SMALL_STATE(419)] = 21847,
  [SMALL_STATE(420)] = 21864,
  [SMALL_STATE(421)] = 21881,
  [SMALL_STATE(422)] = 21898,
  [SMALL_STATE(423)] = 21923,
  [SMALL_STATE(424)] = 21940,
  [SMALL_STATE(425)] = 21963,
  [SMALL_STATE(426)] = 21988,
  [SMALL_STATE(427)] = 22005,
  [SMALL_STATE(428)] = 22023,
  [SMALL_STATE(429)] = 22043,
  [SMALL_STATE(430)] = 22065,
  [SMALL_STATE(431)] = 22083,
  [SMALL_STATE(432)] = 22105,
  [SMALL_STATE(433)] = 22125,
  [SMALL_STATE(434)] = 22143,
  [SMALL_STATE(435)] = 22165,
  [SMALL_STATE(436)] = 22183,
  [SMALL_STATE(437)] = 22203,
  [SMALL_STATE(438)] = 22223,
  [SMALL_STATE(439)] = 22245,
  [SMALL_STATE(440)] = 22263,
  [SMALL_STATE(441)] = 22281,
  [SMALL_STATE(442)] = 22297,
  [SMALL_STATE(443)] = 22315,
  [SMALL_STATE(444)] = 22337,
  [SMALL_STATE(445)] = 22359,
  [SMALL_STATE(446)] = 22377,
  [SMALL_STATE(447)] = 22395,
  [SMALL_STATE(448)] = 22413,
  [SMALL_STATE(449)] = 22429,
  [SMALL_STATE(450)] = 22447,
  [SMALL_STATE(451)] = 22465,
  [SMALL_STATE(452)] = 22483,
  [SMALL_STATE(453)] = 22501,
  [SMALL_STATE(454)] = 22519,
  [SMALL_STATE(455)] = 22535,
  [SMALL_STATE(456)] = 22553,
  [SMALL_STATE(457)] = 22569,
  [SMALL_STATE(458)] = 22589,
  [SMALL_STATE(459)] = 22607,
  [SMALL_STATE(460)] = 22629,
  [SMALL_STATE(461)] = 22649,
  [SMALL_STATE(462)] = 22671,
  [SMALL_STATE(463)] = 22689,
  [SMALL_STATE(464)] = 22711,
  [SMALL_STATE(465)] = 22729,
  [SMALL_STATE(466)] = 22749,
  [SMALL_STATE(467)] = 22769,
  [SMALL_STATE(468)] = 22789,
  [SMALL_STATE(469)] = 22805,
  [SMALL_STATE(470)] = 22823,
  [SMALL_STATE(471)] = 22841,
  [SMALL_STATE(472)] = 22859,
  [SMALL_STATE(473)] = 22877,
  [SMALL_STATE(474)] = 22899,
  [SMALL_STATE(475)] = 22919,
  [SMALL_STATE(476)] = 22941,
  [SMALL_STATE(477)] = 22957,
  [SMALL_STATE(478)] = 22973,
  [SMALL_STATE(479)] = 22995,
  [SMALL_STATE(480)] = 23012,
  [SMALL_STATE(481)] = 23031,
  [SMALL_STATE(482)] = 23048,
  [SMALL_STATE(483)] = 23065,
  [SMALL_STATE(484)] = 23080,
  [SMALL_STATE(485)] = 23099,
  [SMALL_STATE(486)] = 23118,
  [SMALL_STATE(487)] = 23137,
  [SMALL_STATE(488)] = 23156,
  [SMALL_STATE(489)] = 23175,
  [SMALL_STATE(490)] = 23192,
  [SMALL_STATE(491)] = 23211,
  [SMALL_STATE(492)] = 23230,
  [SMALL_STATE(493)] = 23245,
  [SMALL_STATE(494)] = 23260,
  [SMALL_STATE(495)] = 23277,
  [SMALL_STATE(496)] = 23296,
  [SMALL_STATE(497)] = 23313,
  [SMALL_STATE(498)] = 23330,
  [SMALL_STATE(499)] = 23349,
  [SMALL_STATE(500)] = 23364,
  [SMALL_STATE(501)] = 23383,
  [SMALL_STATE(502)] = 23402,
  [SMALL_STATE(503)] = 23421,
  [SMALL_STATE(504)] = 23440,
  [SMALL_STATE(505)] = 23459,
  [SMALL_STATE(506)] = 23476,
  [SMALL_STATE(507)] = 23495,
  [SMALL_STATE(508)] = 23512,
  [SMALL_STATE(509)] = 23531,
  [SMALL_STATE(510)] = 23548,
  [SMALL_STATE(511)] = 23567,
  [SMALL_STATE(512)] = 23582,
  [SMALL_STATE(513)] = 23601,
  [SMALL_STATE(514)] = 23616,
  [SMALL_STATE(515)] = 23633,
  [SMALL_STATE(516)] = 23650,
  [SMALL_STATE(517)] = 23669,
  [SMALL_STATE(518)] = 23688,
  [SMALL_STATE(519)] = 23703,
  [SMALL_STATE(520)] = 23722,
  [SMALL_STATE(521)] = 23739,
  [SMALL_STATE(522)] = 23758,
  [SMALL_STATE(523)] = 23773,
  [SMALL_STATE(524)] = 23792,
  [SMALL_STATE(525)] = 23809,
  [SMALL_STATE(526)] = 23824,
  [SMALL_STATE(527)] = 23843,
  [SMALL_STATE(528)] = 23860,
  [SMALL_STATE(529)] = 23877,
  [SMALL_STATE(530)] = 23896,
  [SMALL_STATE(531)] = 23915,
  [SMALL_STATE(532)] = 23930,
  [SMALL_STATE(533)] = 23949,
  [SMALL_STATE(534)] = 23966,
  [SMALL_STATE(535)] = 23981,
  [SMALL_STATE(536)] = 24000,
  [SMALL_STATE(537)] = 24019,
  [SMALL_STATE(538)] = 24034,
  [SMALL_STATE(539)] = 24053,
  [SMALL_STATE(540)] = 24070,
  [SMALL_STATE(541)] = 24089,
  [SMALL_STATE(542)] = 24108,
  [SMALL_STATE(543)] = 24125,
  [SMALL_STATE(544)] = 24144,
  [SMALL_STATE(545)] = 24161,
  [SMALL_STATE(546)] = 24180,
  [SMALL_STATE(547)] = 24199,
  [SMALL_STATE(548)] = 24214,
  [SMALL_STATE(549)] = 24233,
  [SMALL_STATE(550)] = 24250,
  [SMALL_STATE(551)] = 24269,
  [SMALL_STATE(552)] = 24288,
  [SMALL_STATE(553)] = 24307,
  [SMALL_STATE(554)] = 24326,
  [SMALL_STATE(555)] = 24343,
  [SMALL_STATE(556)] = 24360,
  [SMALL_STATE(557)] = 24377,
  [SMALL_STATE(558)] = 24392,
  [SMALL_STATE(559)] = 24411,
  [SMALL_STATE(560)] = 24430,
  [SMALL_STATE(561)] = 24449,
  [SMALL_STATE(562)] = 24466,
  [SMALL_STATE(563)] = 24483,
  [SMALL_STATE(564)] = 24498,
  [SMALL_STATE(565)] = 24515,
  [SMALL_STATE(566)] = 24532,
  [SMALL_STATE(567)] = 24551,
  [SMALL_STATE(568)] = 24566,
  [SMALL_STATE(569)] = 24585,
  [SMALL_STATE(570)] = 24602,
  [SMALL_STATE(571)] = 24619,
  [SMALL_STATE(572)] = 24634,
  [SMALL_STATE(573)] = 24653,
  [SMALL_STATE(574)] = 24672,
  [SMALL_STATE(575)] = 24691,
  [SMALL_STATE(576)] = 24710,
  [SMALL_STATE(577)] = 24729,
  [SMALL_STATE(578)] = 24748,
  [SMALL_STATE(579)] = 24763,
  [SMALL_STATE(580)] = 24780,
  [SMALL_STATE(581)] = 24799,
  [SMALL_STATE(582)] = 24814,
  [SMALL_STATE(583)] = 24829,
  [SMALL_STATE(584)] = 24846,
  [SMALL_STATE(585)] = 24865,
  [SMALL_STATE(586)] = 24882,
  [SMALL_STATE(587)] = 24896,
  [SMALL_STATE(588)] = 24912,
  [SMALL_STATE(589)] = 24928,
  [SMALL_STATE(590)] = 24942,
  [SMALL_STATE(591)] = 24958,
  [SMALL_STATE(592)] = 24972,
  [SMALL_STATE(593)] = 24986,
  [SMALL_STATE(594)] = 25000,
  [SMALL_STATE(595)] = 25016,
  [SMALL_STATE(596)] = 25030,
  [SMALL_STATE(597)] = 25046,
  [SMALL_STATE(598)] = 25062,
  [SMALL_STATE(599)] = 25078,
  [SMALL_STATE(600)] = 25094,
  [SMALL_STATE(601)] = 25110,
  [SMALL_STATE(602)] = 25126,
  [SMALL_STATE(603)] = 25142,
  [SMALL_STATE(604)] = 25158,
  [SMALL_STATE(605)] = 25172,
  [SMALL_STATE(606)] = 25186,
  [SMALL_STATE(607)] = 25202,
  [SMALL_STATE(608)] = 25218,
  [SMALL_STATE(609)] = 25232,
  [SMALL_STATE(610)] = 25248,
  [SMALL_STATE(611)] = 25264,
  [SMALL_STATE(612)] = 25280,
  [SMALL_STATE(613)] = 25296,
  [SMALL_STATE(614)] = 25310,
  [SMALL_STATE(615)] = 25326,
  [SMALL_STATE(616)] = 25340,
  [SMALL_STATE(617)] = 25354,
  [SMALL_STATE(618)] = 25370,
  [SMALL_STATE(619)] = 25384,
  [SMALL_STATE(620)] = 25398,
  [SMALL_STATE(621)] = 25412,
  [SMALL_STATE(622)] = 25426,
  [SMALL_STATE(623)] = 25442,
  [SMALL_STATE(624)] = 25456,
  [SMALL_STATE(625)] = 25470,
  [SMALL_STATE(626)] = 25486,
  [SMALL_STATE(627)] = 25502,
  [SMALL_STATE(628)] = 25516,
  [SMALL_STATE(629)] = 25530,
  [SMALL_STATE(630)] = 25546,
  [SMALL_STATE(631)] = 25562,
  [SMALL_STATE(632)] = 25578,
  [SMALL_STATE(633)] = 25592,
  [SMALL_STATE(634)] = 25606,
  [SMALL_STATE(635)] = 25620,
  [SMALL_STATE(636)] = 25634,
  [SMALL_STATE(637)] = 25650,
  [SMALL_STATE(638)] = 25664,
  [SMALL_STATE(639)] = 25678,
  [SMALL_STATE(640)] = 25692,
  [SMALL_STATE(641)] = 25708,
  [SMALL_STATE(642)] = 25722,
  [SMALL_STATE(643)] = 25738,
  [SMALL_STATE(644)] = 25754,
  [SMALL_STATE(645)] = 25768,
  [SMALL_STATE(646)] = 25784,
  [SMALL_STATE(647)] = 25800,
  [SMALL_STATE(648)] = 25816,
  [SMALL_STATE(649)] = 25832,
  [SMALL_STATE(650)] = 25848,
  [SMALL_STATE(651)] = 25864,
  [SMALL_STATE(652)] = 25877,
  [SMALL_STATE(653)] = 25890,
  [SMALL_STATE(654)] = 25903,
  [SMALL_STATE(655)] = 25916,
  [SMALL_STATE(656)] = 25929,
  [SMALL_STATE(657)] = 25942,
  [SMALL_STATE(658)] = 25955,
  [SMALL_STATE(659)] = 25968,
  [SMALL_STATE(660)] = 25981,
  [SMALL_STATE(661)] = 25994,
  [SMALL_STATE(662)] = 26007,
  [SMALL_STATE(663)] = 26020,
  [SMALL_STATE(664)] = 26033,
  [SMALL_STATE(665)] = 26046,
  [SMALL_STATE(666)] = 26059,
  [SMALL_STATE(667)] = 26072,
  [SMALL_STATE(668)] = 26085,
  [SMALL_STATE(669)] = 26098,
  [SMALL_STATE(670)] = 26111,
  [SMALL_STATE(671)] = 26124,
  [SMALL_STATE(672)] = 26137,
  [SMALL_STATE(673)] = 26150,
  [SMALL_STATE(674)] = 26163,
  [SMALL_STATE(675)] = 26176,
  [SMALL_STATE(676)] = 26189,
  [SMALL_STATE(677)] = 26202,
  [SMALL_STATE(678)] = 26215,
  [SMALL_STATE(679)] = 26228,
  [SMALL_STATE(680)] = 26241,
  [SMALL_STATE(681)] = 26254,
  [SMALL_STATE(682)] = 26267,
  [SMALL_STATE(683)] = 26280,
  [SMALL_STATE(684)] = 26293,
  [SMALL_STATE(685)] = 26306,
  [SMALL_STATE(686)] = 26319,
  [SMALL_STATE(687)] = 26332,
  [SMALL_STATE(688)] = 26345,
  [SMALL_STATE(689)] = 26358,
  [SMALL_STATE(690)] = 26371,
  [SMALL_STATE(691)] = 26384,
  [SMALL_STATE(692)] = 26397,
  [SMALL_STATE(693)] = 26410,
  [SMALL_STATE(694)] = 26423,
  [SMALL_STATE(695)] = 26436,
  [SMALL_STATE(696)] = 26449,
  [SMALL_STATE(697)] = 26462,
  [SMALL_STATE(698)] = 26475,
  [SMALL_STATE(699)] = 26488,
  [SMALL_STATE(700)] = 26501,
  [SMALL_STATE(701)] = 26514,
  [SMALL_STATE(702)] = 26527,
  [SMALL_STATE(703)] = 26540,
  [SMALL_STATE(704)] = 26553,
  [SMALL_STATE(705)] = 26566,
  [SMALL_STATE(706)] = 26579,
  [SMALL_STATE(707)] = 26592,
  [SMALL_STATE(708)] = 26605,
  [SMALL_STATE(709)] = 26618,
  [SMALL_STATE(710)] = 26631,
  [SMALL_STATE(711)] = 26644,
  [SMALL_STATE(712)] = 26657,
  [SMALL_STATE(713)] = 26670,
  [SMALL_STATE(714)] = 26683,
  [SMALL_STATE(715)] = 26696,
  [SMALL_STATE(716)] = 26709,
  [SMALL_STATE(717)] = 26722,
  [SMALL_STATE(718)] = 26735,
  [SMALL_STATE(719)] = 26748,
  [SMALL_STATE(720)] = 26761,
  [SMALL_STATE(721)] = 26774,
  [SMALL_STATE(722)] = 26787,
  [SMALL_STATE(723)] = 26800,
  [SMALL_STATE(724)] = 26813,
  [SMALL_STATE(725)] = 26826,
  [SMALL_STATE(726)] = 26839,
  [SMALL_STATE(727)] = 26852,
  [SMALL_STATE(728)] = 26865,
  [SMALL_STATE(729)] = 26878,
  [SMALL_STATE(730)] = 26891,
  [SMALL_STATE(731)] = 26904,
  [SMALL_STATE(732)] = 26917,
  [SMALL_STATE(733)] = 26930,
  [SMALL_STATE(734)] = 26943,
  [SMALL_STATE(735)] = 26956,
  [SMALL_STATE(736)] = 26969,
  [SMALL_STATE(737)] = 26982,
  [SMALL_STATE(738)] = 26995,
  [SMALL_STATE(739)] = 27008,
  [SMALL_STATE(740)] = 27021,
  [SMALL_STATE(741)] = 27034,
  [SMALL_STATE(742)] = 27047,
  [SMALL_STATE(743)] = 27060,
  [SMALL_STATE(744)] = 27073,
  [SMALL_STATE(745)] = 27086,
  [SMALL_STATE(746)] = 27099,
  [SMALL_STATE(747)] = 27112,
  [SMALL_STATE(748)] = 27125,
  [SMALL_STATE(749)] = 27138,
  [SMALL_STATE(750)] = 27151,
  [SMALL_STATE(751)] = 27164,
  [SMALL_STATE(752)] = 27177,
  [SMALL_STATE(753)] = 27190,
  [SMALL_STATE(754)] = 27203,
  [SMALL_STATE(755)] = 27216,
  [SMALL_STATE(756)] = 27229,
  [SMALL_STATE(757)] = 27242,
  [SMALL_STATE(758)] = 27255,
  [SMALL_STATE(759)] = 27268,
  [SMALL_STATE(760)] = 27281,
  [SMALL_STATE(761)] = 27294,
  [SMALL_STATE(762)] = 27307,
  [SMALL_STATE(763)] = 27320,
  [SMALL_STATE(764)] = 27333,
  [SMALL_STATE(765)] = 27346,
  [SMALL_STATE(766)] = 27359,
  [SMALL_STATE(767)] = 27372,
  [SMALL_STATE(768)] = 27385,
  [SMALL_STATE(769)] = 27398,
  [SMALL_STATE(770)] = 27411,
  [SMALL_STATE(771)] = 27424,
  [SMALL_STATE(772)] = 27437,
  [SMALL_STATE(773)] = 27450,
  [SMALL_STATE(774)] = 27463,
  [SMALL_STATE(775)] = 27476,
  [SMALL_STATE(776)] = 27489,
  [SMALL_STATE(777)] = 27502,
  [SMALL_STATE(778)] = 27515,
  [SMALL_STATE(779)] = 27528,
  [SMALL_STATE(780)] = 27541,
  [SMALL_STATE(781)] = 27554,
  [SMALL_STATE(782)] = 27567,
  [SMALL_STATE(783)] = 27580,
  [SMALL_STATE(784)] = 27593,
  [SMALL_STATE(785)] = 27606,
  [SMALL_STATE(786)] = 27619,
  [SMALL_STATE(787)] = 27632,
  [SMALL_STATE(788)] = 27645,
  [SMALL_STATE(789)] = 27658,
  [SMALL_STATE(790)] = 27671,
  [SMALL_STATE(791)] = 27684,
  [SMALL_STATE(792)] = 27697,
  [SMALL_STATE(793)] = 27710,
  [SMALL_STATE(794)] = 27723,
  [SMALL_STATE(795)] = 27736,
  [SMALL_STATE(796)] = 27749,
  [SMALL_STATE(797)] = 27762,
  [SMALL_STATE(798)] = 27775,
  [SMALL_STATE(799)] = 27788,
  [SMALL_STATE(800)] = 27801,
  [SMALL_STATE(801)] = 27814,
  [SMALL_STATE(802)] = 27827,
  [SMALL_STATE(803)] = 27840,
  [SMALL_STATE(804)] = 27853,
  [SMALL_STATE(805)] = 27866,
  [SMALL_STATE(806)] = 27879,
  [SMALL_STATE(807)] = 27892,
  [SMALL_STATE(808)] = 27905,
  [SMALL_STATE(809)] = 27918,
  [SMALL_STATE(810)] = 27931,
  [SMALL_STATE(811)] = 27944,
  [SMALL_STATE(812)] = 27957,
  [SMALL_STATE(813)] = 27970,
  [SMALL_STATE(814)] = 27983,
  [SMALL_STATE(815)] = 27996,
  [SMALL_STATE(816)] = 28009,
  [SMALL_STATE(817)] = 28022,
  [SMALL_STATE(818)] = 28035,
  [SMALL_STATE(819)] = 28048,
  [SMALL_STATE(820)] = 28061,
  [SMALL_STATE(821)] = 28074,
  [SMALL_STATE(822)] = 28087,
  [SMALL_STATE(823)] = 28100,
  [SMALL_STATE(824)] = 28113,
  [SMALL_STATE(825)] = 28126,
  [SMALL_STATE(826)] = 28139,
  [SMALL_STATE(827)] = 28152,
  [SMALL_STATE(828)] = 28165,
  [SMALL_STATE(829)] = 28178,
  [SMALL_STATE(830)] = 28191,
  [SMALL_STATE(831)] = 28204,
  [SMALL_STATE(832)] = 28217,
  [SMALL_STATE(833)] = 28230,
  [SMALL_STATE(834)] = 28243,
  [SMALL_STATE(835)] = 28256,
  [SMALL_STATE(836)] = 28269,
  [SMALL_STATE(837)] = 28282,
  [SMALL_STATE(838)] = 28295,
  [SMALL_STATE(839)] = 28308,
  [SMALL_STATE(840)] = 28321,
  [SMALL_STATE(841)] = 28334,
  [SMALL_STATE(842)] = 28347,
  [SMALL_STATE(843)] = 28360,
  [SMALL_STATE(844)] = 28373,
  [SMALL_STATE(845)] = 28386,
  [SMALL_STATE(846)] = 28399,
  [SMALL_STATE(847)] = 28412,
  [SMALL_STATE(848)] = 28425,
  [SMALL_STATE(849)] = 28438,
  [SMALL_STATE(850)] = 28451,
  [SMALL_STATE(851)] = 28464,
  [SMALL_STATE(852)] = 28477,
  [SMALL_STATE(853)] = 28490,
  [SMALL_STATE(854)] = 28503,
  [SMALL_STATE(855)] = 28516,
  [SMALL_STATE(856)] = 28529,
  [SMALL_STATE(857)] = 28542,
  [SMALL_STATE(858)] = 28555,
  [SMALL_STATE(859)] = 28568,
  [SMALL_STATE(860)] = 28581,
  [SMALL_STATE(861)] = 28594,
  [SMALL_STATE(862)] = 28607,
  [SMALL_STATE(863)] = 28620,
  [SMALL_STATE(864)] = 28633,
  [SMALL_STATE(865)] = 28646,
  [SMALL_STATE(866)] = 28659,
  [SMALL_STATE(867)] = 28672,
  [SMALL_STATE(868)] = 28685,
  [SMALL_STATE(869)] = 28698,
  [SMALL_STATE(870)] = 28711,
  [SMALL_STATE(871)] = 28724,
  [SMALL_STATE(872)] = 28737,
  [SMALL_STATE(873)] = 28750,
  [SMALL_STATE(874)] = 28763,
  [SMALL_STATE(875)] = 28776,
  [SMALL_STATE(876)] = 28789,
  [SMALL_STATE(877)] = 28802,
  [SMALL_STATE(878)] = 28815,
  [SMALL_STATE(879)] = 28828,
  [SMALL_STATE(880)] = 28832,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(811),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(96),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(116),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(119),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(346),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(808),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(567),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(803),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(435),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(796),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(795),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(794),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(792),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(791),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(790),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(789),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(788),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(126),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(430),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(425),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(816),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(869),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(739),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(44),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmt, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(830),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(875),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(874),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(567),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(430),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(300),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(274),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(677),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(770),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(88),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(768),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(519),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(498),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(864),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(84),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(111),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(327),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(130),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(94),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(164),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(265),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1096] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(563),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(880),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(160),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(786),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(615),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(624),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(701),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(258),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(137),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(397),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 1),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(443),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(293),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(257),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(444),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(437),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 1),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(711),
  [1363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(695),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(687),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(273),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_stmt, 1),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_param, 4),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1902] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
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
