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
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_random_value = 2,
  sym__cidr = 3,
  anon_sym_SQUOTE_SQUOTE = 4,
  aux_sym_attribute_token1 = 5,
  anon_sym_SEMI = 6,
  sym_condition = 7,
  anon_sym_if = 8,
  sym_location_route = 9,
  anon_sym_EQ = 10,
  anon_sym_TILDE = 11,
  anon_sym_TILDE_STAR = 12,
  anon_sym_CARET_TILDE = 13,
  anon_sym_location = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_on = 17,
  sym_off = 18,
  sym_auto = 19,
  anon_sym_geo = 20,
  sym_cpumask = 21,
  anon_sym_select = 22,
  anon_sym_poll = 23,
  anon_sym_kqueue = 24,
  anon_sym_epoll = 25,
  anon_sym_SLASHdev_SLASHpoll = 26,
  anon_sym_eventport = 27,
  anon_sym_debug = 28,
  anon_sym_info = 29,
  anon_sym_notice = 30,
  anon_sym_warn = 31,
  anon_sym_error = 32,
  anon_sym_crit = 33,
  anon_sym_alert = 34,
  anon_sym_emerg = 35,
  sym_time = 36,
  sym_size = 37,
  aux_sym__fileish_token1 = 38,
  aux_sym__fileish_token2 = 39,
  anon_sym_SLASH = 40,
  anon_sym_DOT = 41,
  anon_sym_DASH = 42,
  anon_sym__ = 43,
  anon_sym_STAR = 44,
  sym__word = 45,
  sym_var = 46,
  aux_sym_quoted_string_literal_token1 = 47,
  sym_string_literal = 48,
  sym_numeric_literal = 49,
  anon_sym_map = 50,
  anon_sym_accept_mutex = 51,
  anon_sym_daemon = 52,
  anon_sym_master_process = 53,
  anon_sym_multi_accept = 54,
  anon_sym_pcre_jit = 55,
  anon_sym_accept_mutex_delay = 56,
  anon_sym_worker_shutdown_timeout = 57,
  anon_sym_timer_resolution = 58,
  anon_sym_worker_aio_requests = 59,
  anon_sym_worker_connections = 60,
  anon_sym_worker_priority = 61,
  anon_sym_worker_rlimit_nofile = 62,
  anon_sym_load_module = 63,
  anon_sym_lock_file = 64,
  anon_sym_pid = 65,
  anon_sym_include = 66,
  anon_sym_worker_processes = 67,
  anon_sym_debug_points = 68,
  anon_sym_abort = 69,
  anon_sym_stop = 70,
  anon_sym_use = 71,
  anon_sym_working_directory = 72,
  anon_sym_worker_rlimit_core = 73,
  anon_sym_worker_cpu_affinity = 74,
  anon_sym_debug_connection = 75,
  anon_sym_ssl_engine = 76,
  aux_sym__abstract_directive_token1 = 77,
  anon_sym_return = 78,
  anon_sym_env = 79,
  aux_sym__env_directive_token1 = 80,
  anon_sym_error_log = 81,
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
  sym_geo = 101,
  sym_connection_method = 102,
  sym_level = 103,
  sym__fileish = 104,
  sym_file = 105,
  sym_mask = 106,
  sym_quoted_string_literal = 107,
  sym_map = 108,
  sym__boolean_directive = 109,
  sym__boolean_keyword = 110,
  sym__time_directive = 111,
  sym__time_keyword = 112,
  sym__number_directive = 113,
  sym__number_keyword = 114,
  sym__file_directive = 115,
  sym__file_keyword = 116,
  sym__include_directive = 117,
  sym__number_or_auto_directive = 118,
  sym__debug_points_directive = 119,
  sym__use_directive = 120,
  sym__working_directory_directive = 121,
  sym__working_core_directive = 122,
  sym__affinity_directive = 123,
  sym__abstract_directive = 124,
  sym__return_directive = 125,
  sym__env_directive = 126,
  sym__error_log_directive = 127,
  sym__thread_poll_variable = 128,
  sym__thread_pool_directive = 129,
  sym__user_directive = 130,
  sym__events_directive = 131,
  aux_sym_attribute_repeat1 = 132,
  aux_sym_geo_repeat1 = 133,
  aux_sym_file_repeat1 = 134,
  aux_sym_mask_repeat1 = 135,
  aux_sym_map_repeat1 = 136,
  aux_sym__affinity_directive_repeat1 = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_random_value] = "value",
  [sym__cidr] = "keyword",
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
  [anon_sym_geo] = "geo",
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
  [sym_geo] = "geo",
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
  [sym__thread_poll_variable] = "variable",
  [sym__thread_pool_directive] = "_thread_pool_directive",
  [sym__user_directive] = "_user_directive",
  [sym__events_directive] = "_events_directive",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_geo_repeat1] = "geo_repeat1",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_mask_repeat1] = "mask_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym__affinity_directive_repeat1] = "_affinity_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_random_value] = sym_random_value,
  [sym__cidr] = sym__cidr,
  [anon_sym_SQUOTE_SQUOTE] = sym__cidr,
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
  [anon_sym_geo] = anon_sym_geo,
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
  [anon_sym_include] = sym__cidr,
  [anon_sym_worker_processes] = sym__cidr,
  [anon_sym_debug_points] = sym__cidr,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_stop] = anon_sym_abort,
  [anon_sym_use] = sym__cidr,
  [anon_sym_working_directory] = sym__cidr,
  [anon_sym_worker_rlimit_core] = sym__cidr,
  [anon_sym_worker_cpu_affinity] = sym__cidr,
  [anon_sym_debug_connection] = sym__cidr,
  [anon_sym_ssl_engine] = sym__cidr,
  [aux_sym__abstract_directive_token1] = sym_random_value,
  [anon_sym_return] = sym__cidr,
  [anon_sym_env] = sym__cidr,
  [aux_sym__env_directive_token1] = aux_sym__env_directive_token1,
  [anon_sym_error_log] = sym__cidr,
  [anon_sym_threads] = sym__cidr,
  [anon_sym_max_queue] = sym__cidr,
  [anon_sym_thread_pool] = sym__cidr,
  [anon_sym_user] = sym__cidr,
  [anon_sym_events] = sym__cidr,
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
  [sym_geo] = sym_geo,
  [sym_connection_method] = sym_connection_method,
  [sym_level] = sym_level,
  [sym__fileish] = sym__fileish,
  [sym_file] = sym_file,
  [sym_mask] = sym_mask,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_map] = sym_map,
  [sym__boolean_directive] = sym__boolean_directive,
  [sym__boolean_keyword] = sym__cidr,
  [sym__time_directive] = sym__time_directive,
  [sym__time_keyword] = sym__cidr,
  [sym__number_directive] = sym__number_directive,
  [sym__number_keyword] = sym__cidr,
  [sym__file_directive] = sym__file_directive,
  [sym__file_keyword] = sym__cidr,
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
  [sym__thread_poll_variable] = aux_sym__env_directive_token1,
  [sym__thread_pool_directive] = sym__thread_pool_directive,
  [sym__user_directive] = sym__user_directive,
  [sym__events_directive] = sym__events_directive,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_geo_repeat1] = aux_sym_geo_repeat1,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_mask_repeat1] = aux_sym_mask_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym__affinity_directive_repeat1] = aux_sym__affinity_directive_repeat1,
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
  [sym__cidr] = {
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
  [anon_sym_geo] = {
    .visible = true,
    .named = false,
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
  [sym_geo] = {
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
  [aux_sym_geo_repeat1] = {
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
    [0] = sym__cidr,
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 7,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 15,
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
  [63] = 61,
  [64] = 62,
  [65] = 65,
  [66] = 60,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 75,
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
  [163] = 128,
  [164] = 134,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 155,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 165,
  [179] = 142,
  [180] = 109,
  [181] = 181,
  [182] = 182,
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
      if (eof) ADVANCE(141);
      ADVANCE_MAP(
        '"', 148,
        '#', 144,
        '\'', 151,
        '*', 372,
        '-', 370,
        '.', 369,
        '/', 368,
        ';', 331,
        '=', 337,
        '^', 218,
        '_', 371,
        '{', 342,
        '}', 343,
        '~', 338,
        '0', 348,
        '1', 348,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(367);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '{') ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (set_contains(sym_var_character_set_1, 431, lookahead)) ADVANCE(373);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == '_') ADVANCE(371);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(367);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == ';') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(623);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '{') ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (set_contains(sym_var_character_set_1, 431, lookahead)) ADVANCE(624);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '^') ADVANCE(335);
      if (lookahead == '~') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(336);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(663);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(328);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '5') ADVANCE(18);
      if (lookahead == ':') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(22);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '.', 47,
        ':', 53,
        'G', 365,
        'K', 365,
        'M', 365,
        'g', 365,
        'k', 365,
        'm', 365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '5') ADVANCE(27);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '5') ADVANCE(35);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '2') ADVANCE(34);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == '2') ADVANCE(320);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '2') ADVANCE(26);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == '1') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 51:
      if (lookahead == '3') ADVANCE(325);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 107:
      if (lookahead == 'q') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 119:
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(666);
      END_STATE();
    case 140:
      if (eof) ADVANCE(141);
      ADVANCE_MAP(
        '#', 145,
        '\'', 12,
        '(', 15,
        '0', 19,
        '1', 24,
        '2', 17,
        ':', 52,
        ';', 331,
        '=', 337,
        'a', 376,
        'd', 374,
        'e', 381,
        'g', 444,
        'i', 461,
        'l', 526,
        'm', 405,
        'p', 413,
        'r', 432,
        's', 579,
        't', 471,
        'u', 580,
        'w', 530,
        '{', 342,
        '}', 343,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(623);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == ';') ADVANCE(145);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 148,
        '#', 144,
        '\'', 153,
        '/', 159,
        'a', 181,
        'c', 200,
        'd', 160,
        'e', 185,
        'i', 186,
        'k', 199,
        'n', 192,
        'o', 171,
        'p', 189,
        's', 165,
        'w', 155,
        '{', 342,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 148,
        '#', 144,
        '\'', 153,
        '/', 159,
        'a', 181,
        'c', 200,
        'd', 160,
        'e', 185,
        'i', 186,
        'k', 199,
        'n', 192,
        'o', 171,
        'p', 189,
        's', 165,
        'w', 155,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ';') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '\\') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'q') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '~') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__cidr);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(132);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '5') ADVANCE(321);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(319);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '/') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__cidr);
      if (lookahead == '2') ADVANCE(326);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__cidr);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(223);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__cidr);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(223);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__cidr);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(663);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_if);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead == '~') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_location);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_on);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_off);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_geo);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_cpumask);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_poll);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_kqueue);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_epoll);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SLASHdev_SLASHpoll);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_eventport);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_notice);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_warn);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_crit);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_emerg);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__fileish_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '-') ADVANCE(623);
      if (set_contains(sym_var_character_set_2, 433, lookahead)) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(597);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(53);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(462);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(491);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(420);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(554);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(412);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(421);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(505);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(406);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(552);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(504);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(408);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(500);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(427);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(448);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(598);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(564);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(568);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'u') ADVANCE(496);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(414);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(410);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(463);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(621);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'k') ADVANCE(388);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(429);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == 's') ADVANCE(470);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(424);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(416);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(495);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(445);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(602);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(450);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(451);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(535);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(549);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(603);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(606);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(651);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(394);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(614);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(488);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(436);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(396);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(528);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(453);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(586);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(515);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(657);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(411);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(652);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(650);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(662);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(618);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(649);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(555);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(659);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(648);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(527);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(553);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(582);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(422);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(514);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(389);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(581);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(585);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(576);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(497);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(583);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(546);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(563);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(417);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(566);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(521);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(423);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(415);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(473);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(464);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(480);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(486);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(667);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(390);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(478);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(400);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(609);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(506);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(508);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(501);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(507);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(534);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(588);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(395);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(518);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(590);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(523);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(548);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(594);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(516);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(601);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(419);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(503);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(541);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(571);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(543);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(544);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'j') ADVANCE(476);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(459);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(401);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(670);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(607);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(587);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(409);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(615);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(472);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(531);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(437);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(440);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(443);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(613);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(533);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(456);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(455);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(484);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(638);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(664);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(341);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(661);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(644);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(468);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(593);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(595);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(577);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(438);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(447);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(402);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(469);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(519);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(482);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(460);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(524);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(407);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(347);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(617);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(509);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(556);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(466);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(562);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(426);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(511);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(483);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(572);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(494);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(522);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(558);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(498);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(512);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(537);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(513);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(517);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(418);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(611);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(569);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(404);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(465);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(610);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == 's') ADVANCE(604);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(542);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(589);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(565);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'q') ADVANCE(612);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(492);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(485);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(620);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(510);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(449);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(435);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(399);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(403);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(446);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(545);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(391);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(392);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(441);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(442);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(532);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(457);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(479);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(672);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(654);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(639);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(653);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(646);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(645);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(493);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(434);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(575);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(540);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(599);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(452);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(584);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(608);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(477);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(641);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(640);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(619);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(643);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(475);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(573);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(622);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(574);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(430);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(397);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(474);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(578);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(439);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(393);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(539);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(487);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(458);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(489);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(490);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(428);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(559);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(596);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(398);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(591);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(454);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(600);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(502);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(605);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(665);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(520);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'x') ADVANCE(637);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(647);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(658);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(642);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(660);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_var);
      if (set_contains(sym_var_character_set_2, 433, lookahead)) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_numeric_literal);
      ADVANCE_MAP(
        '.', 220,
        'M', 363,
        'm', 364,
        'E', 219,
        'e', 219,
        'G', 365,
        'K', 365,
        'g', 365,
        'k', 365,
        'd', 363,
        'h', 363,
        's', 363,
        'w', 363,
        'y', 363,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_map);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_accept_mutex);
      if (lookahead == '_') ADVANCE(431);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_daemon);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_master_process);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_multi_accept);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_pcre_jit);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_accept_mutex_delay);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_worker_shutdown_timeout);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_timer_resolution);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_worker_aio_requests);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_worker_connections);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_worker_priority);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_nofile);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_load_module);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_lock_file);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_pid);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_worker_processes);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_debug_points);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == 'r') ADVANCE(671);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_working_directory);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_core);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_worker_cpu_affinity);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_debug_connection);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_ssl_engine);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__abstract_directive_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_return);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_env);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__env_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_error_log);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_max_queue);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_thread_pool);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_user);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_events);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(623);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 140, .external_lex_state = 2},
  [3] = {.lex_state = 140},
  [4] = {.lex_state = 140, .external_lex_state = 2},
  [5] = {.lex_state = 140},
  [6] = {.lex_state = 140},
  [7] = {.lex_state = 140},
  [8] = {.lex_state = 140},
  [9] = {.lex_state = 140},
  [10] = {.lex_state = 140},
  [11] = {.lex_state = 140},
  [12] = {.lex_state = 140, .external_lex_state = 2},
  [13] = {.lex_state = 140, .external_lex_state = 2},
  [14] = {.lex_state = 140, .external_lex_state = 2},
  [15] = {.lex_state = 140, .external_lex_state = 2},
  [16] = {.lex_state = 140},
  [17] = {.lex_state = 140},
  [18] = {.lex_state = 140},
  [19] = {.lex_state = 140},
  [20] = {.lex_state = 140},
  [21] = {.lex_state = 140},
  [22] = {.lex_state = 140},
  [23] = {.lex_state = 140},
  [24] = {.lex_state = 140},
  [25] = {.lex_state = 140},
  [26] = {.lex_state = 140},
  [27] = {.lex_state = 140},
  [28] = {.lex_state = 140},
  [29] = {.lex_state = 140},
  [30] = {.lex_state = 140},
  [31] = {.lex_state = 140},
  [32] = {.lex_state = 140},
  [33] = {.lex_state = 140},
  [34] = {.lex_state = 140},
  [35] = {.lex_state = 140},
  [36] = {.lex_state = 140},
  [37] = {.lex_state = 140},
  [38] = {.lex_state = 140},
  [39] = {.lex_state = 140},
  [40] = {.lex_state = 140},
  [41] = {.lex_state = 140},
  [42] = {.lex_state = 140},
  [43] = {.lex_state = 140},
  [44] = {.lex_state = 140},
  [45] = {.lex_state = 140},
  [46] = {.lex_state = 140},
  [47] = {.lex_state = 140},
  [48] = {.lex_state = 140},
  [49] = {.lex_state = 140},
  [50] = {.lex_state = 140},
  [51] = {.lex_state = 140},
  [52] = {.lex_state = 140},
  [53] = {.lex_state = 146},
  [54] = {.lex_state = 147},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 146},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 146},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 146},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 140},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 146},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 140},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 146},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 140},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 140},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 146},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 140},
  [181] = {.lex_state = 0},
  [182] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(167),
    [sym_comment] = STATE(1),
    [aux_sym__body] = STATE(6),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym__body] = STATE(8),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
    [sym__newline] = ACTIONS(59),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(61),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(63),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(63),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(66),
    [anon_sym_location] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_geo] = ACTIONS(75),
    [sym__word] = ACTIONS(78),
    [anon_sym_map] = ACTIONS(81),
    [anon_sym_accept_mutex] = ACTIONS(84),
    [anon_sym_daemon] = ACTIONS(84),
    [anon_sym_master_process] = ACTIONS(84),
    [anon_sym_multi_accept] = ACTIONS(84),
    [anon_sym_pcre_jit] = ACTIONS(84),
    [anon_sym_accept_mutex_delay] = ACTIONS(87),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(87),
    [anon_sym_timer_resolution] = ACTIONS(87),
    [anon_sym_worker_aio_requests] = ACTIONS(90),
    [anon_sym_worker_connections] = ACTIONS(90),
    [anon_sym_worker_priority] = ACTIONS(90),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(90),
    [anon_sym_load_module] = ACTIONS(93),
    [anon_sym_lock_file] = ACTIONS(93),
    [anon_sym_pid] = ACTIONS(93),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_worker_processes] = ACTIONS(99),
    [anon_sym_debug_points] = ACTIONS(102),
    [anon_sym_use] = ACTIONS(105),
    [anon_sym_working_directory] = ACTIONS(108),
    [anon_sym_worker_rlimit_core] = ACTIONS(111),
    [anon_sym_worker_cpu_affinity] = ACTIONS(114),
    [anon_sym_debug_connection] = ACTIONS(117),
    [anon_sym_ssl_engine] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(120),
    [anon_sym_env] = ACTIONS(123),
    [anon_sym_error_log] = ACTIONS(126),
    [anon_sym_thread_pool] = ACTIONS(129),
    [anon_sym_user] = ACTIONS(132),
    [anon_sym_events] = ACTIONS(135),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__body] = STATE(11),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
    [sym__newline] = ACTIONS(140),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym__body] = STATE(9),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [aux_sym__body] = STATE(5),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
    [anon_sym_thread_pool] = ACTIONS(51),
    [anon_sym_user] = ACTIONS(53),
    [anon_sym_events] = ACTIONS(55),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym__body] = STATE(3),
    [sym_attribute] = STATE(28),
    [sym_if] = STATE(28),
    [sym_location] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block] = STATE(28),
    [sym_geo] = STATE(28),
    [sym_map] = STATE(28),
    [sym__boolean_directive] = STATE(51),
    [sym__boolean_keyword] = STATE(86),
    [sym__time_directive] = STATE(51),
    [sym__time_keyword] = STATE(121),
    [sym__number_directive] = STATE(51),
    [sym__number_keyword] = STATE(123),
    [sym__file_directive] = STATE(51),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(51),
    [sym__number_or_auto_directive] = STATE(51),
    [sym__debug_points_directive] = STATE(51),
    [sym__use_directive] = STATE(51),
    [sym__working_directory_directive] = STATE(51),
    [sym__working_core_directive] = STATE(51),
    [sym__affinity_directive] = STATE(51),
    [sym__abstract_directive] = STATE(51),
    [sym__return_directive] = STATE(51),
    [sym__env_directive] = STATE(51),
    [sym__error_log_directive] = STATE(51),
    [sym__thread_pool_directive] = STATE(51),
    [sym__user_directive] = STATE(51),
    [sym__events_directive] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__cidr] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_geo] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_accept_mutex] = ACTIONS(21),
    [anon_sym_daemon] = ACTIONS(21),
    [anon_sym_master_process] = ACTIONS(21),
    [anon_sym_multi_accept] = ACTIONS(21),
    [anon_sym_pcre_jit] = ACTIONS(21),
    [anon_sym_accept_mutex_delay] = ACTIONS(23),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(23),
    [anon_sym_timer_resolution] = ACTIONS(23),
    [anon_sym_worker_aio_requests] = ACTIONS(25),
    [anon_sym_worker_connections] = ACTIONS(25),
    [anon_sym_worker_priority] = ACTIONS(25),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(25),
    [anon_sym_load_module] = ACTIONS(27),
    [anon_sym_lock_file] = ACTIONS(27),
    [anon_sym_pid] = ACTIONS(27),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_worker_processes] = ACTIONS(31),
    [anon_sym_debug_points] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_working_directory] = ACTIONS(37),
    [anon_sym_worker_rlimit_core] = ACTIONS(39),
    [anon_sym_worker_cpu_affinity] = ACTIONS(41),
    [anon_sym_debug_connection] = ACTIONS(43),
    [anon_sym_ssl_engine] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_env] = ACTIONS(47),
    [anon_sym_error_log] = ACTIONS(49),
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
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(154), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [57] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(158), 6,
      sym__newline,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(160), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [112] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(162), 6,
      sym__newline,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(164), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [167] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(166), 6,
      sym__newline,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(168), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [222] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(172), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [276] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(160), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [330] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(176), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [384] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(180), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [438] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(184), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [492] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(164), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [546] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(188), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [600] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(192), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [654] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(196), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [708] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(200), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [762] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(204), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [816] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(168), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [870] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(208), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [924] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(212), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [978] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(216), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1032] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(220), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1086] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(224), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1140] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(228), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1194] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(232), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1248] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(236), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1302] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(240), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1356] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(244), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1410] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(248), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1464] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(252), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1518] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(256), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1572] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(260), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1626] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(264), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1680] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(266), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(268), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1734] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(272), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1788] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(276), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1842] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(280), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1896] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(284), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1950] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(288), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2004] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2058] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(294), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(296), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2112] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(298), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(300), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2166] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      sym__cidr,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(304), 35,
      anon_sym_if,
      anon_sym_location,
      anon_sym_geo,
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
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2220] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(53), 1,
      sym_comment,
    STATE(93), 1,
      sym__attribute_value,
    STATE(122), 1,
      sym_block,
    ACTIONS(310), 2,
      sym_on,
      sym_off,
    ACTIONS(306), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(312), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(127), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(314), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(316), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2280] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(318), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(54), 1,
      sym_comment,
    STATE(118), 1,
      sym__attribute_value,
    ACTIONS(310), 2,
      sym_on,
      sym_off,
    ACTIONS(306), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(312), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(127), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(314), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(316), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2334] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_STAR,
    STATE(55), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_mask_repeat1,
    STATE(62), 1,
      aux_sym_file_repeat1,
    STATE(71), 1,
      sym__fileish,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2367] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(325), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_mask_repeat1,
    STATE(68), 1,
      sym__fileish,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2397] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      anon_sym_STAR,
    STATE(68), 1,
      sym__fileish,
    STATE(57), 2,
      sym_comment,
      aux_sym_mask_repeat1,
    ACTIONS(331), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2425] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(325), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_mask_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      sym__fileish,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2455] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(339), 1,
      anon_sym_STAR,
    STATE(55), 1,
      sym__fileish,
    STATE(59), 1,
      sym_comment,
    STATE(145), 2,
      sym_file,
      sym_mask,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2483] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_file_repeat1,
    STATE(75), 1,
      sym__fileish,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2510] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym__fileish,
    STATE(61), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(345), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2535] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      aux_sym_file_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(75), 1,
      sym__fileish,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2562] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym__fileish,
    ACTIONS(343), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    STATE(63), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(350), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2585] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      aux_sym_file_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(76), 1,
      sym__fileish,
    ACTIONS(348), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(353), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2610] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(65), 1,
      sym_comment,
    STATE(140), 1,
      sym_level,
    ACTIONS(355), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2633] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      aux_sym_file_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(76), 1,
      sym__fileish,
    ACTIONS(341), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(353), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2658] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(66), 1,
      sym__fileish,
    STATE(67), 1,
      sym_comment,
    STATE(160), 1,
      sym_file,
    ACTIONS(353), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2682] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(357), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2702] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(60), 1,
      sym__fileish,
    STATE(69), 1,
      sym_comment,
    STATE(151), 1,
      sym_file,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2726] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(60), 1,
      sym__fileish,
    STATE(70), 1,
      sym_comment,
    STATE(172), 1,
      sym_file,
    ACTIONS(323), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2750] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(357), 1,
      anon_sym_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(359), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2772] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(362), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2792] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(73), 1,
      sym_comment,
    STATE(149), 1,
      sym_connection_method,
    ACTIONS(364), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
  [2813] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(362), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2830] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(366), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2849] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(366), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2866] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(368), 1,
      sym_location_route,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    STATE(77), 1,
      sym_comment,
    STATE(126), 1,
      sym_location_modifier,
    ACTIONS(370), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2890] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(374), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2908] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_map_repeat1,
    ACTIONS(376), 2,
      sym__word,
      sym_var,
  [2931] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 2,
      sym__word,
      sym_var,
    STATE(80), 2,
      sym_comment,
      aux_sym_map_repeat1,
  [2949] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__affinity_directive_repeat1,
    ACTIONS(385), 2,
      sym_auto,
      sym_cpumask,
  [2969] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      sym_var,
    STATE(22), 1,
      sym_block,
    STATE(82), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_geo_repeat1,
  [2991] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym__affinity_directive_repeat1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(385), 2,
      sym_auto,
      sym_cpumask,
  [3011] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 2,
      sym_auto,
      sym_cpumask,
    STATE(84), 2,
      sym_comment,
      aux_sym__affinity_directive_repeat1,
  [3029] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym_var,
    STATE(85), 2,
      sym_comment,
      aux_sym_geo_repeat1,
  [3046] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(86), 1,
      sym_comment,
    STATE(169), 1,
      sym_boolean,
    ACTIONS(401), 2,
      sym_on,
      sym_off,
  [3063] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_SEMI,
      sym_auto,
      sym_cpumask,
  [3078] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(79), 1,
      aux_sym_map_repeat1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(376), 2,
      sym__word,
      sym_var,
  [3095] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(407), 2,
      sym__word,
      sym_var,
  [3112] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(90), 1,
      sym_comment,
    STATE(156), 1,
      sym__thread_poll_variable,
    ACTIONS(409), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [3129] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(91), 1,
      sym_comment,
    STATE(110), 1,
      sym__thread_poll_variable,
    ACTIONS(411), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [3146] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    STATE(92), 1,
      sym_comment,
  [3162] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      aux_sym_attribute_token1,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_attribute_repeat1,
  [3178] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      aux_sym_attribute_token1,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    STATE(94), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [3192] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    STATE(95), 1,
      sym_comment,
  [3208] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    STATE(96), 1,
      sym_comment,
  [3224] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(422), 2,
      sym_auto,
      sym_numeric_literal,
  [3238] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_abort,
      anon_sym_stop,
  [3252] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(387), 1,
      sym_var,
    STATE(82), 1,
      aux_sym_geo_repeat1,
    STATE(99), 1,
      sym_comment,
  [3268] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_LBRACE,
      sym_var,
  [3282] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym_auto,
      sym_cpumask,
  [3296] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      anon_sym_EQ,
    STATE(102), 1,
      sym_comment,
  [3312] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(434), 1,
      sym_random_value,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_comment,
  [3328] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      sym__word,
    STATE(104), 1,
      sym_comment,
  [3344] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(442), 2,
      sym_on,
      sym_off,
  [3358] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      aux_sym_attribute_token1,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      aux_sym_attribute_repeat1,
    STATE(106), 1,
      sym_comment,
  [3374] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
    STATE(107), 1,
      sym_comment,
  [3390] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(446), 1,
      aux_sym__env_directive_token1,
    STATE(108), 1,
      sym_comment,
  [3403] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(448), 1,
      anon_sym_EQ,
    STATE(109), 1,
      sym_comment,
  [3416] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      aux_sym_attribute_token1,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
  [3429] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
  [3442] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_comment,
  [3455] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3466] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(460), 1,
      sym__newline,
    STATE(114), 1,
      sym_comment,
  [3479] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(462), 1,
      sym__newline,
    STATE(115), 1,
      sym_comment,
  [3492] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(464), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [3505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(466), 1,
      sym__newline,
    STATE(117), 1,
      sym_comment,
  [3518] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(420), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3529] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(468), 1,
      sym_numeric_literal,
    STATE(119), 1,
      sym_comment,
  [3542] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(470), 1,
      sym__newline,
    STATE(120), 1,
      sym_comment,
  [3555] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(472), 1,
      sym_time,
    STATE(121), 1,
      sym_comment,
  [3568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(474), 1,
      sym__newline,
    STATE(122), 1,
      sym_comment,
  [3581] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(476), 1,
      sym_numeric_literal,
    STATE(123), 1,
      sym_comment,
  [3594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(478), 1,
      sym_condition,
    STATE(124), 1,
      sym_comment,
  [3607] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(480), 1,
      sym_location_route,
    STATE(125), 1,
      sym_comment,
  [3620] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(482), 1,
      sym_location_route,
    STATE(126), 1,
      sym_comment,
  [3633] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(484), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3644] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(486), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3655] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(488), 1,
      sym__newline,
    STATE(129), 1,
      sym_comment,
  [3668] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(490), 1,
      sym__newline,
    STATE(130), 1,
      sym_comment,
  [3681] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(492), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [3694] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(494), 1,
      sym__newline,
    STATE(132), 1,
      sym_comment,
  [3707] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(496), 1,
      sym__newline,
    STATE(133), 1,
      sym_comment,
  [3720] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(498), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3731] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(500), 1,
      sym__newline,
    STATE(135), 1,
      sym_comment,
  [3744] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(502), 1,
      sym__newline,
    STATE(136), 1,
      sym_comment,
  [3757] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(504), 1,
      sym_size,
    STATE(137), 1,
      sym_comment,
  [3770] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(506), 1,
      sym__newline,
    STATE(138), 1,
      sym_comment,
  [3783] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_comment,
  [3796] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_comment,
  [3809] = 4,
    ACTIONS(512), 1,
      aux_sym_comment_token1,
    ACTIONS(514), 1,
      aux_sym_attribute_token1,
    ACTIONS(516), 1,
      aux_sym__abstract_directive_token1,
    STATE(141), 1,
      sym_comment,
  [3822] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(518), 1,
      sym_numeric_literal,
    STATE(142), 1,
      sym_comment,
  [3835] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(520), 1,
      sym__newline,
    STATE(143), 1,
      sym_comment,
  [3848] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(522), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3861] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_comment,
  [3874] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(526), 1,
      sym__newline,
    STATE(146), 1,
      sym_comment,
  [3887] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
  [3900] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(530), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3913] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
  [3926] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(534), 1,
      sym_numeric_literal,
    STATE(150), 1,
      sym_comment,
  [3939] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_comment,
  [3952] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_comment,
  [3965] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(540), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [3978] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(542), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [3991] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(155), 1,
      sym_comment,
    ACTIONS(544), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4002] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_comment,
  [4015] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
  [4028] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(550), 1,
      sym_time,
    STATE(158), 1,
      sym_comment,
  [4041] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(552), 1,
      sym__newline,
    STATE(159), 1,
      sym_comment,
  [4054] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(554), 1,
      aux_sym_attribute_token1,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_comment,
  [4067] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(558), 1,
      sym__newline,
    STATE(161), 1,
      sym_comment,
  [4080] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
  [4093] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
  [4106] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_comment,
  [4119] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_comment,
  [4132] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(564), 1,
      sym__newline,
    STATE(166), 1,
      sym_comment,
  [4145] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_comment,
  [4158] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(568), 1,
      sym__newline,
    STATE(168), 1,
      sym_comment,
  [4171] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_comment,
  [4184] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_comment,
  [4197] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_comment,
  [4210] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_comment,
  [4223] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(578), 1,
      sym__word,
    STATE(173), 1,
      sym_comment,
  [4236] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_comment,
  [4249] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(580), 1,
      sym__newline,
    STATE(175), 1,
      sym_comment,
  [4262] = 4,
    ACTIONS(512), 1,
      aux_sym_comment_token1,
    ACTIONS(514), 1,
      aux_sym_attribute_token1,
    ACTIONS(582), 1,
      aux_sym__abstract_directive_token1,
    STATE(176), 1,
      sym_comment,
  [4275] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(584), 1,
      sym__word,
    STATE(177), 1,
      sym_comment,
  [4288] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(178), 1,
      sym_comment,
    ACTIONS(562), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4299] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(586), 1,
      sym_numeric_literal,
    STATE(179), 1,
      sym_comment,
  [4312] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(588), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [4325] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_comment,
  [4338] = 1,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 492,
  [SMALL_STATE(22)] = 546,
  [SMALL_STATE(23)] = 600,
  [SMALL_STATE(24)] = 654,
  [SMALL_STATE(25)] = 708,
  [SMALL_STATE(26)] = 762,
  [SMALL_STATE(27)] = 816,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 924,
  [SMALL_STATE(30)] = 978,
  [SMALL_STATE(31)] = 1032,
  [SMALL_STATE(32)] = 1086,
  [SMALL_STATE(33)] = 1140,
  [SMALL_STATE(34)] = 1194,
  [SMALL_STATE(35)] = 1248,
  [SMALL_STATE(36)] = 1302,
  [SMALL_STATE(37)] = 1356,
  [SMALL_STATE(38)] = 1410,
  [SMALL_STATE(39)] = 1464,
  [SMALL_STATE(40)] = 1518,
  [SMALL_STATE(41)] = 1572,
  [SMALL_STATE(42)] = 1626,
  [SMALL_STATE(43)] = 1680,
  [SMALL_STATE(44)] = 1734,
  [SMALL_STATE(45)] = 1788,
  [SMALL_STATE(46)] = 1842,
  [SMALL_STATE(47)] = 1896,
  [SMALL_STATE(48)] = 1950,
  [SMALL_STATE(49)] = 2004,
  [SMALL_STATE(50)] = 2058,
  [SMALL_STATE(51)] = 2112,
  [SMALL_STATE(52)] = 2166,
  [SMALL_STATE(53)] = 2220,
  [SMALL_STATE(54)] = 2280,
  [SMALL_STATE(55)] = 2334,
  [SMALL_STATE(56)] = 2367,
  [SMALL_STATE(57)] = 2397,
  [SMALL_STATE(58)] = 2425,
  [SMALL_STATE(59)] = 2455,
  [SMALL_STATE(60)] = 2483,
  [SMALL_STATE(61)] = 2510,
  [SMALL_STATE(62)] = 2535,
  [SMALL_STATE(63)] = 2562,
  [SMALL_STATE(64)] = 2585,
  [SMALL_STATE(65)] = 2610,
  [SMALL_STATE(66)] = 2633,
  [SMALL_STATE(67)] = 2658,
  [SMALL_STATE(68)] = 2682,
  [SMALL_STATE(69)] = 2702,
  [SMALL_STATE(70)] = 2726,
  [SMALL_STATE(71)] = 2750,
  [SMALL_STATE(72)] = 2772,
  [SMALL_STATE(73)] = 2792,
  [SMALL_STATE(74)] = 2813,
  [SMALL_STATE(75)] = 2830,
  [SMALL_STATE(76)] = 2849,
  [SMALL_STATE(77)] = 2866,
  [SMALL_STATE(78)] = 2890,
  [SMALL_STATE(79)] = 2908,
  [SMALL_STATE(80)] = 2931,
  [SMALL_STATE(81)] = 2949,
  [SMALL_STATE(82)] = 2969,
  [SMALL_STATE(83)] = 2991,
  [SMALL_STATE(84)] = 3011,
  [SMALL_STATE(85)] = 3029,
  [SMALL_STATE(86)] = 3046,
  [SMALL_STATE(87)] = 3063,
  [SMALL_STATE(88)] = 3078,
  [SMALL_STATE(89)] = 3095,
  [SMALL_STATE(90)] = 3112,
  [SMALL_STATE(91)] = 3129,
  [SMALL_STATE(92)] = 3146,
  [SMALL_STATE(93)] = 3162,
  [SMALL_STATE(94)] = 3178,
  [SMALL_STATE(95)] = 3192,
  [SMALL_STATE(96)] = 3208,
  [SMALL_STATE(97)] = 3224,
  [SMALL_STATE(98)] = 3238,
  [SMALL_STATE(99)] = 3252,
  [SMALL_STATE(100)] = 3268,
  [SMALL_STATE(101)] = 3282,
  [SMALL_STATE(102)] = 3296,
  [SMALL_STATE(103)] = 3312,
  [SMALL_STATE(104)] = 3328,
  [SMALL_STATE(105)] = 3344,
  [SMALL_STATE(106)] = 3358,
  [SMALL_STATE(107)] = 3374,
  [SMALL_STATE(108)] = 3390,
  [SMALL_STATE(109)] = 3403,
  [SMALL_STATE(110)] = 3416,
  [SMALL_STATE(111)] = 3429,
  [SMALL_STATE(112)] = 3442,
  [SMALL_STATE(113)] = 3455,
  [SMALL_STATE(114)] = 3466,
  [SMALL_STATE(115)] = 3479,
  [SMALL_STATE(116)] = 3492,
  [SMALL_STATE(117)] = 3505,
  [SMALL_STATE(118)] = 3518,
  [SMALL_STATE(119)] = 3529,
  [SMALL_STATE(120)] = 3542,
  [SMALL_STATE(121)] = 3555,
  [SMALL_STATE(122)] = 3568,
  [SMALL_STATE(123)] = 3581,
  [SMALL_STATE(124)] = 3594,
  [SMALL_STATE(125)] = 3607,
  [SMALL_STATE(126)] = 3620,
  [SMALL_STATE(127)] = 3633,
  [SMALL_STATE(128)] = 3644,
  [SMALL_STATE(129)] = 3655,
  [SMALL_STATE(130)] = 3668,
  [SMALL_STATE(131)] = 3681,
  [SMALL_STATE(132)] = 3694,
  [SMALL_STATE(133)] = 3707,
  [SMALL_STATE(134)] = 3720,
  [SMALL_STATE(135)] = 3731,
  [SMALL_STATE(136)] = 3744,
  [SMALL_STATE(137)] = 3757,
  [SMALL_STATE(138)] = 3770,
  [SMALL_STATE(139)] = 3783,
  [SMALL_STATE(140)] = 3796,
  [SMALL_STATE(141)] = 3809,
  [SMALL_STATE(142)] = 3822,
  [SMALL_STATE(143)] = 3835,
  [SMALL_STATE(144)] = 3848,
  [SMALL_STATE(145)] = 3861,
  [SMALL_STATE(146)] = 3874,
  [SMALL_STATE(147)] = 3887,
  [SMALL_STATE(148)] = 3900,
  [SMALL_STATE(149)] = 3913,
  [SMALL_STATE(150)] = 3926,
  [SMALL_STATE(151)] = 3939,
  [SMALL_STATE(152)] = 3952,
  [SMALL_STATE(153)] = 3965,
  [SMALL_STATE(154)] = 3978,
  [SMALL_STATE(155)] = 3991,
  [SMALL_STATE(156)] = 4002,
  [SMALL_STATE(157)] = 4015,
  [SMALL_STATE(158)] = 4028,
  [SMALL_STATE(159)] = 4041,
  [SMALL_STATE(160)] = 4054,
  [SMALL_STATE(161)] = 4067,
  [SMALL_STATE(162)] = 4080,
  [SMALL_STATE(163)] = 4093,
  [SMALL_STATE(164)] = 4106,
  [SMALL_STATE(165)] = 4119,
  [SMALL_STATE(166)] = 4132,
  [SMALL_STATE(167)] = 4145,
  [SMALL_STATE(168)] = 4158,
  [SMALL_STATE(169)] = 4171,
  [SMALL_STATE(170)] = 4184,
  [SMALL_STATE(171)] = 4197,
  [SMALL_STATE(172)] = 4210,
  [SMALL_STATE(173)] = 4223,
  [SMALL_STATE(174)] = 4236,
  [SMALL_STATE(175)] = 4249,
  [SMALL_STATE(176)] = 4262,
  [SMALL_STATE(177)] = 4275,
  [SMALL_STATE(178)] = 4288,
  [SMALL_STATE(179)] = 4299,
  [SMALL_STATE(180)] = 4312,
  [SMALL_STATE(181)] = 4325,
  [SMALL_STATE(182)] = 4338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(53),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(124),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(77),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(99),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(53),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(88),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(105),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(158),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(119),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(78),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(59),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(98),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(73),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(69),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(137),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(101),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(141),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(150),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(108),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(67),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(173),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(177),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(107),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_directive, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_directive, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, 0, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_geo, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_directive, 4, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use_directive, 4, 0, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 4, 0, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 4, 0, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_directive, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time_directive, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_directive, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_directive, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_directive, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_directive, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, 0, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 5, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 5, 0, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 5, 0, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 6, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 6, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_file, 1, 0, 0), REDUCE(sym_mask, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0), REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileish, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_keyword, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_geo_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_geo_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_geo_repeat1, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_keyword, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_keyword, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_modifier, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_method, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_poll_variable, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_keyword, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [566] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
