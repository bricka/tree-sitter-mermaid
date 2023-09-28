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
#define STATE_COUNT 930
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 356
#define ALIAS_COUNT 22
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  anon_sym_COLON = 2,
  anon_sym_RBRACE_PERCENT_PERCENT = 3,
  aux_sym_diagram_sequence_token1 = 4,
  aux_sym__sequence_participant_type_token1 = 5,
  aux_sym__sequence_participant_type_token2 = 6,
  aux_sym_sequence_stmt_participant_token1 = 7,
  aux_sym_sequence_stmt_actor_token1 = 8,
  aux_sym_sequence_stmt_autonumber_token1 = 9,
  aux_sym_sequence_stmt_activate_token1 = 10,
  aux_sym_sequence_stmt_deactivate_token1 = 11,
  aux_sym_sequence_stmt_note_token1 = 12,
  aux_sym_sequence_stmt_note_token2 = 13,
  anon_sym_COMMA = 14,
  aux_sym_sequence_stmt_links_token1 = 15,
  aux_sym_sequence_stmt_link_token1 = 16,
  aux_sym_sequence_stmt_properties_token1 = 17,
  aux_sym_sequence_stmt_details_token1 = 18,
  aux_sym_sequence_stmt_title_token1 = 19,
  aux_sym_sequence_stmt_loop_token1 = 20,
  aux_sym_sequence_stmt_loop_token2 = 21,
  aux_sym_sequence_stmt_rect_token1 = 22,
  aux_sym_sequence_stmt_opt_token1 = 23,
  aux_sym_sequence_stmt_alt_token1 = 24,
  aux_sym_sequence_stmt_alt_token2 = 25,
  aux_sym_sequence_stmt_par_token1 = 26,
  aux_sym_sequence_stmt_par_token2 = 27,
  aux_sym_diagram_class_token1 = 28,
  aux_sym_diagram_class_token2 = 29,
  anon_sym_TILDE = 30,
  aux_sym_class_generics_token1 = 31,
  anon_sym_class = 32,
  anon_sym_COLON_COLON_COLON = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_POUND = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_STAR = 41,
  anon_sym_DOLLAR = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  aux_sym_diagram_state_token1 = 45,
  aux_sym_diagram_state_token2 = 46,
  aux_sym_state_stmt_simple_token1 = 47,
  aux_sym_diagram_gantt_token1 = 48,
  aux_sym_gantt_stmt_dateformat_token1 = 49,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 50,
  aux_sym_gantt_stmt_topaxis_token1 = 51,
  aux_sym_gantt_stmt_axisformat_token1 = 52,
  aux_sym_gantt_stmt_includes_token1 = 53,
  aux_sym_gantt_stmt_excludes_token1 = 54,
  aux_sym_gantt_stmt_todaymarker_token1 = 55,
  aux_sym_gantt_stmt_section_token1 = 56,
  aux_sym_diagram_pie_token1 = 57,
  aux_sym_diagram_flow_token1 = 58,
  anon_sym_SEMI = 59,
  aux_sym_flow_stmt_direction_token1 = 60,
  anon_sym_AMP = 61,
  anon_sym_PIPE = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_LPAREN_LPAREN = 65,
  anon_sym_RPAREN_RPAREN = 66,
  anon_sym_LPAREN_DASH = 67,
  anon_sym_DASH_RPAREN = 68,
  anon_sym_LPAREN_LBRACK = 69,
  anon_sym_RBRACK_RPAREN = 70,
  anon_sym_LBRACK_LBRACK = 71,
  anon_sym_RBRACK_RBRACK = 72,
  anon_sym_LBRACK_PIPE = 73,
  anon_sym_PIPE_RBRACK = 74,
  anon_sym_LBRACK_LPAREN = 75,
  anon_sym_RPAREN_RBRACK = 76,
  anon_sym_LBRACE_LBRACE = 77,
  anon_sym_RBRACE_RBRACE = 78,
  anon_sym_GT = 79,
  anon_sym_LBRACK_SLASH = 80,
  anon_sym_BSLASH_RBRACK = 81,
  anon_sym_LBRACK_BSLASH = 82,
  anon_sym_SLASH_RBRACK = 83,
  anon_sym_subgraph = 84,
  anon_sym_end = 85,
  aux_sym_diagram_er_token1 = 86,
  aux_sym_diagram_timeline_token1 = 87,
  sym__timeline_text = 88,
  sym__timeline_data_text = 89,
  sym__whitespace = 90,
  sym__newline = 91,
  sym_comment = 92,
  sym_type_directive = 93,
  sym_arg_directive = 94,
  aux_sym_direction_tb_token1 = 95,
  aux_sym_direction_bt_token1 = 96,
  aux_sym_direction_rl_token1 = 97,
  aux_sym_direction_lr_token1 = 98,
  aux_sym__sequence_rest_text_token1 = 99,
  sym__sequence_actor_word = 100,
  sym_solid_arrow = 101,
  sym_dotted_arrow = 102,
  sym_solid_open_arrow = 103,
  anon_sym_DASH_DASH_GT = 104,
  sym_solid_cross = 105,
  sym_dotted_cross = 106,
  sym_dotted_point = 107,
  aux_sym_note_placement_left_token1 = 108,
  aux_sym_note_placement_right_token1 = 109,
  sym__class_name = 110,
  sym__alpha_num_token = 111,
  sym__bquote_string = 112,
  sym__dquote_string = 113,
  sym_class_reltype_aggregation = 114,
  anon_sym_LT_PIPE = 115,
  anon_sym_PIPE_GT = 116,
  anon_sym_LT = 117,
  anon_sym_DASH_DASH = 118,
  anon_sym_DOT_DOT = 119,
  aux_sym_class_label_token1 = 120,
  anon_sym_LBRACK_STAR_RBRACK = 121,
  aux_sym_state_name_token1 = 122,
  aux_sym_state_hide_empty_description_token1 = 123,
  sym_state_id = 124,
  aux_sym_state_annotation_fork_token1 = 125,
  aux_sym_state_annotation_fork_token2 = 126,
  aux_sym_state_annotation_join_token1 = 127,
  aux_sym_state_annotation_join_token2 = 128,
  aux_sym_state_annotation_choice_token1 = 129,
  aux_sym_state_annotation_choice_token2 = 130,
  aux_sym_gantt_task_text_token1 = 131,
  sym_gantt_task_data = 132,
  aux_sym_pie_showdata_token1 = 133,
  sym_pie_title = 134,
  aux_sym_pie_label_token1 = 135,
  sym_pie_value = 136,
  aux_sym_flowchart_direction_lr_token1 = 137,
  aux_sym_flowchart_direction_lr_token2 = 138,
  aux_sym_flowchart_direction_rl_token1 = 139,
  aux_sym_flowchart_direction_tb_token1 = 140,
  aux_sym_flowchart_direction_tb_token2 = 141,
  anon_sym_v = 142,
  aux_sym_flowchart_direction_bt_token1 = 143,
  anon_sym_CARET = 144,
  aux_sym_flow_text_literal_token1 = 145,
  sym_flow_text_quoted = 146,
  aux_sym_flow_link_arrow_token1 = 147,
  aux_sym_flow_link_arrow_token2 = 148,
  aux_sym_flow_link_arrow_token3 = 149,
  aux_sym_flow_link_arrow_start_token1 = 150,
  aux_sym_flow_link_arrow_start_token2 = 151,
  aux_sym_flow_link_arrow_start_token3 = 152,
  sym__er_alphanum = 153,
  anon_sym_PIPEo = 154,
  anon_sym_o_PIPE = 155,
  anon_sym_RBRACEo = 156,
  anon_sym_o_LBRACE = 157,
  anon_sym_RBRACE_PIPE = 158,
  anon_sym_PIPE_LBRACE = 159,
  sym_er_cardinarity_only_one = 160,
  anon_sym_DOT_DASH = 161,
  anon_sym_DASH_DOT = 162,
  aux_sym_er_attribute_key_type_pk_token1 = 163,
  aux_sym_er_attribute_key_type_fk_token1 = 164,
  sym_source_file = 165,
  sym_directive = 166,
  sym__direction = 167,
  sym_diagram_sequence = 168,
  sym__sequence_stmt = 169,
  sym__sequence_participant_type = 170,
  sym_sequence_stmt_participant = 171,
  sym_sequence_stmt_actor = 172,
  sym_sequence_actor = 173,
  sym_sequence_stmt_signal = 174,
  sym_sequence_signal_type = 175,
  sym_sequence_text = 176,
  sym_sequence_stmt_autonumber = 177,
  sym_sequence_stmt_activate = 178,
  sym_sequence_stmt_deactivate = 179,
  sym_sequence_stmt_note = 180,
  sym_sequence_stmt_links = 181,
  sym_sequence_stmt_link = 182,
  sym_sequence_stmt_properties = 183,
  sym_sequence_stmt_details = 184,
  sym_sequence_note_placement = 185,
  sym_sequence_stmt_title = 186,
  sym_sequence_stmt_loop = 187,
  sym_sequence_stmt_rect = 188,
  sym_sequence_stmt_opt = 189,
  aux_sym__sequence_subdocument = 190,
  sym_sequence_stmt_alt = 191,
  sym_sequence_stmt_par = 192,
  sym_diagram_class = 193,
  sym__class_stmt = 194,
  sym_class_stmt_relation = 195,
  sym_class_name = 196,
  sym_class_name_body = 197,
  sym_class_generics = 198,
  sym_class_relation = 199,
  sym__class_reltype = 200,
  sym__class_linetype = 201,
  sym_class_stmt_class = 202,
  sym_class_method_line = 203,
  sym_class_annotation_line = 204,
  sym_class_stmt_method = 205,
  sym_class_stmt_annotation = 206,
  sym_diagram_state = 207,
  sym__state_stmt = 208,
  sym_state_stmt_simple = 209,
  sym_state_stmt_arrow = 210,
  sym_state_stmt_composite = 211,
  sym_state_composite_body = 212,
  sym_state_stmt_annotation = 213,
  sym_state_alias = 214,
  sym_state_stmt_hide_empty_description = 215,
  sym__state_annotation = 216,
  sym_state_note = 217,
  sym_state_note_placement = 218,
  sym_diagram_gantt = 219,
  sym__gantt_stmt = 220,
  sym_gantt_stmt_dateformat = 221,
  sym_gantt_stmt_inclusiveenddates = 222,
  sym_gantt_stmt_topaxis = 223,
  sym_gantt_stmt_axisformat = 224,
  sym_gantt_stmt_includes = 225,
  sym_gantt_stmt_excludes = 226,
  sym_gantt_stmt_todaymarker = 227,
  sym_gantt_stmt_title = 228,
  sym_gantt_stmt_section = 229,
  sym_gantt_stmt_task = 230,
  sym_diagram_pie = 231,
  sym__pie_stmt = 232,
  sym_pie_stmt_title = 233,
  sym_pie_stmt_element = 234,
  sym_diagram_flow = 235,
  sym__flowchart_direction = 236,
  sym__flow_stmt = 237,
  sym_flow_stmt_direction = 238,
  sym_flow_stmt_vertice = 239,
  sym_flow_node = 240,
  sym__flow_link = 241,
  sym_flow_link_simplelink = 242,
  sym_flow_link_arrowtext = 243,
  sym_flow_link_middletext = 244,
  sym_flow_arrow_text = 245,
  sym_flow_vertex_id = 246,
  sym_flow_vertex = 247,
  sym__flow_vertex_kind = 248,
  sym_flow_vertex_square = 249,
  sym_flow_vertex_circle = 250,
  sym_flow_vertex_ellipse = 251,
  sym_flow_vertex_stadium = 252,
  sym_flow_vertex_subroutine = 253,
  sym_flow_vertex_rect = 254,
  sym_flow_vertex_cylinder = 255,
  sym_flow_vertex_round = 256,
  sym_flow_vertex_diamond = 257,
  sym_flow_vertex_hexagon = 258,
  sym_flow_vertex_odd = 259,
  sym_flow_vertex_trapezoid = 260,
  sym_flow_vertex_inv_trapezoid = 261,
  sym_flow_vertex_leanright = 262,
  sym_flow_vertex_leanleft = 263,
  sym__flow_text = 264,
  sym_flow_stmt_subgraph = 265,
  sym_flow_stmt_subgraph_inner = 266,
  sym_flow_vertex_text = 267,
  sym_diagram_er = 268,
  sym__er_stmt = 269,
  sym_er_stmt_entity = 270,
  sym_er_stmt_entity_relation = 271,
  sym_er_entity_name = 272,
  sym_er_relation = 273,
  sym__er_cardinarity = 274,
  sym__er_reltype = 275,
  sym_er_role = 276,
  sym_er_stmt_entity_block = 277,
  sym_er_stmt_entity_block_inner = 278,
  sym_er_attribute = 279,
  sym_er_attribute_type = 280,
  sym_er_attribute_name = 281,
  sym__er_attribute_key_type = 282,
  sym_er_attribute_comment = 283,
  sym_diagram_timeline = 284,
  sym__timeline_stmt = 285,
  sym_timeline_title = 286,
  sym_timeline_stmt_data = 287,
  sym_direction_tb = 288,
  sym_direction_bt = 289,
  sym_direction_rl = 290,
  sym_direction_lr = 291,
  sym__sequence_rest_text = 292,
  sym_dotted_open_arrow = 293,
  sym_solid_point = 294,
  sym_sequence_signal_plus_sign = 295,
  sym_sequence_signal_minus_sign = 296,
  sym_note_placement_left = 297,
  sym_note_placement_right = 298,
  sym_class_reltype_extension = 299,
  sym_class_reltype_composition = 300,
  sym_class_reltype_dependency = 301,
  sym_class_linetype_solid = 302,
  sym_class_linetype_dotted = 303,
  sym_class_label = 304,
  sym_state_name = 305,
  sym_state_arrow = 306,
  sym_state_description = 307,
  sym_state_hide_empty_description = 308,
  sym_state_division = 309,
  sym_state_annotation_fork = 310,
  sym_state_annotation_join = 311,
  sym_state_annotation_choice = 312,
  sym_gantt_meta_format = 313,
  sym_gantt_task_text = 314,
  sym_pie_showdata = 315,
  sym_pie_label = 316,
  sym_flowchart_direction_lr = 317,
  sym_flowchart_direction_rl = 318,
  sym_flowchart_direction_tb = 319,
  sym_flowchart_direction_bt = 320,
  sym_flow_text_literal = 321,
  sym_flow_link_arrow = 322,
  sym_flow_link_arrow_start = 323,
  sym__er_word = 324,
  sym_er_cardinarity_zero_or_one = 325,
  sym_er_cardinarity_zero_or_more = 326,
  sym_er_cardinarity_one_or_more = 327,
  sym_er_reltype_non_identifying = 328,
  sym_er_reltype_identifying = 329,
  sym_er_attribute_key_type_pk = 330,
  sym_er_attribute_key_type_fk = 331,
  aux_sym_diagram_sequence_repeat1 = 332,
  aux_sym_diagram_sequence_repeat2 = 333,
  aux_sym_sequence_actor_repeat1 = 334,
  aux_sym_sequence_stmt_alt_repeat1 = 335,
  aux_sym_sequence_stmt_par_repeat1 = 336,
  aux_sym_diagram_class_repeat1 = 337,
  aux_sym_class_name_body_repeat1 = 338,
  aux_sym_class_stmt_class_repeat1 = 339,
  aux_sym_class_method_line_repeat1 = 340,
  aux_sym_diagram_state_repeat1 = 341,
  aux_sym_state_composite_body_repeat1 = 342,
  aux_sym_diagram_gantt_repeat1 = 343,
  aux_sym_diagram_pie_repeat1 = 344,
  aux_sym_diagram_flow_repeat1 = 345,
  aux_sym_flow_stmt_vertice_repeat1 = 346,
  aux_sym_flow_node_repeat1 = 347,
  aux_sym_flow_arrow_text_repeat1 = 348,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 349,
  aux_sym_diagram_er_repeat1 = 350,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 351,
  aux_sym_diagram_timeline_repeat1 = 352,
  aux_sym_timeline_stmt_data_repeat1 = 353,
  aux_sym_gantt_task_text_repeat1 = 354,
  aux_sym_flow_text_literal_repeat1 = 355,
  alias_sym_annotation = 356,
  alias_sym_class_classifier_abstract = 357,
  alias_sym_class_style_name = 358,
  alias_sym_class_visibility_internal = 359,
  alias_sym_class_visibility_private = 360,
  alias_sym_class_visibility_public = 361,
  alias_sym_gantt_axis_format = 362,
  alias_sym_gantt_end_dates = 363,
  alias_sym_gantt_excludes = 364,
  alias_sym_gantt_includes = 365,
  alias_sym_gantt_section = 366,
  alias_sym_gantt_title = 367,
  alias_sym_gantt_today_marker = 368,
  alias_sym_gantt_top_axis = 369,
  alias_sym_note_content = 370,
  alias_sym_sequence_alias = 371,
  alias_sym_sequence_stmt_alt_branch = 372,
  alias_sym_sequence_stmt_loop_inner = 373,
  alias_sym_sequence_stmt_opt_inner = 374,
  alias_sym_sequence_stmt_rect_inner = 375,
  alias_sym_timeline_event = 376,
  alias_sym_title = 377,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_DASH_RPAREN] = "-)",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [aux_sym_diagram_er_token1] = "erdiagram",
  [aux_sym_diagram_timeline_token1] = "timeline",
  [sym__timeline_text] = "_timeline_text",
  [sym__timeline_data_text] = "timeline_time_period",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__sequence_rest_text_token1] = "_sequence_rest_text_token1",
  [sym__sequence_actor_word] = "_sequence_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [aux_sym_pie_label_token1] = "pie_label_token1",
  [sym_pie_value] = "pie_value",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym__sequence_participant_type] = "_sequence_participant_type",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_state_note_placement] = "state_note_placement",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_diagram_timeline] = "diagram_timeline",
  [sym__timeline_stmt] = "_timeline_stmt",
  [sym_timeline_title] = "timeline_title",
  [sym_timeline_stmt_data] = "timeline_stmt_data",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_pie_label] = "pie_label",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_diagram_timeline_repeat1] = "diagram_timeline_repeat1",
  [aux_sym_timeline_stmt_data_repeat1] = "timeline_stmt_data_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_alias] = "sequence_alias",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_timeline_event] = "timeline_event",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE_PERCENT_PERCENT] = anon_sym_RBRACE_PERCENT_PERCENT,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [aux_sym_diagram_timeline_token1] = aux_sym_diagram_timeline_token1,
  [sym__timeline_text] = sym__timeline_text,
  [sym__timeline_data_text] = sym__timeline_data_text,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__sequence_rest_text_token1] = aux_sym__sequence_rest_text_token1,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [aux_sym_pie_label_token1] = aux_sym_pie_label_token1,
  [sym_pie_value] = sym_pie_value,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym__sequence_participant_type] = sym__sequence_participant_type,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_state_note_placement] = sym_state_note_placement,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_diagram_timeline] = sym_diagram_timeline,
  [sym__timeline_stmt] = sym__timeline_stmt,
  [sym_timeline_title] = sym_timeline_title,
  [sym_timeline_stmt_data] = sym_timeline_stmt_data,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_pie_label] = sym_pie_label,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_diagram_timeline_repeat1] = aux_sym_diagram_timeline_repeat1,
  [aux_sym_timeline_stmt_data_repeat1] = aux_sym_timeline_stmt_data_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_timeline_event] = alias_sym_timeline_event,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_er_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_timeline_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__timeline_text] = {
    .visible = false,
    .named = true,
  },
  [sym__timeline_data_text] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_rest_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sequence_actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__sequence_participant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_timeline] = {
    .visible = true,
    .named = true,
  },
  [sym__timeline_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_timeline_title] = {
    .visible = true,
    .named = true,
  },
  [sym_timeline_stmt_data] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
  },
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_timeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timeline_stmt_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_timeline_event] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [0] = sym_state_description,
  },
  [11] = {
    [1] = alias_sym_timeline_event,
  },
  [12] = {
    [3] = alias_sym_sequence_alias,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [16] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [17] = {
    [3] = alias_sym_class_style_name,
  },
  [18] = {
    [1] = alias_sym_annotation,
  },
  [19] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [20] = {
    [0] = alias_sym_class_visibility_public,
  },
  [21] = {
    [0] = alias_sym_class_visibility_private,
  },
  [22] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [23] = {
    [4] = alias_sym_note_content,
  },
  [24] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [25] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [28] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
  [8] = 3,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 14,
  [20] = 16,
  [21] = 21,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 16,
  [28] = 14,
  [29] = 15,
  [30] = 24,
  [31] = 26,
  [32] = 23,
  [33] = 33,
  [34] = 24,
  [35] = 26,
  [36] = 24,
  [37] = 23,
  [38] = 14,
  [39] = 15,
  [40] = 26,
  [41] = 41,
  [42] = 11,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 45,
  [48] = 44,
  [49] = 45,
  [50] = 44,
  [51] = 45,
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
  [88] = 82,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 95,
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
  [112] = 98,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 115,
  [119] = 111,
  [120] = 109,
  [121] = 81,
  [122] = 113,
  [123] = 108,
  [124] = 110,
  [125] = 107,
  [126] = 101,
  [127] = 93,
  [128] = 92,
  [129] = 91,
  [130] = 90,
  [131] = 87,
  [132] = 86,
  [133] = 106,
  [134] = 84,
  [135] = 83,
  [136] = 114,
  [137] = 85,
  [138] = 105,
  [139] = 99,
  [140] = 104,
  [141] = 100,
  [142] = 103,
  [143] = 102,
  [144] = 89,
  [145] = 102,
  [146] = 93,
  [147] = 84,
  [148] = 95,
  [149] = 101,
  [150] = 82,
  [151] = 89,
  [152] = 105,
  [153] = 94,
  [154] = 98,
  [155] = 83,
  [156] = 93,
  [157] = 100,
  [158] = 99,
  [159] = 92,
  [160] = 91,
  [161] = 90,
  [162] = 87,
  [163] = 85,
  [164] = 86,
  [165] = 114,
  [166] = 86,
  [167] = 108,
  [168] = 109,
  [169] = 108,
  [170] = 109,
  [171] = 111,
  [172] = 115,
  [173] = 89,
  [174] = 111,
  [175] = 116,
  [176] = 115,
  [177] = 107,
  [178] = 104,
  [179] = 85,
  [180] = 114,
  [181] = 83,
  [182] = 101,
  [183] = 99,
  [184] = 100,
  [185] = 87,
  [186] = 81,
  [187] = 107,
  [188] = 92,
  [189] = 113,
  [190] = 103,
  [191] = 82,
  [192] = 110,
  [193] = 106,
  [194] = 91,
  [195] = 84,
  [196] = 90,
  [197] = 95,
  [198] = 94,
  [199] = 102,
  [200] = 116,
  [201] = 103,
  [202] = 81,
  [203] = 104,
  [204] = 113,
  [205] = 110,
  [206] = 106,
  [207] = 105,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 95,
  [217] = 217,
  [218] = 218,
  [219] = 94,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 94,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 95,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 223,
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
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 223,
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
  [315] = 309,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 309,
  [321] = 321,
  [322] = 322,
  [323] = 309,
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
  [379] = 378,
  [380] = 380,
  [381] = 267,
  [382] = 378,
  [383] = 383,
  [384] = 255,
  [385] = 378,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 390,
  [392] = 224,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 267,
  [398] = 390,
  [399] = 255,
  [400] = 390,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 252,
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
  [422] = 388,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 217,
  [432] = 418,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 259,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 296,
  [447] = 447,
  [448] = 290,
  [449] = 301,
  [450] = 450,
  [451] = 94,
  [452] = 452,
  [453] = 295,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 95,
  [460] = 269,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 225,
  [472] = 472,
  [473] = 250,
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
  [495] = 480,
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
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 516,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 518,
  [522] = 489,
  [523] = 493,
  [524] = 524,
  [525] = 490,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 492,
  [530] = 501,
  [531] = 492,
  [532] = 532,
  [533] = 494,
  [534] = 534,
  [535] = 493,
  [536] = 536,
  [537] = 498,
  [538] = 499,
  [539] = 539,
  [540] = 540,
  [541] = 482,
  [542] = 516,
  [543] = 543,
  [544] = 544,
  [545] = 488,
  [546] = 491,
  [547] = 547,
  [548] = 527,
  [549] = 549,
  [550] = 518,
  [551] = 492,
  [552] = 493,
  [553] = 553,
  [554] = 489,
  [555] = 514,
  [556] = 556,
  [557] = 490,
  [558] = 558,
  [559] = 499,
  [560] = 560,
  [561] = 561,
  [562] = 549,
  [563] = 498,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 498,
  [568] = 499,
  [569] = 526,
  [570] = 480,
  [571] = 516,
  [572] = 518,
  [573] = 491,
  [574] = 519,
  [575] = 561,
  [576] = 564,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 501,
  [586] = 586,
  [587] = 494,
  [588] = 536,
  [589] = 482,
  [590] = 590,
  [591] = 591,
  [592] = 527,
  [593] = 593,
  [594] = 488,
  [595] = 519,
  [596] = 561,
  [597] = 443,
  [598] = 566,
  [599] = 564,
  [600] = 489,
  [601] = 565,
  [602] = 578,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 579,
  [608] = 580,
  [609] = 584,
  [610] = 610,
  [611] = 549,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 514,
  [616] = 578,
  [617] = 584,
  [618] = 565,
  [619] = 566,
  [620] = 519,
  [621] = 621,
  [622] = 622,
  [623] = 561,
  [624] = 624,
  [625] = 526,
  [626] = 564,
  [627] = 578,
  [628] = 579,
  [629] = 629,
  [630] = 580,
  [631] = 631,
  [632] = 584,
  [633] = 490,
  [634] = 480,
  [635] = 526,
  [636] = 566,
  [637] = 536,
  [638] = 565,
  [639] = 501,
  [640] = 494,
  [641] = 536,
  [642] = 482,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 580,
  [647] = 491,
  [648] = 579,
  [649] = 649,
  [650] = 527,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 556,
  [655] = 655,
  [656] = 514,
  [657] = 549,
  [658] = 658,
  [659] = 659,
  [660] = 577,
  [661] = 488,
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
  [678] = 674,
  [679] = 679,
  [680] = 663,
  [681] = 681,
  [682] = 663,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 679,
  [688] = 674,
  [689] = 673,
  [690] = 690,
  [691] = 673,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 681,
  [696] = 696,
  [697] = 697,
  [698] = 679,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 679,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 663,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 674,
  [712] = 712,
  [713] = 713,
  [714] = 673,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 690,
  [722] = 692,
  [723] = 690,
  [724] = 690,
  [725] = 681,
  [726] = 726,
  [727] = 690,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 692,
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
  [746] = 690,
  [747] = 692,
  [748] = 681,
  [749] = 690,
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
  [769] = 764,
  [770] = 761,
  [771] = 759,
  [772] = 757,
  [773] = 752,
  [774] = 754,
  [775] = 756,
  [776] = 753,
  [777] = 760,
  [778] = 755,
  [779] = 755,
  [780] = 755,
  [781] = 752,
  [782] = 755,
  [783] = 783,
  [784] = 757,
  [785] = 753,
  [786] = 756,
  [787] = 754,
  [788] = 768,
  [789] = 789,
  [790] = 751,
  [791] = 791,
  [792] = 792,
  [793] = 759,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 761,
  [799] = 704,
  [800] = 703,
  [801] = 801,
  [802] = 802,
  [803] = 764,
  [804] = 804,
  [805] = 789,
  [806] = 806,
  [807] = 783,
  [808] = 791,
  [809] = 760,
  [810] = 755,
  [811] = 752,
  [812] = 768,
  [813] = 789,
  [814] = 751,
  [815] = 791,
  [816] = 792,
  [817] = 757,
  [818] = 794,
  [819] = 795,
  [820] = 796,
  [821] = 792,
  [822] = 783,
  [823] = 100,
  [824] = 794,
  [825] = 99,
  [826] = 795,
  [827] = 796,
  [828] = 828,
  [829] = 783,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 768,
  [835] = 789,
  [836] = 751,
  [837] = 791,
  [838] = 792,
  [839] = 839,
  [840] = 794,
  [841] = 795,
  [842] = 796,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 755,
  [847] = 847,
  [848] = 760,
  [849] = 849,
  [850] = 850,
  [851] = 783,
  [852] = 768,
  [853] = 783,
  [854] = 768,
  [855] = 783,
  [856] = 768,
  [857] = 857,
  [858] = 858,
  [859] = 802,
  [860] = 804,
  [861] = 832,
  [862] = 862,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 828,
  [867] = 830,
  [868] = 868,
  [869] = 847,
  [870] = 857,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 832,
  [878] = 764,
  [879] = 761,
  [880] = 871,
  [881] = 828,
  [882] = 830,
  [883] = 883,
  [884] = 847,
  [885] = 857,
  [886] = 871,
  [887] = 872,
  [888] = 758,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 832,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 828,
  [897] = 830,
  [898] = 898,
  [899] = 847,
  [900] = 857,
  [901] = 871,
  [902] = 872,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 759,
  [914] = 872,
  [915] = 754,
  [916] = 753,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 756,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 929,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static inline bool aux_sym_flow_text_literal_token1_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static inline bool aux_sym_flow_text_literal_token1_character_set_2(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < ')'
        ? c == ' '
        : c <= ')')))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '$') ADVANCE(483);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(502);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == ';') ADVANCE(500);
      if (lookahead == '<') ADVANCE(715);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '[') ADVANCE(506);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '^') ADVANCE(907);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(711);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(905);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '}') ADVANCE(472);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(586);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(586);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(586);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(587);
      if (lookahead == ',') ADVANCE(442);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(587);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(587);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '~') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(729);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead == '[') ADVANCE(730);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(746);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(747);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(757);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(488);
      if (lookahead == 'D') ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '<') ADVANCE(716);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '%') ADVANCE(911);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(912);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(431);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(911);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(911);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '}') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(912);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(581);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(465);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(538);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(804);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(886);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(925);
      if (lookahead == '|') ADVANCE(927);
      if (lookahead == '}') ADVANCE(522);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(701);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(815);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(514);
      if (lookahead == ']') ADVANCE(516);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(681);
      if (lookahead == '>') ADVANCE(678);
      if (lookahead == 'x') ADVANCE(680);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(512);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(512);
      if (lookahead == '-') ADVANCE(919);
      if (lookahead == '.') ADVANCE(921);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(512);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '>') ADVANCE(676);
      if (lookahead == 'x') ADVANCE(679);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(510);
      END_STATE();
    case 49:
      if (lookahead == ')') ADVANCE(510);
      if (lookahead == ']') ADVANCE(520);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '[') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(930);
      if (lookahead == '.') ADVANCE(721);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(919);
      if (lookahead == '.') ADVANCE(921);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(915);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(717);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(717);
      if (lookahead == '.') ADVANCE(931);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(719);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '{') ADVANCE(926);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(721);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(487);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(457);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(468);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '<') ADVANCE(484);
      END_STATE();
    case 69:
      if (lookahead == '<') ADVANCE(155);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(920);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(917);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(916);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(714);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(485);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(805);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(807);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(809);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(253);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(253);
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(254);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == '[') ADVANCE(167);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(527);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(525);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(518);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == '{') ADVANCE(928);
      if (lookahead == '|') ADVANCE(929);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(774);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(806);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(808);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(810);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == '`') ADVANCE(708);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(530);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(528);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == '{') ADVANCE(928);
      if (lookahead == '|') ADVANCE(929);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(925);
      if (lookahead == '|') ADVANCE(927);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(926);
      if (lookahead == '|') ADVANCE(924);
      END_STATE();
    case 117:
      if (lookahead == '}') ADVANCE(522);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(932);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 147:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(903);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 148:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(903);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(904);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(574);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(364);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(234);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(310);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(309);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(386);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(312);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(311);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 216:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(682);
      END_STATE();
    case 217:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      END_STATE();
    case 218:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 219:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 220:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 221:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 222:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 223:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 224:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 225:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 227:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 228:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 229:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(932);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 256:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(933);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 257:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(444);
      END_STATE();
    case 258:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 259:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 260:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(532);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 316:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 317:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 318:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 319:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 320:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 321:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(388);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(901);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 352:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 353:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 354:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 355:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 384:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 385:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 386:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 388:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 389:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 390:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 391:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 392:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 393:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 394:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 395:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 396:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 397:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 398:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 399:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 400:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(918);
      END_STATE();
    case 401:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 402:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      END_STATE();
    case 403:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(573);
      if (lookahead == '%') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      END_STATE();
    case 404:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 405:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(100);
      END_STATE();
    case 406:
      if (eof) ADVANCE(424);
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '%') ADVANCE(586);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(610);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 407:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '<') ADVANCE(716);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == '^') ADVANCE(907);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == 'v') ADVANCE(905);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 408:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 409:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(890);
      if (lookahead == '%') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 410:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(502);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == ';') ADVANCE(500);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == 'O') ADVANCE(392);
      if (lookahead == '[') ADVANCE(506);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '<' ||
          lookahead == 'x') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 411:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(922);
      END_STATE();
    case 412:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '$') ADVANCE(483);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == ';') ADVANCE(500);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 413:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(878);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(832);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 414:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 415:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 416:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 417:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 418:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 419:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '}') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 420:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '}') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 421:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 422:
      if (eof) ADVANCE(424);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ';') ADVANCE(500);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(701);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 423:
      if (eof) ADVANCE(424);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead == 'c') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(390);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(461);
      if (lookahead == '{') ADVANCE(465);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(465);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(521);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '|') ADVANCE(927);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead == '>') ADVANCE(676);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '[') ADVANCE(513);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ']') ADVANCE(520);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(389);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(714);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '{') ADVANCE(928);
      if (lookahead == '|') ADVANCE(929);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(519);
      if (lookahead == '/') ADVANCE(524);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(526);
      if (lookahead == '|') ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(514);
      if (lookahead == ']') ADVANCE(516);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_diagram_timeline_token1);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__timeline_text);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__timeline_text);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__timeline_text);
      if (lookahead == '%') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(538);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__timeline_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(538);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__timeline_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '{') ADVANCE(549);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '{') ADVANCE(429);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '%') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '%') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__timeline_data_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(550);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(569);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(886);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(581);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(573);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == '{') ADVANCE(573);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(573);
      if (lookahead == '%') ADVANCE(570);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(673);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(674);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(675);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(693);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(529);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(694);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(690);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(703);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '{') ADVANCE(926);
      if (lookahead == '|') ADVANCE(924);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(484);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '|') ADVANCE(713);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(713);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(681);
      if (lookahead == '>') ADVANCE(677);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(677);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(764);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(760);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(773);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(802);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(802);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(836);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(873);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(896);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(20);
      if (lookahead != 0) ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(912);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(912);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(908);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(912);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(917);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(916);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(917);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(916);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '.') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 410},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 406},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 406},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 406},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 406},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 406},
  [44] = {.lex_state = 406},
  [45] = {.lex_state = 406},
  [46] = {.lex_state = 406},
  [47] = {.lex_state = 406},
  [48] = {.lex_state = 406},
  [49] = {.lex_state = 406},
  [50] = {.lex_state = 406},
  [51] = {.lex_state = 406},
  [52] = {.lex_state = 406},
  [53] = {.lex_state = 406},
  [54] = {.lex_state = 410},
  [55] = {.lex_state = 417},
  [56] = {.lex_state = 413},
  [57] = {.lex_state = 413},
  [58] = {.lex_state = 417},
  [59] = {.lex_state = 413},
  [60] = {.lex_state = 417},
  [61] = {.lex_state = 417},
  [62] = {.lex_state = 413},
  [63] = {.lex_state = 417},
  [64] = {.lex_state = 413},
  [65] = {.lex_state = 417},
  [66] = {.lex_state = 417},
  [67] = {.lex_state = 417},
  [68] = {.lex_state = 417},
  [69] = {.lex_state = 417},
  [70] = {.lex_state = 417},
  [71] = {.lex_state = 417},
  [72] = {.lex_state = 417},
  [73] = {.lex_state = 417},
  [74] = {.lex_state = 417},
  [75] = {.lex_state = 417},
  [76] = {.lex_state = 417},
  [77] = {.lex_state = 417},
  [78] = {.lex_state = 417},
  [79] = {.lex_state = 417},
  [80] = {.lex_state = 410},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 406},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 406},
  [149] = {.lex_state = 406},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 406},
  [153] = {.lex_state = 406},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 406},
  [157] = {.lex_state = 406},
  [158] = {.lex_state = 406},
  [159] = {.lex_state = 406},
  [160] = {.lex_state = 406},
  [161] = {.lex_state = 406},
  [162] = {.lex_state = 406},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 406},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 406},
  [170] = {.lex_state = 406},
  [171] = {.lex_state = 406},
  [172] = {.lex_state = 406},
  [173] = {.lex_state = 406},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 406},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 406},
  [179] = {.lex_state = 406},
  [180] = {.lex_state = 406},
  [181] = {.lex_state = 406},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 406},
  [187] = {.lex_state = 406},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 406},
  [190] = {.lex_state = 406},
  [191] = {.lex_state = 406},
  [192] = {.lex_state = 406},
  [193] = {.lex_state = 406},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 406},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 407},
  [209] = {.lex_state = 407},
  [210] = {.lex_state = 410},
  [211] = {.lex_state = 407},
  [212] = {.lex_state = 418},
  [213] = {.lex_state = 410},
  [214] = {.lex_state = 410},
  [215] = {.lex_state = 407},
  [216] = {.lex_state = 410},
  [217] = {.lex_state = 420},
  [218] = {.lex_state = 418},
  [219] = {.lex_state = 410},
  [220] = {.lex_state = 419},
  [221] = {.lex_state = 407},
  [222] = {.lex_state = 410},
  [223] = {.lex_state = 420},
  [224] = {.lex_state = 407},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 417},
  [227] = {.lex_state = 410},
  [228] = {.lex_state = 413},
  [229] = {.lex_state = 417},
  [230] = {.lex_state = 417},
  [231] = {.lex_state = 417},
  [232] = {.lex_state = 417},
  [233] = {.lex_state = 417},
  [234] = {.lex_state = 417},
  [235] = {.lex_state = 417},
  [236] = {.lex_state = 417},
  [237] = {.lex_state = 423},
  [238] = {.lex_state = 423},
  [239] = {.lex_state = 413},
  [240] = {.lex_state = 413},
  [241] = {.lex_state = 413},
  [242] = {.lex_state = 413},
  [243] = {.lex_state = 413},
  [244] = {.lex_state = 413},
  [245] = {.lex_state = 413},
  [246] = {.lex_state = 413},
  [247] = {.lex_state = 413},
  [248] = {.lex_state = 413},
  [249] = {.lex_state = 413},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 417},
  [252] = {.lex_state = 407},
  [253] = {.lex_state = 39},
  [254] = {.lex_state = 417},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 413},
  [257] = {.lex_state = 417},
  [258] = {.lex_state = 417},
  [259] = {.lex_state = 407},
  [260] = {.lex_state = 417},
  [261] = {.lex_state = 417},
  [262] = {.lex_state = 423},
  [263] = {.lex_state = 417},
  [264] = {.lex_state = 22},
  [265] = {.lex_state = 417},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 22},
  [268] = {.lex_state = 22},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 417},
  [271] = {.lex_state = 417},
  [272] = {.lex_state = 39},
  [273] = {.lex_state = 417},
  [274] = {.lex_state = 417},
  [275] = {.lex_state = 417},
  [276] = {.lex_state = 417},
  [277] = {.lex_state = 410},
  [278] = {.lex_state = 418},
  [279] = {.lex_state = 417},
  [280] = {.lex_state = 413},
  [281] = {.lex_state = 417},
  [282] = {.lex_state = 410},
  [283] = {.lex_state = 417},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 417},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 423},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 423},
  [295] = {.lex_state = 407},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 419},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 423},
  [301] = {.lex_state = 407},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 422},
  [304] = {.lex_state = 410},
  [305] = {.lex_state = 410},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 422},
  [308] = {.lex_state = 410},
  [309] = {.lex_state = 419},
  [310] = {.lex_state = 410},
  [311] = {.lex_state = 410},
  [312] = {.lex_state = 410},
  [313] = {.lex_state = 422},
  [314] = {.lex_state = 410},
  [315] = {.lex_state = 419},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 410},
  [318] = {.lex_state = 410},
  [319] = {.lex_state = 422},
  [320] = {.lex_state = 419},
  [321] = {.lex_state = 410},
  [322] = {.lex_state = 422},
  [323] = {.lex_state = 419},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 419},
  [326] = {.lex_state = 422},
  [327] = {.lex_state = 410},
  [328] = {.lex_state = 410},
  [329] = {.lex_state = 410},
  [330] = {.lex_state = 410},
  [331] = {.lex_state = 410},
  [332] = {.lex_state = 422},
  [333] = {.lex_state = 410},
  [334] = {.lex_state = 410},
  [335] = {.lex_state = 410},
  [336] = {.lex_state = 410},
  [337] = {.lex_state = 410},
  [338] = {.lex_state = 410},
  [339] = {.lex_state = 410},
  [340] = {.lex_state = 422},
  [341] = {.lex_state = 415},
  [342] = {.lex_state = 410},
  [343] = {.lex_state = 410},
  [344] = {.lex_state = 410},
  [345] = {.lex_state = 410},
  [346] = {.lex_state = 422},
  [347] = {.lex_state = 410},
  [348] = {.lex_state = 410},
  [349] = {.lex_state = 415},
  [350] = {.lex_state = 412},
  [351] = {.lex_state = 411},
  [352] = {.lex_state = 22},
  [353] = {.lex_state = 412},
  [354] = {.lex_state = 411},
  [355] = {.lex_state = 411},
  [356] = {.lex_state = 412},
  [357] = {.lex_state = 412},
  [358] = {.lex_state = 412},
  [359] = {.lex_state = 410},
  [360] = {.lex_state = 410},
  [361] = {.lex_state = 412},
  [362] = {.lex_state = 411},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 411},
  [365] = {.lex_state = 22},
  [366] = {.lex_state = 22},
  [367] = {.lex_state = 411},
  [368] = {.lex_state = 416},
  [369] = {.lex_state = 416},
  [370] = {.lex_state = 411},
  [371] = {.lex_state = 416},
  [372] = {.lex_state = 416},
  [373] = {.lex_state = 416},
  [374] = {.lex_state = 411},
  [375] = {.lex_state = 416},
  [376] = {.lex_state = 411},
  [377] = {.lex_state = 410},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 417},
  [381] = {.lex_state = 408},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 410},
  [384] = {.lex_state = 408},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 410},
  [387] = {.lex_state = 411},
  [388] = {.lex_state = 412},
  [389] = {.lex_state = 422},
  [390] = {.lex_state = 410},
  [391] = {.lex_state = 410},
  [392] = {.lex_state = 418},
  [393] = {.lex_state = 422},
  [394] = {.lex_state = 409},
  [395] = {.lex_state = 408},
  [396] = {.lex_state = 422},
  [397] = {.lex_state = 421},
  [398] = {.lex_state = 410},
  [399] = {.lex_state = 421},
  [400] = {.lex_state = 410},
  [401] = {.lex_state = 422},
  [402] = {.lex_state = 408},
  [403] = {.lex_state = 412},
  [404] = {.lex_state = 422},
  [405] = {.lex_state = 411},
  [406] = {.lex_state = 24},
  [407] = {.lex_state = 410},
  [408] = {.lex_state = 411},
  [409] = {.lex_state = 418},
  [410] = {.lex_state = 410},
  [411] = {.lex_state = 412},
  [412] = {.lex_state = 408},
  [413] = {.lex_state = 408},
  [414] = {.lex_state = 417},
  [415] = {.lex_state = 24},
  [416] = {.lex_state = 24},
  [417] = {.lex_state = 23},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 24},
  [420] = {.lex_state = 408},
  [421] = {.lex_state = 410},
  [422] = {.lex_state = 38},
  [423] = {.lex_state = 24},
  [424] = {.lex_state = 24},
  [425] = {.lex_state = 24},
  [426] = {.lex_state = 408},
  [427] = {.lex_state = 411},
  [428] = {.lex_state = 411},
  [429] = {.lex_state = 411},
  [430] = {.lex_state = 410},
  [431] = {.lex_state = 420},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 24},
  [434] = {.lex_state = 408},
  [435] = {.lex_state = 24},
  [436] = {.lex_state = 24},
  [437] = {.lex_state = 24},
  [438] = {.lex_state = 408},
  [439] = {.lex_state = 24},
  [440] = {.lex_state = 418},
  [441] = {.lex_state = 24},
  [442] = {.lex_state = 411},
  [443] = {.lex_state = 38},
  [444] = {.lex_state = 408},
  [445] = {.lex_state = 408},
  [446] = {.lex_state = 30},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 30},
  [449] = {.lex_state = 418},
  [450] = {.lex_state = 39},
  [451] = {.lex_state = 416},
  [452] = {.lex_state = 411},
  [453] = {.lex_state = 418},
  [454] = {.lex_state = 416},
  [455] = {.lex_state = 414},
  [456] = {.lex_state = 416},
  [457] = {.lex_state = 418},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 416},
  [460] = {.lex_state = 5},
  [461] = {.lex_state = 410},
  [462] = {.lex_state = 412},
  [463] = {.lex_state = 412},
  [464] = {.lex_state = 410},
  [465] = {.lex_state = 412},
  [466] = {.lex_state = 412},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 412},
  [470] = {.lex_state = 412},
  [471] = {.lex_state = 414},
  [472] = {.lex_state = 410},
  [473] = {.lex_state = 5},
  [474] = {.lex_state = 414},
  [475] = {.lex_state = 414},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 31},
  [481] = {.lex_state = 417},
  [482] = {.lex_state = 31},
  [483] = {.lex_state = 417},
  [484] = {.lex_state = 417},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 408},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 408},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 4},
  [491] = {.lex_state = 4},
  [492] = {.lex_state = 410},
  [493] = {.lex_state = 410},
  [494] = {.lex_state = 31},
  [495] = {.lex_state = 31},
  [496] = {.lex_state = 410},
  [497] = {.lex_state = 410},
  [498] = {.lex_state = 4},
  [499] = {.lex_state = 4},
  [500] = {.lex_state = 417},
  [501] = {.lex_state = 31},
  [502] = {.lex_state = 417},
  [503] = {.lex_state = 417},
  [504] = {.lex_state = 417},
  [505] = {.lex_state = 417},
  [506] = {.lex_state = 417},
  [507] = {.lex_state = 417},
  [508] = {.lex_state = 417},
  [509] = {.lex_state = 417},
  [510] = {.lex_state = 417},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 4},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 31},
  [517] = {.lex_state = 31},
  [518] = {.lex_state = 31},
  [519] = {.lex_state = 31},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 31},
  [522] = {.lex_state = 4},
  [523] = {.lex_state = 410},
  [524] = {.lex_state = 417},
  [525] = {.lex_state = 4},
  [526] = {.lex_state = 31},
  [527] = {.lex_state = 4},
  [528] = {.lex_state = 417},
  [529] = {.lex_state = 410},
  [530] = {.lex_state = 31},
  [531] = {.lex_state = 410},
  [532] = {.lex_state = 417},
  [533] = {.lex_state = 31},
  [534] = {.lex_state = 417},
  [535] = {.lex_state = 410},
  [536] = {.lex_state = 31},
  [537] = {.lex_state = 4},
  [538] = {.lex_state = 4},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 31},
  [542] = {.lex_state = 31},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 417},
  [545] = {.lex_state = 408},
  [546] = {.lex_state = 4},
  [547] = {.lex_state = 417},
  [548] = {.lex_state = 4},
  [549] = {.lex_state = 4},
  [550] = {.lex_state = 31},
  [551] = {.lex_state = 410},
  [552] = {.lex_state = 410},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 4},
  [555] = {.lex_state = 4},
  [556] = {.lex_state = 23},
  [557] = {.lex_state = 4},
  [558] = {.lex_state = 417},
  [559] = {.lex_state = 4},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 31},
  [562] = {.lex_state = 4},
  [563] = {.lex_state = 4},
  [564] = {.lex_state = 31},
  [565] = {.lex_state = 31},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 4},
  [568] = {.lex_state = 4},
  [569] = {.lex_state = 31},
  [570] = {.lex_state = 31},
  [571] = {.lex_state = 31},
  [572] = {.lex_state = 31},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 31},
  [575] = {.lex_state = 31},
  [576] = {.lex_state = 31},
  [577] = {.lex_state = 23},
  [578] = {.lex_state = 4},
  [579] = {.lex_state = 4},
  [580] = {.lex_state = 4},
  [581] = {.lex_state = 412},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 412},
  [584] = {.lex_state = 4},
  [585] = {.lex_state = 31},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 31},
  [588] = {.lex_state = 31},
  [589] = {.lex_state = 31},
  [590] = {.lex_state = 408},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 4},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 408},
  [595] = {.lex_state = 31},
  [596] = {.lex_state = 31},
  [597] = {.lex_state = 412},
  [598] = {.lex_state = 31},
  [599] = {.lex_state = 31},
  [600] = {.lex_state = 4},
  [601] = {.lex_state = 31},
  [602] = {.lex_state = 4},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 4},
  [608] = {.lex_state = 4},
  [609] = {.lex_state = 4},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 4},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 412},
  [614] = {.lex_state = 412},
  [615] = {.lex_state = 4},
  [616] = {.lex_state = 4},
  [617] = {.lex_state = 4},
  [618] = {.lex_state = 31},
  [619] = {.lex_state = 31},
  [620] = {.lex_state = 31},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 41},
  [623] = {.lex_state = 31},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 31},
  [626] = {.lex_state = 31},
  [627] = {.lex_state = 4},
  [628] = {.lex_state = 4},
  [629] = {.lex_state = 408},
  [630] = {.lex_state = 4},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 4},
  [633] = {.lex_state = 4},
  [634] = {.lex_state = 31},
  [635] = {.lex_state = 31},
  [636] = {.lex_state = 31},
  [637] = {.lex_state = 31},
  [638] = {.lex_state = 31},
  [639] = {.lex_state = 31},
  [640] = {.lex_state = 31},
  [641] = {.lex_state = 31},
  [642] = {.lex_state = 31},
  [643] = {.lex_state = 6},
  [644] = {.lex_state = 6},
  [645] = {.lex_state = 6},
  [646] = {.lex_state = 4},
  [647] = {.lex_state = 4},
  [648] = {.lex_state = 4},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 4},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 23},
  [655] = {.lex_state = 41},
  [656] = {.lex_state = 4},
  [657] = {.lex_state = 4},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 23},
  [661] = {.lex_state = 408},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 31},
  [664] = {.lex_state = 31},
  [665] = {.lex_state = 31},
  [666] = {.lex_state = 31},
  [667] = {.lex_state = 23},
  [668] = {.lex_state = 414},
  [669] = {.lex_state = 31},
  [670] = {.lex_state = 31},
  [671] = {.lex_state = 31},
  [672] = {.lex_state = 23},
  [673] = {.lex_state = 31},
  [674] = {.lex_state = 31},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 411},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 31},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 31},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 31},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 31},
  [686] = {.lex_state = 31},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 31},
  [689] = {.lex_state = 31},
  [690] = {.lex_state = 410},
  [691] = {.lex_state = 31},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 412},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 417},
  [700] = {.lex_state = 414},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 23},
  [704] = {.lex_state = 23},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 31},
  [707] = {.lex_state = 31},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 31},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 31},
  [715] = {.lex_state = 411},
  [716] = {.lex_state = 411},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 410},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 410},
  [724] = {.lex_state = 410},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 410},
  [728] = {.lex_state = 411},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 417},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 417},
  [733] = {.lex_state = 410},
  [734] = {.lex_state = 410},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 410},
  [737] = {.lex_state = 411},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 412},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 410},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 410},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 410},
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
  [768] = {.lex_state = 403},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 410},
  [779] = {.lex_state = 410},
  [780] = {.lex_state = 410},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 410},
  [783] = {.lex_state = 32},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 403},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 412},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 4},
  [800] = {.lex_state = 4},
  [801] = {.lex_state = 4},
  [802] = {.lex_state = 33},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 412},
  [807] = {.lex_state = 32},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 410},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 403},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 32},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 32},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 412},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 403},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 40},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 34},
  [846] = {.lex_state = 410},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 4},
  [850] = {.lex_state = 4},
  [851] = {.lex_state = 32},
  [852] = {.lex_state = 403},
  [853] = {.lex_state = 32},
  [854] = {.lex_state = 403},
  [855] = {.lex_state = 32},
  [856] = {.lex_state = 403},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 417},
  [859] = {.lex_state = 33},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 35},
  [863] = {.lex_state = 35},
  [864] = {.lex_state = 36},
  [865] = {.lex_state = 407},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 412},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 410},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 42},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 412},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 407},
  [890] = {.lex_state = 417},
  [891] = {.lex_state = 410},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 410},
  [894] = {.lex_state = 417},
  [895] = {.lex_state = 410},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 417},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 417},
  [904] = {.lex_state = 410},
  [905] = {.lex_state = 417},
  [906] = {.lex_state = 410},
  [907] = {.lex_state = 410},
  [908] = {.lex_state = 411},
  [909] = {.lex_state = 417},
  [910] = {.lex_state = 407},
  [911] = {.lex_state = 411},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 412},
  [920] = {.lex_state = 417},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 412},
  [923] = {.lex_state = 417},
  [924] = {.lex_state = 407},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_timeline_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym__bquote_string] = ACTIONS(1),
    [sym__dquote_string] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [aux_sym_pie_label_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_flow_text_quoted] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(926),
    [sym_directive] = STATE(227),
    [sym_diagram_sequence] = STATE(925),
    [sym_diagram_class] = STATE(925),
    [sym_diagram_state] = STATE(925),
    [sym_diagram_gantt] = STATE(925),
    [sym_diagram_pie] = STATE(925),
    [sym_diagram_flow] = STATE(925),
    [sym_diagram_er] = STATE(925),
    [sym_diagram_timeline] = STATE(925),
    [aux_sym_diagram_sequence_repeat1] = STATE(227),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [aux_sym_diagram_pie_token1] = ACTIONS(19),
    [aux_sym_diagram_flow_token1] = ACTIONS(21),
    [aux_sym_diagram_er_token1] = ACTIONS(23),
    [aux_sym_diagram_timeline_token1] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(535), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [109] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(111), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(531), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [218] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(523), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [327] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(529), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [436] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(551), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [545] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [654] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(492), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [763] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(552), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [872] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(125), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [976] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(127), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(133), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(136), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(139), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(142), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(145), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(148), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(151), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(154), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(157), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(160), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(163), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(168), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(171), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(174), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(177), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(180), 1,
      sym__newline,
    ACTIONS(183), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(130), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(166), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1080] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(183), 1,
      sym__sequence_actor_word,
    ACTIONS(186), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(192), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(195), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(198), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(201), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(204), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(207), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(210), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(213), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(216), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(219), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(222), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(225), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(228), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(231), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(237), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(166), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(189), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1184] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(240), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1288] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1391] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1494] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1597] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(320), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(514), 1,
      sym__sequence_participant_type,
    ACTIONS(288), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(43), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(191), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1698] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1801] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1904] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(38), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2007] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(339), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(345), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(378), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(381), 1,
      sym__newline,
    ACTIONS(384), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(514), 1,
      sym__sequence_participant_type,
    ACTIONS(333), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(191), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2108] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2211] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(35), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2314] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(29), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2417] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2520] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2623] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(397), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(19), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2726] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2829] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2932] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(403), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3035] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3138] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3241] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(409), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(514), 1,
      sym__sequence_participant_type,
    ACTIONS(288), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(191), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3342] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(411), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3445] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(413), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3548] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(415), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3651] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(417), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3754] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3857] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3960] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(278), 1,
      sym__newline,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4063] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(286), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(514), 1,
      sym__sequence_participant_type,
    ACTIONS(288), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(33), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(191), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4164] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(166), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(183), 1,
      sym__sequence_actor_word,
    ACTIONS(429), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(438), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(444), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(450), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(456), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(462), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(468), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(474), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(477), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(480), 1,
      sym__newline,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(154), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(555), 1,
      sym__sequence_participant_type,
    ACTIONS(432), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(150), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4267] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(286), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(409), 1,
      sym__newline,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(514), 1,
      sym__sequence_participant_type,
    ACTIONS(288), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(191), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4368] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4468] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4568] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4668] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4768] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4868] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4968] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5068] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5168] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(98), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(309), 1,
      sym_sequence_actor,
    STATE(656), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(82), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5268] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(112), 1,
      sym__sequence_stmt,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(320), 1,
      sym_sequence_actor,
    STATE(615), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5368] = 18,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_LBRACK,
    ACTIONS(493), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(497), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(501), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(503), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(509), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(511), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(347), 1,
      sym__flow_vertex_kind,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(513), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(485), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(348), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [5446] = 18,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5513] = 18,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(547), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(550), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(553), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(556), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(559), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(562), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(565), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(568), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(571), 1,
      sym__newline,
    ACTIONS(574), 1,
      aux_sym_gantt_task_text_token1,
    STATE(655), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(839), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(248), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5580] = 18,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    STATE(655), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(839), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(248), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5647] = 18,
    ACTIONS(603), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(608), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(611), 1,
      sym__newline,
    ACTIONS(614), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(617), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(620), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(623), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(626), 1,
      anon_sym_DASH_DASH,
    ACTIONS(629), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(632), 1,
      aux_sym_state_name_token1,
    ACTIONS(635), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5714] = 18,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(839), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(248), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5781] = 18,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5848] = 18,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5915] = 18,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(655), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(839), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(248), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5982] = 18,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    ACTIONS(650), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6049] = 18,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 1,
      sym__newline,
    STATE(655), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(839), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(248), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6116] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(683), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6179] = 17,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(285), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6242] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(683), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6305] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(683), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6368] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(668), 1,
      sym__newline,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(658), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6431] = 17,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(285), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6494] = 17,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(670), 1,
      sym__newline,
    STATE(63), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6557] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(683), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6620] = 17,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(285), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6683] = 17,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(674), 1,
      sym__newline,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(513), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6746] = 16,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(683), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6806] = 16,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(55), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6866] = 16,
    ACTIONS(515), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(535), 1,
      aux_sym_state_name_token1,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(285), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6926] = 16,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(658), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6986] = 16,
    ACTIONS(519), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(523), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(525), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(527), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(529), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(263), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(604), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(275), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(229), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7046] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(678), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(676), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [7078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(682), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(686), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(690), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(694), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(698), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(702), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(706), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(686), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(710), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(714), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(718), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(722), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(726), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(730), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(734), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(730), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(734), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(738), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(742), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(746), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(750), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(754), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(758), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(762), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(766), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(770), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(774), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(778), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(782), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(786), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(790), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(738), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(794), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(798), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(800), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(802), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(804), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(806), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(804), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(806), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(800), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(802), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(790), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(782), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(682), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(794), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(778), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(786), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(774), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(750), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(726), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(722), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(718), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(714), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(706), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(702), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(770), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(694), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(690), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(798), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(698), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(766), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(742), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(762), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(746), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(758), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(754), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(710), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(754), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(726), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(694), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(734), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(750), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(686), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(710), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(766), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(730), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(738), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(690), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(726), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(746), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(742), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(722), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(718), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(714), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(706), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(698), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(702), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(798), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(702), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(778), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(782), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(778), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(782), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(790), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(800), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(802), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(710), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(790), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(804), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(806), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(800), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(802), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(774), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(762), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(698), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(798), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(690), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(750), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(742), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(746), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(706), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(682), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(774), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(722), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(794), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(758), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(686), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(786), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(770), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(718), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(694), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(714), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(734), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(730), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(754), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(804), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(806), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(758), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(682), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(762), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(794), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(786), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(770), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(766), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11206] = 15,
    ACTIONS(808), 1,
      anon_sym_COLON,
    ACTIONS(810), 1,
      anon_sym_STAR,
    ACTIONS(812), 1,
      anon_sym_GT,
    ACTIONS(814), 1,
      sym__dquote_string,
    ACTIONS(816), 1,
      sym_class_reltype_aggregation,
    ACTIONS(820), 1,
      anon_sym_LT,
    ACTIONS(822), 1,
      anon_sym_DASH_DASH,
    ACTIONS(824), 1,
      anon_sym_DOT_DOT,
    STATE(264), 1,
      sym__class_linetype,
    STATE(395), 1,
      sym_class_relation,
    STATE(414), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(366), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(445), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11257] = 13,
    ACTIONS(810), 1,
      anon_sym_STAR,
    ACTIONS(812), 1,
      anon_sym_GT,
    ACTIONS(816), 1,
      sym_class_reltype_aggregation,
    ACTIONS(820), 1,
      anon_sym_LT,
    ACTIONS(822), 1,
      anon_sym_DASH_DASH,
    ACTIONS(824), 1,
      anon_sym_DOT_DOT,
    STATE(264), 1,
      sym__class_linetype,
    STATE(402), 1,
      sym_class_relation,
    STATE(414), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(366), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(445), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11302] = 9,
    STATE(213), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(466), 1,
      sym__flow_link,
    STATE(614), 1,
      sym_flow_link_arrow_start,
    STATE(693), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(828), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(830), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11339] = 8,
    ACTIONS(834), 1,
      sym__newline,
    STATE(307), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(396), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11374] = 6,
    ACTIONS(844), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      aux_sym_state_name_token1,
    STATE(231), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11405] = 9,
    STATE(213), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(466), 1,
      sym__flow_link,
    STATE(614), 1,
      sym_flow_link_arrow_start,
    STATE(693), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(850), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(852), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(855), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11442] = 9,
    STATE(210), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(466), 1,
      sym__flow_link,
    STATE(614), 1,
      sym_flow_link_arrow_start,
    STATE(693), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(828), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(830), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(858), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11479] = 8,
    ACTIONS(860), 1,
      sym__newline,
    STATE(313), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(396), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11514] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(732), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(734), 13,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_timeline_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [11538] = 6,
    ACTIONS(862), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_DASH_DASH_GT,
    STATE(577), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(864), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11568] = 3,
    ACTIONS(872), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(870), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11592] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(730), 13,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_timeline_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [11616] = 10,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(884), 1,
      sym_er_cardinarity_only_one,
    STATE(380), 1,
      sym__er_cardinarity,
    STATE(676), 1,
      sym_er_relation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(878), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(880), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(882), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(429), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11654] = 7,
    STATE(621), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(396), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11686] = 6,
    ACTIONS(886), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(893), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(222), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(889), 8,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_timeline_token1,
  [11715] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(898), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(896), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11738] = 5,
    ACTIONS(902), 1,
      anon_sym_TILDE,
    ACTIONS(904), 1,
      anon_sym_LT,
    STATE(301), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(900), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [11765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(910), 1,
      aux_sym_class_label_token1,
    STATE(270), 1,
      sym_state_description,
    ACTIONS(908), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(906), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11794] = 4,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(916), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(912), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11819] = 14,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(918), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(920), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(922), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(924), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(926), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(928), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(930), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(932), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(934), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(936), 1,
      aux_sym_diagram_timeline_token1,
    ACTIONS(938), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(222), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [11864] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(940), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11886] = 3,
    ACTIONS(946), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11908] = 3,
    ACTIONS(950), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(948), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11930] = 3,
    ACTIONS(954), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(952), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11952] = 3,
    ACTIONS(958), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(956), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11974] = 3,
    ACTIONS(962), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(960), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11996] = 3,
    ACTIONS(966), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(964), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12018] = 3,
    ACTIONS(970), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(968), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12040] = 3,
    ACTIONS(974), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(972), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12062] = 11,
    ACTIONS(976), 1,
      ts_builtin_sym_end,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    STATE(696), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12100] = 11,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(986), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    STATE(696), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12138] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(990), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(988), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12160] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(992), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12182] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(998), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(996), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12204] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1000), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12226] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1004), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12248] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1008), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12270] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1012), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12292] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1018), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1016), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12314] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1022), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1020), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12336] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1024), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12358] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(730), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1030), 1,
      sym__sequence_actor_word,
    STATE(269), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1032), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1028), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12408] = 3,
    ACTIONS(1036), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1034), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12430] = 3,
    ACTIONS(1040), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12452] = 12,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1046), 1,
      anon_sym_end,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(291), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(701), 1,
      sym__flow_stmt,
    STATE(889), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12492] = 3,
    ACTIONS(1052), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1050), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12514] = 5,
    ACTIONS(1054), 1,
      sym__class_name,
    ACTIONS(1056), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1040), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1038), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12540] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(734), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12562] = 3,
    ACTIONS(1060), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1058), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12584] = 3,
    ACTIONS(1064), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1062), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12606] = 3,
    ACTIONS(1068), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1066), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12628] = 3,
    ACTIONS(1072), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1070), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12650] = 3,
    ACTIONS(1076), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1074), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12672] = 11,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    STATE(696), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12710] = 3,
    ACTIONS(1082), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1080), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12732] = 10,
    ACTIONS(810), 1,
      anon_sym_STAR,
    ACTIONS(812), 1,
      anon_sym_GT,
    ACTIONS(820), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      sym__class_name,
    ACTIONS(1088), 1,
      sym_class_reltype_aggregation,
    STATE(590), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1086), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(445), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12768] = 3,
    ACTIONS(898), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(896), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12790] = 12,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1090), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(291), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(701), 1,
      sym__flow_stmt,
    STATE(910), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12830] = 5,
    ACTIONS(1054), 1,
      sym__class_name,
    ACTIONS(1056), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1068), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1066), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12856] = 10,
    ACTIONS(810), 1,
      anon_sym_STAR,
    ACTIONS(812), 1,
      anon_sym_GT,
    ACTIONS(820), 1,
      anon_sym_LT,
    ACTIONS(1088), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1092), 1,
      sym__class_name,
    STATE(486), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1094), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(445), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1098), 1,
      sym__sequence_actor_word,
    STATE(269), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1101), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1096), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12920] = 3,
    ACTIONS(1105), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1103), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12942] = 3,
    ACTIONS(1109), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1107), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12964] = 12,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1111), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(291), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(701), 1,
      sym__flow_stmt,
    STATE(924), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13004] = 3,
    ACTIONS(1115), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1113), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13026] = 3,
    ACTIONS(1119), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1117), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13048] = 3,
    ACTIONS(1123), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1121), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13070] = 3,
    ACTIONS(1127), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13092] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1129), 1,
      ts_builtin_sym_end,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1133), 1,
      sym__newline,
    ACTIONS(1135), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    STATE(311), 1,
      sym_pie_showdata,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(312), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13130] = 9,
    ACTIONS(844), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_state_composite_body,
    STATE(271), 1,
      sym__state_annotation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1139), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1141), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1143), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(230), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [13164] = 3,
    ACTIONS(1147), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1145), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13186] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1151), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1149), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13208] = 3,
    ACTIONS(1155), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13230] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1135), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1157), 1,
      ts_builtin_sym_end,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(308), 1,
      sym_pie_showdata,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(318), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13268] = 3,
    ACTIONS(1163), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13290] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13327] = 3,
    ACTIONS(1181), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(606), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13348] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(481), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13385] = 11,
    ACTIONS(1185), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1188), 1,
      anon_sym_subgraph,
    ACTIONS(1191), 1,
      anon_sym_end,
    ACTIONS(1193), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(287), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(701), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13422] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1196), 1,
      sym__newline,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(528), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13459] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13496] = 5,
    ACTIONS(1204), 1,
      aux_sym_flow_text_literal_token1,
    STATE(290), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1202), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1200), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13521] = 11,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1207), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(287), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(701), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13558] = 10,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(649), 1,
      sym__class_stmt,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13593] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13630] = 10,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    STATE(696), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13665] = 3,
    ACTIONS(1213), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1211), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13686] = 5,
    ACTIONS(1219), 1,
      aux_sym_flow_text_literal_token1,
    STATE(290), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1217), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1215), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13711] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(896), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      aux_sym_sequence_stmt_participant_token1,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [13730] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13767] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13804] = 10,
    ACTIONS(978), 1,
      anon_sym_class,
    ACTIONS(980), 1,
      anon_sym_LT_LT,
    ACTIONS(982), 1,
      sym__class_name,
    ACTIONS(984), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(605), 1,
      sym__class_stmt,
    STATE(661), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13839] = 3,
    ACTIONS(1227), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1225), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13860] = 11,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    ACTIONS(1229), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13897] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(582), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13931] = 5,
    ACTIONS(1235), 1,
      anon_sym_AMP,
    STATE(305), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1237), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1233), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13955] = 5,
    ACTIONS(1235), 1,
      anon_sym_AMP,
    STATE(310), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1241), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1239), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13979] = 10,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(730), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14013] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1243), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(468), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14047] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1245), 1,
      ts_builtin_sym_end,
    ACTIONS(1247), 1,
      sym__newline,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(314), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14079] = 7,
    ACTIONS(1249), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1253), 1,
      sym_solid_open_arrow,
    ACTIONS(1255), 1,
      anon_sym_DASH_DASH_GT,
    STATE(385), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(644), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1251), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14107] = 5,
    ACTIONS(1259), 1,
      anon_sym_AMP,
    STATE(310), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1262), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1257), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14131] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1157), 1,
      ts_builtin_sym_end,
    ACTIONS(1159), 1,
      sym__newline,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(318), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14163] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1157), 1,
      ts_builtin_sym_end,
    ACTIONS(1264), 1,
      sym__newline,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14195] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1266), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(458), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14229] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1264), 1,
      sym__newline,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14261] = 7,
    ACTIONS(1249), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1253), 1,
      sym_solid_open_arrow,
    ACTIONS(1255), 1,
      anon_sym_DASH_DASH_GT,
    STATE(379), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(644), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1251), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14289] = 10,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(500), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14323] = 9,
    ACTIONS(1270), 1,
      ts_builtin_sym_end,
    ACTIONS(1272), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1275), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1278), 1,
      sym__newline,
    ACTIONS(1281), 1,
      aux_sym_pie_label_token1,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14355] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1131), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1137), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1245), 1,
      ts_builtin_sym_end,
    ACTIONS(1264), 1,
      sym__newline,
    STATE(762), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(430), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14387] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1284), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(582), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14421] = 7,
    ACTIONS(1249), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1253), 1,
      sym_solid_open_arrow,
    ACTIONS(1255), 1,
      anon_sym_DASH_DASH_GT,
    STATE(382), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(644), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1251), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14449] = 7,
    ACTIONS(884), 1,
      sym_er_cardinarity_only_one,
    STATE(911), 1,
      sym__er_cardinarity,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(880), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(882), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(429), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [14477] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(582), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14511] = 7,
    ACTIONS(1249), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1253), 1,
      sym_solid_open_arrow,
    ACTIONS(1255), 1,
      anon_sym_DASH_DASH_GT,
    STATE(378), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(644), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1251), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14539] = 10,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_LT_LT,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(544), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14573] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1288), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [14591] = 10,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    ACTIONS(1290), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(582), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14625] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1294), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1292), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14644] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1298), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1296), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14663] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1302), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1300), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14682] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1306), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1304), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14701] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1310), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14720] = 9,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(468), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14751] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1314), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1312), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14770] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1318), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1316), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14789] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1322), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1320), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14808] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1262), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1257), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14827] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1326), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1324), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14846] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1330), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1328), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14865] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1334), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1332), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14884] = 9,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(478), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14915] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1336), 1,
      ts_builtin_sym_end,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1340), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(371), 1,
      sym_timeline_title,
    STATE(373), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [14946] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1346), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14965] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1350), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14984] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1356), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1354), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15003] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1360), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1358), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15022] = 9,
    ACTIONS(1042), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1044), 1,
      anon_sym_subgraph,
    ACTIONS(1048), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(582), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15053] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1364), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1362), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15072] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1368), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1366), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15091] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1340), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1370), 1,
      ts_builtin_sym_end,
    ACTIONS(1372), 1,
      sym__newline,
    STATE(368), 1,
      sym_timeline_title,
    STATE(369), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15122] = 6,
    ACTIONS(1378), 1,
      anon_sym_STAR,
    ACTIONS(1380), 1,
      anon_sym_DOLLAR,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1374), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1376), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [15146] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1382), 1,
      ts_builtin_sym_end,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(694), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15172] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1388), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1386), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15190] = 6,
    ACTIONS(1392), 1,
      anon_sym_STAR,
    ACTIONS(1394), 1,
      anon_sym_DOLLAR,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1390), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15214] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(694), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15240] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    ACTIONS(1398), 1,
      sym__newline,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(512), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15266] = 4,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1402), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1400), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [15286] = 6,
    ACTIONS(1407), 1,
      anon_sym_STAR,
    ACTIONS(1409), 1,
      anon_sym_DOLLAR,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1405), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15310] = 6,
    ACTIONS(1413), 1,
      anon_sym_STAR,
    ACTIONS(1415), 1,
      anon_sym_DOLLAR,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1411), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15334] = 9,
    ACTIONS(1417), 1,
      sym__newline,
    ACTIONS(1419), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1421), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1423), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(461), 1,
      sym__er_attribute_key_type,
    STATE(917), 1,
      sym__er_word,
    STATE(918), 1,
      sym_er_attribute_comment,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(733), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [15364] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1425), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(850), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15382] = 6,
    ACTIONS(1429), 1,
      anon_sym_STAR,
    ACTIONS(1431), 1,
      anon_sym_DOLLAR,
    STATE(356), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1427), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15406] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    ACTIONS(1433), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(694), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15432] = 9,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1169), 1,
      anon_sym_PLUS,
    ACTIONS(1171), 1,
      anon_sym_DASH,
    ACTIONS(1173), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      sym__alpha_num_token,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    STATE(697), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [15462] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    ACTIONS(1435), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(694), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15488] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1439), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1437), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15506] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1441), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15524] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    ACTIONS(1445), 1,
      sym__newline,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(652), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15550] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1336), 1,
      ts_builtin_sym_end,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(373), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15575] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1336), 1,
      ts_builtin_sym_end,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1447), 1,
      sym__newline,
    STATE(372), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15600] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(694), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1449), 1,
      ts_builtin_sym_end,
    ACTIONS(1451), 1,
      sym__newline,
    STATE(375), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1453), 1,
      ts_builtin_sym_end,
    ACTIONS(1455), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1458), 1,
      sym__timeline_data_text,
    ACTIONS(1461), 1,
      sym__newline,
    STATE(372), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1447), 1,
      sym__newline,
    ACTIONS(1449), 1,
      ts_builtin_sym_end,
    STATE(372), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15698] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(603), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1338), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1342), 1,
      sym__timeline_data_text,
    ACTIONS(1447), 1,
      sym__newline,
    ACTIONS(1464), 1,
      ts_builtin_sym_end,
    STATE(372), 4,
      sym_directive,
      sym__timeline_stmt,
      sym_timeline_stmt_data,
      aux_sym_diagram_timeline_repeat1,
  [15746] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    STATE(220), 1,
      sym_er_entity_name,
    STATE(652), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(740), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15769] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1466), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15783] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1468), 1,
      anon_sym_PLUS,
    ACTIONS(1470), 1,
      anon_sym_DASH,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(870), 1,
      sym_sequence_actor,
    STATE(557), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1468), 1,
      anon_sym_PLUS,
    ACTIONS(1470), 1,
      anon_sym_DASH,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(857), 1,
      sym_sequence_actor,
    STATE(633), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15835] = 5,
    ACTIONS(1472), 1,
      anon_sym_DASH_DASH,
    STATE(321), 1,
      sym__er_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(383), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1474), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15855] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1056), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1066), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15871] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1468), 1,
      anon_sym_PLUS,
    ACTIONS(1470), 1,
      anon_sym_DASH,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(885), 1,
      sym_sequence_actor,
    STATE(525), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15897] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1476), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15911] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1056), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1038), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15927] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1468), 1,
      anon_sym_PLUS,
    ACTIONS(1470), 1,
      anon_sym_DASH,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(900), 1,
      sym_sequence_actor,
    STATE(490), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15953] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1478), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15967] = 6,
    ACTIONS(1480), 1,
      anon_sym_RBRACE,
    ACTIONS(1482), 1,
      sym__er_alphanum,
    STATE(716), 1,
      sym_er_attribute_type,
    STATE(909), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(442), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15988] = 4,
    ACTIONS(1486), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1484), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [16005] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1491), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1489), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16020] = 6,
    ACTIONS(1493), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1495), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1497), 1,
      aux_sym_note_placement_right_token1,
    STATE(567), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16041] = 6,
    ACTIONS(1495), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1497), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1499), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(537), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16062] = 4,
    ACTIONS(1501), 1,
      anon_sym_TILDE,
    STATE(449), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(900), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16079] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1505), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1503), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1511), 1,
      sym_pie_title,
    ACTIONS(1509), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_pie_label_token1,
    ACTIONS(1507), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [16113] = 7,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1513), 1,
      sym__class_name,
    ACTIONS(1515), 1,
      sym__dquote_string,
    STATE(224), 1,
      sym_class_name_body,
    STATE(545), 1,
      aux_sym_class_name_body_repeat1,
    STATE(591), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16136] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1519), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1517), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16151] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1056), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1066), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [16166] = 6,
    ACTIONS(1495), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1497), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1521), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(563), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16187] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1056), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1038), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [16202] = 6,
    ACTIONS(1495), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1497), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1523), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(498), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(801), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16223] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1527), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1525), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16238] = 7,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1513), 1,
      sym__class_name,
    ACTIONS(1529), 1,
      sym__dquote_string,
    STATE(224), 1,
      sym_class_name_body,
    STATE(485), 1,
      sym_class_name,
    STATE(545), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16261] = 6,
    ACTIONS(1533), 1,
      sym__alpha_num_token,
    STATE(411), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(684), 1,
      sym_flow_vertex_text,
    STATE(865), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1531), 2,
      anon_sym_SEMI,
      sym__newline,
  [16282] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1537), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1535), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [16297] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1539), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16309] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1543), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(903), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16327] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1545), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16339] = 5,
    ACTIONS(1547), 1,
      anon_sym_RBRACE,
    ACTIONS(1549), 1,
      sym__er_alphanum,
    STATE(716), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(408), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16357] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16369] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1552), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16381] = 4,
    ACTIONS(1556), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1554), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [16397] = 6,
    ACTIONS(1558), 1,
      sym__class_name,
    ACTIONS(1560), 1,
      sym__bquote_string,
    STATE(392), 1,
      sym_class_name_body,
    STATE(457), 1,
      sym_class_name,
    STATE(594), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16417] = 6,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1513), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(485), 1,
      sym_class_name,
    STATE(545), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16437] = 5,
    ACTIONS(822), 1,
      anon_sym_DASH_DASH,
    ACTIONS(824), 1,
      anon_sym_DOT_DOT,
    STATE(268), 1,
      sym__class_linetype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(366), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16455] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1562), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(890), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16473] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1564), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(891), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16491] = 5,
    ACTIONS(1566), 1,
      sym__dquote_string,
    STATE(212), 1,
      sym_state_alias,
    STATE(278), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16509] = 5,
    ACTIONS(1568), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1570), 1,
      aux_sym_note_placement_right_token1,
    STATE(654), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(672), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16527] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1572), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(893), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16545] = 6,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1558), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(488), 1,
      aux_sym_class_name_body_repeat1,
    STATE(750), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16565] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1574), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16577] = 4,
    ACTIONS(1576), 1,
      sym__alpha_num_token,
    STATE(422), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1484), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16593] = 5,
    ACTIONS(1579), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1581), 1,
      sym_flow_text_quoted,
    STATE(446), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(894), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16611] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1583), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(895), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16629] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1585), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(898), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16647] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1587), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16659] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1589), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16671] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1591), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16683] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1593), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16695] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1595), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16707] = 5,
    ACTIONS(862), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_DASH_DASH_GT,
    STATE(660), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(864), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16725] = 5,
    ACTIONS(1568), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1570), 1,
      aux_sym_note_placement_right_token1,
    STATE(556), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(672), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16743] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1597), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(904), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16761] = 6,
    ACTIONS(984), 1,
      sym__bquote_string,
    ACTIONS(1513), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(511), 1,
      sym_class_name,
    STATE(545), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16781] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1599), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(905), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16799] = 5,
    ACTIONS(1579), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1601), 1,
      sym_flow_text_quoted,
    STATE(446), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(906), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16817] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1603), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(907), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16835] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1605), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16847] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1607), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(705), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16865] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1066), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16877] = 5,
    ACTIONS(1541), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1609), 1,
      sym_flow_text_quoted,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(662), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16895] = 5,
    ACTIONS(1482), 1,
      sym__er_alphanum,
    ACTIONS(1611), 1,
      anon_sym_RBRACE,
    STATE(716), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(408), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16913] = 4,
    ACTIONS(1613), 1,
      sym__alpha_num_token,
    STATE(422), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1615), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16929] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1617), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16941] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16953] = 4,
    ACTIONS(1621), 1,
      aux_sym_flow_text_literal_token1,
    STATE(448), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1215), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16968] = 4,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1623), 2,
      anon_sym_SEMI,
      sym__newline,
  [16983] = 4,
    ACTIONS(1625), 1,
      aux_sym_flow_text_literal_token1,
    STATE(448), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16998] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1225), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17009] = 3,
    ACTIONS(1628), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1191), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [17022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(728), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym__timeline_data_text,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17037] = 4,
    STATE(743), 1,
      sym_er_role,
    STATE(744), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1630), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [17052] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1211), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1632), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(1634), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym__timeline_data_text,
  [17078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1638), 1,
      aux_sym_class_label_token1,
    STATE(708), 1,
      sym_class_label,
    ACTIONS(1636), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1640), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(1642), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym__timeline_data_text,
  [17110] = 4,
    ACTIONS(1646), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1648), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1644), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17125] = 4,
    ACTIONS(1650), 1,
      ts_builtin_sym_end,
    STATE(467), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1652), 2,
      anon_sym_SEMI,
      sym__newline,
  [17140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(732), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym__timeline_data_text,
    ACTIONS(734), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      sym__sequence_actor_word,
    STATE(460), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1096), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17172] = 5,
    ACTIONS(1419), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1657), 1,
      sym__newline,
    STATE(912), 1,
      sym_er_attribute_comment,
    STATE(917), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17189] = 3,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1659), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17202] = 3,
    STATE(358), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1661), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17215] = 3,
    STATE(922), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(828), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [17228] = 3,
    STATE(357), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17241] = 5,
    ACTIONS(1665), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(304), 1,
      sym_flow_vertex,
    STATE(360), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17258] = 4,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1667), 2,
      anon_sym_SEMI,
      sym__newline,
  [17273] = 4,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    STATE(447), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1667), 2,
      anon_sym_SEMI,
      sym__newline,
  [17288] = 3,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1669), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [17301] = 3,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1671), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [17314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(910), 1,
      aux_sym_class_label_token1,
    STATE(270), 1,
      sym_state_description,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17331] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1673), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [17342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1675), 1,
      sym__sequence_actor_word,
    STATE(460), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1028), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1638), 1,
      aux_sym_class_label_token1,
    STATE(717), 1,
      sym_class_label,
    ACTIONS(1677), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1638), 1,
      aux_sym_class_label_token1,
    STATE(729), 1,
      sym_class_label,
    ACTIONS(1679), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17393] = 4,
    ACTIONS(1681), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1683), 2,
      anon_sym_SEMI,
      sym__newline,
  [17408] = 4,
    ACTIONS(1290), 1,
      ts_builtin_sym_end,
    STATE(476), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1686), 2,
      anon_sym_SEMI,
      sym__newline,
  [17423] = 4,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(477), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1623), 2,
      anon_sym_SEMI,
      sym__newline,
  [17438] = 4,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(1688), 1,
      sym__newline,
    STATE(624), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(753), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [17468] = 4,
    ACTIONS(1692), 1,
      anon_sym_RBRACE,
    ACTIONS(1694), 1,
      sym__newline,
    STATE(502), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1696), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(132), 1,
      sym_sequence_text,
  [17498] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1698), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17508] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1427), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17518] = 3,
    ACTIONS(1700), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1636), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17530] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1702), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [17540] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1704), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17550] = 4,
    ACTIONS(1706), 1,
      sym__class_name,
    ACTIONS(1708), 1,
      sym__bquote_string,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(902), 1,
      sym_sequence_actor,
  [17580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(901), 1,
      sym_sequence_actor,
  [17596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(735), 1,
      sym_sequence_actor,
  [17612] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1712), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17626] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1714), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(496), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1696), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(130), 1,
      sym_sequence_text,
  [17656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(916), 1,
      sym_sequence_text,
  [17672] = 4,
    ACTIONS(1716), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1718), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(496), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17686] = 4,
    ACTIONS(1721), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1723), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(899), 1,
      sym_sequence_actor,
  [17716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(702), 1,
      sym_sequence_actor,
  [17732] = 4,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    ACTIONS(1726), 1,
      sym__newline,
    STATE(532), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1696), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(129), 1,
      sym_sequence_text,
  [17762] = 4,
    ACTIONS(1209), 1,
      anon_sym_RBRACE,
    ACTIONS(1726), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17776] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1728), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17786] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1730), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17796] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1732), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17806] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1734), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17816] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1736), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17826] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1738), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17836] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1740), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17846] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1742), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17856] = 3,
    ACTIONS(1744), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1679), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17868] = 4,
    ACTIONS(1746), 1,
      ts_builtin_sym_end,
    ACTIONS(1748), 1,
      sym__newline,
    STATE(651), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17882] = 4,
    ACTIONS(1750), 1,
      ts_builtin_sym_end,
    ACTIONS(1752), 1,
      sym__newline,
    STATE(659), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(681), 1,
      sym_sequence_actor,
  [17912] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1754), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(897), 1,
      sym_sequence_text,
  [17938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(830), 1,
      sym_sequence_text,
  [17954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(828), 1,
      sym_sequence_text,
  [17970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(827), 1,
      sym_sequence_text,
  [17986] = 4,
    ACTIONS(1756), 1,
      anon_sym_COLON,
    ACTIONS(1759), 1,
      sym__newline,
    STATE(520), 1,
      aux_sym_timeline_stmt_data_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(896), 1,
      sym_sequence_text,
  [18016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(887), 1,
      sym_sequence_actor,
  [18032] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1761), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(496), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18046] = 3,
    ACTIONS(1765), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1763), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(886), 1,
      sym_sequence_actor,
  [18074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(921), 1,
      sym_sequence_text,
  [18090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(772), 1,
      sym_sequence_actor,
  [18106] = 4,
    ACTIONS(1767), 1,
      anon_sym_RBRACE,
    ACTIONS(1769), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18120] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1771), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(91), 1,
      sym_sequence_text,
    STATE(139), 1,
      sym__sequence_rest_text,
  [18150] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1775), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18164] = 4,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    ACTIONS(1777), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(90), 1,
      sym_sequence_text,
    STATE(139), 1,
      sym__sequence_rest_text,
  [18194] = 4,
    ACTIONS(1779), 1,
      anon_sym_RBRACE,
    ACTIONS(1781), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18208] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1784), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(496), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym_sequence_text,
    STATE(139), 1,
      sym__sequence_rest_text,
  [18238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(884), 1,
      sym_sequence_actor,
  [18254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(698), 1,
      sym_sequence_actor,
  [18270] = 4,
    ACTIONS(1382), 1,
      ts_builtin_sym_end,
    ACTIONS(1786), 1,
      sym__newline,
    STATE(610), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18284] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1788), 1,
      sym__newline,
    STATE(624), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(86), 1,
      sym_sequence_text,
    STATE(139), 1,
      sym__sequence_rest_text,
  [18314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(882), 1,
      sym_sequence_text,
  [18330] = 4,
    ACTIONS(986), 1,
      ts_builtin_sym_end,
    ACTIONS(1790), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18344] = 4,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    ACTIONS(1792), 1,
      sym__newline,
    STATE(558), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18358] = 4,
    ACTIONS(1708), 1,
      sym__bquote_string,
    ACTIONS(1794), 1,
      sym__class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(692), 1,
      sym_sequence_actor,
  [18388] = 4,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    ACTIONS(1792), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(817), 1,
      sym_sequence_actor,
  [18418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(811), 1,
      sym_sequence_actor,
  [18434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(881), 1,
      sym_sequence_text,
  [18450] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1796), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18464] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1798), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(496), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18478] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1800), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(872), 1,
      sym_sequence_actor,
  [18504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(695), 1,
      sym_sequence_actor,
  [18520] = 3,
    STATE(804), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(871), 1,
      sym_sequence_actor,
  [18548] = 4,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    ACTIONS(1802), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(679), 1,
      sym_sequence_actor,
  [18578] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1804), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(826), 1,
      sym_sequence_text,
  [18604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(773), 1,
      sym_sequence_actor,
  [18620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(847), 1,
      sym_sequence_actor,
  [18636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(824), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [18652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(793), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [18668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(787), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [18684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(869), 1,
      sym_sequence_actor,
  [18700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(687), 1,
      sym_sequence_actor,
  [18716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(786), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [18732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(785), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [18748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(867), 1,
      sym_sequence_text,
  [18764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(866), 1,
      sym_sequence_text,
  [18780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(722), 1,
      sym_sequence_actor,
  [18796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(842), 1,
      sym_sequence_text,
  [18812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(841), 1,
      sym_sequence_text,
  [18828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(840), 1,
      sym_sequence_text,
  [18844] = 3,
    STATE(226), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1806), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(838), 1,
      sym_sequence_actor,
  [18872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(837), 1,
      sym_sequence_actor,
  [18888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(836), 1,
      sym_sequence_actor,
  [18904] = 4,
    ACTIONS(1808), 1,
      sym__alpha_num_token,
    STATE(597), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(923), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18918] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1681), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18928] = 4,
    ACTIONS(1810), 1,
      sym__alpha_num_token,
    STATE(411), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(873), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(835), 1,
      sym_sequence_actor,
  [18958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1812), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(183), 1,
      sym__sequence_rest_text,
    STATE(194), 1,
      sym_sequence_text,
  [18974] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1814), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1812), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(183), 1,
      sym__sequence_rest_text,
    STATE(196), 1,
      sym_sequence_text,
  [19000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1812), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(183), 1,
      sym__sequence_rest_text,
    STATE(185), 1,
      sym_sequence_text,
  [19016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1812), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(166), 1,
      sym_sequence_text,
    STATE(183), 1,
      sym__sequence_rest_text,
  [19032] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1094), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [19042] = 3,
    ACTIONS(1818), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1816), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(784), 1,
      sym_sequence_actor,
  [19070] = 4,
    ACTIONS(1820), 1,
      ts_builtin_sym_end,
    ACTIONS(1822), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19084] = 4,
    ACTIONS(1706), 1,
      sym__class_name,
    ACTIONS(1825), 1,
      sym__bquote_string,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(820), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(819), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19130] = 4,
    ACTIONS(1556), 1,
      sym__alpha_num_token,
    ACTIONS(1615), 1,
      anon_sym_PIPE,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(915), 1,
      sym_sequence_text,
  [19160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(818), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(914), 1,
      sym_sequence_actor,
  [19192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
    STATE(913), 1,
      sym_sequence_text,
  [19208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(816), 1,
      sym_sequence_actor,
  [19224] = 4,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    ACTIONS(1827), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19238] = 4,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(1688), 1,
      sym__newline,
    STATE(540), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19252] = 4,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
    ACTIONS(1829), 1,
      sym__newline,
    STATE(543), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19266] = 4,
    ACTIONS(1831), 1,
      anon_sym_COLON,
    ACTIONS(1833), 1,
      sym__newline,
    STATE(520), 1,
      aux_sym_timeline_stmt_data_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(815), 1,
      sym_sequence_actor,
  [19296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(814), 1,
      sym_sequence_actor,
  [19312] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(813), 1,
      sym_sequence_actor,
  [19328] = 4,
    ACTIONS(1835), 1,
      ts_builtin_sym_end,
    ACTIONS(1837), 1,
      sym__newline,
    STATE(610), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(781), 1,
      sym_sequence_actor,
  [19358] = 4,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    ACTIONS(1827), 1,
      sym__newline,
    STATE(610), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19372] = 4,
    ACTIONS(1665), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(336), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19386] = 4,
    ACTIONS(1840), 1,
      sym__alpha_num_token,
    STATE(443), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(464), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(725), 1,
      sym_sequence_actor,
  [19416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(821), 1,
      sym_sequence_actor,
  [19432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(805), 1,
      sym_sequence_actor,
  [19448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(759), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(754), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(796), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19496] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1842), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19506] = 4,
    ACTIONS(1844), 1,
      anon_sym_COLON,
    ACTIONS(1846), 1,
      aux_sym_gantt_task_text_token1,
    STATE(622), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(795), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19536] = 4,
    ACTIONS(1849), 1,
      ts_builtin_sym_end,
    ACTIONS(1851), 1,
      sym__newline,
    STATE(624), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(756), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(794), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(792), 1,
      sym_sequence_actor,
  [19598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(791), 1,
      sym_sequence_actor,
  [19614] = 4,
    ACTIONS(1854), 1,
      sym__class_name,
    ACTIONS(1857), 1,
      sym__bquote_string,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(790), 1,
      sym_sequence_actor,
  [19644] = 4,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
    ACTIONS(1829), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(789), 1,
      sym_sequence_actor,
  [19674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(880), 1,
      sym_sequence_actor,
  [19690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(776), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(775), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(774), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1696), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(131), 1,
      sym_sequence_text,
  [19754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(771), 1,
      sym_sequence_text,
    STATE(825), 1,
      sym__sequence_rest_text,
  [19770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1859), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(160), 1,
      sym_sequence_text,
  [19786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1859), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(161), 1,
      sym_sequence_text,
  [19802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1859), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(162), 1,
      sym_sequence_text,
  [19818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1859), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(164), 1,
      sym_sequence_text,
  [19834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1863), 1,
      sym__sequence_actor_word,
    ACTIONS(1861), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1867), 1,
      sym__sequence_actor_word,
    ACTIONS(1865), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1871), 1,
      sym__sequence_actor_word,
    ACTIONS(1869), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(751), 1,
      sym_sequence_actor,
  [19892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(747), 1,
      sym_sequence_actor,
  [19908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(808), 1,
      sym_sequence_actor,
  [19924] = 4,
    ACTIONS(1873), 1,
      ts_builtin_sym_end,
    ACTIONS(1875), 1,
      sym__newline,
    STATE(631), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(757), 1,
      sym_sequence_actor,
  [19954] = 4,
    ACTIONS(1433), 1,
      ts_builtin_sym_end,
    ACTIONS(1877), 1,
      sym__newline,
    STATE(610), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19968] = 4,
    ACTIONS(1433), 1,
      ts_builtin_sym_end,
    ACTIONS(1877), 1,
      sym__newline,
    STATE(612), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19982] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1879), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19992] = 3,
    STATE(860), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20004] = 4,
    ACTIONS(1881), 1,
      anon_sym_COLON,
    ACTIONS(1883), 1,
      aux_sym_gantt_task_text_token1,
    STATE(622), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1710), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(748), 1,
      sym_sequence_actor,
  [20034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(250), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(752), 1,
      sym_sequence_actor,
  [20050] = 4,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(1885), 1,
      sym__newline,
    STATE(479), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20064] = 4,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(1885), 1,
      sym__newline,
    STATE(624), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20078] = 3,
    STATE(226), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20090] = 4,
    ACTIONS(1708), 1,
      sym__bquote_string,
    ACTIONS(1887), 1,
      sym__class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20104] = 3,
    ACTIONS(1889), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1891), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(770), 1,
      sym__sequence_rest_text,
  [20128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(243), 1,
      sym_gantt_meta_format,
  [20141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(239), 1,
      sym_gantt_meta_format,
  [20154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(244), 1,
      sym_gantt_meta_format,
  [20167] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1895), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(910), 1,
      aux_sym_class_label_token1,
    STATE(236), 1,
      sym_state_description,
  [20189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(245), 1,
      sym_gantt_meta_format,
  [20202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(246), 1,
      sym_gantt_meta_format,
  [20215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(247), 1,
      sym_gantt_meta_format,
  [20228] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1897), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(760), 1,
      sym__sequence_rest_text,
  [20250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(764), 1,
      sym__sequence_rest_text,
  [20263] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1899), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20272] = 3,
    ACTIONS(1384), 1,
      sym__er_alphanum,
    STATE(874), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20283] = 3,
    ACTIONS(1831), 1,
      anon_sym_COLON,
    STATE(606), 1,
      aux_sym_timeline_stmt_data_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(878), 1,
      sym__sequence_rest_text,
  [20307] = 3,
    ACTIONS(1901), 1,
      anon_sym_COLON,
    ACTIONS(1903), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(798), 1,
      sym__sequence_rest_text,
  [20331] = 3,
    ACTIONS(1905), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1907), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(879), 1,
      sym__sequence_rest_text,
  [20355] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1849), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20364] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1909), 2,
      anon_sym_SEMI,
      sym__newline,
  [20373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(240), 1,
      sym_gantt_meta_format,
  [20386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(242), 1,
      sym_gantt_meta_format,
  [20399] = 3,
    ACTIONS(1911), 1,
      anon_sym_COLON,
    ACTIONS(1913), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(769), 1,
      sym__sequence_rest_text,
  [20423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(848), 1,
      sym__sequence_rest_text,
  [20436] = 3,
    ACTIONS(1915), 1,
      anon_sym_COLON,
    ACTIONS(1917), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(777), 1,
      sym__sequence_rest_text,
  [20460] = 3,
    ACTIONS(1919), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1921), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20471] = 3,
    ACTIONS(1923), 1,
      anon_sym_PIPE,
    ACTIONS(1925), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20482] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1835), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20491] = 3,
    ACTIONS(1927), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1929), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20502] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1820), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20511] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1931), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20520] = 3,
    ACTIONS(1933), 1,
      anon_sym_COLON,
    ACTIONS(1935), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20531] = 3,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(910), 1,
      aux_sym_class_label_token1,
    STATE(276), 1,
      sym_state_description,
  [20555] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1937), 2,
      anon_sym_SEMI,
      sym__newline,
  [20564] = 3,
    ACTIONS(1939), 1,
      anon_sym_COLON,
    ACTIONS(1941), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20575] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1943), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20584] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1945), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20593] = 3,
    ACTIONS(1947), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1949), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(761), 1,
      sym__sequence_rest_text,
  [20617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1893), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(241), 1,
      sym_gantt_meta_format,
  [20630] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1679), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20639] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1951), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20648] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1953), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(803), 1,
      sym__sequence_rest_text,
  [20670] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1955), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20679] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1957), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1690), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(809), 1,
      sym__sequence_rest_text,
  [20701] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1959), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20710] = 3,
    ACTIONS(1961), 1,
      sym__er_alphanum,
    STATE(359), 1,
      sym_er_attribute_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20721] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1963), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20730] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1965), 2,
      anon_sym_COLON,
      sym__newline,
  [20739] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1967), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20748] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1969), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20757] = 3,
    ACTIONS(1971), 1,
      anon_sym_COLON,
    ACTIONS(1973), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20768] = 3,
    ACTIONS(1975), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1977), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20779] = 3,
    ACTIONS(1979), 1,
      anon_sym_COLON,
    ACTIONS(1981), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20790] = 3,
    ACTIONS(1983), 1,
      anon_sym_COLON,
    ACTIONS(1985), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20801] = 3,
    ACTIONS(1987), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1989), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20812] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1991), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20821] = 3,
    ACTIONS(1993), 1,
      anon_sym_COLON,
    ACTIONS(1995), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20832] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1997), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20841] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1677), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20850] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1779), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20859] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1999), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20868] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2001), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20877] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2003), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20886] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2005), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20895] = 3,
    ACTIONS(2007), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2009), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20906] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2011), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20915] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2013), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20924] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2015), 2,
      anon_sym_SEMI,
      sym__newline,
  [20933] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2017), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [20942] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2019), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20951] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2021), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20960] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2023), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20969] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2025), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20978] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2027), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20987] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2029), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20996] = 3,
    ACTIONS(2031), 1,
      anon_sym_COLON,
    ACTIONS(2033), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21007] = 3,
    ACTIONS(2035), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2037), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21018] = 3,
    ACTIONS(2039), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2041), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21029] = 3,
    ACTIONS(2043), 1,
      anon_sym_COLON,
    ACTIONS(2045), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21040] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2047), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21049] = 2,
    ACTIONS(2049), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21057] = 2,
    ACTIONS(2051), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21065] = 2,
    ACTIONS(2053), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21073] = 2,
    ACTIONS(2055), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21081] = 2,
    ACTIONS(2057), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21089] = 2,
    ACTIONS(2059), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21097] = 2,
    ACTIONS(2061), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21105] = 2,
    ACTIONS(2063), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21113] = 2,
    ACTIONS(2065), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21121] = 2,
    ACTIONS(2067), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21129] = 2,
    ACTIONS(2069), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21137] = 2,
    ACTIONS(2071), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21145] = 2,
    ACTIONS(2073), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21153] = 2,
    ACTIONS(2075), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21161] = 2,
    ACTIONS(2077), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21169] = 2,
    ACTIONS(2079), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21177] = 2,
    ACTIONS(2081), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21185] = 2,
    ACTIONS(2083), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21193] = 2,
    ACTIONS(2085), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21201] = 2,
    ACTIONS(2087), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21209] = 2,
    ACTIONS(2089), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21217] = 2,
    ACTIONS(2091), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21225] = 2,
    ACTIONS(2093), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21233] = 2,
    ACTIONS(2095), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21241] = 2,
    ACTIONS(2097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21249] = 2,
    ACTIONS(2099), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21257] = 2,
    ACTIONS(2101), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21265] = 2,
    ACTIONS(2103), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21273] = 2,
    ACTIONS(2105), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21281] = 2,
    ACTIONS(2107), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21289] = 2,
    ACTIONS(2109), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21297] = 2,
    ACTIONS(2111), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21305] = 2,
    ACTIONS(2113), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21313] = 2,
    ACTIONS(2115), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21321] = 2,
    ACTIONS(2117), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21329] = 2,
    ACTIONS(2119), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21337] = 2,
    ACTIONS(2121), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21345] = 2,
    ACTIONS(2123), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21353] = 2,
    ACTIONS(2125), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21361] = 2,
    ACTIONS(2127), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21369] = 2,
    ACTIONS(2129), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21377] = 2,
    ACTIONS(2131), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21385] = 2,
    ACTIONS(2133), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21393] = 2,
    ACTIONS(2135), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21401] = 2,
    ACTIONS(2137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21409] = 2,
    ACTIONS(2139), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21417] = 2,
    ACTIONS(2141), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21425] = 2,
    ACTIONS(2143), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2145), 1,
      sym__sequence_actor_word,
  [21443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2147), 1,
      sym__sequence_actor_word,
  [21453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2149), 1,
      sym__sequence_actor_word,
  [21463] = 2,
    ACTIONS(2151), 1,
      aux_sym_class_generics_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21471] = 2,
    ACTIONS(2153), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21479] = 2,
    ACTIONS(2155), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21487] = 2,
    ACTIONS(2157), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21495] = 2,
    ACTIONS(2159), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21503] = 2,
    ACTIONS(2161), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21511] = 2,
    ACTIONS(2163), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21519] = 2,
    ACTIONS(2165), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21527] = 2,
    ACTIONS(2167), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21535] = 2,
    ACTIONS(2169), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21543] = 2,
    ACTIONS(2171), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21551] = 2,
    ACTIONS(2173), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21559] = 2,
    ACTIONS(2175), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21567] = 2,
    ACTIONS(2177), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21575] = 2,
    ACTIONS(2179), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21583] = 2,
    ACTIONS(2181), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21591] = 2,
    ACTIONS(2183), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21599] = 2,
    ACTIONS(2185), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21607] = 2,
    ACTIONS(2187), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21615] = 2,
    ACTIONS(2189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21623] = 2,
    ACTIONS(2191), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21631] = 2,
    ACTIONS(746), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21639] = 2,
    ACTIONS(2193), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21647] = 2,
    ACTIONS(742), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21655] = 2,
    ACTIONS(2195), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21663] = 2,
    ACTIONS(2197), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21671] = 2,
    ACTIONS(2199), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21679] = 2,
    ACTIONS(2201), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21687] = 2,
    ACTIONS(2203), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21695] = 2,
    ACTIONS(2205), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21703] = 2,
    ACTIONS(2207), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21711] = 2,
    ACTIONS(2209), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21719] = 2,
    ACTIONS(2211), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21727] = 2,
    ACTIONS(2213), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21735] = 2,
    ACTIONS(2215), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21743] = 2,
    ACTIONS(2217), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21751] = 2,
    ACTIONS(2219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21759] = 2,
    ACTIONS(2221), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21767] = 2,
    ACTIONS(2223), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21775] = 2,
    ACTIONS(2225), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21783] = 2,
    ACTIONS(2227), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2229), 1,
      sym_pie_value,
  [21801] = 2,
    ACTIONS(2231), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2233), 1,
      sym__timeline_text,
  [21819] = 2,
    ACTIONS(2235), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21827] = 2,
    ACTIONS(1901), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21835] = 2,
    ACTIONS(2237), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2239), 1,
      sym__sequence_actor_word,
  [21853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2241), 1,
      sym__sequence_actor_word,
  [21863] = 2,
    ACTIONS(2243), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21871] = 2,
    ACTIONS(2245), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21879] = 2,
    ACTIONS(2247), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21887] = 2,
    ACTIONS(2249), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21895] = 2,
    ACTIONS(2251), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21903] = 2,
    ACTIONS(2253), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21911] = 2,
    ACTIONS(2255), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21919] = 2,
    ACTIONS(2257), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21927] = 2,
    ACTIONS(2259), 1,
      aux_sym_class_generics_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [21935] = 2,
    ACTIONS(2261), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21943] = 2,
    ACTIONS(2263), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21951] = 2,
    ACTIONS(2265), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21959] = 2,
    ACTIONS(2267), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2269), 1,
      sym_gantt_task_data,
  [21977] = 2,
    ACTIONS(2271), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21985] = 2,
    ACTIONS(2273), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21993] = 2,
    ACTIONS(2275), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22001] = 2,
    ACTIONS(2277), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22009] = 2,
    ACTIONS(1911), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22017] = 2,
    ACTIONS(2279), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22025] = 2,
    ACTIONS(2281), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22033] = 2,
    ACTIONS(2283), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22041] = 2,
    ACTIONS(2285), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22049] = 2,
    ACTIONS(2287), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22057] = 2,
    ACTIONS(2289), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2291), 1,
      sym__timeline_data_text,
  [22075] = 2,
    ACTIONS(2293), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22083] = 2,
    ACTIONS(2295), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22091] = 2,
    ACTIONS(2297), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22099] = 2,
    ACTIONS(2299), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22107] = 2,
    ACTIONS(2301), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22115] = 2,
    ACTIONS(2303), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22123] = 2,
    ACTIONS(2305), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22131] = 2,
    ACTIONS(1933), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22139] = 2,
    ACTIONS(2307), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22147] = 2,
    ACTIONS(2309), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22155] = 2,
    ACTIONS(2311), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22163] = 2,
    ACTIONS(2313), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22171] = 2,
    ACTIONS(2315), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22179] = 2,
    ACTIONS(2317), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22187] = 2,
    ACTIONS(2319), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22195] = 2,
    ACTIONS(2321), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22203] = 2,
    ACTIONS(2323), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22211] = 2,
    ACTIONS(2325), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22219] = 2,
    ACTIONS(2327), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22227] = 2,
    ACTIONS(2329), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22235] = 2,
    ACTIONS(2331), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22243] = 2,
    ACTIONS(2333), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22251] = 2,
    ACTIONS(1939), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22259] = 2,
    ACTIONS(2335), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22267] = 2,
    ACTIONS(2337), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22275] = 2,
    ACTIONS(2339), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22283] = 2,
    ACTIONS(2341), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22291] = 2,
    ACTIONS(2343), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22299] = 2,
    ACTIONS(2345), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22307] = 2,
    ACTIONS(2347), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22315] = 2,
    ACTIONS(2349), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22323] = 2,
    ACTIONS(2351), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22331] = 2,
    ACTIONS(2353), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22339] = 2,
    ACTIONS(2355), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22347] = 2,
    ACTIONS(2357), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22355] = 2,
    ACTIONS(2359), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22363] = 2,
    ACTIONS(2361), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22371] = 2,
    ACTIONS(2363), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22379] = 2,
    ACTIONS(2365), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22387] = 2,
    ACTIONS(2367), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22395] = 2,
    ACTIONS(2369), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22403] = 2,
    ACTIONS(1657), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22411] = 2,
    ACTIONS(2371), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22419] = 2,
    ACTIONS(2373), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22427] = 2,
    ACTIONS(2375), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22435] = 2,
    ACTIONS(2377), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22443] = 2,
    ACTIONS(2379), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22451] = 2,
    ACTIONS(2381), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22459] = 2,
    ACTIONS(2383), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22467] = 2,
    ACTIONS(2385), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22475] = 2,
    ACTIONS(2387), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22483] = 2,
    ACTIONS(2389), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22491] = 2,
    ACTIONS(2391), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 327,
  [SMALL_STATE(6)] = 436,
  [SMALL_STATE(7)] = 545,
  [SMALL_STATE(8)] = 654,
  [SMALL_STATE(9)] = 763,
  [SMALL_STATE(10)] = 872,
  [SMALL_STATE(11)] = 976,
  [SMALL_STATE(12)] = 1080,
  [SMALL_STATE(13)] = 1184,
  [SMALL_STATE(14)] = 1288,
  [SMALL_STATE(15)] = 1391,
  [SMALL_STATE(16)] = 1494,
  [SMALL_STATE(17)] = 1597,
  [SMALL_STATE(18)] = 1698,
  [SMALL_STATE(19)] = 1801,
  [SMALL_STATE(20)] = 1904,
  [SMALL_STATE(21)] = 2007,
  [SMALL_STATE(22)] = 2108,
  [SMALL_STATE(23)] = 2211,
  [SMALL_STATE(24)] = 2314,
  [SMALL_STATE(25)] = 2417,
  [SMALL_STATE(26)] = 2520,
  [SMALL_STATE(27)] = 2623,
  [SMALL_STATE(28)] = 2726,
  [SMALL_STATE(29)] = 2829,
  [SMALL_STATE(30)] = 2932,
  [SMALL_STATE(31)] = 3035,
  [SMALL_STATE(32)] = 3138,
  [SMALL_STATE(33)] = 3241,
  [SMALL_STATE(34)] = 3342,
  [SMALL_STATE(35)] = 3445,
  [SMALL_STATE(36)] = 3548,
  [SMALL_STATE(37)] = 3651,
  [SMALL_STATE(38)] = 3754,
  [SMALL_STATE(39)] = 3857,
  [SMALL_STATE(40)] = 3960,
  [SMALL_STATE(41)] = 4063,
  [SMALL_STATE(42)] = 4164,
  [SMALL_STATE(43)] = 4267,
  [SMALL_STATE(44)] = 4368,
  [SMALL_STATE(45)] = 4468,
  [SMALL_STATE(46)] = 4568,
  [SMALL_STATE(47)] = 4668,
  [SMALL_STATE(48)] = 4768,
  [SMALL_STATE(49)] = 4868,
  [SMALL_STATE(50)] = 4968,
  [SMALL_STATE(51)] = 5068,
  [SMALL_STATE(52)] = 5168,
  [SMALL_STATE(53)] = 5268,
  [SMALL_STATE(54)] = 5368,
  [SMALL_STATE(55)] = 5446,
  [SMALL_STATE(56)] = 5513,
  [SMALL_STATE(57)] = 5580,
  [SMALL_STATE(58)] = 5647,
  [SMALL_STATE(59)] = 5714,
  [SMALL_STATE(60)] = 5781,
  [SMALL_STATE(61)] = 5848,
  [SMALL_STATE(62)] = 5915,
  [SMALL_STATE(63)] = 5982,
  [SMALL_STATE(64)] = 6049,
  [SMALL_STATE(65)] = 6116,
  [SMALL_STATE(66)] = 6179,
  [SMALL_STATE(67)] = 6242,
  [SMALL_STATE(68)] = 6305,
  [SMALL_STATE(69)] = 6368,
  [SMALL_STATE(70)] = 6431,
  [SMALL_STATE(71)] = 6494,
  [SMALL_STATE(72)] = 6557,
  [SMALL_STATE(73)] = 6620,
  [SMALL_STATE(74)] = 6683,
  [SMALL_STATE(75)] = 6746,
  [SMALL_STATE(76)] = 6806,
  [SMALL_STATE(77)] = 6866,
  [SMALL_STATE(78)] = 6926,
  [SMALL_STATE(79)] = 6986,
  [SMALL_STATE(80)] = 7046,
  [SMALL_STATE(81)] = 7078,
  [SMALL_STATE(82)] = 7111,
  [SMALL_STATE(83)] = 7144,
  [SMALL_STATE(84)] = 7177,
  [SMALL_STATE(85)] = 7210,
  [SMALL_STATE(86)] = 7243,
  [SMALL_STATE(87)] = 7276,
  [SMALL_STATE(88)] = 7309,
  [SMALL_STATE(89)] = 7342,
  [SMALL_STATE(90)] = 7375,
  [SMALL_STATE(91)] = 7408,
  [SMALL_STATE(92)] = 7441,
  [SMALL_STATE(93)] = 7474,
  [SMALL_STATE(94)] = 7507,
  [SMALL_STATE(95)] = 7540,
  [SMALL_STATE(96)] = 7573,
  [SMALL_STATE(97)] = 7606,
  [SMALL_STATE(98)] = 7639,
  [SMALL_STATE(99)] = 7672,
  [SMALL_STATE(100)] = 7705,
  [SMALL_STATE(101)] = 7738,
  [SMALL_STATE(102)] = 7771,
  [SMALL_STATE(103)] = 7804,
  [SMALL_STATE(104)] = 7837,
  [SMALL_STATE(105)] = 7870,
  [SMALL_STATE(106)] = 7903,
  [SMALL_STATE(107)] = 7936,
  [SMALL_STATE(108)] = 7969,
  [SMALL_STATE(109)] = 8002,
  [SMALL_STATE(110)] = 8035,
  [SMALL_STATE(111)] = 8068,
  [SMALL_STATE(112)] = 8101,
  [SMALL_STATE(113)] = 8134,
  [SMALL_STATE(114)] = 8167,
  [SMALL_STATE(115)] = 8200,
  [SMALL_STATE(116)] = 8233,
  [SMALL_STATE(117)] = 8266,
  [SMALL_STATE(118)] = 8299,
  [SMALL_STATE(119)] = 8332,
  [SMALL_STATE(120)] = 8365,
  [SMALL_STATE(121)] = 8398,
  [SMALL_STATE(122)] = 8431,
  [SMALL_STATE(123)] = 8464,
  [SMALL_STATE(124)] = 8497,
  [SMALL_STATE(125)] = 8530,
  [SMALL_STATE(126)] = 8563,
  [SMALL_STATE(127)] = 8596,
  [SMALL_STATE(128)] = 8629,
  [SMALL_STATE(129)] = 8662,
  [SMALL_STATE(130)] = 8695,
  [SMALL_STATE(131)] = 8728,
  [SMALL_STATE(132)] = 8761,
  [SMALL_STATE(133)] = 8794,
  [SMALL_STATE(134)] = 8827,
  [SMALL_STATE(135)] = 8860,
  [SMALL_STATE(136)] = 8893,
  [SMALL_STATE(137)] = 8926,
  [SMALL_STATE(138)] = 8959,
  [SMALL_STATE(139)] = 8992,
  [SMALL_STATE(140)] = 9025,
  [SMALL_STATE(141)] = 9058,
  [SMALL_STATE(142)] = 9091,
  [SMALL_STATE(143)] = 9124,
  [SMALL_STATE(144)] = 9157,
  [SMALL_STATE(145)] = 9190,
  [SMALL_STATE(146)] = 9222,
  [SMALL_STATE(147)] = 9254,
  [SMALL_STATE(148)] = 9286,
  [SMALL_STATE(149)] = 9318,
  [SMALL_STATE(150)] = 9350,
  [SMALL_STATE(151)] = 9382,
  [SMALL_STATE(152)] = 9414,
  [SMALL_STATE(153)] = 9446,
  [SMALL_STATE(154)] = 9478,
  [SMALL_STATE(155)] = 9510,
  [SMALL_STATE(156)] = 9542,
  [SMALL_STATE(157)] = 9574,
  [SMALL_STATE(158)] = 9606,
  [SMALL_STATE(159)] = 9638,
  [SMALL_STATE(160)] = 9670,
  [SMALL_STATE(161)] = 9702,
  [SMALL_STATE(162)] = 9734,
  [SMALL_STATE(163)] = 9766,
  [SMALL_STATE(164)] = 9798,
  [SMALL_STATE(165)] = 9830,
  [SMALL_STATE(166)] = 9862,
  [SMALL_STATE(167)] = 9894,
  [SMALL_STATE(168)] = 9926,
  [SMALL_STATE(169)] = 9958,
  [SMALL_STATE(170)] = 9990,
  [SMALL_STATE(171)] = 10022,
  [SMALL_STATE(172)] = 10054,
  [SMALL_STATE(173)] = 10086,
  [SMALL_STATE(174)] = 10118,
  [SMALL_STATE(175)] = 10150,
  [SMALL_STATE(176)] = 10182,
  [SMALL_STATE(177)] = 10214,
  [SMALL_STATE(178)] = 10246,
  [SMALL_STATE(179)] = 10278,
  [SMALL_STATE(180)] = 10310,
  [SMALL_STATE(181)] = 10342,
  [SMALL_STATE(182)] = 10374,
  [SMALL_STATE(183)] = 10406,
  [SMALL_STATE(184)] = 10438,
  [SMALL_STATE(185)] = 10470,
  [SMALL_STATE(186)] = 10502,
  [SMALL_STATE(187)] = 10534,
  [SMALL_STATE(188)] = 10566,
  [SMALL_STATE(189)] = 10598,
  [SMALL_STATE(190)] = 10630,
  [SMALL_STATE(191)] = 10662,
  [SMALL_STATE(192)] = 10694,
  [SMALL_STATE(193)] = 10726,
  [SMALL_STATE(194)] = 10758,
  [SMALL_STATE(195)] = 10790,
  [SMALL_STATE(196)] = 10822,
  [SMALL_STATE(197)] = 10854,
  [SMALL_STATE(198)] = 10886,
  [SMALL_STATE(199)] = 10918,
  [SMALL_STATE(200)] = 10950,
  [SMALL_STATE(201)] = 10982,
  [SMALL_STATE(202)] = 11014,
  [SMALL_STATE(203)] = 11046,
  [SMALL_STATE(204)] = 11078,
  [SMALL_STATE(205)] = 11110,
  [SMALL_STATE(206)] = 11142,
  [SMALL_STATE(207)] = 11174,
  [SMALL_STATE(208)] = 11206,
  [SMALL_STATE(209)] = 11257,
  [SMALL_STATE(210)] = 11302,
  [SMALL_STATE(211)] = 11339,
  [SMALL_STATE(212)] = 11374,
  [SMALL_STATE(213)] = 11405,
  [SMALL_STATE(214)] = 11442,
  [SMALL_STATE(215)] = 11479,
  [SMALL_STATE(216)] = 11514,
  [SMALL_STATE(217)] = 11538,
  [SMALL_STATE(218)] = 11568,
  [SMALL_STATE(219)] = 11592,
  [SMALL_STATE(220)] = 11616,
  [SMALL_STATE(221)] = 11654,
  [SMALL_STATE(222)] = 11686,
  [SMALL_STATE(223)] = 11715,
  [SMALL_STATE(224)] = 11738,
  [SMALL_STATE(225)] = 11765,
  [SMALL_STATE(226)] = 11794,
  [SMALL_STATE(227)] = 11819,
  [SMALL_STATE(228)] = 11864,
  [SMALL_STATE(229)] = 11886,
  [SMALL_STATE(230)] = 11908,
  [SMALL_STATE(231)] = 11930,
  [SMALL_STATE(232)] = 11952,
  [SMALL_STATE(233)] = 11974,
  [SMALL_STATE(234)] = 11996,
  [SMALL_STATE(235)] = 12018,
  [SMALL_STATE(236)] = 12040,
  [SMALL_STATE(237)] = 12062,
  [SMALL_STATE(238)] = 12100,
  [SMALL_STATE(239)] = 12138,
  [SMALL_STATE(240)] = 12160,
  [SMALL_STATE(241)] = 12182,
  [SMALL_STATE(242)] = 12204,
  [SMALL_STATE(243)] = 12226,
  [SMALL_STATE(244)] = 12248,
  [SMALL_STATE(245)] = 12270,
  [SMALL_STATE(246)] = 12292,
  [SMALL_STATE(247)] = 12314,
  [SMALL_STATE(248)] = 12336,
  [SMALL_STATE(249)] = 12358,
  [SMALL_STATE(250)] = 12380,
  [SMALL_STATE(251)] = 12408,
  [SMALL_STATE(252)] = 12430,
  [SMALL_STATE(253)] = 12452,
  [SMALL_STATE(254)] = 12492,
  [SMALL_STATE(255)] = 12514,
  [SMALL_STATE(256)] = 12540,
  [SMALL_STATE(257)] = 12562,
  [SMALL_STATE(258)] = 12584,
  [SMALL_STATE(259)] = 12606,
  [SMALL_STATE(260)] = 12628,
  [SMALL_STATE(261)] = 12650,
  [SMALL_STATE(262)] = 12672,
  [SMALL_STATE(263)] = 12710,
  [SMALL_STATE(264)] = 12732,
  [SMALL_STATE(265)] = 12768,
  [SMALL_STATE(266)] = 12790,
  [SMALL_STATE(267)] = 12830,
  [SMALL_STATE(268)] = 12856,
  [SMALL_STATE(269)] = 12892,
  [SMALL_STATE(270)] = 12920,
  [SMALL_STATE(271)] = 12942,
  [SMALL_STATE(272)] = 12964,
  [SMALL_STATE(273)] = 13004,
  [SMALL_STATE(274)] = 13026,
  [SMALL_STATE(275)] = 13048,
  [SMALL_STATE(276)] = 13070,
  [SMALL_STATE(277)] = 13092,
  [SMALL_STATE(278)] = 13130,
  [SMALL_STATE(279)] = 13164,
  [SMALL_STATE(280)] = 13186,
  [SMALL_STATE(281)] = 13208,
  [SMALL_STATE(282)] = 13230,
  [SMALL_STATE(283)] = 13268,
  [SMALL_STATE(284)] = 13290,
  [SMALL_STATE(285)] = 13327,
  [SMALL_STATE(286)] = 13348,
  [SMALL_STATE(287)] = 13385,
  [SMALL_STATE(288)] = 13422,
  [SMALL_STATE(289)] = 13459,
  [SMALL_STATE(290)] = 13496,
  [SMALL_STATE(291)] = 13521,
  [SMALL_STATE(292)] = 13558,
  [SMALL_STATE(293)] = 13593,
  [SMALL_STATE(294)] = 13630,
  [SMALL_STATE(295)] = 13665,
  [SMALL_STATE(296)] = 13686,
  [SMALL_STATE(297)] = 13711,
  [SMALL_STATE(298)] = 13730,
  [SMALL_STATE(299)] = 13767,
  [SMALL_STATE(300)] = 13804,
  [SMALL_STATE(301)] = 13839,
  [SMALL_STATE(302)] = 13860,
  [SMALL_STATE(303)] = 13897,
  [SMALL_STATE(304)] = 13931,
  [SMALL_STATE(305)] = 13955,
  [SMALL_STATE(306)] = 13979,
  [SMALL_STATE(307)] = 14013,
  [SMALL_STATE(308)] = 14047,
  [SMALL_STATE(309)] = 14079,
  [SMALL_STATE(310)] = 14107,
  [SMALL_STATE(311)] = 14131,
  [SMALL_STATE(312)] = 14163,
  [SMALL_STATE(313)] = 14195,
  [SMALL_STATE(314)] = 14229,
  [SMALL_STATE(315)] = 14261,
  [SMALL_STATE(316)] = 14289,
  [SMALL_STATE(317)] = 14323,
  [SMALL_STATE(318)] = 14355,
  [SMALL_STATE(319)] = 14387,
  [SMALL_STATE(320)] = 14421,
  [SMALL_STATE(321)] = 14449,
  [SMALL_STATE(322)] = 14477,
  [SMALL_STATE(323)] = 14511,
  [SMALL_STATE(324)] = 14539,
  [SMALL_STATE(325)] = 14573,
  [SMALL_STATE(326)] = 14591,
  [SMALL_STATE(327)] = 14625,
  [SMALL_STATE(328)] = 14644,
  [SMALL_STATE(329)] = 14663,
  [SMALL_STATE(330)] = 14682,
  [SMALL_STATE(331)] = 14701,
  [SMALL_STATE(332)] = 14720,
  [SMALL_STATE(333)] = 14751,
  [SMALL_STATE(334)] = 14770,
  [SMALL_STATE(335)] = 14789,
  [SMALL_STATE(336)] = 14808,
  [SMALL_STATE(337)] = 14827,
  [SMALL_STATE(338)] = 14846,
  [SMALL_STATE(339)] = 14865,
  [SMALL_STATE(340)] = 14884,
  [SMALL_STATE(341)] = 14915,
  [SMALL_STATE(342)] = 14946,
  [SMALL_STATE(343)] = 14965,
  [SMALL_STATE(344)] = 14984,
  [SMALL_STATE(345)] = 15003,
  [SMALL_STATE(346)] = 15022,
  [SMALL_STATE(347)] = 15053,
  [SMALL_STATE(348)] = 15072,
  [SMALL_STATE(349)] = 15091,
  [SMALL_STATE(350)] = 15122,
  [SMALL_STATE(351)] = 15146,
  [SMALL_STATE(352)] = 15172,
  [SMALL_STATE(353)] = 15190,
  [SMALL_STATE(354)] = 15214,
  [SMALL_STATE(355)] = 15240,
  [SMALL_STATE(356)] = 15266,
  [SMALL_STATE(357)] = 15286,
  [SMALL_STATE(358)] = 15310,
  [SMALL_STATE(359)] = 15334,
  [SMALL_STATE(360)] = 15364,
  [SMALL_STATE(361)] = 15382,
  [SMALL_STATE(362)] = 15406,
  [SMALL_STATE(363)] = 15432,
  [SMALL_STATE(364)] = 15462,
  [SMALL_STATE(365)] = 15488,
  [SMALL_STATE(366)] = 15506,
  [SMALL_STATE(367)] = 15524,
  [SMALL_STATE(368)] = 15550,
  [SMALL_STATE(369)] = 15575,
  [SMALL_STATE(370)] = 15600,
  [SMALL_STATE(371)] = 15623,
  [SMALL_STATE(372)] = 15648,
  [SMALL_STATE(373)] = 15673,
  [SMALL_STATE(374)] = 15698,
  [SMALL_STATE(375)] = 15721,
  [SMALL_STATE(376)] = 15746,
  [SMALL_STATE(377)] = 15769,
  [SMALL_STATE(378)] = 15783,
  [SMALL_STATE(379)] = 15809,
  [SMALL_STATE(380)] = 15835,
  [SMALL_STATE(381)] = 15855,
  [SMALL_STATE(382)] = 15871,
  [SMALL_STATE(383)] = 15897,
  [SMALL_STATE(384)] = 15911,
  [SMALL_STATE(385)] = 15927,
  [SMALL_STATE(386)] = 15953,
  [SMALL_STATE(387)] = 15967,
  [SMALL_STATE(388)] = 15988,
  [SMALL_STATE(389)] = 16005,
  [SMALL_STATE(390)] = 16020,
  [SMALL_STATE(391)] = 16041,
  [SMALL_STATE(392)] = 16062,
  [SMALL_STATE(393)] = 16079,
  [SMALL_STATE(394)] = 16094,
  [SMALL_STATE(395)] = 16113,
  [SMALL_STATE(396)] = 16136,
  [SMALL_STATE(397)] = 16151,
  [SMALL_STATE(398)] = 16166,
  [SMALL_STATE(399)] = 16187,
  [SMALL_STATE(400)] = 16202,
  [SMALL_STATE(401)] = 16223,
  [SMALL_STATE(402)] = 16238,
  [SMALL_STATE(403)] = 16261,
  [SMALL_STATE(404)] = 16282,
  [SMALL_STATE(405)] = 16297,
  [SMALL_STATE(406)] = 16309,
  [SMALL_STATE(407)] = 16327,
  [SMALL_STATE(408)] = 16339,
  [SMALL_STATE(409)] = 16357,
  [SMALL_STATE(410)] = 16369,
  [SMALL_STATE(411)] = 16381,
  [SMALL_STATE(412)] = 16397,
  [SMALL_STATE(413)] = 16417,
  [SMALL_STATE(414)] = 16437,
  [SMALL_STATE(415)] = 16455,
  [SMALL_STATE(416)] = 16473,
  [SMALL_STATE(417)] = 16491,
  [SMALL_STATE(418)] = 16509,
  [SMALL_STATE(419)] = 16527,
  [SMALL_STATE(420)] = 16545,
  [SMALL_STATE(421)] = 16565,
  [SMALL_STATE(422)] = 16577,
  [SMALL_STATE(423)] = 16593,
  [SMALL_STATE(424)] = 16611,
  [SMALL_STATE(425)] = 16629,
  [SMALL_STATE(426)] = 16647,
  [SMALL_STATE(427)] = 16659,
  [SMALL_STATE(428)] = 16671,
  [SMALL_STATE(429)] = 16683,
  [SMALL_STATE(430)] = 16695,
  [SMALL_STATE(431)] = 16707,
  [SMALL_STATE(432)] = 16725,
  [SMALL_STATE(433)] = 16743,
  [SMALL_STATE(434)] = 16761,
  [SMALL_STATE(435)] = 16781,
  [SMALL_STATE(436)] = 16799,
  [SMALL_STATE(437)] = 16817,
  [SMALL_STATE(438)] = 16835,
  [SMALL_STATE(439)] = 16847,
  [SMALL_STATE(440)] = 16865,
  [SMALL_STATE(441)] = 16877,
  [SMALL_STATE(442)] = 16895,
  [SMALL_STATE(443)] = 16913,
  [SMALL_STATE(444)] = 16929,
  [SMALL_STATE(445)] = 16941,
  [SMALL_STATE(446)] = 16953,
  [SMALL_STATE(447)] = 16968,
  [SMALL_STATE(448)] = 16983,
  [SMALL_STATE(449)] = 16998,
  [SMALL_STATE(450)] = 17009,
  [SMALL_STATE(451)] = 17022,
  [SMALL_STATE(452)] = 17037,
  [SMALL_STATE(453)] = 17052,
  [SMALL_STATE(454)] = 17063,
  [SMALL_STATE(455)] = 17078,
  [SMALL_STATE(456)] = 17095,
  [SMALL_STATE(457)] = 17110,
  [SMALL_STATE(458)] = 17125,
  [SMALL_STATE(459)] = 17140,
  [SMALL_STATE(460)] = 17155,
  [SMALL_STATE(461)] = 17172,
  [SMALL_STATE(462)] = 17189,
  [SMALL_STATE(463)] = 17202,
  [SMALL_STATE(464)] = 17215,
  [SMALL_STATE(465)] = 17228,
  [SMALL_STATE(466)] = 17241,
  [SMALL_STATE(467)] = 17258,
  [SMALL_STATE(468)] = 17273,
  [SMALL_STATE(469)] = 17288,
  [SMALL_STATE(470)] = 17301,
  [SMALL_STATE(471)] = 17314,
  [SMALL_STATE(472)] = 17331,
  [SMALL_STATE(473)] = 17342,
  [SMALL_STATE(474)] = 17359,
  [SMALL_STATE(475)] = 17376,
  [SMALL_STATE(476)] = 17393,
  [SMALL_STATE(477)] = 17408,
  [SMALL_STATE(478)] = 17423,
  [SMALL_STATE(479)] = 17438,
  [SMALL_STATE(480)] = 17452,
  [SMALL_STATE(481)] = 17468,
  [SMALL_STATE(482)] = 17482,
  [SMALL_STATE(483)] = 17498,
  [SMALL_STATE(484)] = 17508,
  [SMALL_STATE(485)] = 17518,
  [SMALL_STATE(486)] = 17530,
  [SMALL_STATE(487)] = 17540,
  [SMALL_STATE(488)] = 17550,
  [SMALL_STATE(489)] = 17564,
  [SMALL_STATE(490)] = 17580,
  [SMALL_STATE(491)] = 17596,
  [SMALL_STATE(492)] = 17612,
  [SMALL_STATE(493)] = 17626,
  [SMALL_STATE(494)] = 17640,
  [SMALL_STATE(495)] = 17656,
  [SMALL_STATE(496)] = 17672,
  [SMALL_STATE(497)] = 17686,
  [SMALL_STATE(498)] = 17700,
  [SMALL_STATE(499)] = 17716,
  [SMALL_STATE(500)] = 17732,
  [SMALL_STATE(501)] = 17746,
  [SMALL_STATE(502)] = 17762,
  [SMALL_STATE(503)] = 17776,
  [SMALL_STATE(504)] = 17786,
  [SMALL_STATE(505)] = 17796,
  [SMALL_STATE(506)] = 17806,
  [SMALL_STATE(507)] = 17816,
  [SMALL_STATE(508)] = 17826,
  [SMALL_STATE(509)] = 17836,
  [SMALL_STATE(510)] = 17846,
  [SMALL_STATE(511)] = 17856,
  [SMALL_STATE(512)] = 17868,
  [SMALL_STATE(513)] = 17882,
  [SMALL_STATE(514)] = 17896,
  [SMALL_STATE(515)] = 17912,
  [SMALL_STATE(516)] = 17922,
  [SMALL_STATE(517)] = 17938,
  [SMALL_STATE(518)] = 17954,
  [SMALL_STATE(519)] = 17970,
  [SMALL_STATE(520)] = 17986,
  [SMALL_STATE(521)] = 18000,
  [SMALL_STATE(522)] = 18016,
  [SMALL_STATE(523)] = 18032,
  [SMALL_STATE(524)] = 18046,
  [SMALL_STATE(525)] = 18058,
  [SMALL_STATE(526)] = 18074,
  [SMALL_STATE(527)] = 18090,
  [SMALL_STATE(528)] = 18106,
  [SMALL_STATE(529)] = 18120,
  [SMALL_STATE(530)] = 18134,
  [SMALL_STATE(531)] = 18150,
  [SMALL_STATE(532)] = 18164,
  [SMALL_STATE(533)] = 18178,
  [SMALL_STATE(534)] = 18194,
  [SMALL_STATE(535)] = 18208,
  [SMALL_STATE(536)] = 18222,
  [SMALL_STATE(537)] = 18238,
  [SMALL_STATE(538)] = 18254,
  [SMALL_STATE(539)] = 18270,
  [SMALL_STATE(540)] = 18284,
  [SMALL_STATE(541)] = 18298,
  [SMALL_STATE(542)] = 18314,
  [SMALL_STATE(543)] = 18330,
  [SMALL_STATE(544)] = 18344,
  [SMALL_STATE(545)] = 18358,
  [SMALL_STATE(546)] = 18372,
  [SMALL_STATE(547)] = 18388,
  [SMALL_STATE(548)] = 18402,
  [SMALL_STATE(549)] = 18418,
  [SMALL_STATE(550)] = 18434,
  [SMALL_STATE(551)] = 18450,
  [SMALL_STATE(552)] = 18464,
  [SMALL_STATE(553)] = 18478,
  [SMALL_STATE(554)] = 18488,
  [SMALL_STATE(555)] = 18504,
  [SMALL_STATE(556)] = 18520,
  [SMALL_STATE(557)] = 18532,
  [SMALL_STATE(558)] = 18548,
  [SMALL_STATE(559)] = 18562,
  [SMALL_STATE(560)] = 18578,
  [SMALL_STATE(561)] = 18588,
  [SMALL_STATE(562)] = 18604,
  [SMALL_STATE(563)] = 18620,
  [SMALL_STATE(564)] = 18636,
  [SMALL_STATE(565)] = 18652,
  [SMALL_STATE(566)] = 18668,
  [SMALL_STATE(567)] = 18684,
  [SMALL_STATE(568)] = 18700,
  [SMALL_STATE(569)] = 18716,
  [SMALL_STATE(570)] = 18732,
  [SMALL_STATE(571)] = 18748,
  [SMALL_STATE(572)] = 18764,
  [SMALL_STATE(573)] = 18780,
  [SMALL_STATE(574)] = 18796,
  [SMALL_STATE(575)] = 18812,
  [SMALL_STATE(576)] = 18828,
  [SMALL_STATE(577)] = 18844,
  [SMALL_STATE(578)] = 18856,
  [SMALL_STATE(579)] = 18872,
  [SMALL_STATE(580)] = 18888,
  [SMALL_STATE(581)] = 18904,
  [SMALL_STATE(582)] = 18918,
  [SMALL_STATE(583)] = 18928,
  [SMALL_STATE(584)] = 18942,
  [SMALL_STATE(585)] = 18958,
  [SMALL_STATE(586)] = 18974,
  [SMALL_STATE(587)] = 18984,
  [SMALL_STATE(588)] = 19000,
  [SMALL_STATE(589)] = 19016,
  [SMALL_STATE(590)] = 19032,
  [SMALL_STATE(591)] = 19042,
  [SMALL_STATE(592)] = 19054,
  [SMALL_STATE(593)] = 19070,
  [SMALL_STATE(594)] = 19084,
  [SMALL_STATE(595)] = 19098,
  [SMALL_STATE(596)] = 19114,
  [SMALL_STATE(597)] = 19130,
  [SMALL_STATE(598)] = 19144,
  [SMALL_STATE(599)] = 19160,
  [SMALL_STATE(600)] = 19176,
  [SMALL_STATE(601)] = 19192,
  [SMALL_STATE(602)] = 19208,
  [SMALL_STATE(603)] = 19224,
  [SMALL_STATE(604)] = 19238,
  [SMALL_STATE(605)] = 19252,
  [SMALL_STATE(606)] = 19266,
  [SMALL_STATE(607)] = 19280,
  [SMALL_STATE(608)] = 19296,
  [SMALL_STATE(609)] = 19312,
  [SMALL_STATE(610)] = 19328,
  [SMALL_STATE(611)] = 19342,
  [SMALL_STATE(612)] = 19358,
  [SMALL_STATE(613)] = 19372,
  [SMALL_STATE(614)] = 19386,
  [SMALL_STATE(615)] = 19400,
  [SMALL_STATE(616)] = 19416,
  [SMALL_STATE(617)] = 19432,
  [SMALL_STATE(618)] = 19448,
  [SMALL_STATE(619)] = 19464,
  [SMALL_STATE(620)] = 19480,
  [SMALL_STATE(621)] = 19496,
  [SMALL_STATE(622)] = 19506,
  [SMALL_STATE(623)] = 19520,
  [SMALL_STATE(624)] = 19536,
  [SMALL_STATE(625)] = 19550,
  [SMALL_STATE(626)] = 19566,
  [SMALL_STATE(627)] = 19582,
  [SMALL_STATE(628)] = 19598,
  [SMALL_STATE(629)] = 19614,
  [SMALL_STATE(630)] = 19628,
  [SMALL_STATE(631)] = 19644,
  [SMALL_STATE(632)] = 19658,
  [SMALL_STATE(633)] = 19674,
  [SMALL_STATE(634)] = 19690,
  [SMALL_STATE(635)] = 19706,
  [SMALL_STATE(636)] = 19722,
  [SMALL_STATE(637)] = 19738,
  [SMALL_STATE(638)] = 19754,
  [SMALL_STATE(639)] = 19770,
  [SMALL_STATE(640)] = 19786,
  [SMALL_STATE(641)] = 19802,
  [SMALL_STATE(642)] = 19818,
  [SMALL_STATE(643)] = 19834,
  [SMALL_STATE(644)] = 19848,
  [SMALL_STATE(645)] = 19862,
  [SMALL_STATE(646)] = 19876,
  [SMALL_STATE(647)] = 19892,
  [SMALL_STATE(648)] = 19908,
  [SMALL_STATE(649)] = 19924,
  [SMALL_STATE(650)] = 19938,
  [SMALL_STATE(651)] = 19954,
  [SMALL_STATE(652)] = 19968,
  [SMALL_STATE(653)] = 19982,
  [SMALL_STATE(654)] = 19992,
  [SMALL_STATE(655)] = 20004,
  [SMALL_STATE(656)] = 20018,
  [SMALL_STATE(657)] = 20034,
  [SMALL_STATE(658)] = 20050,
  [SMALL_STATE(659)] = 20064,
  [SMALL_STATE(660)] = 20078,
  [SMALL_STATE(661)] = 20090,
  [SMALL_STATE(662)] = 20104,
  [SMALL_STATE(663)] = 20115,
  [SMALL_STATE(664)] = 20128,
  [SMALL_STATE(665)] = 20141,
  [SMALL_STATE(666)] = 20154,
  [SMALL_STATE(667)] = 20167,
  [SMALL_STATE(668)] = 20176,
  [SMALL_STATE(669)] = 20189,
  [SMALL_STATE(670)] = 20202,
  [SMALL_STATE(671)] = 20215,
  [SMALL_STATE(672)] = 20228,
  [SMALL_STATE(673)] = 20237,
  [SMALL_STATE(674)] = 20250,
  [SMALL_STATE(675)] = 20263,
  [SMALL_STATE(676)] = 20272,
  [SMALL_STATE(677)] = 20283,
  [SMALL_STATE(678)] = 20294,
  [SMALL_STATE(679)] = 20307,
  [SMALL_STATE(680)] = 20318,
  [SMALL_STATE(681)] = 20331,
  [SMALL_STATE(682)] = 20342,
  [SMALL_STATE(683)] = 20355,
  [SMALL_STATE(684)] = 20364,
  [SMALL_STATE(685)] = 20373,
  [SMALL_STATE(686)] = 20386,
  [SMALL_STATE(687)] = 20399,
  [SMALL_STATE(688)] = 20410,
  [SMALL_STATE(689)] = 20423,
  [SMALL_STATE(690)] = 20436,
  [SMALL_STATE(691)] = 20447,
  [SMALL_STATE(692)] = 20460,
  [SMALL_STATE(693)] = 20471,
  [SMALL_STATE(694)] = 20482,
  [SMALL_STATE(695)] = 20491,
  [SMALL_STATE(696)] = 20502,
  [SMALL_STATE(697)] = 20511,
  [SMALL_STATE(698)] = 20520,
  [SMALL_STATE(699)] = 20531,
  [SMALL_STATE(700)] = 20542,
  [SMALL_STATE(701)] = 20555,
  [SMALL_STATE(702)] = 20564,
  [SMALL_STATE(703)] = 20575,
  [SMALL_STATE(704)] = 20584,
  [SMALL_STATE(705)] = 20593,
  [SMALL_STATE(706)] = 20604,
  [SMALL_STATE(707)] = 20617,
  [SMALL_STATE(708)] = 20630,
  [SMALL_STATE(709)] = 20639,
  [SMALL_STATE(710)] = 20648,
  [SMALL_STATE(711)] = 20657,
  [SMALL_STATE(712)] = 20670,
  [SMALL_STATE(713)] = 20679,
  [SMALL_STATE(714)] = 20688,
  [SMALL_STATE(715)] = 20701,
  [SMALL_STATE(716)] = 20710,
  [SMALL_STATE(717)] = 20721,
  [SMALL_STATE(718)] = 20730,
  [SMALL_STATE(719)] = 20739,
  [SMALL_STATE(720)] = 20748,
  [SMALL_STATE(721)] = 20757,
  [SMALL_STATE(722)] = 20768,
  [SMALL_STATE(723)] = 20779,
  [SMALL_STATE(724)] = 20790,
  [SMALL_STATE(725)] = 20801,
  [SMALL_STATE(726)] = 20812,
  [SMALL_STATE(727)] = 20821,
  [SMALL_STATE(728)] = 20832,
  [SMALL_STATE(729)] = 20841,
  [SMALL_STATE(730)] = 20850,
  [SMALL_STATE(731)] = 20859,
  [SMALL_STATE(732)] = 20868,
  [SMALL_STATE(733)] = 20877,
  [SMALL_STATE(734)] = 20886,
  [SMALL_STATE(735)] = 20895,
  [SMALL_STATE(736)] = 20906,
  [SMALL_STATE(737)] = 20915,
  [SMALL_STATE(738)] = 20924,
  [SMALL_STATE(739)] = 20933,
  [SMALL_STATE(740)] = 20942,
  [SMALL_STATE(741)] = 20951,
  [SMALL_STATE(742)] = 20960,
  [SMALL_STATE(743)] = 20969,
  [SMALL_STATE(744)] = 20978,
  [SMALL_STATE(745)] = 20987,
  [SMALL_STATE(746)] = 20996,
  [SMALL_STATE(747)] = 21007,
  [SMALL_STATE(748)] = 21018,
  [SMALL_STATE(749)] = 21029,
  [SMALL_STATE(750)] = 21040,
  [SMALL_STATE(751)] = 21049,
  [SMALL_STATE(752)] = 21057,
  [SMALL_STATE(753)] = 21065,
  [SMALL_STATE(754)] = 21073,
  [SMALL_STATE(755)] = 21081,
  [SMALL_STATE(756)] = 21089,
  [SMALL_STATE(757)] = 21097,
  [SMALL_STATE(758)] = 21105,
  [SMALL_STATE(759)] = 21113,
  [SMALL_STATE(760)] = 21121,
  [SMALL_STATE(761)] = 21129,
  [SMALL_STATE(762)] = 21137,
  [SMALL_STATE(763)] = 21145,
  [SMALL_STATE(764)] = 21153,
  [SMALL_STATE(765)] = 21161,
  [SMALL_STATE(766)] = 21169,
  [SMALL_STATE(767)] = 21177,
  [SMALL_STATE(768)] = 21185,
  [SMALL_STATE(769)] = 21193,
  [SMALL_STATE(770)] = 21201,
  [SMALL_STATE(771)] = 21209,
  [SMALL_STATE(772)] = 21217,
  [SMALL_STATE(773)] = 21225,
  [SMALL_STATE(774)] = 21233,
  [SMALL_STATE(775)] = 21241,
  [SMALL_STATE(776)] = 21249,
  [SMALL_STATE(777)] = 21257,
  [SMALL_STATE(778)] = 21265,
  [SMALL_STATE(779)] = 21273,
  [SMALL_STATE(780)] = 21281,
  [SMALL_STATE(781)] = 21289,
  [SMALL_STATE(782)] = 21297,
  [SMALL_STATE(783)] = 21305,
  [SMALL_STATE(784)] = 21313,
  [SMALL_STATE(785)] = 21321,
  [SMALL_STATE(786)] = 21329,
  [SMALL_STATE(787)] = 21337,
  [SMALL_STATE(788)] = 21345,
  [SMALL_STATE(789)] = 21353,
  [SMALL_STATE(790)] = 21361,
  [SMALL_STATE(791)] = 21369,
  [SMALL_STATE(792)] = 21377,
  [SMALL_STATE(793)] = 21385,
  [SMALL_STATE(794)] = 21393,
  [SMALL_STATE(795)] = 21401,
  [SMALL_STATE(796)] = 21409,
  [SMALL_STATE(797)] = 21417,
  [SMALL_STATE(798)] = 21425,
  [SMALL_STATE(799)] = 21433,
  [SMALL_STATE(800)] = 21443,
  [SMALL_STATE(801)] = 21453,
  [SMALL_STATE(802)] = 21463,
  [SMALL_STATE(803)] = 21471,
  [SMALL_STATE(804)] = 21479,
  [SMALL_STATE(805)] = 21487,
  [SMALL_STATE(806)] = 21495,
  [SMALL_STATE(807)] = 21503,
  [SMALL_STATE(808)] = 21511,
  [SMALL_STATE(809)] = 21519,
  [SMALL_STATE(810)] = 21527,
  [SMALL_STATE(811)] = 21535,
  [SMALL_STATE(812)] = 21543,
  [SMALL_STATE(813)] = 21551,
  [SMALL_STATE(814)] = 21559,
  [SMALL_STATE(815)] = 21567,
  [SMALL_STATE(816)] = 21575,
  [SMALL_STATE(817)] = 21583,
  [SMALL_STATE(818)] = 21591,
  [SMALL_STATE(819)] = 21599,
  [SMALL_STATE(820)] = 21607,
  [SMALL_STATE(821)] = 21615,
  [SMALL_STATE(822)] = 21623,
  [SMALL_STATE(823)] = 21631,
  [SMALL_STATE(824)] = 21639,
  [SMALL_STATE(825)] = 21647,
  [SMALL_STATE(826)] = 21655,
  [SMALL_STATE(827)] = 21663,
  [SMALL_STATE(828)] = 21671,
  [SMALL_STATE(829)] = 21679,
  [SMALL_STATE(830)] = 21687,
  [SMALL_STATE(831)] = 21695,
  [SMALL_STATE(832)] = 21703,
  [SMALL_STATE(833)] = 21711,
  [SMALL_STATE(834)] = 21719,
  [SMALL_STATE(835)] = 21727,
  [SMALL_STATE(836)] = 21735,
  [SMALL_STATE(837)] = 21743,
  [SMALL_STATE(838)] = 21751,
  [SMALL_STATE(839)] = 21759,
  [SMALL_STATE(840)] = 21767,
  [SMALL_STATE(841)] = 21775,
  [SMALL_STATE(842)] = 21783,
  [SMALL_STATE(843)] = 21791,
  [SMALL_STATE(844)] = 21801,
  [SMALL_STATE(845)] = 21809,
  [SMALL_STATE(846)] = 21819,
  [SMALL_STATE(847)] = 21827,
  [SMALL_STATE(848)] = 21835,
  [SMALL_STATE(849)] = 21843,
  [SMALL_STATE(850)] = 21853,
  [SMALL_STATE(851)] = 21863,
  [SMALL_STATE(852)] = 21871,
  [SMALL_STATE(853)] = 21879,
  [SMALL_STATE(854)] = 21887,
  [SMALL_STATE(855)] = 21895,
  [SMALL_STATE(856)] = 21903,
  [SMALL_STATE(857)] = 21911,
  [SMALL_STATE(858)] = 21919,
  [SMALL_STATE(859)] = 21927,
  [SMALL_STATE(860)] = 21935,
  [SMALL_STATE(861)] = 21943,
  [SMALL_STATE(862)] = 21951,
  [SMALL_STATE(863)] = 21959,
  [SMALL_STATE(864)] = 21967,
  [SMALL_STATE(865)] = 21977,
  [SMALL_STATE(866)] = 21985,
  [SMALL_STATE(867)] = 21993,
  [SMALL_STATE(868)] = 22001,
  [SMALL_STATE(869)] = 22009,
  [SMALL_STATE(870)] = 22017,
  [SMALL_STATE(871)] = 22025,
  [SMALL_STATE(872)] = 22033,
  [SMALL_STATE(873)] = 22041,
  [SMALL_STATE(874)] = 22049,
  [SMALL_STATE(875)] = 22057,
  [SMALL_STATE(876)] = 22065,
  [SMALL_STATE(877)] = 22075,
  [SMALL_STATE(878)] = 22083,
  [SMALL_STATE(879)] = 22091,
  [SMALL_STATE(880)] = 22099,
  [SMALL_STATE(881)] = 22107,
  [SMALL_STATE(882)] = 22115,
  [SMALL_STATE(883)] = 22123,
  [SMALL_STATE(884)] = 22131,
  [SMALL_STATE(885)] = 22139,
  [SMALL_STATE(886)] = 22147,
  [SMALL_STATE(887)] = 22155,
  [SMALL_STATE(888)] = 22163,
  [SMALL_STATE(889)] = 22171,
  [SMALL_STATE(890)] = 22179,
  [SMALL_STATE(891)] = 22187,
  [SMALL_STATE(892)] = 22195,
  [SMALL_STATE(893)] = 22203,
  [SMALL_STATE(894)] = 22211,
  [SMALL_STATE(895)] = 22219,
  [SMALL_STATE(896)] = 22227,
  [SMALL_STATE(897)] = 22235,
  [SMALL_STATE(898)] = 22243,
  [SMALL_STATE(899)] = 22251,
  [SMALL_STATE(900)] = 22259,
  [SMALL_STATE(901)] = 22267,
  [SMALL_STATE(902)] = 22275,
  [SMALL_STATE(903)] = 22283,
  [SMALL_STATE(904)] = 22291,
  [SMALL_STATE(905)] = 22299,
  [SMALL_STATE(906)] = 22307,
  [SMALL_STATE(907)] = 22315,
  [SMALL_STATE(908)] = 22323,
  [SMALL_STATE(909)] = 22331,
  [SMALL_STATE(910)] = 22339,
  [SMALL_STATE(911)] = 22347,
  [SMALL_STATE(912)] = 22355,
  [SMALL_STATE(913)] = 22363,
  [SMALL_STATE(914)] = 22371,
  [SMALL_STATE(915)] = 22379,
  [SMALL_STATE(916)] = 22387,
  [SMALL_STATE(917)] = 22395,
  [SMALL_STATE(918)] = 22403,
  [SMALL_STATE(919)] = 22411,
  [SMALL_STATE(920)] = 22419,
  [SMALL_STATE(921)] = 22427,
  [SMALL_STATE(922)] = 22435,
  [SMALL_STATE(923)] = 22443,
  [SMALL_STATE(924)] = 22451,
  [SMALL_STATE(925)] = 22459,
  [SMALL_STATE(926)] = 22467,
  [SMALL_STATE(927)] = 22475,
  [SMALL_STATE(928)] = 22483,
  [SMALL_STATE(929)] = 22491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 24),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(853),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(615),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(573),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(89),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(592),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(611),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(391),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(609),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(608),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(607),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(602),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(877),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(599),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(596),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(595),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(550),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(542),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(112),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(250),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(855),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(656),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(647),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(144),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(650),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(657),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(400),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(584),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(580),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(579),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(578),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(892),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(576),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(575),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(574),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(521),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(516),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(98),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 24),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(783),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(514),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(491),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(173),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(527),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(562),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(398),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(617),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(646),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(648),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(616),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(832),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(564),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(561),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(519),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(518),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(517),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(21),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(250),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(851),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(555),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(546),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(151),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(548),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(549),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(390),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(632),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(630),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(628),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(627),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(861),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(626),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(623),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(620),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(572),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(571),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(154),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(807),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(665),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(685),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(707),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(686),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(664),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(666),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(669),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(670),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(671),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(56),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(655),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(432),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(417),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(77),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(251),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(254),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(258),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(260),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(261),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(223),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(223),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(283),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 16),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 16),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 16),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 16),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 16),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 16),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 12),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 12),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 13),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 13),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 14),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 14),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 12),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 12),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 15),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 15),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 16),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 16),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(739),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(868),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(822),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(222),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(269),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 23),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 23),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(221),
  [1188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(403),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(80),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(290),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(613),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(822),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(394),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(317),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(763),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_timeline, 3),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_timeline, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(356),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 6),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_timeline, 4),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_timeline_repeat1, 2),
  [1455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_timeline_repeat1, 2), SHIFT_REPEAT(829),
  [1458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_timeline_repeat1, 2), SHIFT_REPEAT(677),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_timeline_repeat1, 2), SHIFT_REPEAT(372),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_timeline, 5),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(388),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1),
  [1519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2),
  [1549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2), SHIFT_REPEAT(908),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(422),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(448),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeline_title, 3),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeline_title, 3),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeline_stmt_data, 3),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeline_stmt_data, 3),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(460),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(346),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 22),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(53),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(52),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 21),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 28),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeline_stmt_data_repeat1, 2), SHIFT_REPEAT(876),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeline_stmt_data_repeat1, 2),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 17),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(306),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(294),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2),
  [1837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2), SHIFT_REPEAT(370),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(622),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(75),
  [1854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(629),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1),
  [1867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 17),
  [1953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 17),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 17),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeline_stmt_data_repeat1, 2, .production_id = 11),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 17),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4),
  [1999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [2001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 18),
  [2003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [2025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1),
  [2029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 18),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1),
  [2151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [2161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1),
  [2241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1),
  [2243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [2245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [2247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [2249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [2251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [2253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [2267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [2269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1),
  [2371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mermaid(void) {
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
