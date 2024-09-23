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
#define STATE_COUNT 223
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 2
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 22
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  anon_sym_LBRACK = 49,
  anon_sym_PIPE2 = 50,
  anon_sym_RBRACK = 51,
  anon_sym_m = 52,
  anon_sym_M = 53,
  anon_sym_M2 = 54,
  sym_byte_order = 55,
  sym_value_type = 56,
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
  sym_value_descriptions_for_signal = 85,
  sym_value_description = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_source_file_repeat2 = 88,
  aux_sym_source_file_repeat3 = 89,
  aux_sym_source_file_repeat4 = 90,
  aux_sym_source_file_repeat5 = 91,
  aux_sym_source_file_repeat6 = 92,
  aux_sym_source_file_repeat7 = 93,
  aux_sym_new_symbols_def_repeat1 = 94,
  aux_sym_nodes_repeat1 = 95,
  aux_sym_message_repeat1 = 96,
  aux_sym_attribute_value_type_repeat1 = 97,
  aux_sym_value_descriptions_for_signal_repeat1 = 98,
  anon_alias_sym_ = 99,
  alias_sym_keyword = 100,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE2] = "|",
  [anon_sym_RBRACK] = "]",
  [anon_sym_m] = "m",
  [anon_sym_M] = "M",
  [anon_sym_M2] = "M",
  [sym_byte_order] = "byte_order",
  [sym_value_type] = "value_type",
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
  [sym_value_descriptions_for_signal] = "value_descriptions_for_signal",
  [sym_value_description] = "value_description",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_source_file_repeat4] = "source_file_repeat4",
  [aux_sym_source_file_repeat5] = "source_file_repeat5",
  [aux_sym_source_file_repeat6] = "source_file_repeat6",
  [aux_sym_source_file_repeat7] = "source_file_repeat7",
  [aux_sym_new_symbols_def_repeat1] = "new_symbols_def_repeat1",
  [aux_sym_nodes_repeat1] = "nodes_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_attribute_value_type_repeat1] = "attribute_value_type_repeat1",
  [aux_sym_value_descriptions_for_signal_repeat1] = "value_descriptions_for_signal_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_M2] = anon_sym_M,
  [sym_byte_order] = sym_byte_order,
  [sym_value_type] = sym_value_type,
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
  [sym_value_descriptions_for_signal] = sym_value_descriptions_for_signal,
  [sym_value_description] = sym_value_description,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_source_file_repeat4] = aux_sym_source_file_repeat4,
  [aux_sym_source_file_repeat5] = aux_sym_source_file_repeat5,
  [aux_sym_source_file_repeat6] = aux_sym_source_file_repeat6,
  [aux_sym_source_file_repeat7] = aux_sym_source_file_repeat7,
  [aux_sym_new_symbols_def_repeat1] = aux_sym_new_symbols_def_repeat1,
  [aux_sym_nodes_repeat1] = aux_sym_nodes_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_attribute_value_type_repeat1] = aux_sym_attribute_value_type_repeat1,
  [aux_sym_value_descriptions_for_signal_repeat1] = aux_sym_value_descriptions_for_signal_repeat1,
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
  [sym_byte_order] = {
    .visible = true,
    .named = true,
  },
  [sym_value_type] = {
    .visible = true,
    .named = true,
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
  [sym_value_descriptions_for_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_value_description] = {
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
  [aux_sym_source_file_repeat7] = {
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
  [aux_sym_value_descriptions_for_signal_repeat1] = {
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
  field_description = 3,
  field_env_var_name = 4,
  field_factor = 5,
  field_id = 6,
  field_maximum = 7,
  field_message_id = 8,
  field_minimum = 9,
  field_multiplexer_indicator = 10,
  field_name = 11,
  field_node_name = 12,
  field_offset = 13,
  field_receiver = 14,
  field_signal_name = 15,
  field_size = 16,
  field_start_bit = 17,
  field_transmitter = 18,
  field_unit = 19,
  field_value = 20,
  field_value_type = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute_name] = "attribute_name",
  [field_byte_order] = "byte_order",
  [field_description] = "description",
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
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 4},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 11},
  [12] = {.index = 29, .length = 12},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute_name, 1},
  [1] =
    {field_message_id, 1},
    {field_signal_name, 2},
  [3] =
    {field_description, 1},
    {field_value, 0},
  [5] =
    {field_attribute_name, 1},
    {field_node_name, 3},
  [7] =
    {field_attribute_name, 1},
    {field_message_id, 3},
  [9] =
    {field_attribute_name, 1},
    {field_env_var_name, 3},
  [11] =
    {field_id, 1},
    {field_name, 2},
    {field_size, 4},
    {field_transmitter, 5},
  [15] =
    {field_attribute_name, 1},
    {field_message_id, 3},
    {field_signal_name, 4},
  [18] =
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
  [29] =
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
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '"', 401,
        '(', 387,
        ')', 388,
        ',', 375,
        '0', 396,
        '1', 396,
        ':', 335,
        ';', 400,
        '@', 386,
        'B', 7,
        'C', 10,
        'E', 112,
        'F', 85,
        'H', 38,
        'I', 114,
        'M', 393,
        'N', 150,
        'S', 71,
        'V', 14,
        '[', 389,
        ']', 391,
        'm', 392,
        '|', 385,
        '+', 398,
        '-', 398,
        '2', 270,
        '3', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 275,
        '\r', 2,
        'B', 8,
        'C', 10,
        'E', 115,
        'F', 84,
        'N', 152,
        'S', 75,
        'V', 13,
        '+', 397,
        '-', 397,
        '0', 395,
        '1', 395,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 275,
        '\r', 2,
        'B', 8,
        'C', 10,
        'E', 115,
        'F', 84,
        'N', 152,
        'S', 75,
        'V', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ':', 335,
        'B', 9,
        'C', 10,
        'E', 115,
        'F', 84,
        'M', 393,
        'N', 152,
        'S', 75,
        'V', 13,
        '|', 390,
        '+', 261,
        '-', 261,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ':', 335,
        'B', 9,
        'C', 10,
        'E', 115,
        'F', 84,
        'N', 152,
        'S', 75,
        'V', 13,
        '|', 390,
        '+', 261,
        '-', 261,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(198);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'O') ADVANCE(241);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(231);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'O') ADVANCE(241);
      if (lookahead == 'U') ADVANCE(231);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'M') ADVANCE(199);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'O') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(219);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(198);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(232);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(172);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(206);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(210);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(216);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(229);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(230);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(405);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(382);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(164);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(155);
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == 'V') ADVANCE(22);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(237);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(202);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(167);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(204);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(207);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(218);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(223);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(228);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(234);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(236);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(247);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(406);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(149);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(173);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(200);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(332);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'V') ADVANCE(249);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == 'V') ADVANCE(200);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == 'U') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(240);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 128:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(214);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(46);
      END_STATE();
    case 133:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 134:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(350);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(242);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(227);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(248);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(402);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(404);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(212);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 174:
      if (lookahead == 'V') ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == 'V') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 176:
      if (lookahead == 'V') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 177:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 178:
      if (lookahead == 'V') ADVANCE(22);
      END_STATE();
    case 179:
      if (lookahead == 'V') ADVANCE(200);
      END_STATE();
    case 180:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 181:
      if (lookahead == 'V') ADVANCE(250);
      END_STATE();
    case 182:
      if (lookahead == 'V') ADVANCE(27);
      END_STATE();
    case 183:
      if (lookahead == 'X') ADVANCE(403);
      END_STATE();
    case 184:
      if (lookahead == 'X') ADVANCE(377);
      END_STATE();
    case 185:
      if (lookahead == 'X') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == 'X') ADVANCE(205);
      END_STATE();
    case 187:
      if (lookahead == 'X') ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(127);
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
      if (lookahead == 'Y') ADVANCE(134);
      END_STATE();
    case 194:
      if (lookahead == 'Y') ADVANCE(135);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 196:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 197:
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 199:
      if (lookahead == '_') ADVANCE(337);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 202:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 203:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 204:
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(339);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(356);
      END_STATE();
    case 210:
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 211:
      if (lookahead == '_') ADVANCE(336);
      END_STATE();
    case 212:
      if (lookahead == '_') ADVANCE(366);
      END_STATE();
    case 213:
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 214:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 215:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 216:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 217:
      if (lookahead == '_') ADVANCE(367);
      END_STATE();
    case 218:
      if (lookahead == '_') ADVANCE(357);
      END_STATE();
    case 219:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 220:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 221:
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 222:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 223:
      if (lookahead == '_') ADVANCE(369);
      END_STATE();
    case 224:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 225:
      if (lookahead == '_') ADVANCE(344);
      END_STATE();
    case 226:
      if (lookahead == '_') ADVANCE(379);
      END_STATE();
    case 227:
      if (lookahead == '_') ADVANCE(333);
      END_STATE();
    case 228:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 229:
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 230:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 231:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 232:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 233:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 234:
      if (lookahead == '_') ADVANCE(371);
      END_STATE();
    case 235:
      if (lookahead == '_') ADVANCE(370);
      END_STATE();
    case 236:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 237:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 238:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 239:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 240:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 242:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 243:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 244:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 245:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 246:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 247:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 248:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 249:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 250:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 251:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 252:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 258:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 264:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '"', 401,
        '(', 387,
        ')', 388,
        ',', 375,
        ':', 335,
        ';', 400,
        'B', 7,
        'C', 10,
        'E', 112,
        'F', 85,
        'H', 38,
        'I', 114,
        'M', 394,
        'N', 150,
        'S', 71,
        'V', 14,
        '[', 389,
        ']', 391,
        'm', 392,
        '|', 390,
        '+', 259,
        '-', 259,
      );
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 265:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '"', 4,
        ':', 335,
        ';', 400,
        'B', 20,
        'C', 111,
        'E', 118,
        'F', 91,
        'H', 38,
        'I', 114,
        'M', 394,
        'N', 151,
        'S', 80,
        'V', 25,
        'm', 392,
        '|', 385,
        '+', 259,
        '-', 259,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '"', 4,
        ':', 335,
        ';', 400,
        'B', 20,
        'C', 111,
        'E', 118,
        'F', 91,
        'H', 38,
        'I', 114,
        'M', 394,
        'N', 151,
        'S', 80,
        'V', 25,
        'm', 392,
        '+', 259,
        '-', 259,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'V') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_char_string);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unsigned_integer);
      if (lookahead == '.') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_signed_integer);
      if (lookahead == '.') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_signed_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'A') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'C') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'D') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'D') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'E') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'F') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'F') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'G') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'I') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'I') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'L') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'L') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'M') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'N') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'O') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'P') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'P') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'R') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'S') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'S') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'T') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'V') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'X') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'Y') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == '_') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_c_identifier);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_c_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_NS_);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_NS_);
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_NS_DESC_);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_CM_);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_CM_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_BA_DEF_);
      if (lookahead == 'D') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_BA_);
      if (lookahead == 'D') ADVANCE(59);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_VAL_);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_VAL_);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_VAL_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_CAT_DEF_);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_CAT_);
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EV_DATA_);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ENVVAR_DATA_);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SGTYPE_);
      if (lookahead == 'V') ADVANCE(24);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SGTYPE_VAL_);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_BA_DEF_SGTYPE_);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BA_SGTYPE_);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SIG_TYPE_REF_);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_VAL_TABLE_);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SIG_GROUP_);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SIG_VALTYPE_);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SIG_VALTYPE_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SIGTYPE_VALTYPE_);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BO_TX_BU_);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BA_DEF_REL_);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BA_REL_);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BA_DEF_DEF_REL_);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BU_SG_REL_);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BU_EV_REL_);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BU_BO_REL_);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_SG_MUL_VAL_);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BS_);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_BU_);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_Vector__XXX);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_Vector__XXX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BO_);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BO_);
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_BO_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_VECTOR__INDEPENDENT_SIG_MSG);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_VECTOR__INDEPENDENT_SIG_MSG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SG_);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_M2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_byte_order);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_byte_order);
      if (lookahead == '.') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_value_type);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_value_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EV_);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_HEX);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_ENUM);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_signal_extended_value_type);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 265},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 265},
  [8] = {.lex_state = 265},
  [9] = {.lex_state = 265},
  [10] = {.lex_state = 265},
  [11] = {.lex_state = 265},
  [12] = {.lex_state = 265},
  [13] = {.lex_state = 265},
  [14] = {.lex_state = 265},
  [15] = {.lex_state = 265},
  [16] = {.lex_state = 265},
  [17] = {.lex_state = 265},
  [18] = {.lex_state = 265},
  [19] = {.lex_state = 265},
  [20] = {.lex_state = 265},
  [21] = {.lex_state = 265},
  [22] = {.lex_state = 265},
  [23] = {.lex_state = 265},
  [24] = {.lex_state = 265},
  [25] = {.lex_state = 265},
  [26] = {.lex_state = 265},
  [27] = {.lex_state = 265},
  [28] = {.lex_state = 265},
  [29] = {.lex_state = 265},
  [30] = {.lex_state = 265},
  [31] = {.lex_state = 265},
  [32] = {.lex_state = 265},
  [33] = {.lex_state = 265},
  [34] = {.lex_state = 265},
  [35] = {.lex_state = 265},
  [36] = {.lex_state = 265},
  [37] = {.lex_state = 265},
  [38] = {.lex_state = 265},
  [39] = {.lex_state = 265},
  [40] = {.lex_state = 265},
  [41] = {.lex_state = 265},
  [42] = {.lex_state = 265},
  [43] = {.lex_state = 267},
  [44] = {.lex_state = 265},
  [45] = {.lex_state = 267},
  [46] = {.lex_state = 265},
  [47] = {.lex_state = 267},
  [48] = {.lex_state = 265},
  [49] = {.lex_state = 265},
  [50] = {.lex_state = 265},
  [51] = {.lex_state = 265},
  [52] = {.lex_state = 265},
  [53] = {.lex_state = 265},
  [54] = {.lex_state = 265},
  [55] = {.lex_state = 265},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 265},
  [60] = {.lex_state = 265},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 265},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 265},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 265},
  [73] = {.lex_state = 265},
  [74] = {.lex_state = 265},
  [75] = {.lex_state = 265},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 265},
  [78] = {.lex_state = 265},
  [79] = {.lex_state = 265},
  [80] = {.lex_state = 265},
  [81] = {.lex_state = 265},
  [82] = {.lex_state = 265},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 265},
  [85] = {.lex_state = 265},
  [86] = {.lex_state = 265},
  [87] = {.lex_state = 265},
  [88] = {.lex_state = 175},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 265},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 175},
  [95] = {.lex_state = 265},
  [96] = {.lex_state = 265},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 265},
  [103] = {.lex_state = 265},
  [104] = {.lex_state = 265},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 175},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 176},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 265},
  [123] = {.lex_state = 265},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 265},
  [129] = {.lex_state = 258},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 267},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 265},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 265},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 265},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 265},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 265},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 258},
  [152] = {.lex_state = 265},
  [153] = {.lex_state = 265},
  [154] = {.lex_state = 258},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 265},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 267},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 258},
  [164] = {.lex_state = 265},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 258},
  [167] = {.lex_state = 258},
  [168] = {.lex_state = 258},
  [169] = {.lex_state = 258},
  [170] = {.lex_state = 265},
  [171] = {.lex_state = 265},
  [172] = {.lex_state = 258},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 265},
  [175] = {.lex_state = 265},
  [176] = {.lex_state = 265},
  [177] = {.lex_state = 265},
  [178] = {.lex_state = 265},
  [179] = {.lex_state = 265},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 265},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 265},
  [186] = {.lex_state = 265},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 265},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 265},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 267},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 267},
  [201] = {.lex_state = 267},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 267},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 267},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 267},
  [211] = {.lex_state = 267},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 267},
  [215] = {.lex_state = 265},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 265},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_M2] = ACTIONS(1),
    [sym_byte_order] = ACTIONS(1),
    [sym_value_type] = ACTIONS(1),
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
    [sym_source_file] = STATE(220),
    [sym_version] = STATE(219),
    [sym_new_symbols_def] = STATE(118),
    [sym_bit_timing] = STATE(119),
    [anon_sym_VERSION] = ACTIONS(3),
    [anon_sym_NS_] = ACTIONS(5),
    [anon_sym_BS_] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_end_of_line,
    ACTIONS(13), 1,
      anon_sym_BS_,
    STATE(4), 1,
      aux_sym_new_symbols_def_repeat1,
    ACTIONS(11), 28,
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
    ACTIONS(15), 1,
      sym_end_of_line,
    ACTIONS(21), 1,
      anon_sym_BS_,
    STATE(3), 1,
      aux_sym_new_symbols_def_repeat1,
    ACTIONS(18), 28,
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
    ACTIONS(9), 1,
      sym_end_of_line,
    ACTIONS(25), 1,
      anon_sym_BS_,
    STATE(3), 1,
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
    ACTIONS(21), 29,
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
  [188] = 15,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    STATE(13), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(38), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [241] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [294] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(23), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(32), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(44), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [347] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(22), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(26), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(40), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(57), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [400] = 15,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    STATE(16), 2,
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
    STATE(38), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [453] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(23), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(32), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(44), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [506] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [559] = 15,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(47), 1,
      anon_sym_BO_,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(25), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(33), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(41), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(67), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(100), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [612] = 13,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(20), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(38), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [658] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [704] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(29), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(39), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(68), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(91), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [750] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(26), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(40), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(57), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [796] = 13,
    ACTIONS(35), 1,
      anon_sym_CM_,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(32), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(44), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [842] = 11,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(42), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [881] = 11,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(40), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(57), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [920] = 11,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(39), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(68), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(91), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [959] = 11,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(28), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(38), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [998] = 11,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(58), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(98), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1037] = 11,
    ACTIONS(37), 1,
      anon_sym_BA_DEF_,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(44), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1076] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(68), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(91), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1108] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(40), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(57), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1140] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(42), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1172] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(58), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(98), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1204] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(46), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(61), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(101), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1236] = 2,
    ACTIONS(65), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
    ACTIONS(63), 10,
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
  [1254] = 9,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(38), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1286] = 9,
    ACTIONS(39), 1,
      anon_sym_BA_,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(43), 1,
      anon_sym_BA_DEF_DEF_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(44), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1318] = 4,
    ACTIONS(71), 1,
      anon_sym_SG_,
    ACTIONS(69), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(35), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1338] = 4,
    ACTIONS(71), 1,
      anon_sym_SG_,
    ACTIONS(75), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(36), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1358] = 4,
    ACTIONS(81), 1,
      anon_sym_SG_,
    ACTIONS(79), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(36), 2,
      sym_signal,
      aux_sym_message_repeat1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1378] = 4,
    ACTIONS(88), 1,
      anon_sym_BO_,
    ACTIONS(86), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(37), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1397] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(63), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1422] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(58), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(98), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1447] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(68), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(91), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1472] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(65), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1497] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(57), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1522] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_c_identifier,
    STATE(45), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(97), 7,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1541] = 7,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(66), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1566] = 4,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_c_identifier,
    STATE(47), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(103), 7,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1585] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(91), 1,
      anon_sym_BA_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(93), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1610] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_c_identifier,
    STATE(47), 1,
      aux_sym_nodes_repeat1,
    ACTIONS(112), 7,
      anon_sym_CM_,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
  [1629] = 7,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_BA_,
    STATE(61), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    STATE(101), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1654] = 7,
    ACTIONS(114), 1,
      sym_char_string,
    ACTIONS(118), 1,
      anon_sym_BU_,
    ACTIONS(120), 1,
      anon_sym_BO_,
    ACTIONS(122), 1,
      anon_sym_SG_,
    ACTIONS(124), 1,
      anon_sym_EV_,
    STATE(150), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [1678] = 2,
    ACTIONS(128), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1692] = 2,
    ACTIONS(132), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1706] = 2,
    ACTIONS(136), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1720] = 2,
    ACTIONS(140), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
      anon_sym_BO_,
      anon_sym_SG_,
  [1734] = 4,
    ACTIONS(144), 1,
      anon_sym_CM_,
    ACTIONS(147), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1752] = 4,
    ACTIONS(151), 1,
      anon_sym_BA_DEF_,
    ACTIONS(154), 1,
      anon_sym_BA_,
    STATE(55), 2,
      sym_attribute_definition,
      aux_sym_source_file_repeat3,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1769] = 4,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_attribute_name,
    STATE(113), 1,
      sym_object_type,
    ACTIONS(156), 4,
      anon_sym_BU_,
      anon_sym_BO_,
      anon_sym_SG_,
      anon_sym_EV_,
  [1785] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(91), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1803] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(101), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1821] = 2,
    ACTIONS(162), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1833] = 2,
    ACTIONS(166), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1845] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(93), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1863] = 4,
    ACTIONS(170), 1,
      anon_sym_BA_,
    ACTIONS(172), 1,
      anon_sym_BA_DEF_DEF_,
    STATE(62), 2,
      sym_attribute_default,
      aux_sym_source_file_repeat4,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [1879] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(89), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1897] = 2,
    ACTIONS(177), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_CM_,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [1909] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(92), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1927] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(99), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1945] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(105), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1963] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(98), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1981] = 5,
    ACTIONS(41), 1,
      anon_sym_VAL_,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
    STATE(83), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [1999] = 5,
    ACTIONS(183), 1,
      anon_sym_FLOAT,
    ACTIONS(185), 1,
      anon_sym_STRING,
    ACTIONS(187), 1,
      anon_sym_ENUM,
    STATE(156), 1,
      sym_attribute_value_type,
    ACTIONS(181), 2,
      anon_sym_INT,
      anon_sym_HEX,
  [2016] = 5,
    ACTIONS(183), 1,
      anon_sym_FLOAT,
    ACTIONS(185), 1,
      anon_sym_STRING,
    ACTIONS(187), 1,
      anon_sym_ENUM,
    STATE(139), 1,
      sym_attribute_value_type,
    ACTIONS(181), 2,
      anon_sym_INT,
      anon_sym_HEX,
  [2033] = 2,
    ACTIONS(191), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [2044] = 2,
    ACTIONS(195), 2,
      anon_sym_BA_DEF_,
      anon_sym_BA_,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [2055] = 3,
    ACTIONS(199), 1,
      anon_sym_BA_,
    STATE(74), 2,
      sym_attribute_value_for_object,
      aux_sym_source_file_repeat5,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2068] = 3,
    ACTIONS(114), 1,
      sym_char_string,
    STATE(149), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [2080] = 3,
    ACTIONS(204), 1,
      anon_sym_VAL_,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_SIG_VALTYPE_,
    STATE(76), 2,
      sym_value_descriptions_for_signal,
      aux_sym_source_file_repeat6,
  [2092] = 4,
    ACTIONS(207), 1,
      sym_char_string,
    ACTIONS(211), 1,
      anon_sym_BO_,
    ACTIONS(213), 1,
      anon_sym_SG_,
    ACTIONS(209), 2,
      anon_sym_BU_,
      anon_sym_EV_,
  [2106] = 2,
    ACTIONS(217), 1,
      anon_sym_BA_,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_BA_DEF_DEF_,
      anon_sym_SIG_VALTYPE_,
  [2116] = 3,
    ACTIONS(114), 1,
      sym_char_string,
    STATE(159), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [2128] = 3,
    ACTIONS(114), 1,
      sym_char_string,
    STATE(140), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [2140] = 3,
    ACTIONS(114), 1,
      sym_char_string,
    STATE(141), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [2152] = 3,
    ACTIONS(114), 1,
      sym_char_string,
    STATE(143), 1,
      sym_attribute_value,
    ACTIONS(116), 3,
      sym_unsigned_integer,
      sym_signed_integer,
      sym_double,
  [2164] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2175] = 3,
    ACTIONS(221), 1,
      sym_unsigned_integer,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    STATE(84), 2,
      sym_value_description,
      aux_sym_value_descriptions_for_signal_repeat1,
  [2186] = 1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2193] = 1,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2200] = 1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2207] = 3,
    STATE(50), 1,
      sym_receiver,
    STATE(51), 1,
      sym_transmitter,
    ACTIONS(232), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [2218] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2229] = 4,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(236), 1,
      anon_sym_m,
    ACTIONS(238), 1,
      anon_sym_M2,
    STATE(181), 1,
      sym_multiplexer_indicator,
  [2242] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2253] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2264] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2275] = 3,
    STATE(51), 1,
      sym_transmitter,
    STATE(53), 1,
      sym_receiver,
    ACTIONS(232), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [2286] = 4,
    ACTIONS(5), 1,
      anon_sym_NS_,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(116), 1,
      sym_bit_timing,
    STATE(117), 1,
      sym_new_symbols_def,
  [2299] = 3,
    ACTIONS(240), 1,
      sym_unsigned_integer,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    STATE(102), 2,
      sym_value_description,
      aux_sym_value_descriptions_for_signal_repeat1,
  [2310] = 3,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2321] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2332] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2343] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2354] = 3,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2365] = 3,
    ACTIONS(240), 1,
      sym_unsigned_integer,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(84), 2,
      sym_value_description,
      aux_sym_value_descriptions_for_signal_repeat1,
  [2376] = 1,
    ACTIONS(251), 4,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2383] = 1,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      anon_sym_BA_,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2390] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_SIG_VALTYPE_,
    STATE(97), 2,
      sym_signal_extended_value_type_list,
      aux_sym_source_file_repeat7,
  [2401] = 1,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2407] = 1,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_VAL_,
      anon_sym_SIG_VALTYPE_,
  [2413] = 2,
    STATE(34), 1,
      sym_transmitter,
    ACTIONS(232), 2,
      sym_c_identifier,
      anon_sym_Vector__XXX,
  [2421] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_attribute_value_type_repeat1,
  [2431] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_attribute_value_type_repeat1,
  [2441] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_attribute_value_type_repeat1,
  [2451] = 2,
    ACTIONS(270), 1,
      anon_sym_BU_,
    STATE(12), 1,
      sym_nodes,
  [2458] = 2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_attribute_name,
  [2465] = 1,
    ACTIONS(272), 2,
      sym_c_identifier,
      anon_sym_VECTOR__INDEPENDENT_SIG_MSG,
  [2470] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2475] = 2,
    ACTIONS(270), 1,
      anon_sym_BU_,
    STATE(7), 1,
      sym_nodes,
  [2482] = 2,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(120), 1,
      sym_bit_timing,
  [2489] = 2,
    ACTIONS(7), 1,
      anon_sym_BS_,
    STATE(112), 1,
      sym_bit_timing,
  [2496] = 2,
    ACTIONS(270), 1,
      anon_sym_BU_,
    STATE(14), 1,
      sym_nodes,
  [2503] = 2,
    ACTIONS(270), 1,
      anon_sym_BU_,
    STATE(8), 1,
      sym_nodes,
  [2510] = 2,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      anon_sym_M,
  [2517] = 2,
    ACTIONS(278), 1,
      sym_unsigned_integer,
    ACTIONS(280), 1,
      anon_sym_BU_,
  [2524] = 1,
    ACTIONS(282), 2,
      sym_unsigned_integer,
      anon_sym_SEMI,
  [2529] = 1,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_SIG_VALTYPE_,
  [2534] = 2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_attribute_name,
  [2541] = 2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_attribute_name,
  [2548] = 1,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
  [2552] = 1,
    ACTIONS(288), 1,
      sym_char_string,
  [2556] = 1,
    ACTIONS(290), 1,
      sym_c_identifier,
  [2560] = 1,
    ACTIONS(292), 1,
      sym_signed_integer,
  [2564] = 1,
    ACTIONS(292), 1,
      sym_double,
  [2568] = 1,
    ACTIONS(294), 1,
      sym_signal_extended_value_type,
  [2572] = 1,
    ACTIONS(296), 1,
      sym_unsigned_integer,
  [2576] = 1,
    ACTIONS(298), 1,
      anon_sym_BU_,
  [2580] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [2584] = 1,
    ACTIONS(302), 1,
      sym_char_string,
  [2588] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [2592] = 1,
    ACTIONS(304), 1,
      sym_char_string,
  [2596] = 1,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [2600] = 1,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [2604] = 1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [2608] = 1,
    ACTIONS(312), 1,
      sym_char_string,
  [2612] = 1,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [2616] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [2620] = 1,
    ACTIONS(318), 1,
      sym_unsigned_integer,
  [2624] = 1,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [2628] = 1,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [2632] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [2636] = 1,
    ACTIONS(326), 1,
      anon_sym_SEMI,
  [2640] = 1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [2644] = 1,
    ACTIONS(330), 1,
      sym_c_identifier,
  [2648] = 1,
    ACTIONS(332), 1,
      sym_unsigned_integer,
  [2652] = 1,
    ACTIONS(334), 1,
      sym_unsigned_integer,
  [2656] = 1,
    ACTIONS(336), 1,
      sym_c_identifier,
  [2660] = 1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
  [2664] = 1,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [2668] = 1,
    ACTIONS(342), 1,
      sym_char_string,
  [2672] = 1,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [2676] = 1,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [2680] = 1,
    ACTIONS(348), 1,
      sym_double,
  [2684] = 1,
    ACTIONS(350), 1,
      sym_signed_integer,
  [2688] = 1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [2692] = 1,
    ACTIONS(354), 1,
      sym_c_identifier,
  [2696] = 1,
    ACTIONS(356), 1,
      sym_char_string,
  [2700] = 1,
    ACTIONS(358), 1,
      anon_sym_COMMA,
  [2704] = 1,
    ACTIONS(360), 1,
      sym_c_identifier,
  [2708] = 1,
    ACTIONS(362), 1,
      sym_c_identifier,
  [2712] = 1,
    ACTIONS(364), 1,
      sym_c_identifier,
  [2716] = 1,
    ACTIONS(366), 1,
      sym_c_identifier,
  [2720] = 1,
    ACTIONS(368), 1,
      sym_unsigned_integer,
  [2724] = 1,
    ACTIONS(370), 1,
      sym_unsigned_integer,
  [2728] = 1,
    ACTIONS(370), 1,
      sym_c_identifier,
  [2732] = 1,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [2736] = 1,
    ACTIONS(374), 1,
      sym_unsigned_integer,
  [2740] = 1,
    ACTIONS(376), 1,
      sym_unsigned_integer,
  [2744] = 1,
    ACTIONS(378), 1,
      sym_unsigned_integer,
  [2748] = 1,
    ACTIONS(380), 1,
      sym_unsigned_integer,
  [2752] = 1,
    ACTIONS(382), 1,
      sym_unsigned_integer,
  [2756] = 1,
    ACTIONS(384), 1,
      sym_unsigned_integer,
  [2760] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [2764] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [2768] = 1,
    ACTIONS(390), 1,
      anon_sym_COLON,
  [2772] = 1,
    ACTIONS(392), 1,
      anon_sym_PIPE,
  [2776] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [2780] = 1,
    ACTIONS(396), 1,
      sym_unsigned_integer,
  [2784] = 1,
    ACTIONS(398), 1,
      sym_unsigned_integer,
  [2788] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [2792] = 1,
    ACTIONS(402), 1,
      anon_sym_PIPE,
  [2796] = 1,
    ACTIONS(404), 1,
      anon_sym_AT,
  [2800] = 1,
    ACTIONS(406), 1,
      sym_unsigned_integer,
  [2804] = 1,
    ACTIONS(408), 1,
      sym_byte_order,
  [2808] = 1,
    ACTIONS(410), 1,
      anon_sym_AT,
  [2812] = 1,
    ACTIONS(412), 1,
      sym_value_type,
  [2816] = 1,
    ACTIONS(414), 1,
      sym_byte_order,
  [2820] = 1,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
  [2824] = 1,
    ACTIONS(418), 1,
      sym_value_type,
  [2828] = 1,
    ACTIONS(420), 1,
      sym_double,
  [2832] = 1,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
  [2836] = 1,
    ACTIONS(424), 1,
      anon_sym_COMMA,
  [2840] = 1,
    ACTIONS(426), 1,
      sym_double,
  [2844] = 1,
    ACTIONS(428), 1,
      sym_double,
  [2848] = 1,
    ACTIONS(430), 1,
      anon_sym_COMMA,
  [2852] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [2856] = 1,
    ACTIONS(434), 1,
      sym_double,
  [2860] = 1,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
  [2864] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2868] = 1,
    ACTIONS(440), 1,
      sym_double,
  [2872] = 1,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
  [2876] = 1,
    ACTIONS(444), 1,
      anon_sym_PIPE2,
  [2880] = 1,
    ACTIONS(446), 1,
      sym_double,
  [2884] = 1,
    ACTIONS(448), 1,
      sym_double,
  [2888] = 1,
    ACTIONS(450), 1,
      anon_sym_PIPE2,
  [2892] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
  [2896] = 1,
    ACTIONS(454), 1,
      sym_double,
  [2900] = 1,
    ACTIONS(456), 1,
      sym_char_string,
  [2904] = 1,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
  [2908] = 1,
    ACTIONS(460), 1,
      sym_end_of_line,
  [2912] = 1,
    ACTIONS(462), 1,
      sym_char_string,
  [2916] = 1,
    ACTIONS(464), 1,
      sym_end_of_line,
  [2920] = 1,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
  [2924] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [2928] = 1,
    ACTIONS(470), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 453,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 612,
  [SMALL_STATE(16)] = 658,
  [SMALL_STATE(17)] = 704,
  [SMALL_STATE(18)] = 750,
  [SMALL_STATE(19)] = 796,
  [SMALL_STATE(20)] = 842,
  [SMALL_STATE(21)] = 881,
  [SMALL_STATE(22)] = 920,
  [SMALL_STATE(23)] = 959,
  [SMALL_STATE(24)] = 998,
  [SMALL_STATE(25)] = 1037,
  [SMALL_STATE(26)] = 1076,
  [SMALL_STATE(27)] = 1108,
  [SMALL_STATE(28)] = 1140,
  [SMALL_STATE(29)] = 1172,
  [SMALL_STATE(30)] = 1204,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1254,
  [SMALL_STATE(33)] = 1286,
  [SMALL_STATE(34)] = 1318,
  [SMALL_STATE(35)] = 1338,
  [SMALL_STATE(36)] = 1358,
  [SMALL_STATE(37)] = 1378,
  [SMALL_STATE(38)] = 1397,
  [SMALL_STATE(39)] = 1422,
  [SMALL_STATE(40)] = 1447,
  [SMALL_STATE(41)] = 1472,
  [SMALL_STATE(42)] = 1497,
  [SMALL_STATE(43)] = 1522,
  [SMALL_STATE(44)] = 1541,
  [SMALL_STATE(45)] = 1566,
  [SMALL_STATE(46)] = 1585,
  [SMALL_STATE(47)] = 1610,
  [SMALL_STATE(48)] = 1629,
  [SMALL_STATE(49)] = 1654,
  [SMALL_STATE(50)] = 1678,
  [SMALL_STATE(51)] = 1692,
  [SMALL_STATE(52)] = 1706,
  [SMALL_STATE(53)] = 1720,
  [SMALL_STATE(54)] = 1734,
  [SMALL_STATE(55)] = 1752,
  [SMALL_STATE(56)] = 1769,
  [SMALL_STATE(57)] = 1785,
  [SMALL_STATE(58)] = 1803,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1833,
  [SMALL_STATE(61)] = 1845,
  [SMALL_STATE(62)] = 1863,
  [SMALL_STATE(63)] = 1879,
  [SMALL_STATE(64)] = 1897,
  [SMALL_STATE(65)] = 1909,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1945,
  [SMALL_STATE(68)] = 1963,
  [SMALL_STATE(69)] = 1981,
  [SMALL_STATE(70)] = 1999,
  [SMALL_STATE(71)] = 2016,
  [SMALL_STATE(72)] = 2033,
  [SMALL_STATE(73)] = 2044,
  [SMALL_STATE(74)] = 2055,
  [SMALL_STATE(75)] = 2068,
  [SMALL_STATE(76)] = 2080,
  [SMALL_STATE(77)] = 2092,
  [SMALL_STATE(78)] = 2106,
  [SMALL_STATE(79)] = 2116,
  [SMALL_STATE(80)] = 2128,
  [SMALL_STATE(81)] = 2140,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2164,
  [SMALL_STATE(84)] = 2175,
  [SMALL_STATE(85)] = 2186,
  [SMALL_STATE(86)] = 2193,
  [SMALL_STATE(87)] = 2200,
  [SMALL_STATE(88)] = 2207,
  [SMALL_STATE(89)] = 2218,
  [SMALL_STATE(90)] = 2229,
  [SMALL_STATE(91)] = 2242,
  [SMALL_STATE(92)] = 2253,
  [SMALL_STATE(93)] = 2264,
  [SMALL_STATE(94)] = 2275,
  [SMALL_STATE(95)] = 2286,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2310,
  [SMALL_STATE(98)] = 2321,
  [SMALL_STATE(99)] = 2332,
  [SMALL_STATE(100)] = 2343,
  [SMALL_STATE(101)] = 2354,
  [SMALL_STATE(102)] = 2365,
  [SMALL_STATE(103)] = 2376,
  [SMALL_STATE(104)] = 2383,
  [SMALL_STATE(105)] = 2390,
  [SMALL_STATE(106)] = 2401,
  [SMALL_STATE(107)] = 2407,
  [SMALL_STATE(108)] = 2413,
  [SMALL_STATE(109)] = 2421,
  [SMALL_STATE(110)] = 2431,
  [SMALL_STATE(111)] = 2441,
  [SMALL_STATE(112)] = 2451,
  [SMALL_STATE(113)] = 2458,
  [SMALL_STATE(114)] = 2465,
  [SMALL_STATE(115)] = 2470,
  [SMALL_STATE(116)] = 2475,
  [SMALL_STATE(117)] = 2482,
  [SMALL_STATE(118)] = 2489,
  [SMALL_STATE(119)] = 2496,
  [SMALL_STATE(120)] = 2503,
  [SMALL_STATE(121)] = 2510,
  [SMALL_STATE(122)] = 2517,
  [SMALL_STATE(123)] = 2524,
  [SMALL_STATE(124)] = 2529,
  [SMALL_STATE(125)] = 2534,
  [SMALL_STATE(126)] = 2541,
  [SMALL_STATE(127)] = 2548,
  [SMALL_STATE(128)] = 2552,
  [SMALL_STATE(129)] = 2556,
  [SMALL_STATE(130)] = 2560,
  [SMALL_STATE(131)] = 2564,
  [SMALL_STATE(132)] = 2568,
  [SMALL_STATE(133)] = 2572,
  [SMALL_STATE(134)] = 2576,
  [SMALL_STATE(135)] = 2580,
  [SMALL_STATE(136)] = 2584,
  [SMALL_STATE(137)] = 2588,
  [SMALL_STATE(138)] = 2592,
  [SMALL_STATE(139)] = 2596,
  [SMALL_STATE(140)] = 2600,
  [SMALL_STATE(141)] = 2604,
  [SMALL_STATE(142)] = 2608,
  [SMALL_STATE(143)] = 2612,
  [SMALL_STATE(144)] = 2616,
  [SMALL_STATE(145)] = 2620,
  [SMALL_STATE(146)] = 2624,
  [SMALL_STATE(147)] = 2628,
  [SMALL_STATE(148)] = 2632,
  [SMALL_STATE(149)] = 2636,
  [SMALL_STATE(150)] = 2640,
  [SMALL_STATE(151)] = 2644,
  [SMALL_STATE(152)] = 2648,
  [SMALL_STATE(153)] = 2652,
  [SMALL_STATE(154)] = 2656,
  [SMALL_STATE(155)] = 2660,
  [SMALL_STATE(156)] = 2664,
  [SMALL_STATE(157)] = 2668,
  [SMALL_STATE(158)] = 2672,
  [SMALL_STATE(159)] = 2676,
  [SMALL_STATE(160)] = 2680,
  [SMALL_STATE(161)] = 2684,
  [SMALL_STATE(162)] = 2688,
  [SMALL_STATE(163)] = 2692,
  [SMALL_STATE(164)] = 2696,
  [SMALL_STATE(165)] = 2700,
  [SMALL_STATE(166)] = 2704,
  [SMALL_STATE(167)] = 2708,
  [SMALL_STATE(168)] = 2712,
  [SMALL_STATE(169)] = 2716,
  [SMALL_STATE(170)] = 2720,
  [SMALL_STATE(171)] = 2724,
  [SMALL_STATE(172)] = 2728,
  [SMALL_STATE(173)] = 2732,
  [SMALL_STATE(174)] = 2736,
  [SMALL_STATE(175)] = 2740,
  [SMALL_STATE(176)] = 2744,
  [SMALL_STATE(177)] = 2748,
  [SMALL_STATE(178)] = 2752,
  [SMALL_STATE(179)] = 2756,
  [SMALL_STATE(180)] = 2760,
  [SMALL_STATE(181)] = 2764,
  [SMALL_STATE(182)] = 2768,
  [SMALL_STATE(183)] = 2772,
  [SMALL_STATE(184)] = 2776,
  [SMALL_STATE(185)] = 2780,
  [SMALL_STATE(186)] = 2784,
  [SMALL_STATE(187)] = 2788,
  [SMALL_STATE(188)] = 2792,
  [SMALL_STATE(189)] = 2796,
  [SMALL_STATE(190)] = 2800,
  [SMALL_STATE(191)] = 2804,
  [SMALL_STATE(192)] = 2808,
  [SMALL_STATE(193)] = 2812,
  [SMALL_STATE(194)] = 2816,
  [SMALL_STATE(195)] = 2820,
  [SMALL_STATE(196)] = 2824,
  [SMALL_STATE(197)] = 2828,
  [SMALL_STATE(198)] = 2832,
  [SMALL_STATE(199)] = 2836,
  [SMALL_STATE(200)] = 2840,
  [SMALL_STATE(201)] = 2844,
  [SMALL_STATE(202)] = 2848,
  [SMALL_STATE(203)] = 2852,
  [SMALL_STATE(204)] = 2856,
  [SMALL_STATE(205)] = 2860,
  [SMALL_STATE(206)] = 2864,
  [SMALL_STATE(207)] = 2868,
  [SMALL_STATE(208)] = 2872,
  [SMALL_STATE(209)] = 2876,
  [SMALL_STATE(210)] = 2880,
  [SMALL_STATE(211)] = 2884,
  [SMALL_STATE(212)] = 2888,
  [SMALL_STATE(213)] = 2892,
  [SMALL_STATE(214)] = 2896,
  [SMALL_STATE(215)] = 2900,
  [SMALL_STATE(216)] = 2904,
  [SMALL_STATE(217)] = 2908,
  [SMALL_STATE(218)] = 2912,
  [SMALL_STATE(219)] = 2916,
  [SMALL_STATE(220)] = 2920,
  [SMALL_STATE(221)] = 2924,
  [SMALL_STATE(222)] = 2928,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_symbols_def, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_symbols_def, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_new_symbols_def_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 3, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 3, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 6, 0, 9),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 6, 0, 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 7, 0, 9),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 7, 0, 9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodes, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nodes, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodes, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nodes, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 10, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nodes_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 21, 0, 11),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 21, 0, 11),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transmitter, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transmitter, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 22, 0, 12),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 22, 0, 12),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(56),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0), SHIFT_REPEAT(125),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 11, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_definition, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_definition, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat5, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat5, 2, 0, 0), SHIFT_REPEAT(126),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat6, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat6, 2, 0, 0), SHIFT_REPEAT(177),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_default, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_default, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 12, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_descriptions_for_signal_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_descriptions_for_signal_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 8),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 6, 0, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat7, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat7, 2, 0, 0), SHIFT_REPEAT(176),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 7, 0, 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_for_object, 4, 0, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_descriptions_for_signal, 4, 0, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_descriptions_for_signal, 5, 0, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 3, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_type_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_type_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_timing, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_description, 2, 0, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_extended_value_type_list, 6, 0, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1, 0, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_timing, 7, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value_type, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplexer_indicator, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [466] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
