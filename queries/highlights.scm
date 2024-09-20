(char_string) @string
(unsigned_integer) @number
(signed_integer) @number
(double) @number
(c_identifier) @type
(keyword) @keyword
(signal_extended_value_type) @number

[
 "INT"
 "HEX"
 "FLOAT"
 "STRING"
 "ENUM"
] @type.builtin

(attribute_name) @property

[
  "VERSION"
  "NS_"
  "NS_DESC_"
  "BA_DEF_"
  "BA_"
  "VAL_"
  "CAT_DEF_"
  "CAT_"
  "CM_"
  "FILTER"
  "BA_DEF_DEF_"
  "EV_DATA_"
  "ENVVAR_DATA_"
  "SGTYPE_"
  "SGTYPE_VAL_"
  "BA_DEF_SGTYPE_"
  "BA_SGTYPE_"
  "SIG_TYPE_REF_"
  "VAL_TABLE_"
  "SIG_GROUP_"
  "SIG_VALTYPE_"
  "SIGTYPE_VALTYPE_"
  "BO_TX_BU_"
  "BA_DEF_REL_"
  "BA_REL_"
  "BA_DEF_DEF_REL_"
  "BU_SG_REL_"
  "BU_EV_REL_"
  "BU_BO_REL_"
  "SG_MUL_VAL_"
  "BS_"
  "BU_"
  "BO_"
  "SG_"
  "EV_"
  "VECTOR__INDEPENDENT_SIG_MSG"
;  "VECTOR__XXX"
  "Vector__XXX"
] @keyword

(comment "CM_" @comment)

(multiplexer_indicator "m" @number)
(multiplexer_indicator "M" @keyword)

[
 ","
 ":"
 "|"
 ";"
 "@"
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
] @punctuation.bracket
