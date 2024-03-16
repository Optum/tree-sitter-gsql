#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 871
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 257
#define ALIAS_COUNT 0
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
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
  anon_sym_SQUOTE = 116,
  sym_string_fragment = 117,
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
  sym_spacing_line = 129,
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
  sym__numeric = 216,
  sym_integer = 217,
  sym_real = 218,
  sym_string_literal = 219,
  sym_math_operator = 220,
  sym_comparison_operator = 221,
  sym_block_comment = 222,
  aux_sym_gsql_repeat1 = 223,
  aux_sym_query_params_repeat1 = 224,
  aux_sym_query_body_repeat1 = 225,
  aux_sym_typedef_repeat1 = 226,
  aux_sym_tuple_fields_repeat1 = 227,
  aux_sym_seed_set_repeat1 = 228,
  aux_sym_func_call_stmt_repeat1 = 229,
  aux_sym_func_call_stmt_repeat2 = 230,
  aux_sym_gsql_select_block_repeat1 = 231,
  aux_sym_from_clause_repeat1 = 232,
  aux_sym_dml_sub_stmt_list_repeat1 = 233,
  aux_sym_v_accum_func_call_repeat1 = 234,
  aux_sym_dml_sub_if_stmt_repeat1 = 235,
  aux_sym_dml_sub_case_stmt_repeat1 = 236,
  aux_sym_for_each_control_repeat1 = 237,
  aux_sym_path_pattern_repeat1 = 238,
  aux_sym_disj_pattern_repeat1 = 239,
  aux_sym_step_repeat1 = 240,
  aux_sym_step_edge_types_repeat1 = 241,
  aux_sym_step_vertex_types_repeat1 = 242,
  aux_sym_query_body_case_stmt_repeat1 = 243,
  aux_sym_query_body_case_stmt_repeat2 = 244,
  aux_sym_query_body_if_stmt_repeat1 = 245,
  aux_sym_base_decl_stmt_repeat1 = 246,
  aux_sym_accum_decl_stmt_repeat1 = 247,
  aux_sym_accum_type_repeat1 = 248,
  aux_sym_accum_type_repeat2 = 249,
  aux_sym_accum_type_repeat3 = 250,
  aux_sym_accum_type_repeat4 = 251,
  aux_sym_arg_list_repeat1 = 252,
  aux_sym_name_dot_repeat1 = 253,
  aux_sym_print_stmt_repeat1 = 254,
  aux_sym_v_expr_set_repeat1 = 255,
  aux_sym_block_comment_repeat1 = 256,
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
  [anon_sym_SQUOTE] = "'",
  [sym_string_fragment] = "string_fragment",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_fragment] = sym_string_fragment,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
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
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
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
  [40] = 24,
  [41] = 41,
  [42] = 29,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
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
  [73] = 72,
  [74] = 74,
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
  [88] = 87,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 91,
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
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 106,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 120,
  [121] = 102,
  [122] = 103,
  [123] = 106,
  [124] = 124,
  [125] = 106,
  [126] = 126,
  [127] = 120,
  [128] = 111,
  [129] = 129,
  [130] = 98,
  [131] = 18,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 72,
  [139] = 139,
  [140] = 140,
  [141] = 132,
  [142] = 140,
  [143] = 137,
  [144] = 139,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 26,
  [149] = 149,
  [150] = 150,
  [151] = 147,
  [152] = 152,
  [153] = 147,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 21,
  [158] = 24,
  [159] = 146,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 146,
  [166] = 25,
  [167] = 22,
  [168] = 23,
  [169] = 169,
  [170] = 147,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 19,
  [175] = 175,
  [176] = 27,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 169,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 20,
  [186] = 146,
  [187] = 31,
  [188] = 29,
  [189] = 136,
  [190] = 30,
  [191] = 134,
  [192] = 17,
  [193] = 28,
  [194] = 194,
  [195] = 32,
  [196] = 196,
  [197] = 197,
  [198] = 33,
  [199] = 197,
  [200] = 34,
  [201] = 36,
  [202] = 35,
  [203] = 24,
  [204] = 39,
  [205] = 38,
  [206] = 41,
  [207] = 37,
  [208] = 32,
  [209] = 29,
  [210] = 48,
  [211] = 43,
  [212] = 44,
  [213] = 134,
  [214] = 45,
  [215] = 46,
  [216] = 136,
  [217] = 59,
  [218] = 58,
  [219] = 62,
  [220] = 57,
  [221] = 172,
  [222] = 66,
  [223] = 60,
  [224] = 64,
  [225] = 65,
  [226] = 51,
  [227] = 52,
  [228] = 61,
  [229] = 50,
  [230] = 54,
  [231] = 56,
  [232] = 49,
  [233] = 55,
  [234] = 63,
  [235] = 53,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 72,
  [240] = 240,
  [241] = 241,
  [242] = 242,
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
  [266] = 196,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 271,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 136,
  [281] = 281,
  [282] = 282,
  [283] = 282,
  [284] = 134,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 287,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 31,
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
  [366] = 344,
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
  [377] = 17,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 379,
  [382] = 376,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 388,
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
  [451] = 434,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 261,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 443,
  [468] = 468,
  [469] = 453,
  [470] = 470,
  [471] = 470,
  [472] = 472,
  [473] = 473,
  [474] = 67,
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
  [496] = 479,
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
  [533] = 488,
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
  [554] = 532,
  [555] = 555,
  [556] = 556,
  [557] = 274,
  [558] = 531,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 268,
  [566] = 566,
  [567] = 567,
  [568] = 555,
  [569] = 494,
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
  [594] = 585,
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
  [615] = 575,
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
  [630] = 625,
  [631] = 602,
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
  [789] = 781,
  [790] = 780,
  [791] = 777,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 715,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 705,
  [803] = 704,
  [804] = 702,
  [805] = 805,
  [806] = 806,
  [807] = 638,
  [808] = 719,
  [809] = 809,
  [810] = 810,
  [811] = 724,
  [812] = 812,
  [813] = 759,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 816,
  [818] = 805,
  [819] = 799,
  [820] = 820,
  [821] = 756,
  [822] = 725,
  [823] = 700,
  [824] = 824,
  [825] = 825,
  [826] = 651,
  [827] = 669,
  [828] = 648,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 781,
  [834] = 780,
  [835] = 835,
  [836] = 836,
  [837] = 756,
  [838] = 838,
  [839] = 683,
  [840] = 756,
  [841] = 841,
  [842] = 810,
  [843] = 635,
  [844] = 750,
  [845] = 749,
  [846] = 846,
  [847] = 734,
  [848] = 848,
  [849] = 849,
  [850] = 690,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 760,
  [855] = 855,
  [856] = 856,
  [857] = 690,
  [858] = 690,
  [859] = 752,
  [860] = 747,
  [861] = 730,
  [862] = 862,
  [863] = 853,
  [864] = 652,
  [865] = 649,
  [866] = 730,
  [867] = 730,
  [868] = 868,
  [869] = 869,
  [870] = 870,
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
      if (eof) ADVANCE(413);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(842);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'B') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'G') ADVANCE(246);
      if (lookahead == 'H') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(139);
      if (lookahead == 'J') ADVANCE(264);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(230);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead == 'Q') ADVANCE(300);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(148);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '_') ADVANCE(445);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(851);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'A') ADVANCE(790);
      if (lookahead == 'B') ADVANCE(677);
      if (lookahead == 'C') ADVANCE(580);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(797);
      if (lookahead == 'H') ADVANCE(768);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead == 'M') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'P') ADVANCE(693);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'T') ADVANCE(724);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (lookahead == 'W') ADVANCE(639);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (sym_name_character_set_1(lookahead)) ADVANCE(825);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(835);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(838);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'A') ADVANCE(790);
      if (lookahead == 'B') ADVANCE(677);
      if (lookahead == 'C') ADVANCE(580);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(797);
      if (lookahead == 'H') ADVANCE(768);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead == 'M') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'P') ADVANCE(693);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'T') ADVANCE(724);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (lookahead == 'W') ADVANCE(639);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (sym_name_character_set_1(lookahead)) ADVANCE(825);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(687);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '|') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(687);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == '{') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(486);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'W') ADVANCE(155);
      if (lookahead == '|') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8)
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'W') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(211);
      if (lookahead == '|') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(211);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '|') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(842);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(211);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '|') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '<') ADVANCE(434);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(436);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == 'M') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '|') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'T') ADVANCE(687);
      if (lookahead == '[') ADVANCE(479);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(432);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == '@') ADVANCE(531);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'N') ADVANCE(683);
      if (lookahead == 'T') ADVANCE(687);
      if (lookahead == '[') ADVANCE(479);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'C') ADVANCE(680);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'T') ADVANCE(687);
      if (lookahead == 'W') ADVANCE(640);
      if (lookahead == '[') ADVANCE(479);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'A') ADVANCE(790);
      if (lookahead == 'B') ADVANCE(677);
      if (lookahead == 'C') ADVANCE(580);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(797);
      if (lookahead == 'H') ADVANCE(768);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead == 'M') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'P') ADVANCE(693);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (lookahead == 'W') ADVANCE(639);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (sym_name_character_set_1(lookahead)) ADVANCE(825);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(432);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'A') ADVANCE(670);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == '}') ADVANCE(438);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (sym_name_character_set_3(lookahead)) ADVANCE(825);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(645);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'D') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(178);
      if (lookahead == 'I') ADVANCE(221);
      if (lookahead == 'J') ADVANCE(264);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'V') ADVANCE(116);
      if (lookahead == 'W') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(449);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(856);
      if (lookahead == '/') ADVANCE(860);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(432);
      if (lookahead == '>') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(678);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '@') ADVANCE(531);
      if (lookahead == 'B') ADVANCE(678);
      if (lookahead == 'C') ADVANCE(580);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (lookahead == 'W') ADVANCE(639);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(825);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(790);
      if (lookahead == 'B') ADVANCE(677);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'G') ADVANCE(797);
      if (lookahead == 'H') ADVANCE(768);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'J') ADVANCE(696);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead == 'M') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == 'V') ADVANCE(626);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_4(lookahead)) ADVANCE(825);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(423);
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(424);
      END_STATE();
    case 31:
      if (lookahead == '<') ADVANCE(843);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(849);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(453);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(848);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(844);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(530);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'I') ADVANCE(188);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == 'O') ADVANCE(248);
      if (lookahead == 'R') ADVANCE(228);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'I') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(326);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'O') ADVANCE(471);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(301);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(238);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(316);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(312);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'U') ADVANCE(218);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'I') ADVANCE(207);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(279);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(328);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(330);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(332);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(295);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(334);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(336);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(338);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(340);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(342);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(344);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(346);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(348);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(352);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(354);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(306);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == 'V') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(562);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(525);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(524);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(302);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(261);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(283);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(284);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(285);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(286);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'C') ADVANCE(304);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(546);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'Y') ADVANCE(447);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(463);
      END_STATE();
    case 92:
      if (lookahead == 'D') ADVANCE(417);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead == 'Y') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(464);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(569);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(462);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(551);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(547);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(549);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(477);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(457);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(468);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(416);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(533);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(575);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(496);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(249);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 139:
      if (lookahead == 'F') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(475);
      if (lookahead == 'S') ADVANCE(543);
      END_STATE();
    case 140:
      if (lookahead == 'F') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(415);
      END_STATE();
    case 141:
      if (lookahead == 'F') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 142:
      if (lookahead == 'F') ADVANCE(439);
      END_STATE();
    case 143:
      if (lookahead == 'F') ADVANCE(269);
      END_STATE();
    case 144:
      if (lookahead == 'G') ADVANCE(557);
      END_STATE();
    case 145:
      if (lookahead == 'G') ADVANCE(498);
      END_STATE();
    case 146:
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == 'G') ADVANCE(106);
      END_STATE();
    case 148:
      if (lookahead == 'H') ADVANCE(99);
      END_STATE();
    case 149:
      if (lookahead == 'H') ADVANCE(421);
      END_STATE();
    case 150:
      if (lookahead == 'H') ADVANCE(472);
      END_STATE();
    case 151:
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(318);
      END_STATE();
    case 152:
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(305);
      END_STATE();
    case 153:
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(305);
      if (lookahead == 'U') ADVANCE(243);
      if (lookahead == 'Y') ADVANCE(240);
      END_STATE();
    case 154:
      if (lookahead == 'H') ADVANCE(98);
      END_STATE();
    case 155:
      if (lookahead == 'H') ADVANCE(133);
      END_STATE();
    case 156:
      if (lookahead == 'I') ADVANCE(175);
      END_STATE();
    case 157:
      if (lookahead == 'I') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 158:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 160:
      if (lookahead == 'I') ADVANCE(198);
      END_STATE();
    case 161:
      if (lookahead == 'I') ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == 'I') ADVANCE(223);
      if (lookahead == 'R') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 'I') ADVANCE(195);
      END_STATE();
    case 164:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 165:
      if (lookahead == 'I') ADVANCE(213);
      END_STATE();
    case 166:
      if (lookahead == 'I') ADVANCE(210);
      END_STATE();
    case 167:
      if (lookahead == 'I') ADVANCE(217);
      END_STATE();
    case 168:
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'I') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 171:
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'U') ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'I') ADVANCE(224);
      END_STATE();
    case 173:
      if (lookahead == 'J') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'K') ADVANCE(103);
      END_STATE();
    case 175:
      if (lookahead == 'K') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 176:
      if (lookahead == 'L') ADVANCE(563);
      END_STATE();
    case 177:
      if (lookahead == 'L') ADVANCE(544);
      END_STATE();
    case 178:
      if (lookahead == 'L') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'L') ADVANCE(317);
      END_STATE();
    case 180:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 'L') ADVANCE(177);
      END_STATE();
    case 182:
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(431);
      END_STATE();
    case 183:
      if (lookahead == 'L') ADVANCE(128);
      END_STATE();
    case 184:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == 'L') ADVANCE(109);
      END_STATE();
    case 186:
      if (lookahead == 'L') ADVANCE(114);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(298);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 'M') ADVANCE(558);
      END_STATE();
    case 191:
      if (lookahead == 'M') ADVANCE(456);
      END_STATE();
    case 192:
      if (lookahead == 'M') ADVANCE(458);
      END_STATE();
    case 193:
      if (lookahead == 'M') ADVANCE(482);
      END_STATE();
    case 194:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 196:
      if (lookahead == 'M') ADVANCE(242);
      END_STATE();
    case 197:
      if (lookahead == 'M') ADVANCE(48);
      END_STATE();
    case 198:
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 199:
      if (lookahead == 'N') ADVANCE(475);
      if (lookahead == 'S') ADVANCE(542);
      END_STATE();
    case 200:
      if (lookahead == 'N') ADVANCE(556);
      END_STATE();
    case 201:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 202:
      if (lookahead == 'N') ADVANCE(461);
      END_STATE();
    case 203:
      if (lookahead == 'N') ADVANCE(466);
      END_STATE();
    case 204:
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 205:
      if (lookahead == 'N') ADVANCE(450);
      END_STATE();
    case 206:
      if (lookahead == 'N') ADVANCE(545);
      END_STATE();
    case 207:
      if (lookahead == 'N') ADVANCE(830);
      END_STATE();
    case 208:
      if (lookahead == 'N') ADVANCE(474);
      END_STATE();
    case 209:
      if (lookahead == 'N') ADVANCE(474);
      if (lookahead == 'S') ADVANCE(542);
      END_STATE();
    case 210:
      if (lookahead == 'N') ADVANCE(555);
      END_STATE();
    case 211:
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 212:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 213:
      if (lookahead == 'N') ADVANCE(303);
      END_STATE();
    case 214:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 215:
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 216:
      if (lookahead == 'N') ADVANCE(293);
      END_STATE();
    case 217:
      if (lookahead == 'N') ADVANCE(277);
      END_STATE();
    case 218:
      if (lookahead == 'N') ADVANCE(278);
      END_STATE();
    case 219:
      if (lookahead == 'N') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'N') ADVANCE(290);
      END_STATE();
    case 221:
      if (lookahead == 'N') ADVANCE(288);
      END_STATE();
    case 222:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 223:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 224:
      if (lookahead == 'N') ADVANCE(297);
      END_STATE();
    case 225:
      if (lookahead == 'N') ADVANCE(299);
      END_STATE();
    case 226:
      if (lookahead == 'O') ADVANCE(231);
      END_STATE();
    case 227:
      if (lookahead == 'O') ADVANCE(471);
      END_STATE();
    case 228:
      if (lookahead == 'O') ADVANCE(191);
      END_STATE();
    case 229:
      if (lookahead == 'O') ADVANCE(273);
      END_STATE();
    case 230:
      if (lookahead == 'O') ADVANCE(273);
      if (lookahead == 'U') ADVANCE(181);
      END_STATE();
    case 231:
      if (lookahead == 'O') ADVANCE(176);
      END_STATE();
    case 232:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 233:
      if (lookahead == 'O') ADVANCE(201);
      END_STATE();
    case 234:
      if (lookahead == 'O') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'O') ADVANCE(266);
      END_STATE();
    case 236:
      if (lookahead == 'O') ADVANCE(266);
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 237:
      if (lookahead == 'P') ADVANCE(481);
      END_STATE();
    case 238:
      if (lookahead == 'P') ADVANCE(149);
      END_STATE();
    case 239:
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 240:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 241:
      if (lookahead == 'P') ADVANCE(257);
      if (lookahead == 'S') ADVANCE(137);
      END_STATE();
    case 242:
      if (lookahead == 'P') ADVANCE(289);
      END_STATE();
    case 243:
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 244:
      if (lookahead == 'Q') ADVANCE(179);
      END_STATE();
    case 245:
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 246:
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 247:
      if (lookahead == 'R') ADVANCE(415);
      END_STATE();
    case 248:
      if (lookahead == 'R') ADVANCE(420);
      END_STATE();
    case 249:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 250:
      if (lookahead == 'R') ADVANCE(532);
      END_STATE();
    case 251:
      if (lookahead == 'R') ADVANCE(419);
      END_STATE();
    case 252:
      if (lookahead == 'R') ADVANCE(241);
      END_STATE();
    case 253:
      if (lookahead == 'R') ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 256:
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 257:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 258:
      if (lookahead == 'R') ADVANCE(271);
      END_STATE();
    case 259:
      if (lookahead == 'S') ADVANCE(244);
      END_STATE();
    case 260:
      if (lookahead == 'S') ADVANCE(452);
      END_STATE();
    case 261:
      if (lookahead == 'S') ADVANCE(307);
      END_STATE();
    case 262:
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 263:
      if (lookahead == 'S') ADVANCE(275);
      END_STATE();
    case 264:
      if (lookahead == 'S') ADVANCE(233);
      END_STATE();
    case 265:
      if (lookahead == 'S') ADVANCE(100);
      END_STATE();
    case 266:
      if (lookahead == 'S') ADVANCE(276);
      END_STATE();
    case 267:
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 268:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 269:
      if (lookahead == 'S') ADVANCE(132);
      END_STATE();
    case 270:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 271:
      if (lookahead == 'S') ADVANCE(137);
      END_STATE();
    case 272:
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 273:
      if (lookahead == 'T') ADVANCE(540);
      END_STATE();
    case 274:
      if (lookahead == 'T') ADVANCE(431);
      END_STATE();
    case 275:
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 276:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 277:
      if (lookahead == 'T') ADVANCE(565);
      END_STATE();
    case 278:
      if (lookahead == 'T') ADVANCE(552);
      END_STATE();
    case 279:
      if (lookahead == 'T') ADVANCE(494);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(470);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(559);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(483);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(535);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(451);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(571);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(425);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(492);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(319);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 297:
      if (lookahead == 'T') ADVANCE(320);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 299:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 300:
      if (lookahead == 'U') ADVANCE(120);
      END_STATE();
    case 301:
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 302:
      if (lookahead == 'U') ADVANCE(192);
      END_STATE();
    case 303:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 304:
      if (lookahead == 'U') ADVANCE(193);
      END_STATE();
    case 305:
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 306:
      if (lookahead == 'U') ADVANCE(296);
      END_STATE();
    case 307:
      if (lookahead == 'V') ADVANCE(561);
      END_STATE();
    case 308:
      if (lookahead == 'W') ADVANCE(136);
      END_STATE();
    case 309:
      if (lookahead == 'X') ADVANCE(554);
      END_STATE();
    case 310:
      if (lookahead == 'X') ADVANCE(422);
      END_STATE();
    case 311:
      if (lookahead == 'X') ADVANCE(567);
      END_STATE();
    case 312:
      if (lookahead == 'X') ADVANCE(828);
      END_STATE();
    case 313:
      if (lookahead == 'X') ADVANCE(826);
      END_STATE();
    case 314:
      if (lookahead == 'Y') ADVANCE(418);
      END_STATE();
    case 315:
      if (lookahead == 'Y') ADVANCE(537);
      END_STATE();
    case 316:
      if (lookahead == 'Y') ADVANCE(573);
      END_STATE();
    case 317:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 318:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 319:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 320:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 324:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 365:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 366:
      if (lookahead == 'm') ADVANCE(504);
      END_STATE();
    case 367:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 368:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 369:
      if (lookahead == 'm') ADVANCE(500);
      END_STATE();
    case 370:
      if (lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 371:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 372:
      if (lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 373:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 374:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 375:
      if (lookahead == 'm') ADVANCE(528);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(372);
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
      if (lookahead == 'w') ADVANCE(361);
      END_STATE();
    case 410:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 411:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 412:
      if (eof) ADVANCE(413);
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '%') ADVANCE(840);
      if (lookahead == '&') ADVANCE(845);
      if (lookahead == '\'') ADVANCE(834);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '+') ADVANCE(841);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(442);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '=') ADVANCE(429);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'G') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(225);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(152);
      if (lookahead == 'U') ADVANCE(211);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '|') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(412)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_V2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(848);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(843);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(843);
      if (lookahead == '=') ADVANCE(846);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(847);
      if (lookahead == '>') ADVANCE(844);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(449);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_POST_DASHACCUM);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(539);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_SumAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_MaxAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_MinAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_AvgAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_OrAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_AndAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_BitwiseorAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BitwiseandAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ListAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SetAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BagAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_MapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_HeapAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_GroupbyAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ArrayAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_TO_CSV);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(713);
      if (lookahead == 'O') ADVANCE(719);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(737);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(605);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(695);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(725);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(722);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(659);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'I') ADVANCE(664);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(689);
      if (lookahead == 'O') ADVANCE(603);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(703);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(674);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(739);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(741);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(743);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(657);
      if (lookahead == 'U') ADVANCE(672);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(745);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(747);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(749);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(751);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(753);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(755);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(757);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(759);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(761);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(763);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(765);
      if (sym_name_character_set_6(lookahead)) ADVANCE(825);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(465);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(570);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(721);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(469);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(497);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(548);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(478);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(579);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(440);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(499);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(473);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(669);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(668);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(676);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(671);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(673);
      if (lookahead == 'U') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(675);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(564);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(682);
      if (lookahead == 'O') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(682);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(584);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(582);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(467);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(585);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(727);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(679);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(803);
      if (sym_name_character_set_7(lookahead)) ADVANCE(825);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(679);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(591);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(586);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(581);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(681);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(493);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(566);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(495);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(560);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(572);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(553);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(455);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(541);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(726);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(691);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'u') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(568);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(574);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(448);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(648);
      if (sym_name_character_set_8(lookahead)) ADVANCE(825);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(662);
      if (sym_name_character_set_8(lookahead)) ADVANCE(825);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(660);
      if (sym_name_character_set_8(lookahead)) ADVANCE(825);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'i') ADVANCE(791);
      if (sym_name_character_set_7(lookahead)) ADVANCE(825);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(796);
      if (sym_name_character_set_7(lookahead)) ADVANCE(825);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(823);
      if (sym_name_character_set_7(lookahead)) ADVANCE(825);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'o') ADVANCE(800);
      if (sym_name_character_set_7(lookahead)) ADVANCE(825);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(806);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(752);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(760);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(588);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(732);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(589);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(590);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(801);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(507);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(509);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(505);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(519);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(521);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(501);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(503);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(517);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(491);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(523);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(515);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(529);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(527);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(511);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(513);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(596);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead == 'v') ADVANCE(770);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(594);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(593);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(597);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(578);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(733);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(601);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(769);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(805);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(595);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(774);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(775);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(780);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(781);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(599);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(600);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_GSQL_INT_MAX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_GSQL_UINT_MIN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(825);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == '/') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(838);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(835);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(838);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(856);
      if (lookahead == '/') ADVANCE(860);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(453);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(850);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_spacing_line);
      if (lookahead == '\n') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '*') ADVANCE(854);
      if (lookahead == '/') ADVANCE(853);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(852);
      if (lookahead != 0) ADVANCE(855);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '*') ADVANCE(858);
      if (lookahead == '/') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead == '/') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_comment_contents);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(838);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(860);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 412},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
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
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 412},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 28},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 412},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 412},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 412},
  [237] = {.lex_state = 412},
  [238] = {.lex_state = 412},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 412},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 412},
  [247] = {.lex_state = 412},
  [248] = {.lex_state = 412},
  [249] = {.lex_state = 412},
  [250] = {.lex_state = 412},
  [251] = {.lex_state = 25},
  [252] = {.lex_state = 25},
  [253] = {.lex_state = 412},
  [254] = {.lex_state = 22},
  [255] = {.lex_state = 412},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 412},
  [258] = {.lex_state = 25},
  [259] = {.lex_state = 412},
  [260] = {.lex_state = 412},
  [261] = {.lex_state = 25},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 25},
  [265] = {.lex_state = 25},
  [266] = {.lex_state = 412},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 25},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 25},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 25},
  [273] = {.lex_state = 18},
  [274] = {.lex_state = 25},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 412},
  [277] = {.lex_state = 25},
  [278] = {.lex_state = 25},
  [279] = {.lex_state = 25},
  [280] = {.lex_state = 18},
  [281] = {.lex_state = 412},
  [282] = {.lex_state = 412},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 18},
  [285] = {.lex_state = 412},
  [286] = {.lex_state = 412},
  [287] = {.lex_state = 22},
  [288] = {.lex_state = 412},
  [289] = {.lex_state = 412},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 22},
  [292] = {.lex_state = 22},
  [293] = {.lex_state = 22},
  [294] = {.lex_state = 412},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 19},
  [299] = {.lex_state = 412},
  [300] = {.lex_state = 19},
  [301] = {.lex_state = 412},
  [302] = {.lex_state = 412},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 412},
  [305] = {.lex_state = 412},
  [306] = {.lex_state = 412},
  [307] = {.lex_state = 412},
  [308] = {.lex_state = 412},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 412},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 19},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 412},
  [323] = {.lex_state = 412},
  [324] = {.lex_state = 412},
  [325] = {.lex_state = 19},
  [326] = {.lex_state = 412},
  [327] = {.lex_state = 412},
  [328] = {.lex_state = 412},
  [329] = {.lex_state = 412},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 412},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 412},
  [335] = {.lex_state = 412},
  [336] = {.lex_state = 412},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 412},
  [339] = {.lex_state = 412},
  [340] = {.lex_state = 412},
  [341] = {.lex_state = 412},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 20},
  [345] = {.lex_state = 412},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 21},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 412},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 412},
  [355] = {.lex_state = 19},
  [356] = {.lex_state = 412},
  [357] = {.lex_state = 412},
  [358] = {.lex_state = 412},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 412},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 20},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 412},
  [371] = {.lex_state = 412},
  [372] = {.lex_state = 412},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 15},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 412},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 412},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 412},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 5},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 5},
  [402] = {.lex_state = 412},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 412},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 412},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 5},
  [414] = {.lex_state = 5},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 412},
  [420] = {.lex_state = 412},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 412},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 5},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 5},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 412},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 412},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 412},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 412},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 852},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 5},
  [459] = {.lex_state = 852},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 15},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 412},
  [464] = {.lex_state = 412},
  [465] = {.lex_state = 852},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 412},
  [468] = {.lex_state = 412},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 412},
  [471] = {.lex_state = 412},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 5},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 412},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 5},
  [480] = {.lex_state = 18},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 412},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 5},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 5},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 412},
  [505] = {.lex_state = 5},
  [506] = {.lex_state = 412},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 412},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 5},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 5},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 5},
  [519] = {.lex_state = 5},
  [520] = {.lex_state = 15},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 15},
  [526] = {.lex_state = 412},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 412},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 412},
  [531] = {.lex_state = 15},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 5},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 5},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 5},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 22},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 5},
  [546] = {.lex_state = 5},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 412},
  [550] = {.lex_state = 852},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 412},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 15},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 15},
  [566] = {.lex_state = 5},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 15},
  [570] = {.lex_state = 412},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 5},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 412},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 412},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 13},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 412},
  [595] = {.lex_state = 5},
  [596] = {.lex_state = 5},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 13},
  [600] = {.lex_state = 412},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 412},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 5},
  [609] = {.lex_state = 9},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 9},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 13},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 412},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 412},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 5},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 15},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 5},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 5},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 412},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 15},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 15},
  [656] = {.lex_state = 15},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 412},
  [662] = {.lex_state = 15},
  [663] = {.lex_state = 412},
  [664] = {.lex_state = 412},
  [665] = {.lex_state = 15},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 15},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 15},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 15},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 15},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 15},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 412},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 15},
  [699] = {.lex_state = 5},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 15},
  [708] = {.lex_state = 15},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 13},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 15},
  [718] = {.lex_state = 15},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 15},
  [721] = {.lex_state = 412},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 15},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 15},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 15},
  [734] = {.lex_state = 15},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 15},
  [738] = {.lex_state = 15},
  [739] = {.lex_state = 412},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 15},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 2},
  [750] = {.lex_state = 2},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 15},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 15},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 15},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 412},
  [766] = {.lex_state = 412},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 15},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 15},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 15},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 5},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 15},
  [781] = {.lex_state = 15},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 15},
  [790] = {.lex_state = 15},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 15},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 15},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 5},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 412},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 15},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 15},
  [819] = {.lex_state = 15},
  [820] = {.lex_state = 15},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 15},
  [831] = {.lex_state = 15},
  [832] = {.lex_state = 15},
  [833] = {.lex_state = 15},
  [834] = {.lex_state = 15},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 412},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 2},
  [845] = {.lex_state = 2},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 15},
  [848] = {.lex_state = 15},
  [849] = {.lex_state = 15},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 15},
  [862] = {.lex_state = 15},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 15},
  [867] = {.lex_state = 15},
  [868] = {.lex_state = 0},
  [869] = {(TSStateId)(-1)},
  [870] = {(TSStateId)(-1)},
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
    [sym_gsql] = STATE(855),
    [sym__definition] = STATE(506),
    [sym_create_query] = STATE(612),
    [sym_interpret_query] = STATE(612),
    [sym_block_comment] = STATE(1),
    [aux_sym_gsql_repeat1] = STATE(354),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
    [anon_sym_INTERPRET] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
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
    ACTIONS(55), 1,
      sym_spacing_line,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    STATE(2), 1,
      sym_block_comment,
    STATE(3), 1,
      aux_sym_query_body_repeat1,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(68), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(774), 2,
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
    STATE(777), 13,
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
  [135] = 35,
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
      sym_spacing_line,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_block_comment,
    STATE(4), 1,
      aux_sym_query_body_repeat1,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(68), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(774), 2,
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
    STATE(777), 13,
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
  [270] = 34,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_TYPEDEF,
    ACTIONS(68), 1,
      anon_sym_IF,
    ACTIONS(71), 1,
      anon_sym_CASE,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(77), 1,
      anon_sym_FOREACH,
    ACTIONS(80), 1,
      anon_sym_SumAccum,
    ACTIONS(92), 1,
      anon_sym_ListAccum,
    ACTIONS(98), 1,
      anon_sym_MapAccum,
    ACTIONS(101), 1,
      anon_sym_HeapAccum,
    ACTIONS(104), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(107), 1,
      anon_sym_ArrayAccum,
    ACTIONS(110), 1,
      anon_sym_AT_AT,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(116), 1,
      anon_sym_PRINT,
    ACTIONS(119), 1,
      anon_sym_VERTEX,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(125), 1,
      sym_spacing_line,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(86), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(95), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(4), 2,
      sym_block_comment,
      aux_sym_query_body_repeat1,
    STATE(68), 2,
      sym_typedef,
      sym_query_body_stmt,
    STATE(774), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(89), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
    ACTIONS(83), 10,
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
    STATE(777), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    STATE(779), 1,
      sym_query_body_stmt,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(6), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(7), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(493), 1,
      sym_query_body_stmt,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(8), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(607), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(130), 1,
      anon_sym_IF,
    STATE(9), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(716), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(10), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(709), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(11), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(754), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(12), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(524), 1,
      sym_query_body_stmt,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(13), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(561), 1,
      sym_query_body_stmt,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(130), 1,
      anon_sym_IF,
    STATE(14), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(681), 1,
      sym_query_body_stmt,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(15), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(498), 1,
      sym_query_body_stmt,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(16), 1,
      sym_block_comment,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_accum_type,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(770), 1,
      sym_base_type,
    STATE(776), 1,
      sym_gsql_select_block,
    STATE(793), 1,
      sym_query_body_stmt,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(774), 2,
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
    STATE(791), 13,
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
      anon_sym_PIPE2,
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
    STATE(23), 1,
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
      anon_sym_PIPE2,
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
    STATE(19), 1,
      sym_block_comment,
    STATE(23), 1,
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
      anon_sym_PIPE2,
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
  [2053] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_block_comment,
    STATE(24), 1,
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
      anon_sym_PIPE2,
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
  [2115] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(21), 1,
      sym_block_comment,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(150), 35,
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
      anon_sym_PIPE2,
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
  [2179] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 39,
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
      anon_sym_PIPE2,
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
  [2239] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_block_comment,
    STATE(25), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(162), 39,
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
      anon_sym_PIPE2,
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
  [2299] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(24), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(166), 38,
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
      anon_sym_PIPE2,
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
  [2359] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(25), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 38,
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
      anon_sym_PIPE2,
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
  [2419] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_block_comment,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(150), 35,
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
      anon_sym_PIPE2,
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
  [2483] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(154), 38,
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
      anon_sym_PIPE2,
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
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(156), 39,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
  [2659] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(154), 38,
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
      anon_sym_PIPE2,
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
  [2718] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(186), 39,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
  [2832] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(150), 35,
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
      anon_sym_PIPE2,
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
  [2890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(198), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(196), 38,
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
      anon_sym_PIPE2,
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
  [2946] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(198), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(196), 38,
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
      anon_sym_PIPE2,
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
  [3002] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(178), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(154), 38,
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
      anon_sym_PIPE2,
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
  [3058] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_block_comment,
    STATE(40), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(200), 36,
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
      anon_sym_PIPE2,
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
  [3117] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      sym_digit,
    STATE(38), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(206), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(204), 36,
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
      anon_sym_PIPE2,
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
    ACTIONS(217), 1,
      sym_digit,
    STATE(38), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(214), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(211), 36,
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
      anon_sym_PIPE2,
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
  [3233] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 36,
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
      anon_sym_PIPE2,
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
  [3290] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(38), 1,
      aux_sym_accum_type_repeat1,
    STATE(41), 1,
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
      anon_sym_PIPE2,
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
  [3349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(42), 1,
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
      anon_sym_PIPE2,
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
  [3403] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(43), 1,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
  [3459] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(44), 1,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
  [3515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(240), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(238), 37,
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
      anon_sym_PIPE2,
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
  [3569] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(245), 3,
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
      anon_sym_PIPE2,
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
  [3625] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(47), 1,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_POST_DASHACCUM,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
    ACTIONS(152), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(150), 36,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
    ACTIONS(307), 3,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
      anon_sym_PIPE2,
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
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      sym_spacing_line,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(322), 36,
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
  [4740] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      sym_spacing_line,
    STATE(68), 1,
      sym_block_comment,
    ACTIONS(326), 36,
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
  [4791] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_spacing_line,
    STATE(69), 1,
      sym_block_comment,
    ACTIONS(330), 36,
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
  [4842] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_spacing_line,
    STATE(70), 1,
      sym_block_comment,
    ACTIONS(334), 36,
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
  [4893] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_SELECT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(358), 1,
      sym_name,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(71), 1,
      sym_block_comment,
    STATE(247), 1,
      sym_expr,
    STATE(436), 1,
      sym_simple_set,
    STATE(590), 1,
      sym_gsql_select_clause,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(776), 1,
      sym_gsql_select_block,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    STATE(654), 2,
      sym_seed_set,
      sym__select_stmt,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [4998] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(72), 1,
      sym_block_comment,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(150), 26,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
  [5056] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(73), 1,
      sym_block_comment,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(150), 27,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [5115] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(74), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(627), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5189] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(75), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(542), 1,
      sym_dml_sub_stmt_list,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5263] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(76), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(660), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5337] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(77), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(658), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5411] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(78), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(657), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5485] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(79), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(491), 1,
      sym_dml_sub_stmt_list,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5559] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    ACTIONS(382), 1,
      anon_sym_IF,
    STATE(80), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(687), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5633] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(81), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(501), 1,
      sym_dml_sub_stmt_list,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5707] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    ACTIONS(382), 1,
      anon_sym_IF,
    STATE(82), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(668), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5781] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(83), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(672), 1,
      sym_dml_sub_stmt_list,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5855] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(84), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(522), 1,
      sym_dml_sub_stmt_list,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [5929] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(85), 1,
      sym_block_comment,
    STATE(337), 1,
      sym_dml_sub_stmt,
    STATE(516), 1,
      sym_dml_sub_stmt_list,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [6003] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(372), 1,
      anon_sym_IF,
    ACTIONS(374), 1,
      anon_sym_CASE,
    ACTIONS(376), 1,
      anon_sym_WHILE,
    ACTIONS(378), 1,
      anon_sym_FOREACH,
    ACTIONS(380), 1,
      sym_name,
    STATE(86), 1,
      sym_block_comment,
    STATE(360), 1,
      sym_dml_sub_stmt,
    STATE(519), 1,
      sym_global_accum_name,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(848), 1,
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
    STATE(347), 11,
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
  [6074] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(402), 1,
      sym_name,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(199), 1,
      sym_expr,
    STATE(486), 1,
      sym_condition,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(602), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    ACTIONS(400), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6171] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(402), 1,
      sym_name,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(197), 1,
      sym_expr,
    STATE(486), 1,
      sym_condition,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(631), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    ACTIONS(400), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6268] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(89), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(669), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6360] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(90), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6452] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(91), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_expr,
    STATE(554), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6546] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(92), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_expr,
    STATE(560), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6640] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(93), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_expr,
    STATE(318), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6734] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(94), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_expr,
    STATE(532), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6828] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(95), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_expr,
    STATE(383), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [6922] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_NOT,
    ACTIONS(438), 1,
      anon_sym_IS,
    ACTIONS(440), 1,
      anon_sym_BETWEEN,
    ACTIONS(442), 1,
      anon_sym_LIKE,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_comparison_operator,
    STATE(165), 1,
      sym_math_operator,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(428), 10,
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
  [6988] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(97), 1,
      sym_block_comment,
    STATE(455), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7082] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(98), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(648), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7174] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(99), 1,
      sym_block_comment,
    STATE(316), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7268] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(100), 1,
      sym_block_comment,
    STATE(562), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7362] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(101), 1,
      sym_block_comment,
    STATE(499), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7456] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(102), 1,
      sym_block_comment,
    STATE(555), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7550] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(103), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(273), 1,
      sym_expr,
    STATE(468), 1,
      sym_simple_set,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(631), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7642] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(104), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7736] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(105), 1,
      sym_block_comment,
    STATE(255), 1,
      sym_expr,
    STATE(404), 1,
      sym_v_expr_set,
    STATE(405), 1,
      sym_print_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7828] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(106), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(840), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [7920] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(107), 1,
      sym_block_comment,
    STATE(538), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8014] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(108), 1,
      sym_block_comment,
    STATE(529), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8108] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(109), 1,
      sym_block_comment,
    STATE(431), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8202] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(110), 1,
      sym_block_comment,
    STATE(255), 1,
      sym_expr,
    STATE(404), 1,
      sym_v_expr_set,
    STATE(435), 1,
      sym_print_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8294] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(111), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(700), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8386] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(112), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8478] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(113), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(719), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8570] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(114), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(756), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8662] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(115), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(808), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8754] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(116), 1,
      sym_block_comment,
    STATE(446), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8848] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(468), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(117), 1,
      sym_block_comment,
    STATE(294), 1,
      sym_expr,
    STATE(445), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [8940] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(118), 1,
      sym_block_comment,
    STATE(513), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9034] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(119), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(811), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9126] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(120), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9218] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(121), 1,
      sym_block_comment,
    STATE(568), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9312] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(122), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(271), 1,
      sym_expr,
    STATE(468), 1,
      sym_simple_set,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(602), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9404] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(123), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(837), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9496] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(124), 1,
      sym_block_comment,
    STATE(551), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9590] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(125), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9682] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(126), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(691), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9774] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(127), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9866] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(128), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(823), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [9958] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_NOT,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(96), 1,
      sym_expr,
    STATE(129), 1,
      sym_block_comment,
    STATE(427), 1,
      sym_condition,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    ACTIONS(424), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 3,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10052] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(130), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(828), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10144] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_block_comment,
    STATE(168), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10195] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(132), 1,
      sym_block_comment,
    STATE(266), 1,
      sym_set_bag_expr,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(759), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10284] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(133), 1,
      sym_block_comment,
    STATE(289), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(621), 1,
      sym_v_set_proj,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10373] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_math_operator,
    ACTIONS(492), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(490), 19,
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
  [10424] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(135), 1,
      sym_block_comment,
    STATE(289), 1,
      sym_expr,
    STATE(567), 1,
      sym_v_set_proj,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10513] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(136), 1,
      sym_block_comment,
    STATE(165), 1,
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
      anon_sym_PIPE2,
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
  [10560] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(137), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(798), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10649] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(138), 1,
      sym_block_comment,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10702] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_name,
    STATE(139), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(271), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(602), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10791] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(140), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(816), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10880] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(141), 1,
      sym_block_comment,
    STATE(266), 1,
      sym_set_bag_expr,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(813), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [10969] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(142), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(817), 1,
      sym_arg_list,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11058] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(143), 1,
      sym_block_comment,
    STATE(276), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(715), 1,
      sym_arg_list,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11147] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_name,
    STATE(144), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(196), 1,
      sym_set_bag_expr,
    STATE(273), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(631), 1,
      sym_arg_list,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11236] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(145), 1,
      sym_block_comment,
    STATE(305), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11322] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_name,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(216), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11408] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_name,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_digit,
    STATE(147), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(284), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11494] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(148), 1,
      sym_block_comment,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11544] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(149), 1,
      sym_block_comment,
    STATE(306), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11630] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(150), 1,
      sym_block_comment,
    STATE(250), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11716] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_DASH,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_name,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_digit,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(151), 1,
      sym_block_comment,
    STATE(157), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(213), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11802] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(152), 1,
      sym_block_comment,
    STATE(238), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11888] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(153), 1,
      sym_block_comment,
    STATE(191), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [11974] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(154), 1,
      sym_block_comment,
    STATE(302), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12060] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(155), 1,
      sym_block_comment,
    STATE(307), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12146] = 18,
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
    ACTIONS(512), 1,
      sym_name,
    STATE(156), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(707), 1,
      sym__element_type,
    STATE(708), 1,
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
  [12216] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(157), 1,
      sym_block_comment,
    STATE(185), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12266] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(158), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(168), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(166), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12312] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_name,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(159), 1,
      sym_block_comment,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(280), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12398] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(160), 1,
      sym_block_comment,
    STATE(247), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12484] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(161), 1,
      sym_block_comment,
    STATE(308), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12570] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(162), 1,
      sym_block_comment,
    STATE(299), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12656] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(163), 1,
      sym_block_comment,
    STATE(237), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12742] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(164), 1,
      sym_block_comment,
    STATE(236), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12828] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(165), 1,
      sym_block_comment,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [12914] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(166), 2,
      sym_block_comment,
      aux_sym_name_dot_repeat1,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12960] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13006] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(166), 1,
      aux_sym_name_dot_repeat1,
    STATE(168), 1,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(162), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13052] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(394), 1,
      anon_sym_COALESCE,
    ACTIONS(396), 1,
      anon_sym_ISEMPTY,
    ACTIONS(406), 1,
      sym_digit,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_name,
    STATE(148), 1,
      sym_global_accum_name,
    STATE(157), 1,
      sym_name_dot,
    STATE(169), 1,
      sym_block_comment,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(283), 1,
      sym_expr,
    STATE(585), 1,
      sym_local_accum_name,
    STATE(860), 1,
      sym_aggregator,
    STATE(218), 2,
      sym__numeric,
      sym_string_literal,
    STATE(220), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_integer,
      sym_real,
    ACTIONS(404), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13138] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      sym_name,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(134), 1,
      sym_expr,
    STATE(170), 1,
      sym_block_comment,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13224] = 18,
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
    ACTIONS(512), 1,
      sym_name,
    STATE(171), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(673), 1,
      sym_accum_type,
    STATE(707), 1,
      sym__element_type,
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
  [13294] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(172), 1,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(428), 10,
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
    ACTIONS(284), 17,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
  [13340] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(173), 1,
      sym_block_comment,
    STATE(281), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(168), 1,
      aux_sym_name_dot_repeat1,
    STATE(174), 1,
      sym_block_comment,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13472] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(175), 1,
      sym_block_comment,
    STATE(249), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13558] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(176), 1,
      sym_block_comment,
    STATE(185), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(178), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13606] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(177), 1,
      sym_block_comment,
    STATE(246), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13692] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(178), 1,
      sym_block_comment,
    STATE(301), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13778] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(179), 1,
      sym_block_comment,
    STATE(285), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13864] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(180), 1,
      sym_block_comment,
    STATE(282), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [13950] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(181), 1,
      sym_block_comment,
    STATE(304), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14036] = 17,
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
    ACTIONS(512), 1,
      sym_name,
    STATE(182), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(642), 2,
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
  [14104] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(183), 1,
      sym_block_comment,
    STATE(248), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14190] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(184), 1,
      sym_block_comment,
    STATE(253), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14276] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(158), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(185), 1,
      sym_block_comment,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14324] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      anon_sym_COALESCE,
    ACTIONS(352), 1,
      anon_sym_ISEMPTY,
    ACTIONS(356), 1,
      anon_sym_COUNT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(26), 1,
      sym_global_accum_name,
    STATE(33), 1,
      sym_set_bag_expr,
    STATE(186), 1,
      sym_block_comment,
    STATE(189), 1,
      sym_expr,
    STATE(594), 1,
      sym_local_accum_name,
    STATE(747), 1,
      sym_aggregator,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(57), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(354), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [14410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_block_comment,
    ACTIONS(188), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(186), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
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
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(188), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14496] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(189), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_TO_CSV,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14541] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
    STATE(190), 1,
      sym_block_comment,
    ACTIONS(178), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14586] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(191), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(490), 19,
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
  [14633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(192), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14676] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(193), 1,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(156), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14719] = 16,
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
    ACTIONS(526), 1,
      sym_name,
    STATE(194), 1,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(35), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    STATE(775), 2,
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
  [14784] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(195), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14827] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(196), 1,
      sym_block_comment,
    ACTIONS(528), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14871] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_NOT,
    ACTIONS(438), 1,
      anon_sym_IS,
    ACTIONS(440), 1,
      anon_sym_BETWEEN,
    ACTIONS(442), 1,
      anon_sym_LIKE,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_math_operator,
    STATE(164), 1,
      sym_comparison_operator,
    STATE(197), 1,
      sym_block_comment,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(428), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(198), 1,
      sym_block_comment,
    ACTIONS(528), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14985] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_NOT,
    ACTIONS(438), 1,
      anon_sym_IS,
    ACTIONS(440), 1,
      anon_sym_BETWEEN,
    ACTIONS(442), 1,
      anon_sym_LIKE,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_math_operator,
    STATE(164), 1,
      sym_comparison_operator,
    STATE(199), 1,
      sym_block_comment,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(428), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15055] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(200), 1,
      sym_block_comment,
    ACTIONS(198), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15097] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(201), 1,
      sym_block_comment,
    ACTIONS(178), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(202), 1,
      sym_block_comment,
    ACTIONS(198), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15181] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_DOT,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(166), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15224] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(204), 1,
      sym_block_comment,
    STATE(205), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(214), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(211), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15269] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      sym_digit,
    STATE(205), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat1,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(204), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15312] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(205), 1,
      aux_sym_accum_type_repeat1,
    STATE(206), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15357] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(207), 1,
      sym_block_comment,
    ACTIONS(202), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(200), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(208), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15442] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(209), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15482] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_DOT,
    STATE(210), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15524] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_DOT,
    STATE(211), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15566] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(212), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15608] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(146), 1,
      sym_math_operator,
    STATE(213), 1,
      sym_block_comment,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(492), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(490), 14,
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
  [15654] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(214), 1,
      sym_block_comment,
    ACTIONS(240), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(238), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
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
  [15694] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_DOT,
    STATE(215), 1,
      sym_block_comment,
    ACTIONS(245), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(242), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15736] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(146), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(217), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15817] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(218), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(219), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(220), 1,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15934] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(221), 1,
      sym_block_comment,
    ACTIONS(428), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(284), 18,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
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
  [15975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(222), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16014] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(223), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(224), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(225), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(226), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(227), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16209] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(228), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16248] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(229), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(230), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(231), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(232), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16404] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(233), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16443] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(234), 1,
      sym_block_comment,
    ACTIONS(307), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(304), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16482] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(235), 1,
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
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16521] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(236), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(550), 10,
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
  [16559] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(237), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(552), 10,
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
  [16597] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(238), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
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
  [16635] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_LT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(239), 1,
      sym_block_comment,
    ACTIONS(152), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16678] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_LT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(240), 1,
      sym_block_comment,
    ACTIONS(152), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(558), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(241), 1,
      sym_block_comment,
    ACTIONS(560), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(562), 10,
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
  [16753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(242), 1,
      sym_block_comment,
    ACTIONS(564), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(566), 10,
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
  [16785] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LT,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(243), 1,
      sym_block_comment,
    ACTIONS(558), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(150), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16829] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_SET,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(244), 1,
      sym_block_comment,
    STATE(520), 1,
      sym_base_type,
    STATE(539), 1,
      sym_query_param,
    STATE(763), 1,
      sym_query_params,
    STATE(761), 2,
      sym_set_param,
      sym__type,
    ACTIONS(574), 10,
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
  [16873] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(578), 1,
      anon_sym_GT,
    ACTIONS(580), 1,
      sym_name,
    STATE(245), 1,
      sym_block_comment,
    STATE(252), 1,
      aux_sym_typedef_repeat1,
    STATE(258), 1,
      sym_tuple_field,
    STATE(279), 1,
      sym_tuple_fields,
    STATE(720), 1,
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
  [16916] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(246), 1,
      sym_block_comment,
    ACTIONS(582), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16951] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(247), 1,
      sym_block_comment,
    ACTIONS(584), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16986] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(248), 1,
      sym_block_comment,
    ACTIONS(586), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17021] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(249), 1,
      sym_block_comment,
    ACTIONS(588), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17056] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(250), 1,
      sym_block_comment,
    ACTIONS(590), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17091] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(580), 1,
      sym_name,
    ACTIONS(592), 1,
      anon_sym_GT,
    STATE(245), 1,
      aux_sym_typedef_repeat1,
    STATE(251), 1,
      sym_block_comment,
    STATE(258), 1,
      sym_tuple_field,
    STATE(279), 1,
      sym_tuple_fields,
    STATE(720), 1,
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
  [17134] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(594), 1,
      anon_sym_GT,
    ACTIONS(599), 1,
      anon_sym_VERTEX,
    ACTIONS(602), 1,
      sym_name,
    STATE(258), 1,
      sym_tuple_field,
    STATE(279), 1,
      sym_tuple_fields,
    STATE(720), 1,
      sym_base_type,
    STATE(252), 2,
      sym_block_comment,
      aux_sym_typedef_repeat1,
    ACTIONS(596), 10,
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
  [17175] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(253), 1,
      sym_block_comment,
    ACTIONS(605), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17210] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_SET,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(254), 1,
      sym_block_comment,
    STATE(520), 1,
      sym_base_type,
    STATE(616), 1,
      sym_query_param,
    STATE(761), 2,
      sym_set_param,
      sym__type,
    ACTIONS(574), 10,
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
  [17248] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(609), 1,
      anon_sym_LBRACK,
    ACTIONS(611), 1,
      anon_sym_AS,
    STATE(186), 1,
      sym_math_operator,
    STATE(255), 1,
      sym_block_comment,
    ACTIONS(607), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17286] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_SumAccum,
    ACTIONS(619), 1,
      anon_sym_ListAccum,
    ACTIONS(623), 1,
      anon_sym_MapAccum,
    ACTIONS(625), 1,
      anon_sym_HeapAccum,
    ACTIONS(627), 1,
      anon_sym_GroupbyAccum,
    ACTIONS(629), 1,
      anon_sym_ArrayAccum,
    STATE(256), 1,
      sym_block_comment,
    STATE(655), 1,
      sym_accum_type,
    ACTIONS(615), 2,
      anon_sym_MaxAccum,
      anon_sym_MinAccum,
    ACTIONS(621), 2,
      anon_sym_SetAccum,
      anon_sym_BagAccum,
    ACTIONS(617), 5,
      anon_sym_AvgAccum,
      anon_sym_OrAccum,
      anon_sym_AndAccum,
      anon_sym_BitwiseorAccum,
      anon_sym_BitwiseandAccum,
  [17332] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_DASH,
    STATE(257), 1,
      sym_block_comment,
    STATE(587), 1,
      sym_constant,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(633), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17375] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_GT,
    STATE(258), 1,
      sym_block_comment,
    STATE(263), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(639), 12,
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
  [17408] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_DASH,
    STATE(259), 1,
      sym_block_comment,
    STATE(634), 1,
      sym_constant,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(633), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17451] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(631), 1,
      anon_sym_DASH,
    STATE(260), 1,
      sym_block_comment,
    STATE(535), 1,
      sym_constant,
    STATE(51), 2,
      sym_integer,
      sym_real,
    STATE(58), 2,
      sym__numeric,
      sym_string_literal,
    ACTIONS(633), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_GSQL_UINT_MAX,
      anon_sym_GSQL_INT_MAX,
      anon_sym_GSQL_UINT_MIN,
  [17494] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_LT,
    STATE(261), 1,
      sym_block_comment,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(645), 12,
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
  [17525] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(262), 2,
      sym_block_comment,
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
  [17556] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_tuple_fields_repeat1,
    STATE(263), 1,
      sym_block_comment,
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
  [17589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(264), 1,
      sym_block_comment,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_GT,
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
  [17617] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(265), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(645), 1,
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
  [17651] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    STATE(266), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17681] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    STATE(267), 1,
      sym_block_comment,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(526), 1,
      sym_path_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(586), 1,
      sym_step_edge_types,
    STATE(696), 1,
      sym_step_edge_set,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [17731] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(268), 1,
      sym_block_comment,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(645), 12,
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
  [17759] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(269), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(642), 1,
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
  [17793] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(270), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(707), 1,
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
  [17827] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_DASH_GT,
    STATE(159), 1,
      sym_math_operator,
    STATE(271), 1,
      sym_block_comment,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17865] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    STATE(272), 1,
      sym_block_comment,
    STATE(487), 1,
      sym_base_type,
    STATE(640), 1,
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
  [17899] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_DASH_GT,
    STATE(159), 1,
      sym_math_operator,
    STATE(273), 1,
      sym_block_comment,
    STATE(469), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17937] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(274), 1,
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
  [17965] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      sym_name,
    STATE(275), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(323), 1,
      sym_step_source_set,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(349), 1,
      sym_path_pattern,
    STATE(386), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
    STATE(410), 2,
      sym_step,
      sym_step_v2,
  [18013] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      sym_math_operator,
    STATE(276), 1,
      sym_block_comment,
    STATE(453), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18049] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(580), 1,
      sym_name,
    STATE(264), 1,
      sym_tuple_field,
    STATE(277), 1,
      sym_block_comment,
    STATE(720), 1,
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
  [18083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(278), 1,
      sym_block_comment,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(682), 12,
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
  [18111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(684), 1,
      anon_sym_GT,
    STATE(279), 1,
      sym_block_comment,
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
  [18138] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(159), 1,
      sym_math_operator,
    STATE(280), 1,
      sym_block_comment,
    ACTIONS(312), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(310), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18167] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_math_operator,
    STATE(281), 1,
      sym_block_comment,
    STATE(481), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18202] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(282), 1,
      sym_block_comment,
    ACTIONS(692), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18233] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(159), 1,
      sym_math_operator,
    STATE(283), 1,
      sym_block_comment,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(692), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18264] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(159), 1,
      sym_math_operator,
    STATE(284), 1,
      sym_block_comment,
    ACTIONS(444), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(490), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(434), 7,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18295] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(696), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_math_operator,
    STATE(285), 1,
      sym_block_comment,
    ACTIONS(694), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(286), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(550), 10,
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
  [18355] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(287), 1,
      sym_block_comment,
    STATE(520), 1,
      sym_base_type,
    STATE(533), 1,
      sym__type,
    ACTIONS(574), 10,
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
  [18386] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(288), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(552), 10,
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
  [18413] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      anon_sym_AS,
    STATE(186), 1,
      sym_math_operator,
    STATE(289), 1,
      sym_block_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18446] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(290), 1,
      sym_block_comment,
    STATE(520), 1,
      sym_base_type,
    STATE(699), 1,
      sym__type,
    ACTIONS(574), 10,
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
  [18477] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_block_comment,
    STATE(520), 1,
      sym_base_type,
    STATE(608), 1,
      sym__type,
    ACTIONS(574), 10,
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
  [18508] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(292), 1,
      sym_block_comment,
    STATE(488), 1,
      sym__type,
    STATE(520), 1,
      sym_base_type,
    ACTIONS(574), 10,
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
  [18539] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_VERTEX,
    STATE(278), 1,
      sym_base_type,
    STATE(293), 1,
      sym_block_comment,
    ACTIONS(702), 10,
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
  [18567] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(706), 1,
      anon_sym_WHEN,
    STATE(186), 1,
      sym_math_operator,
    STATE(294), 1,
      sym_block_comment,
    STATE(462), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18599] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_block_comment,
    STATE(399), 1,
      sym_atomic_edge_type,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(581), 1,
      sym_path_edge_pattern,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [18643] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_block_comment,
    STATE(399), 1,
      sym_atomic_edge_type,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(504), 1,
      sym_path_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [18687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(297), 1,
      sym_block_comment,
    ACTIONS(186), 12,
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
  [18711] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_block_comment,
    STATE(398), 1,
      sym_edge_set_type,
    STATE(399), 1,
      sym_atomic_edge_type,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(581), 1,
      sym_path_edge_pattern,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [18755] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_math_operator,
    STATE(299), 1,
      sym_block_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18785] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_block_comment,
    STATE(399), 1,
      sym_atomic_edge_type,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(526), 1,
      sym_path_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [18829] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_math_operator,
    STATE(301), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18858] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_math_operator,
    STATE(302), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18887] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(716), 1,
      anon_sym_GT,
    ACTIONS(718), 1,
      sym_name,
    STATE(303), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(372), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
  [18928] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_math_operator,
    STATE(304), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18957] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(722), 1,
      anon_sym_AND,
    STATE(186), 1,
      sym_math_operator,
    STATE(305), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18986] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_math_operator,
    STATE(306), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19015] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      sym_math_operator,
    STATE(307), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19044] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_math_operator,
    STATE(308), 1,
      sym_block_comment,
    ACTIONS(434), 8,
      anon_sym_DASH,
      anon_sym_PIPE2,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [19073] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      sym_name,
    STATE(309), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(400), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
  [19111] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(586), 1,
      sym_step_edge_types,
    STATE(598), 1,
      sym_atomic_edge_type,
    STATE(696), 1,
      sym_step_edge_set,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [19149] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      sym_name,
    STATE(311), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(358), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
  [19187] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      sym_name,
    STATE(312), 1,
      sym_block_comment,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(352), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
  [19225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(313), 1,
      sym_block_comment,
    ACTIONS(732), 10,
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
  [19247] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(586), 1,
      sym_step_edge_types,
    STATE(598), 1,
      sym_atomic_edge_type,
    STATE(693), 1,
      sym_step_edge_set,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [19285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(315), 1,
      sym_block_comment,
    ACTIONS(550), 10,
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
  [19307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(316), 1,
      sym_block_comment,
    ACTIONS(550), 10,
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
  [19329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(317), 1,
      sym_block_comment,
    ACTIONS(552), 10,
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
  [19351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(318), 1,
      sym_block_comment,
    ACTIONS(734), 10,
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
  [19373] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_DOT,
    ACTIONS(740), 1,
      anon_sym_PLUS_EQ,
    STATE(319), 1,
      sym_block_comment,
    STATE(324), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(736), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19401] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      sym_name,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(320), 1,
      sym_block_comment,
    STATE(326), 1,
      sym_step_vertex_types,
    STATE(329), 1,
      sym_atomic_vertex_type,
    STATE(331), 1,
      sym_vertex_set_type,
    STATE(371), 1,
      sym_step_vertex_set,
    ACTIONS(674), 2,
      anon_sym__,
      anon_sym_ANY,
  [19439] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      anon_sym_WHERE,
    ACTIONS(746), 1,
      anon_sym_ACCUM,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    STATE(321), 1,
      sym_block_comment,
    STATE(330), 1,
      sym_where_clause,
    STATE(391), 1,
      sym_accum_clause,
    STATE(392), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(689), 1,
      sym_limit_clause,
  [19479] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      anon_sym_DOT,
    STATE(322), 2,
      sym_block_comment,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(752), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19502] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(323), 1,
      sym_block_comment,
    STATE(339), 1,
      aux_sym_path_pattern_repeat1,
    STATE(357), 1,
      aux_sym_step_repeat1,
    ACTIONS(757), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19529] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_DOT,
    STATE(322), 1,
      aux_sym_v_accum_func_call_repeat1,
    STATE(324), 1,
      sym_block_comment,
    ACTIONS(761), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19554] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    STATE(325), 1,
      sym_block_comment,
    STATE(399), 1,
      sym_atomic_edge_type,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(458), 1,
      sym_atomic_edge_pattern,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [19589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_COLON,
    STATE(326), 1,
      sym_block_comment,
    ACTIONS(763), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19611] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(767), 1,
      anon_sym_DASH,
    STATE(327), 1,
      sym_block_comment,
    STATE(339), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(757), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_COLON,
    STATE(328), 1,
      sym_block_comment,
    ACTIONS(769), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19657] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(329), 1,
      sym_block_comment,
    ACTIONS(773), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19677] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      anon_sym_ACCUM,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      sym_block_comment,
    STATE(387), 1,
      sym_accum_clause,
    STATE(389), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(846), 1,
      sym_limit_clause,
  [19711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(331), 1,
      sym_block_comment,
    ACTIONS(777), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19731] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(332), 2,
      sym_block_comment,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(782), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19753] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    STATE(333), 1,
      sym_block_comment,
    ACTIONS(786), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(334), 1,
      sym_block_comment,
    ACTIONS(788), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(335), 1,
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
  [19817] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_DASH,
    STATE(336), 2,
      sym_block_comment,
      aux_sym_path_pattern_repeat1,
    ACTIONS(792), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19839] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    STATE(337), 1,
      sym_block_comment,
    ACTIONS(797), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(338), 1,
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
  [19883] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(767), 1,
      anon_sym_DASH,
    STATE(336), 1,
      aux_sym_path_pattern_repeat1,
    STATE(339), 1,
      sym_block_comment,
    ACTIONS(801), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_COLON,
    STATE(340), 1,
      sym_block_comment,
    ACTIONS(769), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [19929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(341), 1,
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
  [19949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(342), 2,
      sym_block_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(808), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(343), 1,
      sym_block_comment,
    ACTIONS(810), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [19989] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      anon_sym_DISTINCT,
    ACTIONS(816), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(344), 1,
      sym_block_comment,
    STATE(443), 1,
      sym_set_bag_expr,
  [20020] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(345), 1,
      sym_block_comment,
    ACTIONS(818), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20039] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      sym_name,
    STATE(346), 1,
      sym_block_comment,
    STATE(740), 1,
      sym_for_each_control,
    STATE(619), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20068] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(347), 1,
      sym_block_comment,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20087] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_name,
    ACTIONS(826), 1,
      anon_sym_RANGE,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(348), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_set_bag_expr,
  [20118] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      sym_block_comment,
    STATE(353), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(830), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20141] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    ACTIONS(836), 1,
      sym_name,
    STATE(350), 1,
      sym_block_comment,
    STATE(507), 1,
      sym_seed,
    STATE(579), 1,
      sym_global_accum_name,
    ACTIONS(834), 2,
      anon_sym__,
      anon_sym_ANY,
  [20170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(351), 1,
      sym_block_comment,
    ACTIONS(838), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(352), 1,
      sym_block_comment,
    ACTIONS(840), 7,
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
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_from_clause_repeat1,
    STATE(353), 1,
      sym_block_comment,
    ACTIONS(842), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20231] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_CREATE,
    ACTIONS(11), 1,
      anon_sym_INTERPRET,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    STATE(354), 1,
      sym_block_comment,
    STATE(370), 1,
      aux_sym_gsql_repeat1,
    STATE(506), 1,
      sym__definition,
    STATE(612), 2,
      sym_create_query,
      sym_interpret_query,
  [20260] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym_name,
    STATE(355), 1,
      sym_block_comment,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(415), 1,
      sym_edge_set_type,
    STATE(430), 1,
      sym_atomic_edge_type,
    ACTIONS(662), 2,
      anon_sym__,
      anon_sym_ANY,
  [20289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_DASH,
    STATE(356), 2,
      sym_block_comment,
      aux_sym_step_repeat1,
    ACTIONS(846), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20310] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(853), 1,
      anon_sym_DASH,
    STATE(356), 1,
      aux_sym_step_repeat1,
    STATE(357), 1,
      sym_block_comment,
    ACTIONS(851), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(358), 1,
      sym_block_comment,
    ACTIONS(855), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(359), 1,
      sym_block_comment,
    ACTIONS(857), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20371] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(360), 1,
      sym_block_comment,
    ACTIONS(782), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(361), 1,
      sym_block_comment,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20409] = 4,
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
  [20428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(363), 1,
      sym_block_comment,
    ACTIONS(863), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(364), 1,
      sym_block_comment,
    ACTIONS(865), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20466] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      sym_name,
    STATE(365), 1,
      sym_block_comment,
    STATE(723), 1,
      sym_for_each_control,
    STATE(619), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [20495] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      sym_name,
    ACTIONS(867), 1,
      anon_sym_DISTINCT,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(366), 1,
      sym_block_comment,
    STATE(467), 1,
      sym_set_bag_expr,
  [20526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(367), 1,
      sym_block_comment,
    ACTIONS(869), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(368), 1,
      sym_block_comment,
    ACTIONS(871), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(369), 1,
      sym_block_comment,
    ACTIONS(873), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20583] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      ts_builtin_sym_end,
    ACTIONS(877), 1,
      anon_sym_CREATE,
    ACTIONS(880), 1,
      anon_sym_INTERPRET,
    STATE(506), 1,
      sym__definition,
    STATE(370), 2,
      sym_block_comment,
      aux_sym_gsql_repeat1,
    STATE(612), 2,
      sym_create_query,
      sym_interpret_query,
  [20610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(371), 1,
      sym_block_comment,
    ACTIONS(883), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(372), 1,
      sym_block_comment,
    ACTIONS(885), 6,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
      anon_sym_DASH,
  [20646] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(373), 1,
      sym_block_comment,
    STATE(423), 1,
      sym_set_bag_expr,
  [20674] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(374), 1,
      sym_block_comment,
    STATE(433), 1,
      sym_set_bag_expr,
  [20702] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(38), 1,
      aux_sym_accum_type_repeat1,
    STATE(375), 1,
      sym_block_comment,
    ACTIONS(268), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20724] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(376), 1,
      sym_block_comment,
    STATE(467), 1,
      sym_set_bag_expr,
  [20752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(377), 1,
      sym_block_comment,
    ACTIONS(132), 6,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20770] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(288), 1,
      sym_set_bag_expr,
    STATE(378), 1,
      sym_block_comment,
  [20798] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(379), 1,
      sym_block_comment,
    STATE(471), 1,
      sym_set_bag_expr,
  [20826] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      sym_block_comment,
    STATE(421), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(686), 1,
      sym_limit_clause,
  [20854] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(381), 1,
      sym_block_comment,
    STATE(470), 1,
      sym_set_bag_expr,
  [20882] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(382), 1,
      sym_block_comment,
    STATE(443), 1,
      sym_set_bag_expr,
  [20910] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(383), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(893), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(384), 1,
      sym_block_comment,
    ACTIONS(808), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20948] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(286), 1,
      sym_set_bag_expr,
    STATE(385), 1,
      sym_block_comment,
  [20976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_DASH,
    STATE(386), 1,
      sym_block_comment,
    ACTIONS(895), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [20996] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(387), 1,
      sym_block_comment,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(736), 1,
      sym_limit_clause,
  [21024] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_AT_AT,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym_name,
    STATE(176), 1,
      sym_name_dot,
    STATE(201), 1,
      sym_global_accum_name,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(388), 1,
      sym_block_comment,
  [21052] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    STATE(389), 1,
      sym_block_comment,
    STATE(421), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(736), 1,
      sym_limit_clause,
  [21080] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(836), 1,
      sym_name,
    STATE(390), 1,
      sym_block_comment,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_seed,
    ACTIONS(834), 2,
      anon_sym__,
      anon_sym_ANY,
  [21106] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(389), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(391), 1,
      sym_block_comment,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(846), 1,
      sym_limit_clause,
  [21134] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_LIMIT,
    ACTIONS(750), 1,
      anon_sym_POST_DASHACCUM,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      sym_block_comment,
    STATE(421), 1,
      aux_sym_gsql_select_block_repeat1,
    STATE(553), 1,
      sym_post_accum_clause,
    STATE(846), 1,
      sym_limit_clause,
  [21162] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_digit,
    ACTIONS(631), 1,
      anon_sym_DASH,
    STATE(393), 1,
      sym_block_comment,
    STATE(582), 1,
      sym__numeric,
    STATE(51), 2,
      sym_integer,
      sym_real,
  [21188] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_set_bag_expr,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(394), 1,
      sym_block_comment,
  [21216] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      sym_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(395), 1,
      sym_block_comment,
    STATE(440), 1,
      sym_set_bag_expr,
  [21244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(396), 1,
      sym_block_comment,
    ACTIONS(905), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21261] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(907), 1,
      sym_name,
    STATE(397), 1,
      sym_block_comment,
    STATE(670), 1,
      sym_file_path,
    STATE(815), 1,
      sym_string_literal,
  [21286] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(913), 1,
      anon_sym_PIPE,
    STATE(398), 1,
      sym_block_comment,
    STATE(505), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(911), 2,
      anon_sym_GT,
      anon_sym_DOT,
  [21309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_GT,
    STATE(399), 1,
      sym_block_comment,
    ACTIONS(915), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(400), 1,
      sym_block_comment,
    ACTIONS(919), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_PIPE,
    STATE(401), 2,
      sym_block_comment,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(921), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(928), 1,
      anon_sym_DOT,
    STATE(402), 1,
      sym_block_comment,
    ACTIONS(926), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [21383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(403), 2,
      sym_block_comment,
      aux_sym_print_stmt_repeat1,
    ACTIONS(933), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_AS,
    STATE(404), 1,
      sym_block_comment,
    ACTIONS(607), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [21421] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    ACTIONS(939), 1,
      anon_sym_WHERE,
    ACTIONS(941), 1,
      anon_sym_TO_CSV,
    STATE(405), 1,
      sym_block_comment,
    STATE(412), 1,
      aux_sym_print_stmt_repeat1,
  [21446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(406), 1,
      sym_block_comment,
    ACTIONS(943), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [21463] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(945), 1,
      sym_name,
    STATE(407), 1,
      sym_block_comment,
    STATE(806), 1,
      sym_file_path,
    STATE(815), 1,
      sym_string_literal,
  [21488] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(949), 1,
      anon_sym_LT,
    ACTIONS(951), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(408), 1,
      sym_block_comment,
  [21513] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(953), 1,
      sym_name,
    STATE(409), 1,
      sym_block_comment,
    STATE(767), 1,
      sym_file_path,
    STATE(815), 1,
      sym_string_literal,
  [21538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(410), 1,
      sym_block_comment,
    ACTIONS(830), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [21555] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(949), 1,
      anon_sym_LT,
    ACTIONS(955), 1,
      anon_sym_EQ,
    ACTIONS(957), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(411), 1,
      sym_block_comment,
  [21580] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    ACTIONS(961), 1,
      anon_sym_WHERE,
    ACTIONS(963), 1,
      anon_sym_TO_CSV,
    STATE(403), 1,
      aux_sym_print_stmt_repeat1,
    STATE(412), 1,
      sym_block_comment,
  [21605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_PIPE,
    STATE(413), 1,
      sym_block_comment,
    STATE(417), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(965), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(414), 1,
      sym_block_comment,
    ACTIONS(969), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(415), 1,
      sym_block_comment,
    ACTIONS(911), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(416), 1,
      sym_block_comment,
    ACTIONS(971), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
      anon_sym_AS,
  [21677] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_PIPE,
    STATE(401), 1,
      aux_sym_disj_pattern_repeat1,
    STATE(417), 1,
      sym_block_comment,
    ACTIONS(973), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21698] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(975), 1,
      sym_name,
    STATE(418), 1,
      sym_block_comment,
    STATE(703), 1,
      sym_file_path,
    STATE(815), 1,
      sym_string_literal,
  [21723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(419), 1,
      sym_block_comment,
    ACTIONS(558), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(420), 1,
      sym_block_comment,
    ACTIONS(905), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21757] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_POST_DASHACCUM,
    STATE(553), 1,
      sym_post_accum_clause,
    ACTIONS(977), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(421), 2,
      sym_block_comment,
      aux_sym_gsql_select_block_repeat1,
  [21778] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_GT,
    STATE(422), 1,
      sym_block_comment,
    ACTIONS(915), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(982), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [21799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_DO,
    STATE(423), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21817] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_WHEN,
    ACTIONS(986), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(424), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat1,
  [21835] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(991), 1,
      anon_sym_EQ,
    ACTIONS(993), 1,
      anon_sym_PLUS_EQ,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(425), 1,
      sym_block_comment,
  [21857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_WHEN,
    ACTIONS(995), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(426), 2,
      sym_block_comment,
      aux_sym_dml_sub_case_stmt_repeat1,
  [21875] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    ACTIONS(1002), 1,
      anon_sym_TO_CSV,
    STATE(427), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [21895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_AT,
    STATE(428), 1,
      sym_block_comment,
    ACTIONS(1004), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21913] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(1008), 1,
      sym_name,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_block_comment,
    STATE(475), 1,
      sym_edge_set_type,
  [21935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(430), 1,
      sym_block_comment,
    ACTIONS(1010), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21951] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    ACTIONS(1014), 1,
      anon_sym_TO_CSV,
    STATE(431), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [21971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_AT,
    STATE(432), 1,
      sym_block_comment,
    ACTIONS(1016), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21989] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_DO,
    STATE(433), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22007] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(434), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(435), 1,
      sym_block_comment,
    ACTIONS(933), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [22041] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      sym_block_comment,
    ACTIONS(1025), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22059] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    ACTIONS(1027), 1,
      sym_name,
    STATE(437), 1,
      sym_block_comment,
    STATE(511), 1,
      aux_sym_accum_type_repeat1,
    STATE(748), 1,
      sym_simple_size,
  [22081] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(1029), 1,
      sym_name,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(438), 1,
      sym_block_comment,
    STATE(614), 1,
      sym_vertex_set_type,
  [22103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(439), 1,
      sym_block_comment,
    ACTIONS(1031), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_TO_CSV,
  [22119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_DO,
    STATE(440), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22137] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_AT,
    STATE(441), 1,
      sym_block_comment,
    ACTIONS(1035), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22155] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    ACTIONS(1029), 1,
      sym_name,
    STATE(313), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_block_comment,
    STATE(497), 1,
      sym_vertex_set_type,
  [22177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22195] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(444), 1,
      sym_block_comment,
    STATE(463), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22215] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1041), 1,
      anon_sym_ELSE,
    ACTIONS(1043), 1,
      anon_sym_END,
    ACTIONS(1045), 1,
      anon_sym_WHEN,
    STATE(424), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(445), 1,
      sym_block_comment,
  [22237] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      anon_sym_LIMIT,
    ACTIONS(1049), 1,
      anon_sym_DO,
    STATE(446), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22257] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      anon_sym_AT_AT,
    STATE(447), 1,
      sym_block_comment,
    STATE(530), 2,
      sym_global_accum_name,
      sym_local_accum_name,
  [22277] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    ACTIONS(1027), 1,
      sym_name,
    STATE(448), 1,
      sym_block_comment,
    STATE(511), 1,
      aux_sym_accum_type_repeat1,
    STATE(659), 1,
      sym_simple_size,
  [22299] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_AT_AT,
    ACTIONS(1008), 1,
      sym_name,
    STATE(414), 1,
      sym_global_accum_name,
    STATE(449), 1,
      sym_block_comment,
    STATE(596), 1,
      sym_edge_set_type,
  [22321] = 6,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1053), 1,
      anon_sym_STAR_SLASH,
    STATE(450), 1,
      sym_block_comment,
    STATE(459), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(1051), 2,
      sym_newline,
      sym_comment_contents,
  [22341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    STATE(451), 2,
      sym_block_comment,
      aux_sym_arg_list_repeat1,
  [22359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1060), 1,
      anon_sym_AT,
    STATE(452), 1,
      sym_block_comment,
    ACTIONS(1058), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_arg_list_repeat1,
    STATE(453), 1,
      sym_block_comment,
    ACTIONS(1062), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [22397] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1064), 1,
      anon_sym_ELSE,
    ACTIONS(1066), 1,
      anon_sym_END,
    ACTIONS(1068), 1,
      anon_sym_WHEN,
    STATE(426), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(454), 1,
      sym_block_comment,
  [22419] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1070), 1,
      anon_sym_LIMIT,
    ACTIONS(1072), 1,
      anon_sym_DO,
    STATE(455), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [22439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(456), 1,
      sym_block_comment,
    ACTIONS(1074), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [22455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1078), 1,
      anon_sym_WHEN,
    ACTIONS(1076), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(457), 2,
      sym_block_comment,
      aux_sym_query_body_case_stmt_repeat2,
  [22473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(458), 1,
      sym_block_comment,
    ACTIONS(921), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [22489] = 6,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      anon_sym_STAR_SLASH,
    STATE(459), 1,
      sym_block_comment,
    STATE(465), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(1051), 2,
      sym_newline,
      sym_comment_contents,
  [22509] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      anon_sym_LT,
    STATE(460), 1,
      sym_block_comment,
    ACTIONS(641), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1087), 1,
      anon_sym_AT,
    STATE(461), 1,
      sym_block_comment,
    ACTIONS(1085), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22545] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      anon_sym_WHEN,
    ACTIONS(1089), 1,
      anon_sym_ELSE,
    ACTIONS(1091), 1,
      anon_sym_END,
    STATE(457), 1,
      aux_sym_query_body_case_stmt_repeat2,
    STATE(462), 1,
      sym_block_comment,
  [22567] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    ACTIONS(1097), 1,
      anon_sym_SEMI,
    STATE(463), 1,
      sym_block_comment,
    STATE(544), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [22589] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_EQ,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
    STATE(464), 1,
      sym_block_comment,
    STATE(537), 1,
      aux_sym_base_decl_stmt_repeat1,
  [22611] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1106), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1103), 2,
      sym_newline,
      sym_comment_contents,
    STATE(465), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [22629] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1110), 1,
      anon_sym_AT,
    STATE(466), 1,
      sym_block_comment,
    ACTIONS(1108), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22665] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_block_comment,
    ACTIONS(1025), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22683] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_arg_list_repeat1,
    STATE(469), 1,
      sym_block_comment,
    ACTIONS(1062), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [22703] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_block_comment,
    ACTIONS(194), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [22739] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      anon_sym_AT,
    STATE(472), 1,
      sym_block_comment,
    ACTIONS(1120), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [22757] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(473), 1,
      sym_block_comment,
    ACTIONS(1124), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [22773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(474), 1,
      sym_block_comment,
    ACTIONS(324), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22788] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(913), 1,
      anon_sym_PIPE,
    STATE(475), 1,
      sym_block_comment,
    STATE(505), 1,
      aux_sym_step_edge_types_repeat1,
  [22807] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1126), 1,
      anon_sym_OR,
    ACTIONS(1128), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1130), 1,
      anon_sym_QUERY,
    STATE(476), 1,
      sym_block_comment,
  [22826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(477), 1,
      sym_block_comment,
    ACTIONS(1132), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22841] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_SEMI,
    STATE(478), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [22860] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      anon_sym_GT,
    STATE(479), 1,
      sym_block_comment,
    STATE(518), 1,
      aux_sym_func_call_stmt_repeat1,
  [22879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1142), 1,
      anon_sym_DOT_STAR,
    STATE(480), 1,
      sym_block_comment,
    ACTIONS(1140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [22896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      sym_block_comment,
    STATE(552), 1,
      aux_sym_base_decl_stmt_repeat1,
  [22915] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(482), 1,
      sym_block_comment,
    STATE(503), 1,
      aux_sym_query_params_repeat1,
  [22934] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1152), 1,
      anon_sym_EQ,
    STATE(483), 1,
      sym_block_comment,
    ACTIONS(1150), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22951] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1154), 1,
      anon_sym_AT,
    ACTIONS(1156), 1,
      sym_name,
    STATE(484), 1,
      sym_block_comment,
    STATE(595), 1,
      sym_local_accum_name,
  [22970] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
    ACTIONS(1160), 1,
      sym_name,
    STATE(420), 1,
      sym_simple_set,
    STATE(485), 1,
      sym_block_comment,
  [22989] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(487), 1,
      sym_block_comment,
    ACTIONS(1164), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23021] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_GT,
    STATE(479), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(488), 1,
      sym_block_comment,
  [23040] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1154), 1,
      anon_sym_AT,
    ACTIONS(1168), 1,
      sym_name,
    STATE(319), 1,
      sym_local_accum_name,
    STATE(489), 1,
      sym_block_comment,
  [23059] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_ELSE,
    ACTIONS(1173), 1,
      anon_sym_END,
    STATE(490), 2,
      sym_block_comment,
      aux_sym_query_body_if_stmt_repeat1,
  [23076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(491), 1,
      sym_block_comment,
    ACTIONS(1175), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23091] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1177), 1,
      anon_sym_ELSE,
    ACTIONS(1179), 1,
      anon_sym_END,
    STATE(492), 1,
      sym_block_comment,
    STATE(559), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
  [23110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(493), 1,
      sym_block_comment,
    ACTIONS(1181), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [23125] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1183), 1,
      anon_sym_AT,
    ACTIONS(1185), 1,
      sym_name,
    STATE(19), 1,
      sym_local_accum_name,
    STATE(494), 1,
      sym_block_comment,
  [23144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1187), 1,
      anon_sym_THEN,
    STATE(495), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23161] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_GT,
    STATE(496), 1,
      sym_block_comment,
    STATE(518), 1,
      aux_sym_func_call_stmt_repeat1,
  [23180] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    ACTIONS(1193), 1,
      anon_sym_PIPE2,
    STATE(497), 1,
      sym_block_comment,
    STATE(510), 1,
      aux_sym_step_vertex_types_repeat1,
  [23199] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1195), 1,
      anon_sym_ELSE,
    ACTIONS(1197), 1,
      anon_sym_END,
    STATE(498), 1,
      sym_block_comment,
    STATE(564), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [23218] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1199), 1,
      anon_sym_THEN,
    STATE(499), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23235] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_accum_type_repeat1,
    STATE(500), 1,
      sym_block_comment,
  [23254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(492), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(501), 1,
      sym_block_comment,
    ACTIONS(1203), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [23271] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1205), 1,
      sym_name,
    STATE(327), 1,
      sym_step_source_set,
    STATE(384), 1,
      sym_path_pattern,
    STATE(502), 1,
      sym_block_comment,
  [23290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(503), 2,
      sym_block_comment,
      aux_sym_query_params_repeat1,
  [23307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(504), 1,
      sym_block_comment,
    ACTIONS(1212), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23322] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_PIPE,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_block_comment,
    STATE(546), 1,
      aux_sym_step_edge_types_repeat1,
  [23341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(506), 1,
      sym_block_comment,
    ACTIONS(1216), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23356] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      sym_block_comment,
    STATE(527), 1,
      aux_sym_seed_set_repeat1,
  [23375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(508), 2,
      sym_block_comment,
      aux_sym_v_expr_set_repeat1,
  [23392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(509), 1,
      sym_block_comment,
    ACTIONS(1212), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23407] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1193), 1,
      anon_sym_PIPE2,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym_block_comment,
    STATE(521), 1,
      aux_sym_step_vertex_types_repeat1,
  [23426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    ACTIONS(1229), 1,
      anon_sym_DO,
    STATE(38), 1,
      aux_sym_accum_type_repeat1,
    STATE(511), 1,
      sym_block_comment,
  [23445] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_GT,
    STATE(512), 1,
      sym_block_comment,
    STATE(540), 1,
      aux_sym_accum_type_repeat4,
  [23464] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1235), 1,
      anon_sym_THEN,
    STATE(513), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23481] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    STATE(514), 2,
      sym_block_comment,
      aux_sym_seed_set_repeat1,
  [23498] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_GT,
    STATE(515), 1,
      sym_block_comment,
    STATE(536), 1,
      aux_sym_accum_type_repeat4,
  [23517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(516), 1,
      sym_block_comment,
    ACTIONS(1242), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [23532] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    STATE(517), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat2,
  [23549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    ACTIONS(1252), 1,
      anon_sym_GT,
    STATE(518), 2,
      sym_block_comment,
      aux_sym_func_call_stmt_repeat1,
  [23566] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(993), 1,
      anon_sym_PLUS_EQ,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(519), 1,
      sym_block_comment,
  [23585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(520), 1,
      sym_block_comment,
    ACTIONS(1254), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23600] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(1258), 1,
      anon_sym_PIPE2,
    STATE(521), 2,
      sym_block_comment,
      aux_sym_step_vertex_types_repeat1,
  [23617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(522), 1,
      sym_block_comment,
    ACTIONS(1261), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [23632] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      sym_block_comment,
    STATE(548), 1,
      aux_sym_for_each_control_repeat1,
  [23651] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1195), 1,
      anon_sym_ELSE,
    ACTIONS(1197), 1,
      anon_sym_END,
    STATE(524), 1,
      sym_block_comment,
    STATE(564), 1,
      aux_sym_query_body_if_stmt_repeat1,
  [23670] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
    ACTIONS(1160), 1,
      sym_name,
    STATE(468), 1,
      sym_simple_set,
    STATE(525), 1,
      sym_block_comment,
  [23689] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    ACTIONS(1269), 1,
      anon_sym_DOT,
    ACTIONS(1271), 1,
      anon_sym_COLON,
    STATE(526), 1,
      sym_block_comment,
  [23708] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    ACTIONS(1273), 1,
      anon_sym_RBRACE,
    STATE(514), 1,
      aux_sym_seed_set_repeat1,
    STATE(527), 1,
      sym_block_comment,
  [23727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(528), 1,
      sym_block_comment,
    ACTIONS(965), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23742] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1275), 1,
      anon_sym_THEN,
    STATE(529), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1279), 1,
      anon_sym_EQ,
    STATE(530), 1,
      sym_block_comment,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [23776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1281), 1,
      anon_sym_AT,
    ACTIONS(1283), 1,
      sym_name,
    STATE(174), 1,
      sym_local_accum_name,
    STATE(531), 1,
      sym_block_comment,
  [23795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23812] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    ACTIONS(1287), 1,
      anon_sym_GT,
    STATE(496), 1,
      aux_sym_func_call_stmt_repeat1,
    STATE(533), 1,
      sym_block_comment,
  [23831] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      sym_block_comment,
    STATE(563), 1,
      aux_sym_accum_type_repeat2,
  [23850] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    STATE(478), 1,
      aux_sym_accum_decl_stmt_repeat1,
    STATE(535), 1,
      sym_block_comment,
  [23869] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    ACTIONS(1298), 1,
      anon_sym_GT,
    STATE(536), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat4,
  [23886] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(1300), 1,
      anon_sym_SEMI,
    STATE(537), 1,
      sym_block_comment,
    STATE(552), 1,
      aux_sym_base_decl_stmt_repeat1,
  [23905] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1302), 1,
      anon_sym_THEN,
    STATE(538), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [23922] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_query_params_repeat1,
    STATE(539), 1,
      sym_block_comment,
  [23941] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1289), 1,
      anon_sym_GT,
    STATE(536), 1,
      aux_sym_accum_type_repeat4,
    STATE(540), 1,
      sym_block_comment,
  [23960] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(541), 1,
      sym_block_comment,
  [23979] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1310), 1,
      anon_sym_ELSE,
    ACTIONS(1312), 1,
      anon_sym_END,
    STATE(492), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    STATE(542), 1,
      sym_block_comment,
  [23998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(543), 1,
      sym_block_comment,
    ACTIONS(1074), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [24013] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1314), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      sym_block_comment,
    STATE(547), 1,
      aux_sym_accum_decl_stmt_repeat1,
  [24032] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1316), 1,
      anon_sym_LPAREN,
    ACTIONS(1318), 1,
      anon_sym_EQ,
    ACTIONS(1320), 1,
      anon_sym_PLUS_EQ,
    STATE(545), 1,
      sym_block_comment,
  [24051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(1324), 1,
      anon_sym_PIPE,
    STATE(546), 2,
      sym_block_comment,
      aux_sym_step_edge_types_repeat1,
  [24068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(547), 2,
      sym_block_comment,
      aux_sym_accum_decl_stmt_repeat1,
  [24085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    STATE(548), 2,
      sym_block_comment,
      aux_sym_for_each_control_repeat1,
  [24102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1337), 1,
      anon_sym_EQ,
    STATE(549), 1,
      sym_block_comment,
    ACTIONS(1335), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24119] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    STATE(550), 1,
      sym_block_comment,
    ACTIONS(1339), 3,
      sym_newline,
      sym_comment_contents,
      anon_sym_STAR_SLASH,
  [24134] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1341), 1,
      anon_sym_THEN,
    STATE(551), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    STATE(552), 2,
      sym_block_comment,
      aux_sym_base_decl_stmt_repeat1,
  [24168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(553), 1,
      sym_block_comment,
    ACTIONS(1346), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_POST_DASHACCUM,
  [24183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24217] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(556), 1,
      sym_block_comment,
    ACTIONS(1352), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(557), 1,
      sym_block_comment,
    ACTIONS(668), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24247] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1183), 1,
      anon_sym_AT,
    ACTIONS(1354), 1,
      sym_name,
    STATE(19), 1,
      sym_local_accum_name,
    STATE(558), 1,
      sym_block_comment,
  [24266] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1356), 1,
      anon_sym_ELSE,
    ACTIONS(1359), 1,
      anon_sym_END,
    STATE(559), 2,
      sym_block_comment,
      aux_sym_dml_sub_if_stmt_repeat1,
  [24283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1361), 1,
      anon_sym_THEN,
    STATE(560), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24300] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(561), 1,
      sym_block_comment,
    ACTIONS(1363), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [24315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1365), 1,
      anon_sym_THEN,
    STATE(562), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24332] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_accum_type_repeat2,
    STATE(563), 1,
      sym_block_comment,
  [24351] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1369), 1,
      anon_sym_ELSE,
    ACTIONS(1371), 1,
      anon_sym_END,
    STATE(490), 1,
      aux_sym_query_body_if_stmt_repeat1,
    STATE(564), 1,
      sym_block_comment,
  [24370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(565), 1,
      sym_block_comment,
    ACTIONS(641), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [24385] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_GT,
    STATE(515), 1,
      aux_sym_accum_type_repeat4,
    STATE(566), 1,
      sym_block_comment,
  [24404] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RBRACK,
    STATE(541), 1,
      aux_sym_v_expr_set_repeat1,
    STATE(567), 1,
      sym_block_comment,
  [24423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_OR,
      anon_sym_AND,
  [24440] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1281), 1,
      anon_sym_AT,
    ACTIONS(1379), 1,
      sym_name,
    STATE(174), 1,
      sym_local_accum_name,
    STATE(569), 1,
      sym_block_comment,
  [24459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(570), 1,
      sym_block_comment,
    ACTIONS(1381), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [24474] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(571), 1,
      sym_block_comment,
    ACTIONS(1383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [24488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1385), 1,
      anon_sym_SYNTAX,
    ACTIONS(1387), 1,
      anon_sym_LBRACE,
    STATE(572), 1,
      sym_block_comment,
  [24504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(375), 1,
      aux_sym_accum_type_repeat1,
    STATE(573), 1,
      sym_block_comment,
  [24520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(574), 1,
      sym_block_comment,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [24534] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(206), 1,
      aux_sym_accum_type_repeat1,
    STATE(575), 1,
      sym_block_comment,
  [24550] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(576), 1,
      sym_block_comment,
    STATE(766), 1,
      sym_parameter_list,
  [24566] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1393), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1395), 1,
      anon_sym_QUERY,
    STATE(577), 1,
      sym_block_comment,
  [24582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1162), 1,
      anon_sym_NULL,
    ACTIONS(1397), 1,
      anon_sym_NOT,
    STATE(578), 1,
      sym_block_comment,
  [24598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(579), 1,
      sym_block_comment,
    ACTIONS(1140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [24612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(580), 1,
      sym_block_comment,
    ACTIONS(1399), 2,
      anon_sym_V2,
      anon_sym_v2,
  [24626] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1269), 1,
      anon_sym_DOT,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      sym_block_comment,
  [24642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(582), 1,
      sym_block_comment,
    ACTIONS(1403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1405), 1,
      anon_sym_SYNTAX,
    ACTIONS(1407), 1,
      anon_sym_LBRACE,
    STATE(583), 1,
      sym_block_comment,
  [24672] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1409), 1,
      anon_sym_SYNTAX,
    ACTIONS(1411), 1,
      anon_sym_LBRACE,
    STATE(584), 1,
      sym_block_comment,
  [24688] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(585), 1,
      sym_block_comment,
  [24704] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(1415), 1,
      anon_sym_COLON,
    STATE(586), 1,
      sym_block_comment,
  [24720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(587), 1,
      sym_block_comment,
    ACTIONS(1417), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [24734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(588), 1,
      sym_block_comment,
    ACTIONS(1419), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1421), 1,
      anon_sym_IN,
    ACTIONS(1423), 1,
      anon_sym_COLON,
    STATE(589), 1,
      sym_block_comment,
  [24764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1425), 1,
      anon_sym_FROM,
    STATE(321), 1,
      sym_from_clause,
    STATE(590), 1,
      sym_block_comment,
  [24780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(500), 1,
      aux_sym_accum_type_repeat1,
    STATE(591), 1,
      sym_block_comment,
  [24796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      sym_block_comment,
    STATE(623), 1,
      aux_sym_accum_type_repeat3,
  [24812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(593), 1,
      sym_block_comment,
    ACTIONS(1429), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [24826] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_func_call_stmt_repeat2,
    STATE(594), 1,
      sym_block_comment,
  [24842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(595), 1,
      sym_block_comment,
    ACTIONS(1431), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [24856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(596), 1,
      sym_block_comment,
    ACTIONS(1322), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [24870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(597), 1,
      sym_block_comment,
    STATE(636), 1,
      sym_parameter_list,
  [24886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(598), 1,
      sym_block_comment,
    ACTIONS(982), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [24900] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1433), 1,
      anon_sym_IN,
    ACTIONS(1435), 1,
      anon_sym_LIKE,
    STATE(599), 1,
      sym_block_comment,
  [24916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1316), 1,
      anon_sym_LPAREN,
    ACTIONS(1318), 1,
      anon_sym_EQ,
    STATE(600), 1,
      sym_block_comment,
  [24932] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      aux_sym_accum_type_repeat3,
    STATE(601), 1,
      sym_block_comment,
  [24948] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(1441), 1,
      anon_sym_DASH_GT,
    STATE(602), 1,
      sym_block_comment,
  [24964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(603), 1,
      sym_block_comment,
    STATE(809), 1,
      sym_parameter_list,
  [24980] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1443), 1,
      anon_sym_DOT,
    ACTIONS(1445), 1,
      anon_sym_DO,
    STATE(604), 1,
      sym_block_comment,
  [24996] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(605), 1,
      sym_block_comment,
    STATE(841), 1,
      sym_parameter_list,
  [25012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(606), 1,
      sym_block_comment,
    ACTIONS(1447), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(607), 1,
      sym_block_comment,
    ACTIONS(1449), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(608), 1,
      sym_block_comment,
    ACTIONS(1252), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [25054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(609), 1,
      sym_block_comment,
    ACTIONS(1451), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_for_each_control_repeat1,
    STATE(610), 1,
      sym_block_comment,
  [25084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(611), 1,
      sym_block_comment,
    ACTIONS(1453), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25098] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1455), 1,
      anon_sym_LBRACE,
    STATE(556), 1,
      sym_query_body,
    STATE(612), 1,
      sym_block_comment,
  [25114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(613), 1,
      sym_block_comment,
    ACTIONS(1457), 2,
      anon_sym_ASC,
      anon_sym_DESC,
  [25128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(614), 1,
      sym_block_comment,
    ACTIONS(1256), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
  [25142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(615), 1,
      sym_block_comment,
  [25158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(616), 1,
      sym_block_comment,
    ACTIONS(1207), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(617), 1,
      sym_block_comment,
    ACTIONS(1240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [25186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1068), 1,
      anon_sym_WHEN,
    STATE(454), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(618), 1,
      sym_block_comment,
  [25202] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      anon_sym_IN,
    ACTIONS(1461), 1,
      anon_sym_COLON,
    STATE(619), 1,
      sym_block_comment,
  [25218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(620), 1,
      sym_block_comment,
    ACTIONS(1463), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [25232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(621), 1,
      sym_block_comment,
    ACTIONS(1225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(622), 1,
      sym_block_comment,
    ACTIONS(1465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(623), 2,
      sym_block_comment,
      aux_sym_accum_type_repeat3,
  [25274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(624), 1,
      sym_block_comment,
    ACTIONS(1470), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25288] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(625), 1,
      sym_block_comment,
  [25304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(626), 1,
      sym_block_comment,
    ACTIONS(1472), 2,
      anon_sym_V2,
      anon_sym_v2,
  [25318] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    STATE(627), 1,
      sym_block_comment,
    ACTIONS(1203), 2,
      anon_sym_ELSE,
      anon_sym_END,
  [25332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1474), 1,
      anon_sym_SYNTAX,
    ACTIONS(1476), 1,
      anon_sym_LBRACE,
    STATE(628), 1,
      sym_block_comment,
  [25348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1478), 1,
      anon_sym_SYNTAX,
    ACTIONS(1480), 1,
      anon_sym_LBRACE,
    STATE(629), 1,
      sym_block_comment,
  [25364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_digit,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(630), 1,
      sym_block_comment,
  [25380] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    ACTIONS(1484), 1,
      anon_sym_DASH_GT,
    STATE(631), 1,
      sym_block_comment,
  [25396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(632), 1,
      sym_block_comment,
    STATE(694), 1,
      sym_parameter_list,
  [25412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1486), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      sym_digit,
    STATE(633), 1,
      sym_block_comment,
  [25428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1490), 1,
      anon_sym_THEN,
    STATE(634), 1,
      sym_block_comment,
  [25441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1492), 1,
      anon_sym_LPAREN,
    STATE(635), 1,
      sym_block_comment,
  [25454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1494), 1,
      anon_sym_FOR,
    STATE(636), 1,
      sym_block_comment,
  [25467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      sym_block_comment,
  [25480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1498), 1,
      anon_sym_GT,
    STATE(638), 1,
      sym_block_comment,
  [25493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1500), 1,
      anon_sym_SEMI,
    STATE(639), 1,
      sym_block_comment,
  [25506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1502), 1,
      sym_name,
    STATE(640), 1,
      sym_block_comment,
  [25519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      sym_block_comment,
  [25532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1506), 1,
      anon_sym_GT,
    STATE(642), 1,
      sym_block_comment,
  [25545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    STATE(643), 1,
      sym_block_comment,
  [25558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1510), 1,
      anon_sym_GT,
    STATE(644), 1,
      sym_block_comment,
  [25571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    STATE(645), 1,
      sym_block_comment,
  [25584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1514), 1,
      anon_sym_DASH,
    STATE(646), 1,
      sym_block_comment,
  [25597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1516), 1,
      anon_sym_LBRACE,
    STATE(647), 1,
      sym_block_comment,
  [25610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      sym_block_comment,
  [25623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1520), 1,
      anon_sym_LPAREN,
    STATE(649), 1,
      sym_block_comment,
  [25636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1522), 1,
      sym_name,
    STATE(650), 1,
      sym_block_comment,
  [25649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1524), 1,
      anon_sym_FILTER,
    STATE(651), 1,
      sym_block_comment,
  [25662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1526), 1,
      anon_sym_LPAREN,
    STATE(652), 1,
      sym_block_comment,
  [25675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1528), 1,
      anon_sym_LBRACE,
    STATE(653), 1,
      sym_block_comment,
  [25688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(654), 1,
      sym_block_comment,
  [25701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1530), 1,
      sym_name,
    STATE(655), 1,
      sym_block_comment,
  [25714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1532), 1,
      sym_name,
    STATE(656), 1,
      sym_block_comment,
  [25727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1534), 1,
      anon_sym_END,
    STATE(657), 1,
      sym_block_comment,
  [25740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1536), 1,
      anon_sym_END,
    STATE(658), 1,
      sym_block_comment,
  [25753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1538), 1,
      anon_sym_DO,
    STATE(659), 1,
      sym_block_comment,
  [25766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1540), 1,
      anon_sym_END,
    STATE(660), 1,
      sym_block_comment,
  [25779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1542), 1,
      anon_sym_DASH,
    STATE(661), 1,
      sym_block_comment,
  [25792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1544), 1,
      sym_name,
    STATE(662), 1,
      sym_block_comment,
  [25805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1546), 1,
      anon_sym_DASH,
    STATE(663), 1,
      sym_block_comment,
  [25818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1548), 1,
      anon_sym_DASH,
    STATE(664), 1,
      sym_block_comment,
  [25831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1550), 1,
      sym_name,
    STATE(665), 1,
      sym_block_comment,
  [25844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1552), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_block_comment,
  [25857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1554), 1,
      anon_sym_SEMI,
    STATE(667), 1,
      sym_block_comment,
  [25870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1556), 1,
      anon_sym_END,
    STATE(668), 1,
      sym_block_comment,
  [25883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      sym_block_comment,
  [25896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1560), 1,
      anon_sym_SEMI,
    STATE(670), 1,
      sym_block_comment,
  [25909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1560), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_block_comment,
  [25922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1562), 1,
      anon_sym_END,
    STATE(672), 1,
      sym_block_comment,
  [25935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1564), 1,
      sym_name,
    STATE(673), 1,
      sym_block_comment,
  [25948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1566), 1,
      anon_sym_LBRACE,
    STATE(674), 1,
      sym_block_comment,
  [25961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      sym_block_comment,
  [25974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1570), 1,
      sym_name,
    STATE(676), 1,
      sym_block_comment,
  [25987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1572), 1,
      anon_sym_SEMI,
    STATE(677), 1,
      sym_block_comment,
  [26000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1574), 1,
      anon_sym_STEP,
    STATE(678), 1,
      sym_block_comment,
  [26013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1576), 1,
      anon_sym_IF,
    STATE(679), 1,
      sym_block_comment,
  [26026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1578), 1,
      sym_name,
    STATE(680), 1,
      sym_block_comment,
  [26039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1580), 1,
      anon_sym_END,
    STATE(681), 1,
      sym_block_comment,
  [26052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
    STATE(682), 1,
      sym_block_comment,
  [26065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1584), 1,
      anon_sym_FILTER,
    STATE(683), 1,
      sym_block_comment,
  [26078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1586), 1,
      anon_sym_LBRACE,
    STATE(684), 1,
      sym_block_comment,
  [26091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1588), 1,
      sym_name,
    STATE(685), 1,
      sym_block_comment,
  [26104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
    STATE(686), 1,
      sym_block_comment,
  [26117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1592), 1,
      anon_sym_END,
    STATE(687), 1,
      sym_block_comment,
  [26130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1594), 1,
      anon_sym_IF,
    STATE(688), 1,
      sym_block_comment,
  [26143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_block_comment,
  [26156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1316), 1,
      anon_sym_LPAREN,
    STATE(690), 1,
      sym_block_comment,
  [26169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1596), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      sym_block_comment,
  [26182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1598), 1,
      sym_name,
    STATE(692), 1,
      sym_block_comment,
  [26195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1600), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_block_comment,
  [26208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1602), 1,
      anon_sym_FOR,
    STATE(694), 1,
      sym_block_comment,
  [26221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1604), 1,
      anon_sym_LPAREN,
    STATE(695), 1,
      sym_block_comment,
  [26234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1606), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_block_comment,
  [26247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1608), 1,
      anon_sym_GRAPH,
    STATE(697), 1,
      sym_block_comment,
  [26260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1610), 1,
      sym_name,
    STATE(698), 1,
      sym_block_comment,
  [26273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1612), 1,
      anon_sym_GT,
    STATE(699), 1,
      sym_block_comment,
  [26286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      sym_block_comment,
  [26299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1614), 1,
      anon_sym_SEMI,
    STATE(701), 1,
      sym_block_comment,
  [26312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1616), 1,
      anon_sym_SQUOTE,
    STATE(702), 1,
      sym_block_comment,
  [26325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1618), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_block_comment,
  [26338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    STATE(704), 1,
      sym_block_comment,
  [26351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1620), 1,
      sym_digit,
    STATE(705), 1,
      sym_block_comment,
  [26364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1618), 1,
      anon_sym_SEMI,
    STATE(706), 1,
      sym_block_comment,
  [26377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1622), 1,
      sym_name,
    STATE(707), 1,
      sym_block_comment,
  [26390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1624), 1,
      sym_name,
    STATE(708), 1,
      sym_block_comment,
  [26403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1626), 1,
      anon_sym_END,
    STATE(709), 1,
      sym_block_comment,
  [26416] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1628), 1,
      anon_sym_MIN,
    STATE(710), 1,
      sym_block_comment,
  [26429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1630), 1,
      anon_sym_DO,
    STATE(711), 1,
      sym_block_comment,
  [26442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1632), 1,
      anon_sym_SEMI,
    STATE(712), 1,
      sym_block_comment,
  [26455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1634), 1,
      sym_digit,
    STATE(713), 1,
      sym_block_comment,
  [26468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1636), 1,
      anon_sym_SEMI,
    STATE(714), 1,
      sym_block_comment,
  [26481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(715), 1,
      sym_block_comment,
  [26494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1638), 1,
      anon_sym_END,
    STATE(716), 1,
      sym_block_comment,
  [26507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1640), 1,
      sym_name,
    STATE(717), 1,
      sym_block_comment,
  [26520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1642), 1,
      sym_name,
    STATE(718), 1,
      sym_block_comment,
  [26533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1644), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      sym_block_comment,
  [26546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1646), 1,
      sym_name,
    STATE(720), 1,
      sym_block_comment,
  [26559] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1648), 1,
      anon_sym_FOR,
    STATE(721), 1,
      sym_block_comment,
  [26572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1650), 1,
      anon_sym_GRAPH,
    STATE(722), 1,
      sym_block_comment,
  [26585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1652), 1,
      anon_sym_DO,
    STATE(723), 1,
      sym_block_comment,
  [26598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      sym_block_comment,
  [26611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
    STATE(725), 1,
      sym_block_comment,
  [26624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1656), 1,
      sym_name,
    STATE(726), 1,
      sym_block_comment,
  [26637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
    STATE(727), 1,
      sym_block_comment,
  [26650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1660), 1,
      anon_sym_AVG,
    STATE(728), 1,
      sym_block_comment,
  [26663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1662), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      sym_block_comment,
  [26676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1664), 1,
      sym_name,
    STATE(730), 1,
      sym_block_comment,
  [26689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1666), 1,
      anon_sym_NULL,
    STATE(731), 1,
      sym_block_comment,
  [26702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1668), 1,
      anon_sym_LBRACE,
    STATE(732), 1,
      sym_block_comment,
  [26715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1670), 1,
      sym_name,
    STATE(733), 1,
      sym_block_comment,
  [26728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1672), 1,
      sym_name,
    STATE(734), 1,
      sym_block_comment,
  [26741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1674), 1,
      anon_sym_GRAPH,
    STATE(735), 1,
      sym_block_comment,
  [26754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(736), 1,
      sym_block_comment,
  [26767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1074), 1,
      sym_name,
    STATE(737), 1,
      sym_block_comment,
  [26780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1676), 1,
      sym_name,
    STATE(738), 1,
      sym_block_comment,
  [26793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1678), 1,
      anon_sym_EQ,
    STATE(739), 1,
      sym_block_comment,
  [26806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1680), 1,
      anon_sym_DO,
    STATE(740), 1,
      sym_block_comment,
  [26819] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1682), 1,
      anon_sym_FROM,
    STATE(741), 1,
      sym_block_comment,
  [26832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1684), 1,
      anon_sym_END,
    STATE(742), 1,
      sym_block_comment,
  [26845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1229), 1,
      anon_sym_DO,
    STATE(743), 1,
      sym_block_comment,
  [26858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1686), 1,
      sym_name,
    STATE(744), 1,
      sym_block_comment,
  [26871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
    STATE(745), 1,
      sym_block_comment,
  [26884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
    STATE(746), 1,
      sym_block_comment,
  [26897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1692), 1,
      anon_sym_LPAREN,
    STATE(747), 1,
      sym_block_comment,
  [26910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1694), 1,
      anon_sym_DO,
    STATE(748), 1,
      sym_block_comment,
  [26923] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1696), 1,
      sym_string_fragment,
    STATE(749), 1,
      sym_block_comment,
  [26936] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1698), 1,
      sym_string_fragment,
    STATE(750), 1,
      sym_block_comment,
  [26949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1700), 1,
      anon_sym_MAX,
    STATE(751), 1,
      sym_block_comment,
  [26962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
    STATE(752), 1,
      sym_block_comment,
  [26975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1704), 1,
      sym_name,
    STATE(753), 1,
      sym_block_comment,
  [26988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1706), 1,
      anon_sym_END,
    STATE(754), 1,
      sym_block_comment,
  [27001] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1708), 1,
      anon_sym_LT,
    STATE(755), 1,
      sym_block_comment,
  [27014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1710), 1,
      anon_sym_RPAREN,
    STATE(756), 1,
      sym_block_comment,
  [27027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1712), 1,
      anon_sym_GRAPH,
    STATE(757), 1,
      sym_block_comment,
  [27040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1714), 1,
      sym_name,
    STATE(758), 1,
      sym_block_comment,
  [27053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      sym_block_comment,
  [27066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1716), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_block_comment,
  [27079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1718), 1,
      sym_name,
    STATE(761), 1,
      sym_block_comment,
  [27092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1720), 1,
      anon_sym_SEMI,
    STATE(762), 1,
      sym_block_comment,
  [27105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1722), 1,
      anon_sym_RPAREN,
    STATE(763), 1,
      sym_block_comment,
  [27118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1724), 1,
      anon_sym_LT,
    STATE(764), 1,
      sym_block_comment,
  [27131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1726), 1,
      anon_sym_FOR,
    STATE(765), 1,
      sym_block_comment,
  [27144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1728), 1,
      anon_sym_FOR,
    STATE(766), 1,
      sym_block_comment,
  [27157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    STATE(767), 1,
      sym_block_comment,
  [27170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1730), 1,
      sym_name,
    STATE(768), 1,
      sym_block_comment,
  [27183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1732), 1,
      anon_sym_QUERY,
    STATE(769), 1,
      sym_block_comment,
  [27196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1734), 1,
      sym_name,
    STATE(770), 1,
      sym_block_comment,
  [27209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    STATE(771), 1,
      sym_block_comment,
  [27222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1736), 1,
      anon_sym_LBRACK,
    STATE(772), 1,
      sym_block_comment,
  [27235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1738), 1,
      sym_name,
    STATE(773), 1,
      sym_block_comment,
  [27248] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1740), 1,
      anon_sym_SEMI,
    STATE(774), 1,
      sym_block_comment,
  [27261] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1742), 1,
      anon_sym_GT,
    STATE(775), 1,
      sym_block_comment,
  [27274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1744), 1,
      anon_sym_SEMI,
    STATE(776), 1,
      sym_block_comment,
  [27287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1746), 1,
      anon_sym_SEMI,
    STATE(777), 1,
      sym_block_comment,
  [27300] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1748), 1,
      anon_sym_SEMI,
    STATE(778), 1,
      sym_block_comment,
  [27313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1750), 1,
      anon_sym_END,
    STATE(779), 1,
      sym_block_comment,
  [27326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1752), 1,
      sym_name,
    STATE(780), 1,
      sym_block_comment,
  [27339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1754), 1,
      sym_name,
    STATE(781), 1,
      sym_block_comment,
  [27352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1756), 1,
      anon_sym_LT,
    STATE(782), 1,
      sym_block_comment,
  [27365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1758), 1,
      anon_sym_LT,
    STATE(783), 1,
      sym_block_comment,
  [27378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1760), 1,
      anon_sym_LT,
    STATE(784), 1,
      sym_block_comment,
  [27391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1762), 1,
      anon_sym_LT,
    STATE(785), 1,
      sym_block_comment,
  [27404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1764), 1,
      anon_sym_LT,
    STATE(786), 1,
      sym_block_comment,
  [27417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1766), 1,
      anon_sym_LT,
    STATE(787), 1,
      sym_block_comment,
  [27430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1768), 1,
      anon_sym_SEMI,
    STATE(788), 1,
      sym_block_comment,
  [27443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1770), 1,
      sym_name,
    STATE(789), 1,
      sym_block_comment,
  [27456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1772), 1,
      sym_name,
    STATE(790), 1,
      sym_block_comment,
  [27469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1774), 1,
      anon_sym_SEMI,
    STATE(791), 1,
      sym_block_comment,
  [27482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1776), 1,
      anon_sym_SEMI,
    STATE(792), 1,
      sym_block_comment,
  [27495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1778), 1,
      anon_sym_END,
    STATE(793), 1,
      sym_block_comment,
  [27508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1780), 1,
      anon_sym_LT,
    STATE(794), 1,
      sym_block_comment,
  [27521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1782), 1,
      anon_sym_LPAREN,
    STATE(795), 1,
      sym_block_comment,
  [27534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1784), 1,
      anon_sym_SEMI,
    STATE(796), 1,
      sym_block_comment,
  [27547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1786), 1,
      anon_sym_LT,
    STATE(797), 1,
      sym_block_comment,
  [27560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(798), 1,
      sym_block_comment,
  [27573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1788), 1,
      sym_name,
    STATE(799), 1,
      sym_block_comment,
  [27586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1790), 1,
      anon_sym_TUPLE,
    STATE(800), 1,
      sym_block_comment,
  [27599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    STATE(801), 1,
      sym_block_comment,
  [27612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1792), 1,
      sym_digit,
    STATE(802), 1,
      sym_block_comment,
  [27625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1794), 1,
      anon_sym_DQUOTE,
    STATE(803), 1,
      sym_block_comment,
  [27638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1794), 1,
      anon_sym_SQUOTE,
    STATE(804), 1,
      sym_block_comment,
  [27651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1796), 1,
      sym_name,
    STATE(805), 1,
      sym_block_comment,
  [27664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    STATE(806), 1,
      sym_block_comment,
  [27677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1798), 1,
      anon_sym_GT,
    STATE(807), 1,
      sym_block_comment,
  [27690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
    STATE(808), 1,
      sym_block_comment,
  [27703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1802), 1,
      anon_sym_FOR,
    STATE(809), 1,
      sym_block_comment,
  [27716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1804), 1,
      sym_digit,
    STATE(810), 1,
      sym_block_comment,
  [27729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(811), 1,
      sym_block_comment,
  [27742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1806), 1,
      anon_sym_SUM,
    STATE(812), 1,
      sym_block_comment,
  [27755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1482), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      sym_block_comment,
  [27768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1808), 1,
      sym_name,
    STATE(814), 1,
      sym_block_comment,
  [27781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1810), 1,
      anon_sym_SEMI,
    STATE(815), 1,
      sym_block_comment,
  [27794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(816), 1,
      sym_block_comment,
  [27807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(817), 1,
      sym_block_comment,
  [27820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1812), 1,
      sym_name,
    STATE(818), 1,
      sym_block_comment,
  [27833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1814), 1,
      sym_name,
    STATE(819), 1,
      sym_block_comment,
  [27846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1816), 1,
      sym_name,
    STATE(820), 1,
      sym_block_comment,
  [27859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1818), 1,
      anon_sym_RPAREN,
    STATE(821), 1,
      sym_block_comment,
  [27872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1820), 1,
      anon_sym_RPAREN,
    STATE(822), 1,
      sym_block_comment,
  [27885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      sym_block_comment,
  [27898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1822), 1,
      anon_sym_SEMI,
    STATE(824), 1,
      sym_block_comment,
  [27911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1824), 1,
      anon_sym_SEMI,
    STATE(825), 1,
      sym_block_comment,
  [27924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1826), 1,
      anon_sym_FILTER,
    STATE(826), 1,
      sym_block_comment,
  [27937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1828), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_block_comment,
  [27950] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
    STATE(828), 1,
      sym_block_comment,
  [27963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1832), 1,
      anon_sym_V2,
    STATE(829), 1,
      sym_block_comment,
  [27976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1834), 1,
      sym_name,
    STATE(830), 1,
      sym_block_comment,
  [27989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1836), 1,
      sym_name,
    STATE(831), 1,
      sym_block_comment,
  [28002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1838), 1,
      sym_name,
    STATE(832), 1,
      sym_block_comment,
  [28015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1840), 1,
      sym_name,
    STATE(833), 1,
      sym_block_comment,
  [28028] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1842), 1,
      sym_name,
    STATE(834), 1,
      sym_block_comment,
  [28041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1844), 1,
      anon_sym_QUERY,
    STATE(835), 1,
      sym_block_comment,
  [28054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1846), 1,
      anon_sym_REPLACE,
    STATE(836), 1,
      sym_block_comment,
  [28067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
    STATE(837), 1,
      sym_block_comment,
  [28080] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1850), 1,
      anon_sym_GRAPH,
    STATE(838), 1,
      sym_block_comment,
  [28093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1852), 1,
      anon_sym_FILTER,
    STATE(839), 1,
      sym_block_comment,
  [28106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym_block_comment,
  [28119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1856), 1,
      anon_sym_FOR,
    STATE(841), 1,
      sym_block_comment,
  [28132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1858), 1,
      sym_digit,
    STATE(842), 1,
      sym_block_comment,
  [28145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1860), 1,
      anon_sym_LPAREN,
    STATE(843), 1,
      sym_block_comment,
  [28158] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1862), 1,
      sym_string_fragment,
    STATE(844), 1,
      sym_block_comment,
  [28171] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(1864), 1,
      sym_string_fragment,
    STATE(845), 1,
      sym_block_comment,
  [28184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    STATE(846), 1,
      sym_block_comment,
  [28197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1866), 1,
      sym_name,
    STATE(847), 1,
      sym_block_comment,
  [28210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1868), 1,
      sym_name,
    STATE(848), 1,
      sym_block_comment,
  [28223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1870), 1,
      sym_name,
    STATE(849), 1,
      sym_block_comment,
  [28236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1872), 1,
      anon_sym_LPAREN,
    STATE(850), 1,
      sym_block_comment,
  [28249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
    STATE(851), 1,
      sym_block_comment,
  [28262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1876), 1,
      anon_sym_LPAREN,
    STATE(852), 1,
      sym_block_comment,
  [28275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1878), 1,
      anon_sym_LPAREN,
    STATE(853), 1,
      sym_block_comment,
  [28288] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
    STATE(854), 1,
      sym_block_comment,
  [28301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1882), 1,
      ts_builtin_sym_end,
    STATE(855), 1,
      sym_block_comment,
  [28314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1884), 1,
      anon_sym_QUERY,
    STATE(856), 1,
      sym_block_comment,
  [28327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1886), 1,
      anon_sym_LPAREN,
    STATE(857), 1,
      sym_block_comment,
  [28340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1888), 1,
      anon_sym_LPAREN,
    STATE(858), 1,
      sym_block_comment,
  [28353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1890), 1,
      anon_sym_LPAREN,
    STATE(859), 1,
      sym_block_comment,
  [28366] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1892), 1,
      anon_sym_LPAREN,
    STATE(860), 1,
      sym_block_comment,
  [28379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1894), 1,
      sym_name,
    STATE(861), 1,
      sym_block_comment,
  [28392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1896), 1,
      sym_name,
    STATE(862), 1,
      sym_block_comment,
  [28405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1898), 1,
      anon_sym_LPAREN,
    STATE(863), 1,
      sym_block_comment,
  [28418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
    STATE(864), 1,
      sym_block_comment,
  [28431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
    STATE(865), 1,
      sym_block_comment,
  [28444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1904), 1,
      sym_name,
    STATE(866), 1,
      sym_block_comment,
  [28457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1906), 1,
      sym_name,
    STATE(867), 1,
      sym_block_comment,
  [28470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(1908), 1,
      anon_sym_SELECT,
    STATE(868), 1,
      sym_block_comment,
  [28483] = 1,
    ACTIONS(1910), 1,
      ts_builtin_sym_end,
  [28487] = 1,
    ACTIONS(1912), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 135,
  [SMALL_STATE(4)] = 270,
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
  [SMALL_STATE(21)] = 2115,
  [SMALL_STATE(22)] = 2179,
  [SMALL_STATE(23)] = 2239,
  [SMALL_STATE(24)] = 2299,
  [SMALL_STATE(25)] = 2359,
  [SMALL_STATE(26)] = 2419,
  [SMALL_STATE(27)] = 2483,
  [SMALL_STATE(28)] = 2545,
  [SMALL_STATE(29)] = 2602,
  [SMALL_STATE(30)] = 2659,
  [SMALL_STATE(31)] = 2718,
  [SMALL_STATE(32)] = 2775,
  [SMALL_STATE(33)] = 2832,
  [SMALL_STATE(34)] = 2890,
  [SMALL_STATE(35)] = 2946,
  [SMALL_STATE(36)] = 3002,
  [SMALL_STATE(37)] = 3058,
  [SMALL_STATE(38)] = 3117,
  [SMALL_STATE(39)] = 3174,
  [SMALL_STATE(40)] = 3233,
  [SMALL_STATE(41)] = 3290,
  [SMALL_STATE(42)] = 3349,
  [SMALL_STATE(43)] = 3403,
  [SMALL_STATE(44)] = 3459,
  [SMALL_STATE(45)] = 3515,
  [SMALL_STATE(46)] = 3569,
  [SMALL_STATE(47)] = 3625,
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
  [SMALL_STATE(68)] = 4740,
  [SMALL_STATE(69)] = 4791,
  [SMALL_STATE(70)] = 4842,
  [SMALL_STATE(71)] = 4893,
  [SMALL_STATE(72)] = 4998,
  [SMALL_STATE(73)] = 5056,
  [SMALL_STATE(74)] = 5115,
  [SMALL_STATE(75)] = 5189,
  [SMALL_STATE(76)] = 5263,
  [SMALL_STATE(77)] = 5337,
  [SMALL_STATE(78)] = 5411,
  [SMALL_STATE(79)] = 5485,
  [SMALL_STATE(80)] = 5559,
  [SMALL_STATE(81)] = 5633,
  [SMALL_STATE(82)] = 5707,
  [SMALL_STATE(83)] = 5781,
  [SMALL_STATE(84)] = 5855,
  [SMALL_STATE(85)] = 5929,
  [SMALL_STATE(86)] = 6003,
  [SMALL_STATE(87)] = 6074,
  [SMALL_STATE(88)] = 6171,
  [SMALL_STATE(89)] = 6268,
  [SMALL_STATE(90)] = 6360,
  [SMALL_STATE(91)] = 6452,
  [SMALL_STATE(92)] = 6546,
  [SMALL_STATE(93)] = 6640,
  [SMALL_STATE(94)] = 6734,
  [SMALL_STATE(95)] = 6828,
  [SMALL_STATE(96)] = 6922,
  [SMALL_STATE(97)] = 6988,
  [SMALL_STATE(98)] = 7082,
  [SMALL_STATE(99)] = 7174,
  [SMALL_STATE(100)] = 7268,
  [SMALL_STATE(101)] = 7362,
  [SMALL_STATE(102)] = 7456,
  [SMALL_STATE(103)] = 7550,
  [SMALL_STATE(104)] = 7642,
  [SMALL_STATE(105)] = 7736,
  [SMALL_STATE(106)] = 7828,
  [SMALL_STATE(107)] = 7920,
  [SMALL_STATE(108)] = 8014,
  [SMALL_STATE(109)] = 8108,
  [SMALL_STATE(110)] = 8202,
  [SMALL_STATE(111)] = 8294,
  [SMALL_STATE(112)] = 8386,
  [SMALL_STATE(113)] = 8478,
  [SMALL_STATE(114)] = 8570,
  [SMALL_STATE(115)] = 8662,
  [SMALL_STATE(116)] = 8754,
  [SMALL_STATE(117)] = 8848,
  [SMALL_STATE(118)] = 8940,
  [SMALL_STATE(119)] = 9034,
  [SMALL_STATE(120)] = 9126,
  [SMALL_STATE(121)] = 9218,
  [SMALL_STATE(122)] = 9312,
  [SMALL_STATE(123)] = 9404,
  [SMALL_STATE(124)] = 9496,
  [SMALL_STATE(125)] = 9590,
  [SMALL_STATE(126)] = 9682,
  [SMALL_STATE(127)] = 9774,
  [SMALL_STATE(128)] = 9866,
  [SMALL_STATE(129)] = 9958,
  [SMALL_STATE(130)] = 10052,
  [SMALL_STATE(131)] = 10144,
  [SMALL_STATE(132)] = 10195,
  [SMALL_STATE(133)] = 10284,
  [SMALL_STATE(134)] = 10373,
  [SMALL_STATE(135)] = 10424,
  [SMALL_STATE(136)] = 10513,
  [SMALL_STATE(137)] = 10560,
  [SMALL_STATE(138)] = 10649,
  [SMALL_STATE(139)] = 10702,
  [SMALL_STATE(140)] = 10791,
  [SMALL_STATE(141)] = 10880,
  [SMALL_STATE(142)] = 10969,
  [SMALL_STATE(143)] = 11058,
  [SMALL_STATE(144)] = 11147,
  [SMALL_STATE(145)] = 11236,
  [SMALL_STATE(146)] = 11322,
  [SMALL_STATE(147)] = 11408,
  [SMALL_STATE(148)] = 11494,
  [SMALL_STATE(149)] = 11544,
  [SMALL_STATE(150)] = 11630,
  [SMALL_STATE(151)] = 11716,
  [SMALL_STATE(152)] = 11802,
  [SMALL_STATE(153)] = 11888,
  [SMALL_STATE(154)] = 11974,
  [SMALL_STATE(155)] = 12060,
  [SMALL_STATE(156)] = 12146,
  [SMALL_STATE(157)] = 12216,
  [SMALL_STATE(158)] = 12266,
  [SMALL_STATE(159)] = 12312,
  [SMALL_STATE(160)] = 12398,
  [SMALL_STATE(161)] = 12484,
  [SMALL_STATE(162)] = 12570,
  [SMALL_STATE(163)] = 12656,
  [SMALL_STATE(164)] = 12742,
  [SMALL_STATE(165)] = 12828,
  [SMALL_STATE(166)] = 12914,
  [SMALL_STATE(167)] = 12960,
  [SMALL_STATE(168)] = 13006,
  [SMALL_STATE(169)] = 13052,
  [SMALL_STATE(170)] = 13138,
  [SMALL_STATE(171)] = 13224,
  [SMALL_STATE(172)] = 13294,
  [SMALL_STATE(173)] = 13340,
  [SMALL_STATE(174)] = 13426,
  [SMALL_STATE(175)] = 13472,
  [SMALL_STATE(176)] = 13558,
  [SMALL_STATE(177)] = 13606,
  [SMALL_STATE(178)] = 13692,
  [SMALL_STATE(179)] = 13778,
  [SMALL_STATE(180)] = 13864,
  [SMALL_STATE(181)] = 13950,
  [SMALL_STATE(182)] = 14036,
  [SMALL_STATE(183)] = 14104,
  [SMALL_STATE(184)] = 14190,
  [SMALL_STATE(185)] = 14276,
  [SMALL_STATE(186)] = 14324,
  [SMALL_STATE(187)] = 14410,
  [SMALL_STATE(188)] = 14453,
  [SMALL_STATE(189)] = 14496,
  [SMALL_STATE(190)] = 14541,
  [SMALL_STATE(191)] = 14586,
  [SMALL_STATE(192)] = 14633,
  [SMALL_STATE(193)] = 14676,
  [SMALL_STATE(194)] = 14719,
  [SMALL_STATE(195)] = 14784,
  [SMALL_STATE(196)] = 14827,
  [SMALL_STATE(197)] = 14871,
  [SMALL_STATE(198)] = 14941,
  [SMALL_STATE(199)] = 14985,
  [SMALL_STATE(200)] = 15055,
  [SMALL_STATE(201)] = 15097,
  [SMALL_STATE(202)] = 15139,
  [SMALL_STATE(203)] = 15181,
  [SMALL_STATE(204)] = 15224,
  [SMALL_STATE(205)] = 15269,
  [SMALL_STATE(206)] = 15312,
  [SMALL_STATE(207)] = 15357,
  [SMALL_STATE(208)] = 15402,
  [SMALL_STATE(209)] = 15442,
  [SMALL_STATE(210)] = 15482,
  [SMALL_STATE(211)] = 15524,
  [SMALL_STATE(212)] = 15566,
  [SMALL_STATE(213)] = 15608,
  [SMALL_STATE(214)] = 15654,
  [SMALL_STATE(215)] = 15694,
  [SMALL_STATE(216)] = 15736,
  [SMALL_STATE(217)] = 15778,
  [SMALL_STATE(218)] = 15817,
  [SMALL_STATE(219)] = 15856,
  [SMALL_STATE(220)] = 15895,
  [SMALL_STATE(221)] = 15934,
  [SMALL_STATE(222)] = 15975,
  [SMALL_STATE(223)] = 16014,
  [SMALL_STATE(224)] = 16053,
  [SMALL_STATE(225)] = 16092,
  [SMALL_STATE(226)] = 16131,
  [SMALL_STATE(227)] = 16170,
  [SMALL_STATE(228)] = 16209,
  [SMALL_STATE(229)] = 16248,
  [SMALL_STATE(230)] = 16287,
  [SMALL_STATE(231)] = 16326,
  [SMALL_STATE(232)] = 16365,
  [SMALL_STATE(233)] = 16404,
  [SMALL_STATE(234)] = 16443,
  [SMALL_STATE(235)] = 16482,
  [SMALL_STATE(236)] = 16521,
  [SMALL_STATE(237)] = 16559,
  [SMALL_STATE(238)] = 16597,
  [SMALL_STATE(239)] = 16635,
  [SMALL_STATE(240)] = 16678,
  [SMALL_STATE(241)] = 16721,
  [SMALL_STATE(242)] = 16753,
  [SMALL_STATE(243)] = 16785,
  [SMALL_STATE(244)] = 16829,
  [SMALL_STATE(245)] = 16873,
  [SMALL_STATE(246)] = 16916,
  [SMALL_STATE(247)] = 16951,
  [SMALL_STATE(248)] = 16986,
  [SMALL_STATE(249)] = 17021,
  [SMALL_STATE(250)] = 17056,
  [SMALL_STATE(251)] = 17091,
  [SMALL_STATE(252)] = 17134,
  [SMALL_STATE(253)] = 17175,
  [SMALL_STATE(254)] = 17210,
  [SMALL_STATE(255)] = 17248,
  [SMALL_STATE(256)] = 17286,
  [SMALL_STATE(257)] = 17332,
  [SMALL_STATE(258)] = 17375,
  [SMALL_STATE(259)] = 17408,
  [SMALL_STATE(260)] = 17451,
  [SMALL_STATE(261)] = 17494,
  [SMALL_STATE(262)] = 17525,
  [SMALL_STATE(263)] = 17556,
  [SMALL_STATE(264)] = 17589,
  [SMALL_STATE(265)] = 17617,
  [SMALL_STATE(266)] = 17651,
  [SMALL_STATE(267)] = 17681,
  [SMALL_STATE(268)] = 17731,
  [SMALL_STATE(269)] = 17759,
  [SMALL_STATE(270)] = 17793,
  [SMALL_STATE(271)] = 17827,
  [SMALL_STATE(272)] = 17865,
  [SMALL_STATE(273)] = 17899,
  [SMALL_STATE(274)] = 17937,
  [SMALL_STATE(275)] = 17965,
  [SMALL_STATE(276)] = 18013,
  [SMALL_STATE(277)] = 18049,
  [SMALL_STATE(278)] = 18083,
  [SMALL_STATE(279)] = 18111,
  [SMALL_STATE(280)] = 18138,
  [SMALL_STATE(281)] = 18167,
  [SMALL_STATE(282)] = 18202,
  [SMALL_STATE(283)] = 18233,
  [SMALL_STATE(284)] = 18264,
  [SMALL_STATE(285)] = 18295,
  [SMALL_STATE(286)] = 18328,
  [SMALL_STATE(287)] = 18355,
  [SMALL_STATE(288)] = 18386,
  [SMALL_STATE(289)] = 18413,
  [SMALL_STATE(290)] = 18446,
  [SMALL_STATE(291)] = 18477,
  [SMALL_STATE(292)] = 18508,
  [SMALL_STATE(293)] = 18539,
  [SMALL_STATE(294)] = 18567,
  [SMALL_STATE(295)] = 18599,
  [SMALL_STATE(296)] = 18643,
  [SMALL_STATE(297)] = 18687,
  [SMALL_STATE(298)] = 18711,
  [SMALL_STATE(299)] = 18755,
  [SMALL_STATE(300)] = 18785,
  [SMALL_STATE(301)] = 18829,
  [SMALL_STATE(302)] = 18858,
  [SMALL_STATE(303)] = 18887,
  [SMALL_STATE(304)] = 18928,
  [SMALL_STATE(305)] = 18957,
  [SMALL_STATE(306)] = 18986,
  [SMALL_STATE(307)] = 19015,
  [SMALL_STATE(308)] = 19044,
  [SMALL_STATE(309)] = 19073,
  [SMALL_STATE(310)] = 19111,
  [SMALL_STATE(311)] = 19149,
  [SMALL_STATE(312)] = 19187,
  [SMALL_STATE(313)] = 19225,
  [SMALL_STATE(314)] = 19247,
  [SMALL_STATE(315)] = 19285,
  [SMALL_STATE(316)] = 19307,
  [SMALL_STATE(317)] = 19329,
  [SMALL_STATE(318)] = 19351,
  [SMALL_STATE(319)] = 19373,
  [SMALL_STATE(320)] = 19401,
  [SMALL_STATE(321)] = 19439,
  [SMALL_STATE(322)] = 19479,
  [SMALL_STATE(323)] = 19502,
  [SMALL_STATE(324)] = 19529,
  [SMALL_STATE(325)] = 19554,
  [SMALL_STATE(326)] = 19589,
  [SMALL_STATE(327)] = 19611,
  [SMALL_STATE(328)] = 19635,
  [SMALL_STATE(329)] = 19657,
  [SMALL_STATE(330)] = 19677,
  [SMALL_STATE(331)] = 19711,
  [SMALL_STATE(332)] = 19731,
  [SMALL_STATE(333)] = 19753,
  [SMALL_STATE(334)] = 19777,
  [SMALL_STATE(335)] = 19797,
  [SMALL_STATE(336)] = 19817,
  [SMALL_STATE(337)] = 19839,
  [SMALL_STATE(338)] = 19863,
  [SMALL_STATE(339)] = 19883,
  [SMALL_STATE(340)] = 19907,
  [SMALL_STATE(341)] = 19929,
  [SMALL_STATE(342)] = 19949,
  [SMALL_STATE(343)] = 19970,
  [SMALL_STATE(344)] = 19989,
  [SMALL_STATE(345)] = 20020,
  [SMALL_STATE(346)] = 20039,
  [SMALL_STATE(347)] = 20068,
  [SMALL_STATE(348)] = 20087,
  [SMALL_STATE(349)] = 20118,
  [SMALL_STATE(350)] = 20141,
  [SMALL_STATE(351)] = 20170,
  [SMALL_STATE(352)] = 20189,
  [SMALL_STATE(353)] = 20208,
  [SMALL_STATE(354)] = 20231,
  [SMALL_STATE(355)] = 20260,
  [SMALL_STATE(356)] = 20289,
  [SMALL_STATE(357)] = 20310,
  [SMALL_STATE(358)] = 20333,
  [SMALL_STATE(359)] = 20352,
  [SMALL_STATE(360)] = 20371,
  [SMALL_STATE(361)] = 20390,
  [SMALL_STATE(362)] = 20409,
  [SMALL_STATE(363)] = 20428,
  [SMALL_STATE(364)] = 20447,
  [SMALL_STATE(365)] = 20466,
  [SMALL_STATE(366)] = 20495,
  [SMALL_STATE(367)] = 20526,
  [SMALL_STATE(368)] = 20545,
  [SMALL_STATE(369)] = 20564,
  [SMALL_STATE(370)] = 20583,
  [SMALL_STATE(371)] = 20610,
  [SMALL_STATE(372)] = 20628,
  [SMALL_STATE(373)] = 20646,
  [SMALL_STATE(374)] = 20674,
  [SMALL_STATE(375)] = 20702,
  [SMALL_STATE(376)] = 20724,
  [SMALL_STATE(377)] = 20752,
  [SMALL_STATE(378)] = 20770,
  [SMALL_STATE(379)] = 20798,
  [SMALL_STATE(380)] = 20826,
  [SMALL_STATE(381)] = 20854,
  [SMALL_STATE(382)] = 20882,
  [SMALL_STATE(383)] = 20910,
  [SMALL_STATE(384)] = 20930,
  [SMALL_STATE(385)] = 20948,
  [SMALL_STATE(386)] = 20976,
  [SMALL_STATE(387)] = 20996,
  [SMALL_STATE(388)] = 21024,
  [SMALL_STATE(389)] = 21052,
  [SMALL_STATE(390)] = 21080,
  [SMALL_STATE(391)] = 21106,
  [SMALL_STATE(392)] = 21134,
  [SMALL_STATE(393)] = 21162,
  [SMALL_STATE(394)] = 21188,
  [SMALL_STATE(395)] = 21216,
  [SMALL_STATE(396)] = 21244,
  [SMALL_STATE(397)] = 21261,
  [SMALL_STATE(398)] = 21286,
  [SMALL_STATE(399)] = 21309,
  [SMALL_STATE(400)] = 21328,
  [SMALL_STATE(401)] = 21345,
  [SMALL_STATE(402)] = 21364,
  [SMALL_STATE(403)] = 21383,
  [SMALL_STATE(404)] = 21402,
  [SMALL_STATE(405)] = 21421,
  [SMALL_STATE(406)] = 21446,
  [SMALL_STATE(407)] = 21463,
  [SMALL_STATE(408)] = 21488,
  [SMALL_STATE(409)] = 21513,
  [SMALL_STATE(410)] = 21538,
  [SMALL_STATE(411)] = 21555,
  [SMALL_STATE(412)] = 21580,
  [SMALL_STATE(413)] = 21605,
  [SMALL_STATE(414)] = 21626,
  [SMALL_STATE(415)] = 21643,
  [SMALL_STATE(416)] = 21660,
  [SMALL_STATE(417)] = 21677,
  [SMALL_STATE(418)] = 21698,
  [SMALL_STATE(419)] = 21723,
  [SMALL_STATE(420)] = 21740,
  [SMALL_STATE(421)] = 21757,
  [SMALL_STATE(422)] = 21778,
  [SMALL_STATE(423)] = 21799,
  [SMALL_STATE(424)] = 21817,
  [SMALL_STATE(425)] = 21835,
  [SMALL_STATE(426)] = 21857,
  [SMALL_STATE(427)] = 21875,
  [SMALL_STATE(428)] = 21895,
  [SMALL_STATE(429)] = 21913,
  [SMALL_STATE(430)] = 21935,
  [SMALL_STATE(431)] = 21951,
  [SMALL_STATE(432)] = 21971,
  [SMALL_STATE(433)] = 21989,
  [SMALL_STATE(434)] = 22007,
  [SMALL_STATE(435)] = 22025,
  [SMALL_STATE(436)] = 22041,
  [SMALL_STATE(437)] = 22059,
  [SMALL_STATE(438)] = 22081,
  [SMALL_STATE(439)] = 22103,
  [SMALL_STATE(440)] = 22119,
  [SMALL_STATE(441)] = 22137,
  [SMALL_STATE(442)] = 22155,
  [SMALL_STATE(443)] = 22177,
  [SMALL_STATE(444)] = 22195,
  [SMALL_STATE(445)] = 22215,
  [SMALL_STATE(446)] = 22237,
  [SMALL_STATE(447)] = 22257,
  [SMALL_STATE(448)] = 22277,
  [SMALL_STATE(449)] = 22299,
  [SMALL_STATE(450)] = 22321,
  [SMALL_STATE(451)] = 22341,
  [SMALL_STATE(452)] = 22359,
  [SMALL_STATE(453)] = 22377,
  [SMALL_STATE(454)] = 22397,
  [SMALL_STATE(455)] = 22419,
  [SMALL_STATE(456)] = 22439,
  [SMALL_STATE(457)] = 22455,
  [SMALL_STATE(458)] = 22473,
  [SMALL_STATE(459)] = 22489,
  [SMALL_STATE(460)] = 22509,
  [SMALL_STATE(461)] = 22527,
  [SMALL_STATE(462)] = 22545,
  [SMALL_STATE(463)] = 22567,
  [SMALL_STATE(464)] = 22589,
  [SMALL_STATE(465)] = 22611,
  [SMALL_STATE(466)] = 22629,
  [SMALL_STATE(467)] = 22647,
  [SMALL_STATE(468)] = 22665,
  [SMALL_STATE(469)] = 22683,
  [SMALL_STATE(470)] = 22703,
  [SMALL_STATE(471)] = 22721,
  [SMALL_STATE(472)] = 22739,
  [SMALL_STATE(473)] = 22757,
  [SMALL_STATE(474)] = 22773,
  [SMALL_STATE(475)] = 22788,
  [SMALL_STATE(476)] = 22807,
  [SMALL_STATE(477)] = 22826,
  [SMALL_STATE(478)] = 22841,
  [SMALL_STATE(479)] = 22860,
  [SMALL_STATE(480)] = 22879,
  [SMALL_STATE(481)] = 22896,
  [SMALL_STATE(482)] = 22915,
  [SMALL_STATE(483)] = 22934,
  [SMALL_STATE(484)] = 22951,
  [SMALL_STATE(485)] = 22970,
  [SMALL_STATE(486)] = 22989,
  [SMALL_STATE(487)] = 23006,
  [SMALL_STATE(488)] = 23021,
  [SMALL_STATE(489)] = 23040,
  [SMALL_STATE(490)] = 23059,
  [SMALL_STATE(491)] = 23076,
  [SMALL_STATE(492)] = 23091,
  [SMALL_STATE(493)] = 23110,
  [SMALL_STATE(494)] = 23125,
  [SMALL_STATE(495)] = 23144,
  [SMALL_STATE(496)] = 23161,
  [SMALL_STATE(497)] = 23180,
  [SMALL_STATE(498)] = 23199,
  [SMALL_STATE(499)] = 23218,
  [SMALL_STATE(500)] = 23235,
  [SMALL_STATE(501)] = 23254,
  [SMALL_STATE(502)] = 23271,
  [SMALL_STATE(503)] = 23290,
  [SMALL_STATE(504)] = 23307,
  [SMALL_STATE(505)] = 23322,
  [SMALL_STATE(506)] = 23341,
  [SMALL_STATE(507)] = 23356,
  [SMALL_STATE(508)] = 23375,
  [SMALL_STATE(509)] = 23392,
  [SMALL_STATE(510)] = 23407,
  [SMALL_STATE(511)] = 23426,
  [SMALL_STATE(512)] = 23445,
  [SMALL_STATE(513)] = 23464,
  [SMALL_STATE(514)] = 23481,
  [SMALL_STATE(515)] = 23498,
  [SMALL_STATE(516)] = 23517,
  [SMALL_STATE(517)] = 23532,
  [SMALL_STATE(518)] = 23549,
  [SMALL_STATE(519)] = 23566,
  [SMALL_STATE(520)] = 23585,
  [SMALL_STATE(521)] = 23600,
  [SMALL_STATE(522)] = 23617,
  [SMALL_STATE(523)] = 23632,
  [SMALL_STATE(524)] = 23651,
  [SMALL_STATE(525)] = 23670,
  [SMALL_STATE(526)] = 23689,
  [SMALL_STATE(527)] = 23708,
  [SMALL_STATE(528)] = 23727,
  [SMALL_STATE(529)] = 23742,
  [SMALL_STATE(530)] = 23759,
  [SMALL_STATE(531)] = 23776,
  [SMALL_STATE(532)] = 23795,
  [SMALL_STATE(533)] = 23812,
  [SMALL_STATE(534)] = 23831,
  [SMALL_STATE(535)] = 23850,
  [SMALL_STATE(536)] = 23869,
  [SMALL_STATE(537)] = 23886,
  [SMALL_STATE(538)] = 23905,
  [SMALL_STATE(539)] = 23922,
  [SMALL_STATE(540)] = 23941,
  [SMALL_STATE(541)] = 23960,
  [SMALL_STATE(542)] = 23979,
  [SMALL_STATE(543)] = 23998,
  [SMALL_STATE(544)] = 24013,
  [SMALL_STATE(545)] = 24032,
  [SMALL_STATE(546)] = 24051,
  [SMALL_STATE(547)] = 24068,
  [SMALL_STATE(548)] = 24085,
  [SMALL_STATE(549)] = 24102,
  [SMALL_STATE(550)] = 24119,
  [SMALL_STATE(551)] = 24134,
  [SMALL_STATE(552)] = 24151,
  [SMALL_STATE(553)] = 24168,
  [SMALL_STATE(554)] = 24183,
  [SMALL_STATE(555)] = 24200,
  [SMALL_STATE(556)] = 24217,
  [SMALL_STATE(557)] = 24232,
  [SMALL_STATE(558)] = 24247,
  [SMALL_STATE(559)] = 24266,
  [SMALL_STATE(560)] = 24283,
  [SMALL_STATE(561)] = 24300,
  [SMALL_STATE(562)] = 24315,
  [SMALL_STATE(563)] = 24332,
  [SMALL_STATE(564)] = 24351,
  [SMALL_STATE(565)] = 24370,
  [SMALL_STATE(566)] = 24385,
  [SMALL_STATE(567)] = 24404,
  [SMALL_STATE(568)] = 24423,
  [SMALL_STATE(569)] = 24440,
  [SMALL_STATE(570)] = 24459,
  [SMALL_STATE(571)] = 24474,
  [SMALL_STATE(572)] = 24488,
  [SMALL_STATE(573)] = 24504,
  [SMALL_STATE(574)] = 24520,
  [SMALL_STATE(575)] = 24534,
  [SMALL_STATE(576)] = 24550,
  [SMALL_STATE(577)] = 24566,
  [SMALL_STATE(578)] = 24582,
  [SMALL_STATE(579)] = 24598,
  [SMALL_STATE(580)] = 24612,
  [SMALL_STATE(581)] = 24626,
  [SMALL_STATE(582)] = 24642,
  [SMALL_STATE(583)] = 24656,
  [SMALL_STATE(584)] = 24672,
  [SMALL_STATE(585)] = 24688,
  [SMALL_STATE(586)] = 24704,
  [SMALL_STATE(587)] = 24720,
  [SMALL_STATE(588)] = 24734,
  [SMALL_STATE(589)] = 24748,
  [SMALL_STATE(590)] = 24764,
  [SMALL_STATE(591)] = 24780,
  [SMALL_STATE(592)] = 24796,
  [SMALL_STATE(593)] = 24812,
  [SMALL_STATE(594)] = 24826,
  [SMALL_STATE(595)] = 24842,
  [SMALL_STATE(596)] = 24856,
  [SMALL_STATE(597)] = 24870,
  [SMALL_STATE(598)] = 24886,
  [SMALL_STATE(599)] = 24900,
  [SMALL_STATE(600)] = 24916,
  [SMALL_STATE(601)] = 24932,
  [SMALL_STATE(602)] = 24948,
  [SMALL_STATE(603)] = 24964,
  [SMALL_STATE(604)] = 24980,
  [SMALL_STATE(605)] = 24996,
  [SMALL_STATE(606)] = 25012,
  [SMALL_STATE(607)] = 25026,
  [SMALL_STATE(608)] = 25040,
  [SMALL_STATE(609)] = 25054,
  [SMALL_STATE(610)] = 25068,
  [SMALL_STATE(611)] = 25084,
  [SMALL_STATE(612)] = 25098,
  [SMALL_STATE(613)] = 25114,
  [SMALL_STATE(614)] = 25128,
  [SMALL_STATE(615)] = 25142,
  [SMALL_STATE(616)] = 25158,
  [SMALL_STATE(617)] = 25172,
  [SMALL_STATE(618)] = 25186,
  [SMALL_STATE(619)] = 25202,
  [SMALL_STATE(620)] = 25218,
  [SMALL_STATE(621)] = 25232,
  [SMALL_STATE(622)] = 25246,
  [SMALL_STATE(623)] = 25260,
  [SMALL_STATE(624)] = 25274,
  [SMALL_STATE(625)] = 25288,
  [SMALL_STATE(626)] = 25304,
  [SMALL_STATE(627)] = 25318,
  [SMALL_STATE(628)] = 25332,
  [SMALL_STATE(629)] = 25348,
  [SMALL_STATE(630)] = 25364,
  [SMALL_STATE(631)] = 25380,
  [SMALL_STATE(632)] = 25396,
  [SMALL_STATE(633)] = 25412,
  [SMALL_STATE(634)] = 25428,
  [SMALL_STATE(635)] = 25441,
  [SMALL_STATE(636)] = 25454,
  [SMALL_STATE(637)] = 25467,
  [SMALL_STATE(638)] = 25480,
  [SMALL_STATE(639)] = 25493,
  [SMALL_STATE(640)] = 25506,
  [SMALL_STATE(641)] = 25519,
  [SMALL_STATE(642)] = 25532,
  [SMALL_STATE(643)] = 25545,
  [SMALL_STATE(644)] = 25558,
  [SMALL_STATE(645)] = 25571,
  [SMALL_STATE(646)] = 25584,
  [SMALL_STATE(647)] = 25597,
  [SMALL_STATE(648)] = 25610,
  [SMALL_STATE(649)] = 25623,
  [SMALL_STATE(650)] = 25636,
  [SMALL_STATE(651)] = 25649,
  [SMALL_STATE(652)] = 25662,
  [SMALL_STATE(653)] = 25675,
  [SMALL_STATE(654)] = 25688,
  [SMALL_STATE(655)] = 25701,
  [SMALL_STATE(656)] = 25714,
  [SMALL_STATE(657)] = 25727,
  [SMALL_STATE(658)] = 25740,
  [SMALL_STATE(659)] = 25753,
  [SMALL_STATE(660)] = 25766,
  [SMALL_STATE(661)] = 25779,
  [SMALL_STATE(662)] = 25792,
  [SMALL_STATE(663)] = 25805,
  [SMALL_STATE(664)] = 25818,
  [SMALL_STATE(665)] = 25831,
  [SMALL_STATE(666)] = 25844,
  [SMALL_STATE(667)] = 25857,
  [SMALL_STATE(668)] = 25870,
  [SMALL_STATE(669)] = 25883,
  [SMALL_STATE(670)] = 25896,
  [SMALL_STATE(671)] = 25909,
  [SMALL_STATE(672)] = 25922,
  [SMALL_STATE(673)] = 25935,
  [SMALL_STATE(674)] = 25948,
  [SMALL_STATE(675)] = 25961,
  [SMALL_STATE(676)] = 25974,
  [SMALL_STATE(677)] = 25987,
  [SMALL_STATE(678)] = 26000,
  [SMALL_STATE(679)] = 26013,
  [SMALL_STATE(680)] = 26026,
  [SMALL_STATE(681)] = 26039,
  [SMALL_STATE(682)] = 26052,
  [SMALL_STATE(683)] = 26065,
  [SMALL_STATE(684)] = 26078,
  [SMALL_STATE(685)] = 26091,
  [SMALL_STATE(686)] = 26104,
  [SMALL_STATE(687)] = 26117,
  [SMALL_STATE(688)] = 26130,
  [SMALL_STATE(689)] = 26143,
  [SMALL_STATE(690)] = 26156,
  [SMALL_STATE(691)] = 26169,
  [SMALL_STATE(692)] = 26182,
  [SMALL_STATE(693)] = 26195,
  [SMALL_STATE(694)] = 26208,
  [SMALL_STATE(695)] = 26221,
  [SMALL_STATE(696)] = 26234,
  [SMALL_STATE(697)] = 26247,
  [SMALL_STATE(698)] = 26260,
  [SMALL_STATE(699)] = 26273,
  [SMALL_STATE(700)] = 26286,
  [SMALL_STATE(701)] = 26299,
  [SMALL_STATE(702)] = 26312,
  [SMALL_STATE(703)] = 26325,
  [SMALL_STATE(704)] = 26338,
  [SMALL_STATE(705)] = 26351,
  [SMALL_STATE(706)] = 26364,
  [SMALL_STATE(707)] = 26377,
  [SMALL_STATE(708)] = 26390,
  [SMALL_STATE(709)] = 26403,
  [SMALL_STATE(710)] = 26416,
  [SMALL_STATE(711)] = 26429,
  [SMALL_STATE(712)] = 26442,
  [SMALL_STATE(713)] = 26455,
  [SMALL_STATE(714)] = 26468,
  [SMALL_STATE(715)] = 26481,
  [SMALL_STATE(716)] = 26494,
  [SMALL_STATE(717)] = 26507,
  [SMALL_STATE(718)] = 26520,
  [SMALL_STATE(719)] = 26533,
  [SMALL_STATE(720)] = 26546,
  [SMALL_STATE(721)] = 26559,
  [SMALL_STATE(722)] = 26572,
  [SMALL_STATE(723)] = 26585,
  [SMALL_STATE(724)] = 26598,
  [SMALL_STATE(725)] = 26611,
  [SMALL_STATE(726)] = 26624,
  [SMALL_STATE(727)] = 26637,
  [SMALL_STATE(728)] = 26650,
  [SMALL_STATE(729)] = 26663,
  [SMALL_STATE(730)] = 26676,
  [SMALL_STATE(731)] = 26689,
  [SMALL_STATE(732)] = 26702,
  [SMALL_STATE(733)] = 26715,
  [SMALL_STATE(734)] = 26728,
  [SMALL_STATE(735)] = 26741,
  [SMALL_STATE(736)] = 26754,
  [SMALL_STATE(737)] = 26767,
  [SMALL_STATE(738)] = 26780,
  [SMALL_STATE(739)] = 26793,
  [SMALL_STATE(740)] = 26806,
  [SMALL_STATE(741)] = 26819,
  [SMALL_STATE(742)] = 26832,
  [SMALL_STATE(743)] = 26845,
  [SMALL_STATE(744)] = 26858,
  [SMALL_STATE(745)] = 26871,
  [SMALL_STATE(746)] = 26884,
  [SMALL_STATE(747)] = 26897,
  [SMALL_STATE(748)] = 26910,
  [SMALL_STATE(749)] = 26923,
  [SMALL_STATE(750)] = 26936,
  [SMALL_STATE(751)] = 26949,
  [SMALL_STATE(752)] = 26962,
  [SMALL_STATE(753)] = 26975,
  [SMALL_STATE(754)] = 26988,
  [SMALL_STATE(755)] = 27001,
  [SMALL_STATE(756)] = 27014,
  [SMALL_STATE(757)] = 27027,
  [SMALL_STATE(758)] = 27040,
  [SMALL_STATE(759)] = 27053,
  [SMALL_STATE(760)] = 27066,
  [SMALL_STATE(761)] = 27079,
  [SMALL_STATE(762)] = 27092,
  [SMALL_STATE(763)] = 27105,
  [SMALL_STATE(764)] = 27118,
  [SMALL_STATE(765)] = 27131,
  [SMALL_STATE(766)] = 27144,
  [SMALL_STATE(767)] = 27157,
  [SMALL_STATE(768)] = 27170,
  [SMALL_STATE(769)] = 27183,
  [SMALL_STATE(770)] = 27196,
  [SMALL_STATE(771)] = 27209,
  [SMALL_STATE(772)] = 27222,
  [SMALL_STATE(773)] = 27235,
  [SMALL_STATE(774)] = 27248,
  [SMALL_STATE(775)] = 27261,
  [SMALL_STATE(776)] = 27274,
  [SMALL_STATE(777)] = 27287,
  [SMALL_STATE(778)] = 27300,
  [SMALL_STATE(779)] = 27313,
  [SMALL_STATE(780)] = 27326,
  [SMALL_STATE(781)] = 27339,
  [SMALL_STATE(782)] = 27352,
  [SMALL_STATE(783)] = 27365,
  [SMALL_STATE(784)] = 27378,
  [SMALL_STATE(785)] = 27391,
  [SMALL_STATE(786)] = 27404,
  [SMALL_STATE(787)] = 27417,
  [SMALL_STATE(788)] = 27430,
  [SMALL_STATE(789)] = 27443,
  [SMALL_STATE(790)] = 27456,
  [SMALL_STATE(791)] = 27469,
  [SMALL_STATE(792)] = 27482,
  [SMALL_STATE(793)] = 27495,
  [SMALL_STATE(794)] = 27508,
  [SMALL_STATE(795)] = 27521,
  [SMALL_STATE(796)] = 27534,
  [SMALL_STATE(797)] = 27547,
  [SMALL_STATE(798)] = 27560,
  [SMALL_STATE(799)] = 27573,
  [SMALL_STATE(800)] = 27586,
  [SMALL_STATE(801)] = 27599,
  [SMALL_STATE(802)] = 27612,
  [SMALL_STATE(803)] = 27625,
  [SMALL_STATE(804)] = 27638,
  [SMALL_STATE(805)] = 27651,
  [SMALL_STATE(806)] = 27664,
  [SMALL_STATE(807)] = 27677,
  [SMALL_STATE(808)] = 27690,
  [SMALL_STATE(809)] = 27703,
  [SMALL_STATE(810)] = 27716,
  [SMALL_STATE(811)] = 27729,
  [SMALL_STATE(812)] = 27742,
  [SMALL_STATE(813)] = 27755,
  [SMALL_STATE(814)] = 27768,
  [SMALL_STATE(815)] = 27781,
  [SMALL_STATE(816)] = 27794,
  [SMALL_STATE(817)] = 27807,
  [SMALL_STATE(818)] = 27820,
  [SMALL_STATE(819)] = 27833,
  [SMALL_STATE(820)] = 27846,
  [SMALL_STATE(821)] = 27859,
  [SMALL_STATE(822)] = 27872,
  [SMALL_STATE(823)] = 27885,
  [SMALL_STATE(824)] = 27898,
  [SMALL_STATE(825)] = 27911,
  [SMALL_STATE(826)] = 27924,
  [SMALL_STATE(827)] = 27937,
  [SMALL_STATE(828)] = 27950,
  [SMALL_STATE(829)] = 27963,
  [SMALL_STATE(830)] = 27976,
  [SMALL_STATE(831)] = 27989,
  [SMALL_STATE(832)] = 28002,
  [SMALL_STATE(833)] = 28015,
  [SMALL_STATE(834)] = 28028,
  [SMALL_STATE(835)] = 28041,
  [SMALL_STATE(836)] = 28054,
  [SMALL_STATE(837)] = 28067,
  [SMALL_STATE(838)] = 28080,
  [SMALL_STATE(839)] = 28093,
  [SMALL_STATE(840)] = 28106,
  [SMALL_STATE(841)] = 28119,
  [SMALL_STATE(842)] = 28132,
  [SMALL_STATE(843)] = 28145,
  [SMALL_STATE(844)] = 28158,
  [SMALL_STATE(845)] = 28171,
  [SMALL_STATE(846)] = 28184,
  [SMALL_STATE(847)] = 28197,
  [SMALL_STATE(848)] = 28210,
  [SMALL_STATE(849)] = 28223,
  [SMALL_STATE(850)] = 28236,
  [SMALL_STATE(851)] = 28249,
  [SMALL_STATE(852)] = 28262,
  [SMALL_STATE(853)] = 28275,
  [SMALL_STATE(854)] = 28288,
  [SMALL_STATE(855)] = 28301,
  [SMALL_STATE(856)] = 28314,
  [SMALL_STATE(857)] = 28327,
  [SMALL_STATE(858)] = 28340,
  [SMALL_STATE(859)] = 28353,
  [SMALL_STATE(860)] = 28366,
  [SMALL_STATE(861)] = 28379,
  [SMALL_STATE(862)] = 28392,
  [SMALL_STATE(863)] = 28405,
  [SMALL_STATE(864)] = 28418,
  [SMALL_STATE(865)] = 28431,
  [SMALL_STATE(866)] = 28444,
  [SMALL_STATE(867)] = 28457,
  [SMALL_STATE(868)] = 28470,
  [SMALL_STATE(869)] = 28483,
  [SMALL_STATE(870)] = 28487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(800),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(118),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(117),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(116),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(365),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(797),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(565),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(794),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(466),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(787),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(786),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(785),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(784),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(783),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(782),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(781),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(780),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(105),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(460),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(408),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(68),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(861),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(799),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(45),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(730),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 1),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmt, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 18),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 15),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(867),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(819),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(866),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(214),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 21),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(565),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(460),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(293),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(277),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 10),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 16),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(656),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 20),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(86),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(746),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 6),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(502),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 11),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(745),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 13),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(476),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(856),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 7),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 6),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(325),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(110),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(84),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 19),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(92),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(107),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(180),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 4),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(169),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(259),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(550),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(679),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(254),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(133),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(390),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(680),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(291),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(438),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(256),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(449),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(447),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9), SHIFT_REPEAT(758),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(692),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 1),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(688),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 22),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 17),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 7, .production_id = 7),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 8),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 4),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(270),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 14),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 6, .production_id = 3),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 17),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 14),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 22),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 7),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 4),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 3),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 5),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_stmt, 1),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_param, 4),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1882] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gsql() {
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
