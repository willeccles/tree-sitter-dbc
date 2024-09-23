/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'dbc',

  rules: {
    source_file: $ => seq(
      optional(seq($.version, $.end_of_line)),
      optional($.new_symbols_def),
      $.bit_timing,
      $.nodes,
      repeat($.message),
      repeat($.comment),
      repeat($.attribute_definition),
      repeat($.attribute_default),
      repeat($.attribute_value_for_object),
      repeat($.value_descriptions_for_signal),
      repeat($.signal_extended_value_type_list)
                          /*
                          * attribute_definitions
sigtype_attr_list
attribute_defaults
attribute_values
value_descriptions
category_definitions (*obsolete*)
categories (*obsolete*)
filter (*obsolete*)
signal_type_refs
signal_groups
signal_extended_value_type_list
extended_multiplexing
                          */
    ),

    // space: $ => /[ \t]+/,

    char_string: $ => /"[^"\\]*"/,

    unsigned_integer: $ => /[0-9]+/,
    signed_integer: $ => /[+-]?[0-9]+/,

    double: $ => /[+-]?[0-9]+(\.[0-9]+)?/,

    end_of_line: $ => /\r?\n/,

    c_identifier: $ => /[A-Za-z_][A-Za-z0-9_]+/,

    version: $ => seq('VERSION', $.char_string),

    new_symbols_def: $ => seq(
      'NS_',
      ':',
      prec.right(repeat(
        seq(
          optional($.end_of_line),
          choice('NS_DESC_', 'CM_', 'BA_DEF_', 'BA_', 'VAL_',
            'CAT_DEF_', 'CAT_', 'FILTER', 'BA_DEF_DEF_', 'EV_DATA_',
            'ENVVAR_DATA_', 'SGTYPE_', 'SGTYPE_VAL_', 'BA_DEF_SGTYPE_',
            'BA_SGTYPE_', 'SIG_TYPE_REF_', 'VAL_TABLE_', 'SIG_GROUP_',
            'SIG_VALTYPE_', 'SIGTYPE_VALTYPE_', 'BO_TX_BU_',
            'BA_DEF_REL_', 'BA_REL_', 'BA_DEF_DEF_REL_', 'BU_SG_REL_',
            'BU_EV_REL_', 'BU_BO_REL_', 'SG_MUL_VAL_'
          )
        )
      ))
    ),

    bit_timing: $ => seq(
      'BS_',
      ':',
      optional(
        seq(
          $.unsigned_integer,
          ':',
          $.unsigned_integer, ',', $.unsigned_integer
        )
      )
    ),

    nodes: $ => seq(
      'BU_', ':', repeat($.c_identifier)
    ),

    transmitter: $ => choice('Vector__XXX', $.c_identifier),
    receiver: $ => $.transmitter,

    message: $ => seq(
      'BO_',
      field('id', $.unsigned_integer),
      field('name', choice('VECTOR__INDEPENDENT_SIG_MSG', $.c_identifier)),
      ':',
      field('size', $.unsigned_integer),
      field('transmitter', $.transmitter),
      repeat($.signal)
    ),

    signal: $ => seq(
      'SG_',
      field('name', $.c_identifier),
      optional(field('multiplexer_indicator', $.multiplexer_indicator)),
      ':',
      field('start_bit', $.unsigned_integer),
      token.immediate('|'),
      field('size', $.unsigned_integer),
      token.immediate('@'),
      field('byte_order', $.byte_order),
      field('value_type', $.value_type),
      '(', field('factor', $.double), ',', field('offset', $.double), ')',
      '[', field('minimum', $.double), '|', field('maximum', $.double), ']',
      field('unit', $.char_string),
      field('receiver', $.receiver)
    ),

    multiplexer_indicator: $ => choice(
      seq('m', $.unsigned_integer, optional(token.immediate('M'))),
      'M'
    ),

    byte_order: $ => token.immediate(/[01]/),
    value_type: $ => token.immediate(/[+-]/),

    comment: $ => seq('CM_', choice(
      $.char_string,
      seq('BU_', $.c_identifier, $.char_string),
      seq('BO_', $.unsigned_integer, $.char_string),
      seq('SG_', $.unsigned_integer, $.c_identifier, $.char_string),
      seq('EV_', $.c_identifier, $.char_string)
    ), ';'),

    attribute_definition: $ => seq(
      'BA_DEF_',
      optional($.object_type),
      $.attribute_name,
      $.attribute_value_type,
      ';'
    ),

    object_type: $ => alias(choice('BU_', 'BO_', 'SG_', 'EV_'), $.keyword),

    attribute_name: $ => seq(
      '"', alias($.c_identifier, ''), '"'
    ),

    attribute_value_type: $ => choice(
      seq('INT', $.signed_integer, $.signed_integer),
      seq('HEX', $.signed_integer, $.signed_integer),
      seq('FLOAT', $.double, $.double),
      'STRING',
      seq('ENUM', $.char_string, repeat(seq(',', $.char_string)))
    ),

    attribute_default: $ => seq(
      'BA_DEF_DEF_',
      $.attribute_name,
      $.attribute_value,
      ';'
    ),

    attribute_value: $ => choice(
      $.unsigned_integer,
      $.signed_integer,
      $.double,
      $.char_string
    ),

    attribute_value_for_object: $ => seq(
      'BA_',
      field('attribute_name', $.attribute_name),
      choice(
        $.attribute_value,
        seq('BU_',
            field('node_name', $.c_identifier),
            $.attribute_value
        ),
        seq('BO_',
            field('message_id', $.unsigned_integer),
            $.attribute_value
        ),
        seq('SG_',
            field('message_id', $.unsigned_integer),
            field('signal_name', $.c_identifier),
            $.attribute_value
        ),
        seq('EV_',
            field('env_var_name', $.c_identifier),
            $.attribute_value
        )
      ),
      ';'
    ),

    signal_extended_value_type_list: $ => seq(
      'SIG_VALTYPE_',
      field('message_id', $.unsigned_integer),
      field('signal_name', $.c_identifier),
      ':',
      $.signal_extended_value_type,
      ';'
    ),

    signal_extended_value_type: $ => /[1-3]/,

    value_descriptions_for_signal: $ => seq(
      'VAL_',
      field('message_id', $.unsigned_integer),
      field('signal_name', $.c_identifier),
      repeat($.value_description),
      ';'
    ),

    value_description: $ => seq(
      field('value', $.unsigned_integer),
      field('description', $.char_string)
    )
  }
});
