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
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 2
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 22
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym_char_string = 1,
  sym_unsigned_integer = 2,
  sym_signed_integer = 3,
  sym_double = 4,
  sym_end_of_line = 5,
  sym_c_identifier = 6,
  anon_sym_VERSION = 7,
  anon_sym_NS_ = 8,
  anon_sym_COLON = 9,
  anon_sym_NS_DESC_ = 10,
  anon_sym_CM_ = 11,
  anon_sym_BA_DEF_ = 12,
  anon_sym_BA_ = 13,
  anon_sym_VAL_ = 14,
  anon_sym_CAT_DEF_ = 15,
  anon_sym_CAT_ = 16,
  anon_sym_FILTER = 17,
  anon_sym_BA_DEF_DEF_ = 18,
  anon_sym_EV_DATA_ = 19,
  anon_sym_ENVVAR_DATA_ = 20,
  anon_sym_SGTYPE_ = 21,
  anon_sym_SGTYPE_VAL_ = 22,
  anon_sym_BA_DEF_SGTYPE_ = 23,
  anon_sym_BA_SGTYPE_ = 24,
  anon_sym_SIG_TYPE_REF_ = 25,
  anon_sym_VAL_TABLE_ = 26,
  anon_sym_SIG_GROUP_ = 27,
  anon_sym_SIG_VALTYPE_ = 28,
  anon_sym_SIGTYPE_VALTYPE_ = 29,
  anon_sym_BO_TX_BU_ = 30,
  anon_sym_BA_DEF_REL_ = 31,
  anon_sym_BA_REL_ = 32,
  anon_sym_BA_DEF_DEF_REL_ = 33,
  anon_sym_BU_SG_REL_ = 34,
  anon_sym_BU_EV_REL_ = 35,
  anon_sym_BU_BO_REL_ = 36,
  anon_sym_SG_MUL_VAL_ = 37,
  anon_sym_BS_ = 38,
  anon_sym_COMMA = 39,
  anon_sym_BU_ = 40,
  anon_sym_Vector__XXX = 41,
  anon_sym_BO_ = 42,
  anon_sym_VECTOR__INDEPENDENT_SIG_MSG = 43,
  anon_sym_SG_ = 44,
  anon_sym_PIPE = 45,
  anon_sym_AT = 46,
  aux_sym_signal_token1 = 47,
  aux_sym_signal_token2 = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_LBRACK = 51,
  anon_sym_PIPE2 = 52,
  anon_sym_RBRACK = 53,
  anon_sym_m = 54,
  anon_sym_M = 55,
  anon_sym_M2 = 56,
  anon_sym_EV_ = 57,
  anon_sym_SEMI = 58,
  anon_sym_DQUOTE = 59,
  anon_sym_INT = 60,
  anon_sym_HEX = 61,
  anon_sym_FLOAT = 62,
  anon_sym_STRING = 63,
  anon_sym_ENUM = 64,
  sym_signal_extended_value_type = 65,
  sym_source_file = 66,
  sym_version = 67,
  sym_new_symbols_def = 68,
  sym_bit_timing = 69,
  sym_nodes = 70,
  sym_transmitter = 71,
  sym_receiver = 72,
  sym_message = 73,
  sym_signal = 74,
  sym_multiplexer_indicator = 75,
  sym_comment = 76,
  sym_attribute_definition = 77,
  sym_object_type = 78,
  sym_attribute_name = 79,
  sym_attribute_value_type = 80,
  sym_attribute_default = 81,
  sym_attribute_value = 82,
  sym_attribute_value_for_object = 83,
  sym_signal_extended_value_type_list = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_source_file_repeat2 = 86,
  aux_sym_source_file_repeat3 = 87,
  aux_sym_source_file_repeat4 = 88,
  aux_sym_source_file_repeat5 = 89,
  aux_sym_source_file_repeat6 = 90,
  aux_sym_new_symbols_def_repeat1 = 91,
  aux_sym_nodes_repeat1 = 92,
  aux_sym_message_repeat1 = 93,
  aux_sym_attribute_value_type_repeat1 = 94,
  anon_alias_sym_ = 95,
  alias_sym_keyword = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_char_string] = "char_string",
  [sym_unsigned_integer] = "unsigned_integer",
  [sym_signed_integer] = "signed_integer",
  [sym_double] = "double",
  [sym_end_of_line] = "end_of_line",
  [sym_c_identifier] = "c_identifier",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_NS_] = "NS_",
  [anon_sym_COLON] = ":",
  [anon_sym_NS_DESC_] = "NS_DESC_",
  [anon_sym_CM_] = "CM_",
  [anon_sym_BA_DEF_] = "BA_DEF_",
  [anon_sym_BA_] = "BA_",
  [anon_sym_VAL_] = "VAL_",
  [anon_sym_CAT_DEF_] = "CAT_DEF_",
  [anon_sym_CAT_] = "CAT_",
  [anon_sym_FILTER] = "FILTER",
  [anon_sym_BA_DEF_DEF_] = "BA_DEF_DEF_",
  [anon_sym_EV_DATA_] = "EV_DATA_",
  [anon_sym_ENVVAR_DATA_] = "ENVVAR_DATA_",
  [anon_sym_SGTYPE_] = "SGTYPE_",
  [anon_sym_SGTYPE_VAL_] = "SGTYPE_VAL_",
  [anon_sym_BA_DEF_SGTYPE_] = "BA_DEF_SGTYPE_",
  [anon_sym_BA_SGTYPE_] = "BA_SGTYPE_",
  [anon_sym_SIG_TYPE_REF_] = "SIG_TYPE_REF_",
  [anon_sym_VAL_TABLE_] = "VAL_TABLE_",
  [anon_sym_SIG_GROUP_] = "SIG_GROUP_",
  [anon_sym_SIG_VALTYPE_] = "SIG_VALTYPE_",
  [anon_sym_SIGTYPE_VALTYPE_] = "SIGTYPE_VALTYPE_",
  [anon_sym_BO_TX_BU_] = "BO_TX_BU_",
  [anon_sym_BA_DEF_REL_] = "BA_DEF_REL_",
  [anon_sym_BA_REL_] = "BA_REL_",
  [anon_sym_BA_DEF_DEF_REL_] = "BA_DEF_DEF_REL_",
  [anon_sym_BU_SG_REL_] = "BU_SG_REL_",
  [anon_sym_BU_EV_REL_] = "BU_EV_REL_",
  [anon_sym_BU_BO_REL_] = "BU_BO_REL_",
  [anon_sym_SG_MUL_VAL_] = "SG_MUL_VAL_",
  [anon_sym_BS_] = "BS_",
  [anon_sym_COMMA] = ",",
  [anon_sym_BU_] = "BU_",
  [anon_sym_Vector__XXX] = "Vector__XXX",
  [anon_sym_BO_] = "BO_",
  [anon_sym_VECTOR__INDEPENDENT_SIG_MSG] = "VECTOR__INDEPENDENT_SIG_MSG",
  [anon_sym_SG_] = "SG_",
  [anon_sym_PIPE] = "|",
  [anon_sym_AT] = "@",
  [aux_sym_signal_token1] = "unsigned_integer",
  [aux_sym_signal_token2] = "unsigned_integer",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE2] = "|",
  [anon_sym_RBRACK] = "]",
  [anon_sym_m] = "m",
  [anon_sym_M] = "M",
  [anon_sym_M2] = "M",
  [anon_sym_EV_] = "EV_",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_INT] = "INT",
  [anon_sym_HEX] = "HEX",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_STRING] = "STRING",
  [anon_sym_ENUM] = "ENUM",
  [sym_signal_extended_value_type] = "signal_extended_value_type",
  [sym_source_file] = "source_file",
  [sym_version] = "version",
  [sym_new_symbols_def] = "new_symbols_def",
  [sym_bit_timing] = "bit_timing",
  [sym_nodes] = "nodes",
  [sym_transmitter] = "transmitter",
  [sym_receiver] = "receiver",
  [sym_message] = "message",
  [sym_signal] = "signal",
  [sym_multiplexer_indicator] = "multiplexer_indicator",
  [sym_comment] = "comment",
  [sym_attribute_definition] = "attribute_definition",
  [sym_object_type] = "object_type",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value_type] = "attribute_value_type",
  [sym_attribute_default] = "attribute_default",
  [sym_attribute_value] = "attribute_value",
  [sym_attribute_value_for_object] = "attribute_value_for_object",
  [sym_signal_extended_value_type_list] = "signal_extended_value_type_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_source_file_repeat4] = "source_file_repeat4",
  [aux_sym_source_file_repeat5] = "source_file_repeat5",
  [aux_sym_source_file_repeat6] = "source_file_repeat6",
  [aux_sym_new_symbols_def_repeat1] = "new_symbols_def_repeat1",
  [aux_sym_nodes_repeat1] = "nodes_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_attribute_value_type_repeat1] = "attribute_value_type_repeat1",
  [anon_alias_sym_] = "",
  [alias_sym_keyword] = "keyword",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_char_string] = sym_char_string,
  [sym_unsigned_integer] = sym_unsigned_integer,
  [sym_signed_integer] = sym_signed_integer,
  [sym_double] = sym_double,
  [sym_end_of_line] = sym_end_of_line,
  [sym_c_identifier] = sym_c_identifier,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_NS_] = anon_sym_NS_,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_NS_DESC_] = anon_sym_NS_DESC_,
  [anon_sym_CM_] = anon_sym_CM_,
  [anon_sym_BA_DEF_] = anon_sym_BA_DEF_,
  [anon_sym_BA_] = anon_sym_BA_,
  [anon_sym_VAL_] = anon_sym_VAL_,
  [anon_sym_CAT_DEF_] = anon_sym_CAT_DEF_,
  [anon_sym_CAT_] = anon_sym_CAT_,
  [anon_sym_FILTER] = anon_sym_FILTER,
  [anon_sym_BA_DEF_DEF_] = anon_sym_BA_DEF_DEF_,
  [anon_sym_EV_DATA_] = anon_sym_EV_DATA_,
  [anon_sym_ENVVAR_DATA_] = anon_sym_ENVVAR_DATA_,
  [anon_sym_SGTYPE_] = anon_sym_SGTYPE_,
  [anon_sym_SGTYPE_VAL_] = anon_sym_SGTYPE_VAL_,
  [anon_sym_BA_DEF_SGTYPE_] = anon_sym_BA_DEF_SGTYPE_,
  [anon_sym_BA_SGTYPE_] = anon_sym_BA_SGTYPE_,
  [anon_sym_SIG_TYPE_REF_] = anon_sym_SIG_TYPE_REF_,
  [anon_sym_VAL_TABLE_] = anon_sym_VAL_TABLE_,
  [anon_sym_SIG_GROUP_] = anon_sym_SIG_GROUP_,
  [anon_sym_SIG_VALTYPE_] = anon_sym_SIG_VALTYPE_,
  [anon_sym_SIGTYPE_VALTYPE_] = anon_sym_SIGTYPE_VALTYPE_,
  [anon_sym_BO_TX_BU_] = anon_sym_BO_TX_BU_,
  [anon_sym_BA_DEF_REL_] = anon_sym_BA_DEF_REL_,
  [anon_sym_BA_REL_] = anon_sym_BA_REL_,
  [anon_sym_BA_DEF_DEF_REL_] = anon_sym_BA_DEF_DEF_REL_,
  [anon_sym_BU_SG_REL_] = anon_sym_BU_SG_REL_,
  [anon_sym_BU_EV_REL_] = anon_sym_BU_EV_REL_,
  [anon_sym_BU_BO_REL_] = anon_sym_BU_BO_REL_,
  [anon_sym_SG_MUL_VAL_] = anon_sym_SG_MUL_VAL_,
  [anon_sym_BS_] = anon_sym_BS_,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BU_] = anon_sym_BU_,
  [anon_sym_Vector__XXX] = anon_sym_Vector__XXX,
  [anon_sym_BO_] = anon_sym_BO_,
  [anon_sym_VECTOR__INDEPENDENT_SIG_MSG] = anon_sym_VECTOR__INDEPENDENT_SIG_MSG,
  [anon_sym_SG_] = anon_sym_SG_,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_signal_token1] = sym_unsigned_integer,
  [aux_sym_signal_token2] = sym_unsigned_integer,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_M2] = anon_sym_M,
  [anon_sym_EV_] = anon_sym_EV_,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_HEX] = anon_sym_HEX,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_ENUM] = anon_sym_ENUM,
  [sym_signal_extended_value_type] = sym_signal_extended_value_type,
  [sym_source_file] = sym_source_file,
  [sym_version] = sym_version,
  [sym_new_symbols_def] = sym_new_symbols_def,
  [sym_bit_timing] = sym_bit_timing,
  [sym_nodes] = sym_nodes,
  [sym_transmitter] = sym_transmitter,
  [sym_receiver] = sym_receiver,
  [sym_message] = sym_message,
  [sym_signal] = sym_signal,
  [sym_multiplexer_indicator] = sym_multiplexer_indicator,
  [sym_comment] = sym_comment,
  [sym_attribute_definition] = sym_attribute_definition,
  [sym_object_type] = sym_object_type,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value_type] = sym_attribute_value_type,
  [sym_attribute_default] = sym_attribute_default,
  [sym_attribute_value] = sym_attribute_value,
  [sym_attribute_value_for_object] = sym_attribute_value_for_object,
  [sym_signal_extended_value_type_list] = sym_signal_extended_value_type_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_source_file_repeat4] = aux_sym_source_file_repeat4,
  [aux_sym_source_file_repeat5] = aux_sym_source_file_repeat5,
  [aux_sym_source_file_repeat6] = aux_sym_source_file_repeat6,
  [aux_sym_new_symbols_def_repeat1] = aux_sym_new_symbols_def_repeat1,
  [aux_sym_nodes_repeat1] = aux_sym_nodes_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_attribute_value_type_repeat1] = aux_sym_attribute_value_type_repeat1,
  [anon_alias_sym_] = anon_alias_sym_,
  [alias_sym_keyword] = alias_sym_keyword,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_char_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_c_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NS_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NS_DESC_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CM_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_DEF_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAT_DEF_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAT_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_DEF_DEF_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EV_DATA_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENVVAR_DATA_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SGTYPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SGTYPE_VAL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_DEF_SGTYPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_SGTYPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIG_TYPE_REF_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAL_TABLE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIG_GROUP_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIG_VALTYPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGTYPE_VALTYPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BO_TX_BU_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_DEF_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BA_DEF_DEF_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BU_SG_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BU_EV_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BU_BO_REL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SG_MUL_VAL_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BU_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector__XXX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BO_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VECTOR__INDEPENDENT_SIG_MSG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SG_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_signal_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_signal_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EV_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM] = {
    .visible = true,
    .named = false,
  },
  [sym_signal_extended_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_new_symbols_def] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_timing] = {
    .visible = true,
    .named = true,
  },
  [sym_nodes] = {
    .visible = true,
    .named = true,
  },
  [sym_transmitter] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplexer_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_default] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value_for_object] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_extended_value_type_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_new_symbols_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nodes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_attribute_name = 1,
  field_byte_order = 2,
  field_env_var_name = 3,
  field_factor = 4,
  field_id = 5,
  field_maximum = 6,
  field_message_id = 7,
  field_minimum = 8,
  field_multiplexer_indicator = 9,
  field_name = 10,
  field_node_name = 11,
  field_offset = 12,
  field_receiver = 13,
  field_signal_name = 14,
  field_size = 15,
  field_start_bit = 16,
  field_transmitter = 17,
  field_unit = 18,
  field_value_type = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute_name] = "attribute_name",
  [field_byte_order] = "byte_order",
  [field_env_var_name] = "env_var_name",
  [field_factor] = "factor",
  [field_id] = "id",
  [field_maximum] = "maximum",
  [field_message_id] = "message_id",
  [field_minimum] = "minimum",
  [field_multiplexer_indicator] = "multiplexer_indicator",
  [field_name] = "name",
  [field_node_name] = "node_name",
  [field_offset] = "offset",
  [field_receiver] = "receiver",
  [field_signal_name] = "signal_name",
  [field_size] = "size",
  [field_start_bit] = "start_bit",
  [field_transmitter] = "transmitter",
  [field_unit] = "unit",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 4},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 11},
  [11] = {.index = 27, .length = 12},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute_name, 1},
  [1] =
    {field_attribute_name, 1},
    {field_node_name, 3},
  [3] =
    {field_attribute_name, 1},
    {field_message_id, 3},
  [5] =
    {field_attribute_name, 1},
    {field_env_var_name, 3},
  [7] =
    {field_message_id, 1},
    {field_signal_name, 2},
  [9] =
    {field_id, 1},
    {field_name, 2},
    {field_size, 4},
    {field_transmitter, 5},
  [13] =
    {field_attribute_name, 1},
    {field_message_id, 3},
    {field_signal_name, 4},
  [16] =
    {field_byte_order, 7},
    {field_factor, 10},
    {field_maximum, 17},
    {field_minimum, 15},
    {field_name, 1},
    {field_offset, 12},
    {field_receiver, 20},
    {field_size, 5},
    {field_start_bit, 3},
    {field_unit, 19},
    {field_value_type, 8},
  [27] =
    {field_byte_order, 8},
    {field_factor, 11},
    {field_maximum, 18},
    {field_minimum, 16},
    {field_multiplexer_indicator, 2},
    {field_name, 1},
    {field_offset, 13},
    {field_receiver, 21},
    {field_size, 6},
    {field_start_bit, 4},
    {field_unit, 20},
    {field_value_type, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_keyword,
  },
  [2] = {
    [1] = anon_alias_sym_,
  },
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
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
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '"', 394,
        '(', 384,
        ')', 385,
        ',', 368,
        '0', 381,
        '1', 381,
        ':', 330,
        ';', 393,
        '@', 379,
        'B', 7,
        'C', 10,
        'E', 110,
        'F', 84,
        'H', 36,
        'I', 112,
        'M', 390,
        'N', 148,
        'S', 70,
        'V', 13,
        '[', 386,
        ']', 388,
        'm', 389,
        '|', 378,
        '+', 383,
        '-', 383,
        '2', 267,
        '3', 267,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(261);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 272,
        '\r', 2,
        'B', 8,
        'C', 10,
        'E', 113,
        'F', 83,
        'N', 150,
        'S', 74,
        'V', 12,
        '+', 382,
        '-', 382,
        '0', 380,
        '1', 380,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 272,
        '\r', 2,
        'B', 8,
        'C', 10,
        'E', 113,
        'F', 83,
        'N', 150,
        'S', 74,
        'V', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == 'B') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(400);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ':', 330,
        'B', 9,
        'C', 10,
        'E', 113,
        'F', 83,
        'M', 390,
        'N', 150,
        'S', 74,
        'V', 12,
        '|', 387,
        '+', 258,
        '-', 258,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ':', 330,
        'B', 9,
        'C', 10,
        'E', 113,
        'F', 83,
        'N', 150,
        'S', 74,
        'V', 12,
        '|', 387,
        '+', 258,
        '-', 258,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(196);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(228);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == 'U') ADVANCE(228);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'O') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(158);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(196);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(170);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(209);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(204);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(214);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(226);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(227);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(152);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(398);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(375);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(162);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == 'V') ADVANCE(21);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(163);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(234);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(200);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(248);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(165);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(249);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(205);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(215);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(216);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(221);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(230);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(231);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(232);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(244);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(164);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(399);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(197);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(198);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'V') ADVANCE(246);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(167);
      if (lookahead == 'V') ADVANCE(198);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(169);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == 'U') ADVANCE(196);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(237);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'P') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'P') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 133:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(343);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(239);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(199);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(225);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(245);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(395);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(186);
      if (lookahead == '_') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(186);
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(397);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 167:
      if (lookahead == 'U') ADVANCE(105);
      END_STATE();
    case 168:
      if (lookahead == 'U') ADVANCE(105);
      if (lookahead == 'V') ADVANCE(175);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(210);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 172:
      if (lookahead == 'V') ADVANCE(175);
      END_STATE();
    case 173:
      if (lookahead == 'V') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'V') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == 'V') ADVANCE(14);
      END_STATE();
    case 176:
      if (lookahead == 'V') ADVANCE(21);
      END_STATE();
    case 177:
      if (lookahead == 'V') ADVANCE(198);
      END_STATE();
    case 178:
      if (lookahead == 'V') ADVANCE(24);
      END_STATE();
    case 179:
      if (lookahead == 'V') ADVANCE(247);
      END_STATE();
    case 180:
      if (lookahead == 'V') ADVANCE(25);
      END_STATE();
    case 181:
      if (lookahead == 'X') ADVANCE(396);
      END_STATE();
    case 182:
      if (lookahead == 'X') ADVANCE(370);
      END_STATE();
    case 183:
      if (lookahead == 'X') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == 'X') ADVANCE(203);
      END_STATE();
    case 185:
      if (lookahead == 'X') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(125);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(128);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(129);
      END_STATE();
    case 189:
      if (lookahead == 'Y') ADVANCE(130);
      END_STATE();
    case 190:
      if (lookahead == 'Y') ADVANCE(131);
      END_STATE();
    case 191:
      if (lookahead == 'Y') ADVANCE(132);
      END_STATE();
    case 192:
      if (lookahead == 'Y') ADVANCE(133);
      END_STATE();
    case 193:
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 194:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(367);
      END_STATE();
    case 196:
      if (lookahead == '_') ADVANCE(369);
      END_STATE();
    case 197:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(392);
      END_STATE();
    case 199:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(377);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 202:
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 203:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 204:
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(341);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(331);
      END_STATE();
    case 210:
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 211:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 212:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 213:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 214:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 215:
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 216:
      if (lookahead == '_') ADVANCE(350);
      END_STATE();
    case 217:
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 218:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 219:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 220:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 221:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 222:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 223:
      if (lookahead == '_') ADVANCE(339);
      END_STATE();
    case 224:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 225:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 226:
      if (lookahead == '_') ADVANCE(335);
      END_STATE();
    case 227:
      if (lookahead == '_') ADVANCE(344);
      END_STATE();
    case 228:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 229:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 230:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 231:
      if (lookahead == '_') ADVANCE(364);
      END_STATE();
    case 232:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 233:
      if (lookahead == '_') ADVANCE(366);
      END_STATE();
    case 234:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 235:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 236:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 237:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 238:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 239:
      if (lookahead == '_') ADVANCE(242);
      END_STATE();
    case 240:
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 242:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 243:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 244:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 245:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 246:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 247:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 248:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 249:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 255:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '"', 394,
        '(', 384,
        ')', 385,
        ',', 368,
        ':', 330,
        ';', 393,
        'B', 7,
        'C', 10,
        'E', 110,
        'F', 84,
        'H', 36,
        'I', 112,
        'M', 391,
        'N', 148,
        'S', 70,
        'V', 13,
        '[', 386,
        ']', 388,
        'm', 389,
        '|', 387,
        '+', 256,
        '-', 256,
      );
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '"', 4,
        ':', 330,
        'B', 19,
        'C', 109,
        'E', 116,
        'F', 90,
        'H', 36,
        'I', 112,
        'M', 391,
        'N', 149,
        'S', 79,
        'V', 41,
        'm', 389,
        '|', 378,
        '+', 256,
        '-', 256,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '"', 4,
        ':', 330,
        'B', 19,
        'C', 109,
        'E', 116,
        'F', 90,
        'H', 36,
        'I', 112,
        'M', 391,
        'N', 149,
        'S', 79,
        'V', 41,
        'm', 389,
        '+', 256,
        '-', 256,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_char_string);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unsigned_integer);
      if (lookahead == '.') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_signed_integer);
      if (lookahead == '.') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_signed_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'A') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'C') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'D') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'D') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'F') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'F') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'I') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'I') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'L') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'M') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'O') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'P') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'P') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'R') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'S') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'S') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'V') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'Y') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'c') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_c_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_NS_);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_NS_);
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_NS_DESC_);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CM_);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_CM_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_VAL_);
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_CAT_DEF_);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_CAT_);
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EV_DATA_);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_ENVVAR_DATA_);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SGTYPE_);
      if (lookahead == 'V') ADVANCE(23);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SGTYPE_VAL_);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_BA_DEF_SGTYPE_);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_BA_SGTYPE_);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SIG_TYPE_REF_);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_VAL_TABLE_);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SIG_GROUP_);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SIG_VALTYPE_);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SIG_VALTYPE_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SIGTYPE_VALTYPE_);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BO_TX_BU_);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BA_DEF_REL_);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BA_REL_);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_REL_);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BU_SG_REL_);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BU_EV_REL_);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_BU_BO_REL_);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_SG_MUL_VAL_);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BS_);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BU_);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Vector__XXX);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Vector__XXX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BO_);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BO_);
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BO_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_VECTOR__INDEPENDENT_SIG_MSG);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_VECTOR__INDEPENDENT_SIG_MSG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SG_);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_signal_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_signal_token1);
      if (lookahead == '.') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_signal_token2);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_signal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_M2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_EV_);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_HEX);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_ENUM);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_signal_extended_value_type);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 262},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 262},
  [8] = {.lex_state = 262},
  [9] = {.lex_state = 262},
  [10] = {.lex_state = 262},
  [11] = {.lex_state = 262},
  [12] = {.lex_state = 262},
  [13] = {.lex_state = 262},
  [14] = {.lex_state = 262},
  [15] = {.lex_state = 262},
  [16] = {.lex_state = 262},
  [17] = {.lex_state = 262},
  [18] = {.lex_state = 262},
  [19] = {.lex_state = 262},
  [20] = {.lex_state = 262},
  [21] = {.lex_state = 262},
  [22] = {.lex_state = 262},
  [23] = {.lex_state = 262},
  [24] = {.lex_state = 262},
  [25] = {.lex_state = 262},
  [26] = {.lex_state = 262},
  [27] = {.lex_state = 262},
  [28] = {.lex_state = 262},
  [29] = {.lex_state = 262},
  [30] = {.lex_state = 262},
  [31] = {.lex_state = 262},
  [32] = {.lex_state = 262},
  [33] = {.lex_state = 262},
  [34] = {.lex_state = 262},
  [35] = {.lex_state = 262},
  [36] = {.lex_state = 262},
  [37] = {.lex_state = 262},
  [38] = {.lex_state = 264},
  [39] = {.lex_state = 264},
  [40] = {.lex_state = 264},
  [41] = {.lex_state = 262},
  [42] = {.lex_state = 262},
  [43] = {.lex_state = 262},
  [44] = {.lex_state = 262},
  [45] = {.lex_state = 262},
  [46] = {.lex_state = 262},
  [47] = {.lex_state = 262},
  [48] = {.lex_state = 262},
  [49] = {.lex_state = 262},
  [50] = {.lex_state = 262},
  [51] = {.lex_state = 262},
  [52] = {.lex_state = 262},
  [53] = {.lex_state = 262},
  [54] = {.lex_state = 262},
  [55] = {.lex_state = 262},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 262},
  [59] = {.lex_state = 262},
  [60] = {.lex_state = 262},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 262},
  [63] = {.lex_state = 262},
  [64] = {.lex_state = 262},
  [65] = {.lex_state = 262},
  [66] = {.lex_state = 262},
  [67] = {.lex_state = 262},
  [68] = {.lex_state = 262},
  [69] = {.lex_state = 262},
  [70] = {.lex_state = 262},
  [71] = {.lex_state = 262},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 262},
  [75] = {.lex_state = 173},
  [76] = {.lex_state = 262},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 262},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 173},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 262},
  [88] = {.lex_state = 262},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 262},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 262},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 262},
  [95] = {.lex_state = 173},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 262},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 174},
  [110] = {.lex_state = 262},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 264},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 262},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 255},
  [118] = {.lex_state = 262},
  [119] = {.lex_state = 262},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 262},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 262},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 255},
  [134] = {.lex_state = 262},
  [135] = {.lex_state = 262},
  [136] = {.lex_state = 255},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 262},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 264},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 255},
  [146] = {.lex_state = 262},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 255},
  [149] = {.lex_state = 255},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 262},
  [152] = {.lex_state = 255},
  [153] = {.lex_state = 255},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 262},
  [156] = {.lex_state = 262},
  [157] = {.lex_state = 262},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 262},
  [160] = {.lex_state = 262},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 262},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 262},
  [166] = {.lex_state = 262},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 262},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 262},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 264},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 264},
  [181] = {.lex_state = 264},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 264},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 264},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 264},
  [191] = {.lex_state = 264},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 264},
  [195] = {.lex_state = 262},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 262},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_unsigned_integer] = ACTIONS(1),
    [sym_signed_integer] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_NS_] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_NS_DESC_] = ACTIONS(1),
    [anon_sym_CM_] = ACTIONS(1),
    [anon_sym_BA_DEF_] = ACTIONS(1),
    [anon_sym_BA_] = ACTIONS(1),
    [anon_sym_VAL_] = ACTIONS(1),
    [anon_sym_CAT_DEF_] = ACTIONS(1),
    [anon_sym_CAT_] = ACTIONS(1),
    [anon_sym_FILTER] = ACTIONS(1),
    [anon_sym_BA_DEF_DEF_] = ACTIONS(1),
    [anon_sym_ENVVAR_DATA_] = ACTIONS(1),
    [anon_sym_SGTYPE_] = ACTIONS(1),
    [anon_sym_SGTYPE_VAL_] = ACTIONS(1),
    [anon_sym_BA_DEF_SGTYPE_] = ACTIONS(1),
    [anon_sym_BA_SGTYPE_] = ACTIONS(1),
    [anon_sym_SIG_TYPE_REF_] = ACTIONS(1),
    [anon_sym_VAL_TABLE_] = ACTIONS(1),
    [anon_sym_SIG_GROUP_] = ACTIONS(1),
    [anon_sym_SIG_VALTYPE_] = ACTIONS(1),
    [anon_sym_SIGTYPE_VALTYPE_] = ACTIONS(1),
    [anon_sym_BO_TX_BU_] = ACTIONS(1),
    [anon_sym_BA_DEF_REL_] = ACTIONS(1),
    [anon_sym_BA_REL_] = ACTIONS(1),
    [anon_sym_BA_DEF_DEF_REL_] = ACTIONS(1),
    [anon_sym_BS_] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BU_] = ACTIONS(1),
    [anon_sym_Vector__XXX] = ACTIONS(1),
    [anon_sym_BO_] = ACTIONS(1),
    [anon_sym_VECTOR__INDEPENDENT_SIG_MSG] = ACTIONS(1),
    [anon_sym_SG_] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_signal_token1] = ACTIONS(1),
    [aux_sym_signal_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_M2] = ACTIONS(1),
    [anon_sym_EV_] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_INT] = ACTIONS(1),
    [anon_sym_HEX] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_ENUM] = ACTIONS(1),
    [sym_signal_extended_value_type] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(200),
    [sym_version] = STATE(199),
    [sym_new_symbols_def] = STATE(106),
    [sym_bit_timing] = STATE(105),
    [anon_sym_VERSION] = ACTIONS(3),
    [anon_sym_NS_] = ACTIONS(5),
    [anon_sym_BS_] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_end_of_line,
    ACTIONS(15), 1,
      anon_sym_BS_,
    STATE(2), 1,
      aux_sym_new_symbols_def_repeat1,
    ACTIONS(12), 28,
      anon_sym_NS_DESC_,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_CAT_DEF_,
      anon_sym_CAT_,
      anon_sym_FILTER,
      anon_sym_BA_DEF_DEF_,
      anon_sym_EV_DATA_,
      anon_sym_ENVVAR_DATA_,
      anon_sym_SGTYPE_,
      anon_sym_SGTYPE_VAL_,
      anon_sym_BA_DEF_SGTYPE_,
      anon_sym_BA_SGTYPE_,
      anon_sym_SIG_TYPE_REF_,
      anon_sym_VAL_TABLE_,
      anon_sym_SIG_GROUP_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_SIGTYPE_VALTYPE_,
      anon_sym_BO_TX_BU_,
      anon_sym_BA_DEF_REL_,
      anon_sym_BA_REL_,
      anon_sym_BA_DEF_DEF_REL_,
      anon_sym_BU_SG_REL_,
      anon_sym_BU_EV_REL_,
      anon_sym_BU_BO_REL_,
      anon_sym_SG_MUL_VAL_,
  [40] = 4,
    ACTIONS(17), 1,
      sym_end_of_line,
    ACTIONS(21), 1,
      anon_sym_BS_,
    STATE(4), 1,
      aux_sym_new_symbols_def_repeat1,
    ACTIONS(19), 28,
      anon_sym_NS_DESC_,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_CAT_DEF_,
      anon_sym_CAT_,
      anon_sym_FILTER,
      anon_sym_BA_DEF_DEF_,
      anon_sym_EV_DATA_,
      anon_sym_ENVVAR_DATA_,
      anon_sym_SGTYPE_,
      anon_sym_SGTYPE_VAL_,
      anon_sym_BA_DEF_SGTYPE_,
      anon_sym_BA_SGTYPE_,
      anon_sym_SIG_TYPE_REF_,
      anon_sym_VAL_TABLE_,
      anon_sym_SIG_GROUP_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_SIGTYPE_VALTYPE_,
      anon_sym_BO_TX_BU_,
      anon_sym_BA_DEF_REL_,
      anon_sym_BA_REL_,
      anon_sym_BA_DEF_DEF_REL_,
      anon_sym_BU_SG_REL_,
      anon_sym_BU_EV_REL_,
      anon_sym_BU_BO_REL_,
      anon_sym_SG_MUL_VAL_,
  [80] = 4,
    ACTIONS(17), 1,
      sym_end_of_line,
    ACTIONS(25), 1,
      anon_sym_BS_,
    STATE(2), 1,
      aux_sym_new_symbols_def_repeat1,
    ACTIONS(23), 28,
      anon_sym_NS_DESC_,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_CAT_DEF_,
      anon_sym_CAT_,
      anon_sym_FILTER,
      anon_sym_BA_DEF_DEF_,
      anon_sym_EV_DATA_,
      anon_sym_ENVVAR_DATA_,
      anon_sym_SGTYPE_,
      anon_sym_SGTYPE_VAL_,
      anon_sym_BA_DEF_SGTYPE_,
      anon_sym_BA_SGTYPE_,
      anon_sym_SIG_TYPE_REF_,
      anon_sym_VAL_TABLE_,
      anon_sym_SIG_GROUP_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_SIGTYPE_VALTYPE_,
      anon_sym_BO_TX_BU_,
      anon_sym_BA_DEF_REL_,
      anon_sym_BA_REL_,
      anon_sym_BA_DEF_DEF_REL_,
      anon_sym_BU_SG_REL_,
      anon_sym_BU_EV_REL_,
      anon_sym_BU_BO_REL_,
      anon_sym_SG_MUL_VAL_,
  [120] = 2,
    ACTIONS(27), 1,
      sym_end_of_line,
    ACTIONS(15), 29,
      anon_sym_NS_DESC_,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_CAT_DEF_,
      anon_sym_CAT_,
      anon_sym_FILTER,
      anon_sym_BA_DEF_DEF_,
      anon_sym_EV_DATA_,
      anon_sym_ENVVAR_DATA_,
      anon_sym_SGTYPE_,
      anon_sym_SGTYPE_VAL_,
      anon_sym_BA_DEF_SGTYPE_,
      anon_sym_BA_SGTYPE_,
      anon_sym_SIG_TYPE_REF_,
      anon_sym_VAL_TABLE_,
      anon_sym_SIG_GROUP_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_SIGTYPE_VALTYPE_,
      anon_sym_BO_TX_BU_,
      anon_sym_BA_DEF_REL_,
      anon_sym_BA_REL_,
      anon_sym_BA_DEF_DEF_REL_,
      anon_sym_BU_SG_REL_,
      anon_sym_BU_EV_REL_,
      anon_sym_BU_BO_REL_,
      anon_sym_SG_MUL_VAL_,
      anon_sym_BS_,
  [155] = 2,
    ACTIONS(31), 6,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_CAT_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SGTYPE_,
    ACTIONS(29), 22,
      anon_sym_NS_DESC_,
      anon_sym_CM_,
      anon_sym_CAT_DEF_,
      anon_sym_FILTER,
      anon_sym_EV_DATA_,
      anon_sym_ENVVAR_DATA_,
      anon_sym_SGTYPE_VAL_,
      anon_sym_BA_DEF_SGTYPE_,
      anon_sym_BA_SGTYPE_,
      anon_sym_SIG_TYPE_REF_,
      anon_sym_VAL_TABLE_,
      anon_sym_SIG_GROUP_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_SIGTYPE_VALTYPE_,
      anon_sym_BO_TX_BU_,
      anon_sym_BA_DEF_REL_,
      anon_sym_BA_REL_,
      anon_sym_BA_DEF_DEF_REL_,
      anon_sym_BU_SG_REL_,
      anon_sym_BU_EV_REL_,
      anon_sym_BU_BO_REL_,
      anon_sym_SG_MUL_VAL_,
  [188] = 13,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [234] = 13,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    STATE(14), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(50), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [280] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(22), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [326] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(22), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [372] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(36), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(49), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [418] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(36), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(49), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [464] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(23), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(35), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(51), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(73), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [510] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(45), 1,
      anon_sym_BO_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(26), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(30), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(54), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(81), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [556] = 11,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(30), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(54), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(81), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [595] = 11,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(20), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [634] = 11,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [673] = 11,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(36), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [712] = 11,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(33), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(83), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [751] = 9,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(54), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(81), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [783] = 9,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [815] = 9,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(50), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [847] = 9,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(36), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(49), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [879] = 9,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(53), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(85), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [911] = 2,
    ACTIONS(61), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
    ACTIONS(59), 10,
      sym_char_string,
      anon_sym_BU_,
      anon_sym_BO_,
      anon_sym_SG_,
      anon_sym_EV_,
      anon_sym_INT,
      anon_sym_HEX,
      anon_sym_FLOAT,
      anon_sym_STRING,
      anon_sym_ENUM,
  [929] = 9,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(52), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(83), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [961] = 7,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(50), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [986] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(54), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(81), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1011] = 4,
    ACTIONS(67), 1,
      anon_sym_SG_,
    ACTIONS(65), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(29), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1030] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(83), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1055] = 4,
    ACTIONS(74), 1,
      anon_sym_SG_,
    ACTIONS(72), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(34), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1074] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(72), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1099] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(85), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1124] = 4,
    ACTIONS(74), 1,
      anon_sym_SG_,
    ACTIONS(80), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(29), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1143] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1168] = 7,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1193] = 4,
    ACTIONS(86), 1,
      anon_sym_BO_,
    ACTIONS(84), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1211] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_c_identifier,
    STATE(38), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(94), 6,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1229] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym_c_identifier,
    STATE(40), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(100), 6,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1247] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_c_identifier,
    STATE(38), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(106), 6,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1265] = 7,
    ACTIONS(108), 1,
      sym_char_string,
    ACTIONS(112), 1,
      anon_sym_BU_,
    ACTIONS(114), 1,
      anon_sym_BO_,
    ACTIONS(116), 1,
      anon_sym_SG_,
    ACTIONS(118), 1,
      anon_sym_EV_,
    STATE(130), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1289] = 4,
    ACTIONS(122), 1,
      anon_sym_CM_,
    ACTIONS(125), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1306] = 2,
    ACTIONS(129), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1319] = 2,
    ACTIONS(133), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1332] = 2,
    ACTIONS(137), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1345] = 2,
    ACTIONS(141), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1358] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(79), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1376] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(77), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1394] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(78), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1412] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(81), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1430] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(86), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1448] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(85), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1466] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(72), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1484] = 5,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(83), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1502] = 4,
    ACTIONS(149), 1,
      anon_sym_BA_DEF_,
    ACTIONS(152), 1,
      anon_sym_BA_,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1518] = 4,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_attribute_name,
    STATE(108), 1,
      sym_object_type,
    ACTIONS(154), 4,
      anon_sym_BU_,
      anon_sym_BO_,
      anon_sym_SG_,
      anon_sym_EV_,
  [1534] = 5,
    ACTIONS(160), 1,
      anon_sym_FLOAT,
    ACTIONS(162), 1,
      anon_sym_STRING,
    ACTIONS(164), 1,
      anon_sym_ENUM,
    STATE(138), 1,
      sym_attribute_value_type,
    ACTIONS(158), 2,
      anon_sym_INT,
      anon_sym_HEX,
  [1551] = 4,
    ACTIONS(168), 1,
      anon_sym_BA_,
    ACTIONS(170), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_SIG_VALTYPE_,
    STATE(58), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
  [1566] = 2,
    ACTIONS(175), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1577] = 2,
    ACTIONS(179), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1588] = 5,
    ACTIONS(160), 1,
      anon_sym_FLOAT,
    ACTIONS(162), 1,
      anon_sym_STRING,
    ACTIONS(164), 1,
      anon_sym_ENUM,
    STATE(113), 1,
      sym_attribute_value_type,
    ACTIONS(158), 2,
      anon_sym_INT,
      anon_sym_HEX,
  [1605] = 2,
    ACTIONS(183), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1616] = 4,
    ACTIONS(185), 1,
      sym_char_string,
    ACTIONS(189), 1,
      anon_sym_BO_,
    ACTIONS(191), 1,
      anon_sym_SG_,
    ACTIONS(187), 2,
      anon_sym_BU_,
      anon_sym_EV_,
  [1630] = 3,
    ACTIONS(108), 1,
      sym_char_string,
    STATE(127), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1642] = 3,
    ACTIONS(108), 1,
      sym_char_string,
    STATE(143), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1654] = 3,
    ACTIONS(195), 1,
      anon_sym_BA_,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_SIG_VALTYPE_,
    STATE(66), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
  [1666] = 2,
    ACTIONS(200), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1676] = 3,
    ACTIONS(108), 1,
      sym_char_string,
    STATE(129), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1688] = 3,
    ACTIONS(108), 1,
      sym_char_string,
    STATE(131), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1700] = 3,
    ACTIONS(108), 1,
      sym_char_string,
    STATE(128), 1,
      sym_attribute_value,
    ACTIONS(110), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1712] = 2,
    ACTIONS(204), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1722] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1733] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1744] = 2,
    ACTIONS(208), 1,
      anon_sym_BA_,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1753] = 3,
    STATE(44), 1,
      sym_receiver,
    STATE(45), 1,
      sym_transmitter,
    ACTIONS(210), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [1764] = 4,
    ACTIONS(5), 1,
      anon_sym_NS_,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(96), 1,
      sym_new_symbols_def,
    STATE(98), 1,
      sym_bit_timing,
  [1777] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1788] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1799] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1810] = 4,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_m,
    ACTIONS(218), 1,
      anon_sym_M2,
    STATE(162), 1,
      sym_multiplexer_indicator,
  [1823] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1834] = 3,
    STATE(43), 1,
      sym_receiver,
    STATE(45), 1,
      sym_transmitter,
    ACTIONS(210), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [1845] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1856] = 3,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1867] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1878] = 3,
    ACTIONS(43), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat6,
  [1889] = 1,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_SIG_VALTYPE_,
  [1895] = 1,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_SIG_VALTYPE_,
  [1901] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_attribute_value_type_repeat1,
  [1911] = 1,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_SIG_VALTYPE_,
  [1917] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_attribute_value_type_repeat1,
  [1927] = 1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_SIG_VALTYPE_,
  [1933] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_attribute_value_type_repeat1,
  [1943] = 1,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_SIG_VALTYPE_,
  [1949] = 2,
    STATE(31), 1,
      sym_transmitter,
    ACTIONS(210), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [1957] = 2,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(99), 1,
      sym_bit_timing,
  [1964] = 2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_attribute_name,
  [1971] = 2,
    ACTIONS(246), 1,
      anon_sym_BU_,
    STATE(10), 1,
      sym_nodes,
  [1978] = 2,
    ACTIONS(246), 1,
      anon_sym_BU_,
    STATE(8), 1,
      sym_nodes,
  [1985] = 2,
    ACTIONS(246), 1,
      anon_sym_BU_,
    STATE(11), 1,
      sym_nodes,
  [1992] = 2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_attribute_name,
  [1999] = 2,
    ACTIONS(248), 1,
      sym_unsigned_integer,
    ACTIONS(250), 1,
      anon_sym_BU_,
  [2006] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2011] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_M,
  [2018] = 2,
    ACTIONS(246), 1,
      anon_sym_BU_,
    STATE(13), 1,
      sym_nodes,
  [2025] = 2,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(100), 1,
      sym_bit_timing,
  [2032] = 1,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_SIG_VALTYPE_,
  [2037] = 2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_attribute_name,
  [2044] = 1,
    ACTIONS(258), 2,
      sym_c_identifier,
      anon_sym_VECTOR__INDEPENDENT_SIG_MSG,
  [2049] = 1,
    ACTIONS(260), 1,
      sym_unsigned_integer,
  [2053] = 1,
    ACTIONS(262), 1,
      sym_signed_integer,
  [2057] = 1,
    ACTIONS(262), 1,
      sym_double,
  [2061] = 1,
    ACTIONS(264), 1,
      anon_sym_SEMI,
  [2065] = 1,
    ACTIONS(266), 1,
      sym_signal_extended_value_type,
  [2069] = 1,
    ACTIONS(268), 1,
      sym_unsigned_integer,
  [2073] = 1,
    ACTIONS(270), 1,
      anon_sym_BU_,
  [2077] = 1,
    ACTIONS(272), 1,
      sym_c_identifier,
  [2081] = 1,
    ACTIONS(274), 1,
      sym_char_string,
  [2085] = 1,
    ACTIONS(276), 1,
      sym_char_string,
  [2089] = 1,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [2093] = 1,
    ACTIONS(280), 1,
      sym_unsigned_integer,
  [2097] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [2101] = 1,
    ACTIONS(284), 1,
      anon_sym_SEMI,
  [2105] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [2109] = 1,
    ACTIONS(231), 1,
      anon_sym_SEMI,
  [2113] = 1,
    ACTIONS(288), 1,
      sym_char_string,
  [2117] = 1,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [2121] = 1,
    ACTIONS(292), 1,
      anon_sym_SEMI,
  [2125] = 1,
    ACTIONS(294), 1,
      anon_sym_SEMI,
  [2129] = 1,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [2133] = 1,
    ACTIONS(298), 1,
      anon_sym_SEMI,
  [2137] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [2141] = 1,
    ACTIONS(302), 1,
      sym_c_identifier,
  [2145] = 1,
    ACTIONS(304), 1,
      sym_unsigned_integer,
  [2149] = 1,
    ACTIONS(306), 1,
      sym_unsigned_integer,
  [2153] = 1,
    ACTIONS(308), 1,
      sym_c_identifier,
  [2157] = 1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [2161] = 1,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [2165] = 1,
    ACTIONS(314), 1,
      sym_char_string,
  [2169] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [2173] = 1,
    ACTIONS(318), 1,
      sym_double,
  [2177] = 1,
    ACTIONS(320), 1,
      sym_signed_integer,
  [2181] = 1,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [2185] = 1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [2189] = 1,
    ACTIONS(326), 1,
      sym_c_identifier,
  [2193] = 1,
    ACTIONS(328), 1,
      sym_char_string,
  [2197] = 1,
    ACTIONS(330), 1,
      anon_sym_COMMA,
  [2201] = 1,
    ACTIONS(332), 1,
      sym_c_identifier,
  [2205] = 1,
    ACTIONS(334), 1,
      sym_c_identifier,
  [2209] = 1,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [2213] = 1,
    ACTIONS(338), 1,
      sym_unsigned_integer,
  [2217] = 1,
    ACTIONS(340), 1,
      sym_c_identifier,
  [2221] = 1,
    ACTIONS(338), 1,
      sym_c_identifier,
  [2225] = 1,
    ACTIONS(342), 1,
      anon_sym_SEMI,
  [2229] = 1,
    ACTIONS(344), 1,
      sym_unsigned_integer,
  [2233] = 1,
    ACTIONS(346), 1,
      sym_unsigned_integer,
  [2237] = 1,
    ACTIONS(348), 1,
      sym_unsigned_integer,
  [2241] = 1,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [2245] = 1,
    ACTIONS(352), 1,
      sym_unsigned_integer,
  [2249] = 1,
    ACTIONS(354), 1,
      sym_unsigned_integer,
  [2253] = 1,
    ACTIONS(356), 1,
      anon_sym_COLON,
  [2257] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [2261] = 1,
    ACTIONS(360), 1,
      anon_sym_PIPE,
  [2265] = 1,
    ACTIONS(362), 1,
      anon_sym_COLON,
  [2269] = 1,
    ACTIONS(364), 1,
      sym_unsigned_integer,
  [2273] = 1,
    ACTIONS(366), 1,
      sym_unsigned_integer,
  [2277] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2281] = 1,
    ACTIONS(370), 1,
      anon_sym_PIPE,
  [2285] = 1,
    ACTIONS(372), 1,
      anon_sym_AT,
  [2289] = 1,
    ACTIONS(374), 1,
      sym_unsigned_integer,
  [2293] = 1,
    ACTIONS(376), 1,
      aux_sym_signal_token1,
  [2297] = 1,
    ACTIONS(378), 1,
      anon_sym_AT,
  [2301] = 1,
    ACTIONS(380), 1,
      aux_sym_signal_token2,
  [2305] = 1,
    ACTIONS(382), 1,
      aux_sym_signal_token1,
  [2309] = 1,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
  [2313] = 1,
    ACTIONS(386), 1,
      aux_sym_signal_token2,
  [2317] = 1,
    ACTIONS(388), 1,
      sym_double,
  [2321] = 1,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
  [2325] = 1,
    ACTIONS(392), 1,
      anon_sym_COMMA,
  [2329] = 1,
    ACTIONS(394), 1,
      sym_double,
  [2333] = 1,
    ACTIONS(396), 1,
      sym_double,
  [2337] = 1,
    ACTIONS(398), 1,
      anon_sym_COMMA,
  [2341] = 1,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [2345] = 1,
    ACTIONS(402), 1,
      sym_double,
  [2349] = 1,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
  [2353] = 1,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
  [2357] = 1,
    ACTIONS(408), 1,
      sym_double,
  [2361] = 1,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
  [2365] = 1,
    ACTIONS(412), 1,
      anon_sym_PIPE2,
  [2369] = 1,
    ACTIONS(414), 1,
      sym_double,
  [2373] = 1,
    ACTIONS(416), 1,
      sym_double,
  [2377] = 1,
    ACTIONS(418), 1,
      anon_sym_PIPE2,
  [2381] = 1,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
  [2385] = 1,
    ACTIONS(422), 1,
      sym_double,
  [2389] = 1,
    ACTIONS(424), 1,
      sym_char_string,
  [2393] = 1,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [2397] = 1,
    ACTIONS(428), 1,
      sym_end_of_line,
  [2401] = 1,
    ACTIONS(430), 1,
      sym_char_string,
  [2405] = 1,
    ACTIONS(432), 1,
      sym_end_of_line,
  [2409] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [2413] = 1,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [2417] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 510,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 712,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 783,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 847,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 911,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 961,
  [SMALL_STATE(28)] = 986,
  [SMALL_STATE(29)] = 1011,
  [SMALL_STATE(30)] = 1030,
  [SMALL_STATE(31)] = 1055,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1099,
  [SMALL_STATE(34)] = 1124,
  [SMALL_STATE(35)] = 1143,
  [SMALL_STATE(36)] = 1168,
  [SMALL_STATE(37)] = 1193,
  [SMALL_STATE(38)] = 1211,
  [SMALL_STATE(39)] = 1229,
  [SMALL_STATE(40)] = 1247,
  [SMALL_STATE(41)] = 1265,
  [SMALL_STATE(42)] = 1289,
  [SMALL_STATE(43)] = 1306,
  [SMALL_STATE(44)] = 1319,
  [SMALL_STATE(45)] = 1332,
  [SMALL_STATE(46)] = 1345,
  [SMALL_STATE(47)] = 1358,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1394,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1448,
  [SMALL_STATE(53)] = 1466,
  [SMALL_STATE(54)] = 1484,
  [SMALL_STATE(55)] = 1502,
  [SMALL_STATE(56)] = 1518,
  [SMALL_STATE(57)] = 1534,
  [SMALL_STATE(58)] = 1551,
  [SMALL_STATE(59)] = 1566,
  [SMALL_STATE(60)] = 1577,
  [SMALL_STATE(61)] = 1588,
  [SMALL_STATE(62)] = 1605,
  [SMALL_STATE(63)] = 1616,
  [SMALL_STATE(64)] = 1630,
  [SMALL_STATE(65)] = 1642,
  [SMALL_STATE(66)] = 1654,
  [SMALL_STATE(67)] = 1666,
  [SMALL_STATE(68)] = 1676,
  [SMALL_STATE(69)] = 1688,
  [SMALL_STATE(70)] = 1700,
  [SMALL_STATE(71)] = 1712,
  [SMALL_STATE(72)] = 1722,
  [SMALL_STATE(73)] = 1733,
  [SMALL_STATE(74)] = 1744,
  [SMALL_STATE(75)] = 1753,
  [SMALL_STATE(76)] = 1764,
  [SMALL_STATE(77)] = 1777,
  [SMALL_STATE(78)] = 1788,
  [SMALL_STATE(79)] = 1799,
  [SMALL_STATE(80)] = 1810,
  [SMALL_STATE(81)] = 1823,
  [SMALL_STATE(82)] = 1834,
  [SMALL_STATE(83)] = 1845,
  [SMALL_STATE(84)] = 1856,
  [SMALL_STATE(85)] = 1867,
  [SMALL_STATE(86)] = 1878,
  [SMALL_STATE(87)] = 1889,
  [SMALL_STATE(88)] = 1895,
  [SMALL_STATE(89)] = 1901,
  [SMALL_STATE(90)] = 1911,
  [SMALL_STATE(91)] = 1917,
  [SMALL_STATE(92)] = 1927,
  [SMALL_STATE(93)] = 1933,
  [SMALL_STATE(94)] = 1943,
  [SMALL_STATE(95)] = 1949,
  [SMALL_STATE(96)] = 1957,
  [SMALL_STATE(97)] = 1964,
  [SMALL_STATE(98)] = 1971,
  [SMALL_STATE(99)] = 1978,
  [SMALL_STATE(100)] = 1985,
  [SMALL_STATE(101)] = 1992,
  [SMALL_STATE(102)] = 1999,
  [SMALL_STATE(103)] = 2006,
  [SMALL_STATE(104)] = 2011,
  [SMALL_STATE(105)] = 2018,
  [SMALL_STATE(106)] = 2025,
  [SMALL_STATE(107)] = 2032,
  [SMALL_STATE(108)] = 2037,
  [SMALL_STATE(109)] = 2044,
  [SMALL_STATE(110)] = 2049,
  [SMALL_STATE(111)] = 2053,
  [SMALL_STATE(112)] = 2057,
  [SMALL_STATE(113)] = 2061,
  [SMALL_STATE(114)] = 2065,
  [SMALL_STATE(115)] = 2069,
  [SMALL_STATE(116)] = 2073,
  [SMALL_STATE(117)] = 2077,
  [SMALL_STATE(118)] = 2081,
  [SMALL_STATE(119)] = 2085,
  [SMALL_STATE(120)] = 2089,
  [SMALL_STATE(121)] = 2093,
  [SMALL_STATE(122)] = 2097,
  [SMALL_STATE(123)] = 2101,
  [SMALL_STATE(124)] = 2105,
  [SMALL_STATE(125)] = 2109,
  [SMALL_STATE(126)] = 2113,
  [SMALL_STATE(127)] = 2117,
  [SMALL_STATE(128)] = 2121,
  [SMALL_STATE(129)] = 2125,
  [SMALL_STATE(130)] = 2129,
  [SMALL_STATE(131)] = 2133,
  [SMALL_STATE(132)] = 2137,
  [SMALL_STATE(133)] = 2141,
  [SMALL_STATE(134)] = 2145,
  [SMALL_STATE(135)] = 2149,
  [SMALL_STATE(136)] = 2153,
  [SMALL_STATE(137)] = 2157,
  [SMALL_STATE(138)] = 2161,
  [SMALL_STATE(139)] = 2165,
  [SMALL_STATE(140)] = 2169,
  [SMALL_STATE(141)] = 2173,
  [SMALL_STATE(142)] = 2177,
  [SMALL_STATE(143)] = 2181,
  [SMALL_STATE(144)] = 2185,
  [SMALL_STATE(145)] = 2189,
  [SMALL_STATE(146)] = 2193,
  [SMALL_STATE(147)] = 2197,
  [SMALL_STATE(148)] = 2201,
  [SMALL_STATE(149)] = 2205,
  [SMALL_STATE(150)] = 2209,
  [SMALL_STATE(151)] = 2213,
  [SMALL_STATE(152)] = 2217,
  [SMALL_STATE(153)] = 2221,
  [SMALL_STATE(154)] = 2225,
  [SMALL_STATE(155)] = 2229,
  [SMALL_STATE(156)] = 2233,
  [SMALL_STATE(157)] = 2237,
  [SMALL_STATE(158)] = 2241,
  [SMALL_STATE(159)] = 2245,
  [SMALL_STATE(160)] = 2249,
  [SMALL_STATE(161)] = 2253,
  [SMALL_STATE(162)] = 2257,
  [SMALL_STATE(163)] = 2261,
  [SMALL_STATE(164)] = 2265,
  [SMALL_STATE(165)] = 2269,
  [SMALL_STATE(166)] = 2273,
  [SMALL_STATE(167)] = 2277,
  [SMALL_STATE(168)] = 2281,
  [SMALL_STATE(169)] = 2285,
  [SMALL_STATE(170)] = 2289,
  [SMALL_STATE(171)] = 2293,
  [SMALL_STATE(172)] = 2297,
  [SMALL_STATE(173)] = 2301,
  [SMALL_STATE(174)] = 2305,
  [SMALL_STATE(175)] = 2309,
  [SMALL_STATE(176)] = 2313,
  [SMALL_STATE(177)] = 2317,
  [SMALL_STATE(178)] = 2321,
  [SMALL_STATE(179)] = 2325,
  [SMALL_STATE(180)] = 2329,
  [SMALL_STATE(181)] = 2333,
  [SMALL_STATE(182)] = 2337,
  [SMALL_STATE(183)] = 2341,
  [SMALL_STATE(184)] = 2345,
  [SMALL_STATE(185)] = 2349,
  [SMALL_STATE(186)] = 2353,
  [SMALL_STATE(187)] = 2357,
  [SMALL_STATE(188)] = 2361,
  [SMALL_STATE(189)] = 2365,
  [SMALL_STATE(190)] = 2369,
  [SMALL_STATE(191)] = 2373,
  [SMALL_STATE(192)] = 2377,
  [SMALL_STATE(193)] = 2381,
  [SMALL_STATE(194)] = 2385,
  [SMALL_STATE(195)] = 2389,
  [SMALL_STATE(196)] = 2393,
  [SMALL_STATE(197)] = 2397,
  [SMALL_STATE(198)] = 2401,
  [SMALL_STATE(199)] = 2405,
  [SMALL_STATE(200)] = 2409,
  [SMALL_STATE(201)] = 2413,
  [SMALL_STATE(202)] = 2417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_symbols_def, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_symbols_def, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 6, 0, 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 6, 0, 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 7, 0, 8),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 7, 0, 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodes, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nodes, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodes, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nodes, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 22, 0, 11),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 22, 0, 11),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 21, 0, 10),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 21, 0, 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transmitter, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transmitter, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 10, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(56),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0), SHIFT_REPEAT(101),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat5, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat5, 2, 0, 0), SHIFT_REPEAT(97),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_default, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_default, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 11, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat6, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat6, 2, 0, 0), SHIFT_REPEAT(157),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 7, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 4, 0, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 6),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_type_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_type_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_timing, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_extended_value_type_list, 6, 0, 7),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_timing, 7, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1, 0, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [434] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dbc(void) {
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
