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
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 1
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_random_value = 2,
  anon_sym_SQUOTE_SQUOTE = 3,
  aux_sym_attribute_token1 = 4,
  anon_sym_SEMI = 5,
  sym_condition = 6,
  anon_sym_if = 7,
  sym_location_route = 8,
  anon_sym_EQ = 9,
  anon_sym_TILDE = 10,
  anon_sym_TILDE_STAR = 11,
  anon_sym_CARET_TILDE = 12,
  anon_sym_location = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_on = 16,
  sym_off = 17,
  sym_auto = 18,
  sym_cpumask = 19,
  anon_sym_select = 20,
  anon_sym_poll = 21,
  anon_sym_kqueue = 22,
  anon_sym_epoll = 23,
  anon_sym_SLASHdev_SLASHpoll = 24,
  anon_sym_eventport = 25,
  anon_sym_debug = 26,
  anon_sym_info = 27,
  anon_sym_notice = 28,
  anon_sym_warn = 29,
  anon_sym_error = 30,
  anon_sym_crit = 31,
  anon_sym_alert = 32,
  anon_sym_emerg = 33,
  sym_time = 34,
  sym_size = 35,
  aux_sym__fileish_token1 = 36,
  aux_sym__fileish_token2 = 37,
  anon_sym_SLASH = 38,
  anon_sym_DOT = 39,
  anon_sym_DASH = 40,
  anon_sym__ = 41,
  anon_sym_STAR = 42,
  sym__word = 43,
  sym_var = 44,
  aux_sym_quoted_string_literal_token1 = 45,
  sym_string_literal = 46,
  sym_numeric_literal = 47,
  anon_sym_map = 48,
  anon_sym_accept_mutex = 49,
  anon_sym_daemon = 50,
  anon_sym_master_process = 51,
  anon_sym_multi_accept = 52,
  anon_sym_pcre_jit = 53,
  anon_sym_accept_mutex_delay = 54,
  anon_sym_worker_shutdown_timeout = 55,
  anon_sym_timer_resolution = 56,
  anon_sym_worker_aio_requests = 57,
  anon_sym_worker_connections = 58,
  anon_sym_worker_priority = 59,
  anon_sym_worker_rlimit_nofile = 60,
  anon_sym_load_module = 61,
  anon_sym_lock_file = 62,
  anon_sym_pid = 63,
  anon_sym_include = 64,
  anon_sym_worker_processes = 65,
  anon_sym_debug_points = 66,
  anon_sym_abort = 67,
  anon_sym_stop = 68,
  anon_sym_use = 69,
  anon_sym_working_directory = 70,
  anon_sym_worker_rlimit_core = 71,
  anon_sym_worker_cpu_affinity = 72,
  anon_sym_debug_connection = 73,
  anon_sym_ssl_engine = 74,
  aux_sym__abstract_directive_token1 = 75,
  anon_sym_return = 76,
  anon_sym_env = 77,
  aux_sym__env_directive_token1 = 78,
  anon_sym_error_log = 79,
  anon_sym_access_log = 80,
  aux_sym__access_log_directive_token1 = 81,
  anon_sym_threads = 82,
  anon_sym_max_queue = 83,
  anon_sym_thread_pool = 84,
  anon_sym_user = 85,
  anon_sym_events = 86,
  sym__newline = 87,
  sym__indent = 88,
  sym__dedent = 89,
  sym_source_file = 90,
  sym_comment = 91,
  aux_sym__body = 92,
  sym__attribute_value = 93,
  sym_attribute = 94,
  sym_if = 95,
  sym_location_modifier = 96,
  sym_location = 97,
  sym_directive = 98,
  sym_block = 99,
  sym_boolean = 100,
  sym_connection_method = 101,
  sym_level = 102,
  sym__fileish = 103,
  sym_file = 104,
  sym_mask = 105,
  sym_quoted_string_literal = 106,
  sym_map = 107,
  sym__boolean_directive = 108,
  sym__boolean_keyword = 109,
  sym__time_directive = 110,
  sym__time_keyword = 111,
  sym__number_directive = 112,
  sym__number_keyword = 113,
  sym__file_directive = 114,
  sym__file_keyword = 115,
  sym__include_directive = 116,
  sym__number_or_auto_directive = 117,
  sym__debug_points_directive = 118,
  sym__use_directive = 119,
  sym__working_directory_directive = 120,
  sym__working_core_directive = 121,
  sym__affinity_directive = 122,
  sym__abstract_directive = 123,
  sym__return_directive = 124,
  sym__env_directive = 125,
  sym__error_log_directive = 126,
  sym__access_log_directive = 127,
  sym__thread_poll_variable = 128,
  sym__thread_pool_directive = 129,
  sym__user_directive = 130,
  sym__events_directive = 131,
  aux_sym_attribute_repeat1 = 132,
  aux_sym_file_repeat1 = 133,
  aux_sym_mask_repeat1 = 134,
  aux_sym_map_repeat1 = 135,
  aux_sym__affinity_directive_repeat1 = 136,
  aux_sym__access_log_directive_repeat1 = 137,
  alias_sym_option = 138,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_random_value] = "value",
  [anon_sym_SQUOTE_SQUOTE] = "keyword",
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_SEMI] = ";",
  [sym_condition] = "condition",
  [anon_sym_if] = "if",
  [sym_location_route] = "location_route",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE] = "~",
  [anon_sym_TILDE_STAR] = "~*",
  [anon_sym_CARET_TILDE] = "^~",
  [anon_sym_location] = "location",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_on] = "on",
  [sym_off] = "off",
  [sym_auto] = "auto",
  [sym_cpumask] = "cpumask",
  [anon_sym_select] = "select",
  [anon_sym_poll] = "poll",
  [anon_sym_kqueue] = "kqueue",
  [anon_sym_epoll] = "epoll",
  [anon_sym_SLASHdev_SLASHpoll] = "/dev/poll",
  [anon_sym_eventport] = "eventport",
  [anon_sym_debug] = "debug",
  [anon_sym_info] = "info",
  [anon_sym_notice] = "notice",
  [anon_sym_warn] = "warn",
  [anon_sym_error] = "error",
  [anon_sym_crit] = "crit",
  [anon_sym_alert] = "alert",
  [anon_sym_emerg] = "emerg",
  [sym_time] = "time",
  [sym_size] = "size",
  [aux_sym__fileish_token1] = "_fileish_token1",
  [aux_sym__fileish_token2] = "_fileish_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_STAR] = "*",
  [sym__word] = "_word",
  [sym_var] = "var",
  [aux_sym_quoted_string_literal_token1] = "quoted_string_literal_token1",
  [sym_string_literal] = "string_literal",
  [sym_numeric_literal] = "numeric_literal",
  [anon_sym_map] = "map",
  [anon_sym_accept_mutex] = "accept_mutex",
  [anon_sym_daemon] = "daemon",
  [anon_sym_master_process] = "master_process",
  [anon_sym_multi_accept] = "multi_accept",
  [anon_sym_pcre_jit] = "pcre_jit",
  [anon_sym_accept_mutex_delay] = "accept_mutex_delay",
  [anon_sym_worker_shutdown_timeout] = "worker_shutdown_timeout",
  [anon_sym_timer_resolution] = "timer_resolution",
  [anon_sym_worker_aio_requests] = "worker_aio_requests",
  [anon_sym_worker_connections] = "worker_connections",
  [anon_sym_worker_priority] = "worker_priority",
  [anon_sym_worker_rlimit_nofile] = "worker_rlimit_nofile",
  [anon_sym_load_module] = "load_module",
  [anon_sym_lock_file] = "lock_file",
  [anon_sym_pid] = "pid",
  [anon_sym_include] = "keyword",
  [anon_sym_worker_processes] = "keyword",
  [anon_sym_debug_points] = "keyword",
  [anon_sym_abort] = "constant",
  [anon_sym_stop] = "constant",
  [anon_sym_use] = "keyword",
  [anon_sym_working_directory] = "keyword",
  [anon_sym_worker_rlimit_core] = "keyword",
  [anon_sym_worker_cpu_affinity] = "keyword",
  [anon_sym_debug_connection] = "keyword",
  [anon_sym_ssl_engine] = "keyword",
  [aux_sym__abstract_directive_token1] = "value",
  [anon_sym_return] = "keyword",
  [anon_sym_env] = "keyword",
  [aux_sym__env_directive_token1] = "variable",
  [anon_sym_error_log] = "keyword",
  [anon_sym_access_log] = "keyword",
  [aux_sym__access_log_directive_token1] = "format",
  [anon_sym_threads] = "keyword",
  [anon_sym_max_queue] = "keyword",
  [anon_sym_thread_pool] = "keyword",
  [anon_sym_user] = "keyword",
  [anon_sym_events] = "keyword",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [aux_sym__body] = "_body",
  [sym__attribute_value] = "_attribute_value",
  [sym_attribute] = "attribute",
  [sym_if] = "if",
  [sym_location_modifier] = "location_modifier",
  [sym_location] = "location",
  [sym_directive] = "directive",
  [sym_block] = "block",
  [sym_boolean] = "boolean",
  [sym_connection_method] = "connection_method",
  [sym_level] = "level",
  [sym__fileish] = "_fileish",
  [sym_file] = "file",
  [sym_mask] = "mask",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [sym_map] = "map",
  [sym__boolean_directive] = "_boolean_directive",
  [sym__boolean_keyword] = "keyword",
  [sym__time_directive] = "_time_directive",
  [sym__time_keyword] = "keyword",
  [sym__number_directive] = "_number_directive",
  [sym__number_keyword] = "keyword",
  [sym__file_directive] = "_file_directive",
  [sym__file_keyword] = "keyword",
  [sym__include_directive] = "_include_directive",
  [sym__number_or_auto_directive] = "_number_or_auto_directive",
  [sym__debug_points_directive] = "_debug_points_directive",
  [sym__use_directive] = "_use_directive",
  [sym__working_directory_directive] = "_working_directory_directive",
  [sym__working_core_directive] = "_working_core_directive",
  [sym__affinity_directive] = "_affinity_directive",
  [sym__abstract_directive] = "_abstract_directive",
  [sym__return_directive] = "_return_directive",
  [sym__env_directive] = "_env_directive",
  [sym__error_log_directive] = "_error_log_directive",
  [sym__access_log_directive] = "_access_log_directive",
  [sym__thread_poll_variable] = "variable",
  [sym__thread_pool_directive] = "_thread_pool_directive",
  [sym__user_directive] = "_user_directive",
  [sym__events_directive] = "_events_directive",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_mask_repeat1] = "mask_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym__affinity_directive_repeat1] = "_affinity_directive_repeat1",
  [aux_sym__access_log_directive_repeat1] = "_access_log_directive_repeat1",
  [alias_sym_option] = "option",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_random_value] = sym_random_value,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_condition] = sym_condition,
  [anon_sym_if] = anon_sym_if,
  [sym_location_route] = sym_location_route,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_TILDE_STAR] = anon_sym_TILDE_STAR,
  [anon_sym_CARET_TILDE] = anon_sym_CARET_TILDE,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_on] = sym_on,
  [sym_off] = sym_off,
  [sym_auto] = sym_auto,
  [sym_cpumask] = sym_cpumask,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_poll] = anon_sym_poll,
  [anon_sym_kqueue] = anon_sym_kqueue,
  [anon_sym_epoll] = anon_sym_epoll,
  [anon_sym_SLASHdev_SLASHpoll] = anon_sym_SLASHdev_SLASHpoll,
  [anon_sym_eventport] = anon_sym_eventport,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_notice] = anon_sym_notice,
  [anon_sym_warn] = anon_sym_warn,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_crit] = anon_sym_crit,
  [anon_sym_alert] = anon_sym_alert,
  [anon_sym_emerg] = anon_sym_emerg,
  [sym_time] = sym_time,
  [sym_size] = sym_size,
  [aux_sym__fileish_token1] = aux_sym__fileish_token1,
  [aux_sym__fileish_token2] = aux_sym__fileish_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__word] = sym__word,
  [sym_var] = sym_var,
  [aux_sym_quoted_string_literal_token1] = aux_sym_quoted_string_literal_token1,
  [sym_string_literal] = sym_string_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_accept_mutex] = anon_sym_accept_mutex,
  [anon_sym_daemon] = anon_sym_daemon,
  [anon_sym_master_process] = anon_sym_master_process,
  [anon_sym_multi_accept] = anon_sym_multi_accept,
  [anon_sym_pcre_jit] = anon_sym_pcre_jit,
  [anon_sym_accept_mutex_delay] = anon_sym_accept_mutex_delay,
  [anon_sym_worker_shutdown_timeout] = anon_sym_worker_shutdown_timeout,
  [anon_sym_timer_resolution] = anon_sym_timer_resolution,
  [anon_sym_worker_aio_requests] = anon_sym_worker_aio_requests,
  [anon_sym_worker_connections] = anon_sym_worker_connections,
  [anon_sym_worker_priority] = anon_sym_worker_priority,
  [anon_sym_worker_rlimit_nofile] = anon_sym_worker_rlimit_nofile,
  [anon_sym_load_module] = anon_sym_load_module,
  [anon_sym_lock_file] = anon_sym_lock_file,
  [anon_sym_pid] = anon_sym_pid,
  [anon_sym_include] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_processes] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_debug_points] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_stop] = anon_sym_abort,
  [anon_sym_use] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_working_directory] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_rlimit_core] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_cpu_affinity] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_debug_connection] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_ssl_engine] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__abstract_directive_token1] = sym_random_value,
  [anon_sym_return] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_env] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__env_directive_token1] = aux_sym__env_directive_token1,
  [anon_sym_error_log] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_access_log] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__access_log_directive_token1] = aux_sym__access_log_directive_token1,
  [anon_sym_threads] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_max_queue] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_thread_pool] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_user] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_events] = anon_sym_SQUOTE_SQUOTE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [aux_sym__body] = aux_sym__body,
  [sym__attribute_value] = sym__attribute_value,
  [sym_attribute] = sym_attribute,
  [sym_if] = sym_if,
  [sym_location_modifier] = sym_location_modifier,
  [sym_location] = sym_location,
  [sym_directive] = sym_directive,
  [sym_block] = sym_block,
  [sym_boolean] = sym_boolean,
  [sym_connection_method] = sym_connection_method,
  [sym_level] = sym_level,
  [sym__fileish] = sym__fileish,
  [sym_file] = sym_file,
  [sym_mask] = sym_mask,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_map] = sym_map,
  [sym__boolean_directive] = sym__boolean_directive,
  [sym__boolean_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__time_directive] = sym__time_directive,
  [sym__time_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__number_directive] = sym__number_directive,
  [sym__number_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__file_directive] = sym__file_directive,
  [sym__file_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__include_directive] = sym__include_directive,
  [sym__number_or_auto_directive] = sym__number_or_auto_directive,
  [sym__debug_points_directive] = sym__debug_points_directive,
  [sym__use_directive] = sym__use_directive,
  [sym__working_directory_directive] = sym__working_directory_directive,
  [sym__working_core_directive] = sym__working_core_directive,
  [sym__affinity_directive] = sym__affinity_directive,
  [sym__abstract_directive] = sym__abstract_directive,
  [sym__return_directive] = sym__return_directive,
  [sym__env_directive] = sym__env_directive,
  [sym__error_log_directive] = sym__error_log_directive,
  [sym__access_log_directive] = sym__access_log_directive,
  [sym__thread_poll_variable] = aux_sym__env_directive_token1,
  [sym__thread_pool_directive] = sym__thread_pool_directive,
  [sym__user_directive] = sym__user_directive,
  [sym__events_directive] = sym__events_directive,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_mask_repeat1] = aux_sym_mask_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym__affinity_directive_repeat1] = aux_sym__affinity_directive_repeat1,
  [aux_sym__access_log_directive_repeat1] = aux_sym__access_log_directive_repeat1,
  [alias_sym_option] = alias_sym_option,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_random_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_location_route] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
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
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_off] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
  },
  [sym_cpumask] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kqueue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epoll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdev_SLASHpoll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emerg] = {
    .visible = true,
    .named = false,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__fileish_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fileish_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_mutex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daemon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_master_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcre_jit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_mutex_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_shutdown_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timer_resolution] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_aio_requests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_connections] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_rlimit_nofile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_processes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_points] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_abort] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_working_directory] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_rlimit_core] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_cpu_affinity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_connection] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ssl_engine] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__abstract_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__env_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_error_log] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_access_log] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__access_log_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_threads] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_queue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_pool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_user] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_location_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_connection_method] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym__fileish] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_mask] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__time_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__time_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__number_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__number_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__file_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__file_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__include_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__number_or_auto_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_points_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__use_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__working_directory_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__working_core_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__affinity_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__abstract_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__return_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__env_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__error_log_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__access_log_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__thread_poll_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__thread_pool_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__user_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__events_directive] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__affinity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__access_log_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_option] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_SQUOTE_SQUOTE,
  },
  [3] = {
    [1] = anon_sym_abort,
  },
  [4] = {
    [1] = sym_random_value,
  },
  [5] = {
    [1] = sym_random_value,
    [2] = sym_random_value,
  },
  [6] = {
    [1] = alias_sym_option,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_connection_method, 2,
    sym_connection_method,
    anon_sym_abort,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 15,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 14,
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
  [67] = 64,
  [68] = 65,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 70,
  [79] = 76,
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
  [172] = 139,
  [173] = 141,
  [174] = 145,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 159,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 142,
  [189] = 182,
  [190] = 190,
  [191] = 191,
};

static TSCharacterRange aux_sym__fileish_token2_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x1092b},
};

static TSCharacterRange sym__word_character_set_1[] = {
  {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
  {0x10920, 0x1092b},
};

static TSCharacterRange sym_var_character_set_1[] = {
  {'$', '$'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x1092b},
};

static TSCharacterRange sym_var_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
  {0x10920, 0x1092b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_random_value);
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 56,
        '#', 52,
        '\'', 59,
        '*', 176,
        '-', 174,
        '.', 173,
        '/', 172,
        ';', 134,
        '=', 140,
        '^', 126,
        '_', 175,
        'o', 170,
        '{', 145,
        '}', 146,
        '~', 141,
        '0', 150,
        '1', 150,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(169);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(433);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(472);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(427);
      if (lookahead == '{') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (set_contains(sym_var_character_set_1, 431, lookahead)) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == '_') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '_') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == ';') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(426);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '^') ADVANCE(138);
      if (lookahead == '~') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(466);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(131);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 44:
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(469);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '#', 53,
        '\'', 13,
        '(', 16,
        ';', 134,
        '=', 140,
        'a', 206,
        'd', 197,
        'e', 308,
        'i', 257,
        'l', 326,
        'm', 196,
        'p', 207,
        'r', 227,
        's', 380,
        't', 268,
        'u', 381,
        'w', 329,
        '{', 145,
        '}', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(426);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 56,
        '#', 52,
        '\'', 61,
        '/', 67,
        'a', 89,
        'c', 108,
        'd', 68,
        'e', 93,
        'i', 95,
        'k', 107,
        'n', 100,
        'o', 78,
        'p', 97,
        's', 73,
        'w', 63,
        '{', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 56,
        '#', 52,
        '\'', 61,
        '/', 67,
        'a', 89,
        'c', 108,
        'd', 68,
        'e', 93,
        'i', 95,
        'k', 107,
        'n', 100,
        'o', 78,
        'p', 97,
        's', 73,
        'w', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == ';') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'v') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(466);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_if);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_location);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_on);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_off);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_cpumask);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_poll);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_kqueue);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_epoll);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASHdev_SLASHpoll);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_eventport);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_notice);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_warn);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_crit);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_emerg);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__fileish_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(427);
      if (lookahead == '-') ADVANCE(426);
      if (set_contains(sym_var_character_set_2, 433, lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(258);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(288);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(215);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(355);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(203);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(216);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(204);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(353);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(304);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(199);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(295);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(222);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(243);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(400);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(303);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(297);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(367);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(369);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(292);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(205);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(201);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(259);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(424);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'k') ADVANCE(178);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(224);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 's') ADVANCE(267);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(214);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'b') ADVANCE(409);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(209);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(219);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(293);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(239);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(404);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(241);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(246);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(247);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(211);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'p') ADVANCE(335);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(349);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(405);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(408);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(454);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(192);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(417);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(285);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(231);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(185);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(327);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(248);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(393);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(315);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(460);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(202);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(455);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(453);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(465);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(421);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(452);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(356);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(462);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(451);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(352);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(302);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(354);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(217);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(314);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(179);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(383);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(382);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(386);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(294);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(377);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(345);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(210);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(364);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(366);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(321);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(218);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(208);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(271);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(260);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(276);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(284);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(470);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(471);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(180);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(274);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(189);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(412);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(305);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(307);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(334);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(299);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(389);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(184);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(318);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(391);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(323);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(348);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(396);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(306);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(316);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(403);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(213);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(340);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(301);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(372);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(342);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(343);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'j') ADVANCE(272);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(255);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(190);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(475);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(388);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(410);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(200);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(330);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(269);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(333);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(418);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(232);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(235);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(238);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(328);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(332);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(416);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(253);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(251);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(281);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 'v') ADVANCE(228);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(441);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(467);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(144);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(464);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(447);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(265);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(395);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(397);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(378);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(233);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(242);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(191);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(266);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(319);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(278);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(256);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(324);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(198);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(420);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(309);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(357);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(262);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(362);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(221);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(263);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(311);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(280);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(373);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(291);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(322);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(359);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(312);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(337);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(313);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(317);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(298);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(414);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(212);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(370);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(195);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(261);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(413);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == 's') ADVANCE(406);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead == 's') ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(341);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(390);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(365);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'q') ADVANCE(415);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(289);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(282);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(423);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(310);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(244);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(188);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(230);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(194);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(346);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(181);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(245);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(182);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(236);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(237);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(331);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(252);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(275);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(477);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(457);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(442);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(456);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(449);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(448);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(290);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(229);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(376);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(344);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(401);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(249);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(193);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(273);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(444);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(443);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(422);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(446);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(411);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(270);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(374);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(425);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(375);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(225);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(186);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(279);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(379);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(234);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(183);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(339);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(283);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(254);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(286);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(287);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(264);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(223);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(360);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(398);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(187);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(392);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(250);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(402);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(300);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(407);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(468);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(320);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'x') ADVANCE(440);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(450);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(461);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(445);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(463);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_var);
      if (set_contains(sym_var_character_set_2, 433, lookahead)) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(428);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_numeric_literal);
      ADVANCE_MAP(
        '.', 129,
        'M', 165,
        'm', 166,
        'E', 127,
        'e', 127,
        'G', 167,
        'K', 167,
        'g', 167,
        'k', 167,
        'd', 165,
        'h', 165,
        's', 165,
        'w', 165,
        'y', 165,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_map);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_accept_mutex);
      if (lookahead == '_') ADVANCE(226);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_daemon);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_master_process);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_multi_accept);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_pcre_jit);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_accept_mutex_delay);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_worker_shutdown_timeout);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_timer_resolution);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_worker_aio_requests);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_worker_connections);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_worker_priority);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_nofile);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_load_module);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_lock_file);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_pid);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_worker_processes);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_debug_points);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == 'r') ADVANCE(476);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_working_directory);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_core);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_worker_cpu_affinity);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_debug_connection);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_ssl_engine);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__abstract_directive_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_return);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_env);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__env_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_error_log);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_access_log);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__access_log_directive_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_max_queue);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_thread_pool);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_user);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_events);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(426);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48, .external_lex_state = 2},
  [4] = {.lex_state = 48, .external_lex_state = 2},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48, .external_lex_state = 2},
  [13] = {.lex_state = 48, .external_lex_state = 2},
  [14] = {.lex_state = 48, .external_lex_state = 2},
  [15] = {.lex_state = 48, .external_lex_state = 2},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 48},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 58},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 48},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 54},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 48},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 54},
  [162] = {.lex_state = 48},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 48},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 48},
  [190] = {.lex_state = 11},
  [191] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_random_value] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_STAR] = ACTIONS(1),
    [anon_sym_CARET_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_on] = ACTIONS(1),
    [sym_off] = ACTIONS(1),
    [sym_cpumask] = ACTIONS(1),
    [aux_sym__fileish_token1] = ACTIONS(1),
    [aux_sym__fileish_token2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_quoted_string_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(126),
    [sym_comment] = STATE(1),
    [aux_sym__body] = STATE(9),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(59),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(62),
    [anon_sym_location] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym__word] = ACTIONS(71),
    [anon_sym_map] = ACTIONS(74),
    [anon_sym_accept_mutex] = ACTIONS(77),
    [anon_sym_daemon] = ACTIONS(77),
    [anon_sym_master_process] = ACTIONS(77),
    [anon_sym_multi_accept] = ACTIONS(77),
    [anon_sym_pcre_jit] = ACTIONS(77),
    [anon_sym_accept_mutex_delay] = ACTIONS(80),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(80),
    [anon_sym_timer_resolution] = ACTIONS(80),
    [anon_sym_worker_aio_requests] = ACTIONS(83),
    [anon_sym_worker_connections] = ACTIONS(83),
    [anon_sym_worker_priority] = ACTIONS(83),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(83),
    [anon_sym_load_module] = ACTIONS(86),
    [anon_sym_lock_file] = ACTIONS(86),
    [anon_sym_pid] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_worker_processes] = ACTIONS(92),
    [anon_sym_debug_points] = ACTIONS(95),
    [anon_sym_use] = ACTIONS(98),
    [anon_sym_working_directory] = ACTIONS(101),
    [anon_sym_worker_rlimit_core] = ACTIONS(104),
    [anon_sym_worker_cpu_affinity] = ACTIONS(107),
    [anon_sym_debug_connection] = ACTIONS(110),
    [anon_sym_ssl_engine] = ACTIONS(110),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_env] = ACTIONS(116),
    [anon_sym_error_log] = ACTIONS(119),
    [anon_sym_access_log] = ACTIONS(122),
    [anon_sym_thread_pool] = ACTIONS(125),
    [anon_sym_user] = ACTIONS(128),
    [anon_sym_events] = ACTIONS(131),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym__body] = STATE(6),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(134),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
    [sym__newline] = ACTIONS(136),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__body] = STATE(11),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(138),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
    [sym__newline] = ACTIONS(140),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(146),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym__body] = STATE(7),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [aux_sym__body] = STATE(5),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(47),
    [sym_if] = STATE(47),
    [sym_location] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block] = STATE(47),
    [sym_map] = STATE(47),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(89),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(130),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(133),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(74),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__access_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_access_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(156), 1,
      sym__newline,
    STATE(12), 1,
      sym_comment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(154), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [56] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(158), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(160), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [110] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(162), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(164), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [164] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(166), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(168), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [218] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(172), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [271] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(160), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [324] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(176), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [377] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(180), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [430] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(184), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [483] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(188), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [536] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(168), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [589] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(192), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [642] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(196), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [695] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(200), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [748] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(204), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [801] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(208), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [854] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(212), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [907] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(216), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [960] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(220), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1013] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(224), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1066] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(164), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1119] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(228), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1172] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(232), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1225] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(236), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1278] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(240), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1331] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(244), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1384] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(248), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1437] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(252), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1490] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(256), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1543] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(260), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1596] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(264), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1649] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(266), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(268), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1702] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(272), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1755] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(276), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1808] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(280), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1861] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(284), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1914] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(288), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1967] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2020] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(294), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(296), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2073] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(298), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(300), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2126] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(304), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2179] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(306), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(308), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2232] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(312), 35,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_access_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2285] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(55), 1,
      sym_comment,
    STATE(96), 1,
      sym__attribute_value,
    STATE(149), 1,
      sym_block,
    ACTIONS(318), 2,
      sym_on,
      sym_off,
    ACTIONS(314), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(320), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(110), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(322), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(324), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2345] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(326), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(56), 1,
      sym_comment,
    STATE(117), 1,
      sym__attribute_value,
    ACTIONS(318), 2,
      sym_on,
      sym_off,
    ACTIONS(314), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(320), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(110), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(322), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(324), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2399] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_STAR,
    STATE(57), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_mask_repeat1,
    STATE(65), 1,
      aux_sym_file_repeat1,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2432] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(337), 1,
      aux_sym__fileish_token2,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      sym__fileish,
    ACTIONS(318), 2,
      sym_on,
      sym_off,
    STATE(128), 2,
      sym_boolean,
      sym_file,
    ACTIONS(335), 5,
      aux_sym__fileish_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2463] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(339), 1,
      anon_sym_STAR,
    STATE(57), 1,
      sym__fileish,
    STATE(59), 1,
      sym_comment,
    STATE(178), 2,
      sym_file,
      sym_mask,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2491] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_STAR,
    STATE(72), 1,
      sym__fileish,
    STATE(60), 2,
      sym_comment,
      aux_sym_mask_repeat1,
    ACTIONS(343), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2519] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(333), 1,
      anon_sym_STAR,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_mask_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(72), 1,
      sym__fileish,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2549] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(333), 1,
      anon_sym_STAR,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      aux_sym_mask_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(72), 1,
      sym__fileish,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2579] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(63), 1,
      sym_comment,
    STATE(138), 1,
      sym_level,
    ACTIONS(353), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2602] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_file_repeat1,
    STATE(76), 1,
      sym__fileish,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2629] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_file_repeat1,
    STATE(76), 1,
      sym__fileish,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2656] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym__fileish,
    STATE(66), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(361), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2681] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_file_repeat1,
    STATE(79), 1,
      sym__fileish,
    ACTIONS(355), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(335), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2706] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_file_repeat1,
    STATE(79), 1,
      sym__fileish,
    ACTIONS(357), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(335), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2731] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym__fileish,
    ACTIONS(359), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    STATE(69), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(364), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2754] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2774] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(67), 1,
      sym__fileish,
    STATE(71), 1,
      sym_comment,
    STATE(125), 1,
      sym_file,
    ACTIONS(335), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2798] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(369), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2818] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(369), 1,
      anon_sym_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(371), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2840] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(64), 1,
      sym__fileish,
    STATE(74), 1,
      sym_comment,
    STATE(124), 1,
      sym_file,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2864] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(64), 1,
      sym__fileish,
    STATE(75), 1,
      sym_comment,
    STATE(187), 1,
      sym_file,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2888] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(374), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2907] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(77), 1,
      sym_comment,
    STATE(185), 1,
      sym_connection_method,
    ACTIONS(376), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
  [2928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(367), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2945] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(374), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2962] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(378), 1,
      sym_location_route,
    ACTIONS(382), 1,
      anon_sym_TILDE,
    STATE(80), 1,
      sym_comment,
    STATE(190), 1,
      sym_location_modifier,
    ACTIONS(380), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2986] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(384), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [3004] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    STATE(82), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_map_repeat1,
    ACTIONS(386), 2,
      sym__word,
      sym_var,
  [3027] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__affinity_directive_repeat1,
    ACTIONS(390), 2,
      sym_auto,
      sym_cpumask,
  [3047] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 2,
      sym_auto,
      sym_cpumask,
    STATE(84), 2,
      sym_comment,
      aux_sym__affinity_directive_repeat1,
  [3065] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym__affinity_directive_repeat1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(390), 2,
      sym_auto,
      sym_cpumask,
  [3085] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 2,
      sym__word,
      sym_var,
    STATE(86), 2,
      sym_comment,
      aux_sym_map_repeat1,
  [3103] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(82), 1,
      aux_sym_map_repeat1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym__word,
      sym_var,
  [3120] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(88), 1,
      sym_comment,
    STATE(186), 1,
      sym__thread_poll_variable,
    ACTIONS(404), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [3137] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(89), 1,
      sym_comment,
    STATE(163), 1,
      sym_boolean,
    ACTIONS(406), 2,
      sym_on,
      sym_off,
  [3154] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(90), 1,
      sym_comment,
    STATE(160), 1,
      sym__thread_poll_variable,
    ACTIONS(408), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [3171] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym__word,
      sym_var,
  [3188] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_SEMI,
      sym_auto,
      sym_cpumask,
  [3203] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym__word,
    STATE(93), 1,
      sym_comment,
  [3219] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym_on,
      sym_off,
  [3233] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_attribute_token1,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym__access_log_directive_repeat1,
  [3249] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      aux_sym_attribute_token1,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_attribute_repeat1,
  [3265] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    STATE(97), 1,
      sym_comment,
  [3281] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    STATE(98), 1,
      sym_comment,
  [3297] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_attribute_token1,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym__access_log_directive_repeat1,
  [3313] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      aux_sym_attribute_token1,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(101), 2,
      sym_comment,
      aux_sym__access_log_directive_repeat1,
  [3343] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      aux_sym_attribute_token1,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(102), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [3357] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(446), 2,
      sym_auto,
      sym_numeric_literal,
  [3371] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_abort,
      anon_sym_stop,
  [3385] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      aux_sym_attribute_token1,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_attribute_repeat1,
    STATE(105), 1,
      sym_comment,
  [3401] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
    STATE(106), 1,
      sym_comment,
  [3417] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(452), 1,
      sym_random_value,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_comment,
  [3433] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(456), 2,
      sym_auto,
      sym_cpumask,
  [3447] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    STATE(109), 1,
      sym_comment,
  [3463] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3474] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_comment,
  [3487] = 4,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      aux_sym_attribute_token1,
    ACTIONS(466), 1,
      aux_sym__abstract_directive_token1,
    STATE(112), 1,
      sym_comment,
  [3500] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(468), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
  [3513] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(470), 1,
      sym__newline,
    STATE(114), 1,
      sym_comment,
  [3526] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(472), 1,
      sym__newline,
    STATE(115), 1,
      sym_comment,
  [3539] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(474), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [3552] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3563] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(476), 1,
      sym_numeric_literal,
    STATE(118), 1,
      sym_comment,
  [3576] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(478), 1,
      sym__newline,
    STATE(119), 1,
      sym_comment,
  [3589] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(480), 1,
      aux_sym__env_directive_token1,
    STATE(120), 1,
      sym_comment,
  [3602] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(482), 1,
      sym__word,
    STATE(121), 1,
      sym_comment,
  [3615] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(484), 1,
      sym__word,
    STATE(122), 1,
      sym_comment,
  [3628] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_comment,
  [3641] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_comment,
  [3654] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      aux_sym_attribute_token1,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      sym_comment,
  [3667] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_comment,
  [3680] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(496), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
  [3693] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(498), 1,
      aux_sym_attribute_token1,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_comment,
  [3706] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(502), 1,
      sym__newline,
    STATE(129), 1,
      sym_comment,
  [3719] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(504), 1,
      sym_time,
    STATE(130), 1,
      sym_comment,
  [3732] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(506), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [3745] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(508), 1,
      sym__newline,
    STATE(132), 1,
      sym_comment,
  [3758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(510), 1,
      sym_numeric_literal,
    STATE(133), 1,
      sym_comment,
  [3771] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(512), 1,
      sym__newline,
    STATE(134), 1,
      sym_comment,
  [3784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(514), 1,
      sym__newline,
    STATE(135), 1,
      sym_comment,
  [3797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_comment,
  [3836] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(522), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3847] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(524), 1,
      sym__newline,
    STATE(140), 1,
      sym_comment,
  [3860] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(526), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3871] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(528), 1,
      sym_numeric_literal,
    STATE(142), 1,
      sym_comment,
  [3884] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_comment,
  [3897] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(532), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3910] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(534), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3921] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(536), 1,
      sym__newline,
    STATE(146), 1,
      sym_comment,
  [3934] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(538), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3945] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(540), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3958] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(542), 1,
      sym__newline,
    STATE(149), 1,
      sym_comment,
  [3971] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(544), 1,
      sym__newline,
    STATE(150), 1,
      sym_comment,
  [3984] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(546), 1,
      sym__newline,
    STATE(151), 1,
      sym_comment,
  [3997] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(548), 1,
      sym_location_route,
    STATE(152), 1,
      sym_comment,
  [4010] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(550), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [4023] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(552), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [4036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(554), 1,
      sym__newline,
    STATE(155), 1,
      sym_comment,
  [4049] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(556), 1,
      aux_sym__access_log_directive_token1,
    STATE(156), 1,
      sym_comment,
  [4062] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(558), 1,
      sym__newline,
    STATE(157), 1,
      sym_comment,
  [4075] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(560), 1,
      sym_size,
    STATE(158), 1,
      sym_comment,
  [4088] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(562), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4099] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(564), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_comment,
  [4112] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(566), 1,
      sym_time,
    STATE(161), 1,
      sym_comment,
  [4125] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(568), 1,
      sym_numeric_literal,
    STATE(162), 1,
      sym_comment,
  [4138] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
  [4151] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(572), 1,
      sym__newline,
    STATE(164), 1,
      sym_comment,
  [4164] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(574), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4175] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_comment,
  [4188] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(578), 1,
      sym__newline,
    STATE(167), 1,
      sym_comment,
  [4201] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(580), 1,
      sym__newline,
    STATE(168), 1,
      sym_comment,
  [4214] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(582), 1,
      sym__newline,
    STATE(169), 1,
      sym_comment,
  [4227] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(584), 1,
      sym__newline,
    STATE(170), 1,
      sym_comment,
  [4240] = 4,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      aux_sym_attribute_token1,
    ACTIONS(586), 1,
      aux_sym__abstract_directive_token1,
    STATE(171), 1,
      sym_comment,
  [4253] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_comment,
  [4266] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_comment,
  [4279] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_comment,
  [4292] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(588), 1,
      sym_condition,
    STATE(175), 1,
      sym_comment,
  [4305] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_comment,
  [4318] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(592), 1,
      sym__newline,
    STATE(177), 1,
      sym_comment,
  [4331] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_comment,
  [4344] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(596), 1,
      aux_sym__access_log_directive_token1,
    STATE(179), 1,
      sym_comment,
  [4357] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(598), 1,
      sym__newline,
    STATE(180), 1,
      sym_comment,
  [4370] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_comment,
  [4383] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(602), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_comment,
  [4396] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_comment,
  [4409] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      sym_comment,
  [4422] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_comment,
  [4435] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(608), 1,
      aux_sym_attribute_token1,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_comment,
  [4448] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(187), 1,
      sym_comment,
  [4461] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(614), 1,
      sym_numeric_literal,
    STATE(188), 1,
      sym_comment,
  [4474] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(616), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
  [4487] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(618), 1,
      sym_location_route,
    STATE(190), 1,
      sym_comment,
  [4500] = 1,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 56,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 164,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 430,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 536,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 642,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 748,
  [SMALL_STATE(27)] = 801,
  [SMALL_STATE(28)] = 854,
  [SMALL_STATE(29)] = 907,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 1013,
  [SMALL_STATE(32)] = 1066,
  [SMALL_STATE(33)] = 1119,
  [SMALL_STATE(34)] = 1172,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1278,
  [SMALL_STATE(37)] = 1331,
  [SMALL_STATE(38)] = 1384,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1490,
  [SMALL_STATE(41)] = 1543,
  [SMALL_STATE(42)] = 1596,
  [SMALL_STATE(43)] = 1649,
  [SMALL_STATE(44)] = 1702,
  [SMALL_STATE(45)] = 1755,
  [SMALL_STATE(46)] = 1808,
  [SMALL_STATE(47)] = 1861,
  [SMALL_STATE(48)] = 1914,
  [SMALL_STATE(49)] = 1967,
  [SMALL_STATE(50)] = 2020,
  [SMALL_STATE(51)] = 2073,
  [SMALL_STATE(52)] = 2126,
  [SMALL_STATE(53)] = 2179,
  [SMALL_STATE(54)] = 2232,
  [SMALL_STATE(55)] = 2285,
  [SMALL_STATE(56)] = 2345,
  [SMALL_STATE(57)] = 2399,
  [SMALL_STATE(58)] = 2432,
  [SMALL_STATE(59)] = 2463,
  [SMALL_STATE(60)] = 2491,
  [SMALL_STATE(61)] = 2519,
  [SMALL_STATE(62)] = 2549,
  [SMALL_STATE(63)] = 2579,
  [SMALL_STATE(64)] = 2602,
  [SMALL_STATE(65)] = 2629,
  [SMALL_STATE(66)] = 2656,
  [SMALL_STATE(67)] = 2681,
  [SMALL_STATE(68)] = 2706,
  [SMALL_STATE(69)] = 2731,
  [SMALL_STATE(70)] = 2754,
  [SMALL_STATE(71)] = 2774,
  [SMALL_STATE(72)] = 2798,
  [SMALL_STATE(73)] = 2818,
  [SMALL_STATE(74)] = 2840,
  [SMALL_STATE(75)] = 2864,
  [SMALL_STATE(76)] = 2888,
  [SMALL_STATE(77)] = 2907,
  [SMALL_STATE(78)] = 2928,
  [SMALL_STATE(79)] = 2945,
  [SMALL_STATE(80)] = 2962,
  [SMALL_STATE(81)] = 2986,
  [SMALL_STATE(82)] = 3004,
  [SMALL_STATE(83)] = 3027,
  [SMALL_STATE(84)] = 3047,
  [SMALL_STATE(85)] = 3065,
  [SMALL_STATE(86)] = 3085,
  [SMALL_STATE(87)] = 3103,
  [SMALL_STATE(88)] = 3120,
  [SMALL_STATE(89)] = 3137,
  [SMALL_STATE(90)] = 3154,
  [SMALL_STATE(91)] = 3171,
  [SMALL_STATE(92)] = 3188,
  [SMALL_STATE(93)] = 3203,
  [SMALL_STATE(94)] = 3219,
  [SMALL_STATE(95)] = 3233,
  [SMALL_STATE(96)] = 3249,
  [SMALL_STATE(97)] = 3265,
  [SMALL_STATE(98)] = 3281,
  [SMALL_STATE(99)] = 3297,
  [SMALL_STATE(100)] = 3313,
  [SMALL_STATE(101)] = 3329,
  [SMALL_STATE(102)] = 3343,
  [SMALL_STATE(103)] = 3357,
  [SMALL_STATE(104)] = 3371,
  [SMALL_STATE(105)] = 3385,
  [SMALL_STATE(106)] = 3401,
  [SMALL_STATE(107)] = 3417,
  [SMALL_STATE(108)] = 3433,
  [SMALL_STATE(109)] = 3447,
  [SMALL_STATE(110)] = 3463,
  [SMALL_STATE(111)] = 3474,
  [SMALL_STATE(112)] = 3487,
  [SMALL_STATE(113)] = 3500,
  [SMALL_STATE(114)] = 3513,
  [SMALL_STATE(115)] = 3526,
  [SMALL_STATE(116)] = 3539,
  [SMALL_STATE(117)] = 3552,
  [SMALL_STATE(118)] = 3563,
  [SMALL_STATE(119)] = 3576,
  [SMALL_STATE(120)] = 3589,
  [SMALL_STATE(121)] = 3602,
  [SMALL_STATE(122)] = 3615,
  [SMALL_STATE(123)] = 3628,
  [SMALL_STATE(124)] = 3641,
  [SMALL_STATE(125)] = 3654,
  [SMALL_STATE(126)] = 3667,
  [SMALL_STATE(127)] = 3680,
  [SMALL_STATE(128)] = 3693,
  [SMALL_STATE(129)] = 3706,
  [SMALL_STATE(130)] = 3719,
  [SMALL_STATE(131)] = 3732,
  [SMALL_STATE(132)] = 3745,
  [SMALL_STATE(133)] = 3758,
  [SMALL_STATE(134)] = 3771,
  [SMALL_STATE(135)] = 3784,
  [SMALL_STATE(136)] = 3797,
  [SMALL_STATE(137)] = 3810,
  [SMALL_STATE(138)] = 3823,
  [SMALL_STATE(139)] = 3836,
  [SMALL_STATE(140)] = 3847,
  [SMALL_STATE(141)] = 3860,
  [SMALL_STATE(142)] = 3871,
  [SMALL_STATE(143)] = 3884,
  [SMALL_STATE(144)] = 3897,
  [SMALL_STATE(145)] = 3910,
  [SMALL_STATE(146)] = 3921,
  [SMALL_STATE(147)] = 3934,
  [SMALL_STATE(148)] = 3945,
  [SMALL_STATE(149)] = 3958,
  [SMALL_STATE(150)] = 3971,
  [SMALL_STATE(151)] = 3984,
  [SMALL_STATE(152)] = 3997,
  [SMALL_STATE(153)] = 4010,
  [SMALL_STATE(154)] = 4023,
  [SMALL_STATE(155)] = 4036,
  [SMALL_STATE(156)] = 4049,
  [SMALL_STATE(157)] = 4062,
  [SMALL_STATE(158)] = 4075,
  [SMALL_STATE(159)] = 4088,
  [SMALL_STATE(160)] = 4099,
  [SMALL_STATE(161)] = 4112,
  [SMALL_STATE(162)] = 4125,
  [SMALL_STATE(163)] = 4138,
  [SMALL_STATE(164)] = 4151,
  [SMALL_STATE(165)] = 4164,
  [SMALL_STATE(166)] = 4175,
  [SMALL_STATE(167)] = 4188,
  [SMALL_STATE(168)] = 4201,
  [SMALL_STATE(169)] = 4214,
  [SMALL_STATE(170)] = 4227,
  [SMALL_STATE(171)] = 4240,
  [SMALL_STATE(172)] = 4253,
  [SMALL_STATE(173)] = 4266,
  [SMALL_STATE(174)] = 4279,
  [SMALL_STATE(175)] = 4292,
  [SMALL_STATE(176)] = 4305,
  [SMALL_STATE(177)] = 4318,
  [SMALL_STATE(178)] = 4331,
  [SMALL_STATE(179)] = 4344,
  [SMALL_STATE(180)] = 4357,
  [SMALL_STATE(181)] = 4370,
  [SMALL_STATE(182)] = 4383,
  [SMALL_STATE(183)] = 4396,
  [SMALL_STATE(184)] = 4409,
  [SMALL_STATE(185)] = 4422,
  [SMALL_STATE(186)] = 4435,
  [SMALL_STATE(187)] = 4448,
  [SMALL_STATE(188)] = 4461,
  [SMALL_STATE(189)] = 4474,
  [SMALL_STATE(190)] = 4487,
  [SMALL_STATE(191)] = 4500,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(55),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(175),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(55),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(87),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(94),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(161),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(162),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(81),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(59),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(103),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(104),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(77),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(75),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(158),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(108),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(112),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(118),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(120),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(71),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(58),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(121),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(122),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(106),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__access_log_directive, 6, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__access_log_directive, 6, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_directive, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_directive, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_directive, 4, 0, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use_directive, 4, 0, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__access_log_directive, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__access_log_directive, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 4, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 4, 0, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_directive, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time_directive, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_directive, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_directive, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_directive, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_directive, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 5, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 5, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 5, 0, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 5, 0, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 6, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 6, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__access_log_directive, 7, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__access_log_directive, 7, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, 0, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, 0, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_file, 1, 0, 0), REDUCE(sym_mask, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileish, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0), REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_keyword, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_keyword, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__access_log_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__access_log_directive_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_method, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_modifier, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_poll_variable, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_keyword, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_keyword, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__access_log_directive_repeat1, 2, 0, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nginx_external_scanner_create(void);
void tree_sitter_nginx_external_scanner_destroy(void *);
bool tree_sitter_nginx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nginx_external_scanner_serialize(void *, char *);
void tree_sitter_nginx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nginx(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nginx_external_scanner_create,
      tree_sitter_nginx_external_scanner_destroy,
      tree_sitter_nginx_external_scanner_scan,
      tree_sitter_nginx_external_scanner_serialize,
      tree_sitter_nginx_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
