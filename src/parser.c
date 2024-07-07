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
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  sym__comment_content = 2,
  sym_random_value = 3,
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
  sym_string_literal = 44,
  sym_numeric_literal = 45,
  anon_sym_accept_mutex = 46,
  anon_sym_daemon = 47,
  anon_sym_master_process = 48,
  anon_sym_multi_accept = 49,
  anon_sym_pcre_jit = 50,
  anon_sym_accept_mutex_delay = 51,
  anon_sym_worker_shutdown_timeout = 52,
  anon_sym_timer_resolution = 53,
  anon_sym_worker_aio_requests = 54,
  anon_sym_worker_connections = 55,
  anon_sym_worker_priority = 56,
  anon_sym_worker_rlimit_nofile = 57,
  anon_sym_load_module = 58,
  anon_sym_lock_file = 59,
  anon_sym_pid = 60,
  anon_sym_include = 61,
  anon_sym_worker_processes = 62,
  anon_sym_debug_points = 63,
  anon_sym_abort = 64,
  anon_sym_stop = 65,
  anon_sym_use = 66,
  anon_sym_working_directory = 67,
  anon_sym_worker_rlimit_core = 68,
  anon_sym_worker_cpu_affinity = 69,
  anon_sym_debug_connection = 70,
  anon_sym_ssl_engine = 71,
  aux_sym__abstract_directive_token1 = 72,
  anon_sym_return = 73,
  anon_sym_env = 74,
  aux_sym__env_directive_token1 = 75,
  anon_sym_error_log = 76,
  anon_sym_threads = 77,
  anon_sym_max_queue = 78,
  anon_sym_thread_pool = 79,
  anon_sym_user = 80,
  anon_sym_events = 81,
  sym__newline = 82,
  sym__indent = 83,
  sym__dedent = 84,
  sym_source_file = 85,
  sym_comment = 86,
  aux_sym__body = 87,
  sym__attribute_value = 88,
  sym_attribute = 89,
  sym_if = 90,
  sym_location_modifier = 91,
  sym_location = 92,
  sym_directive = 93,
  sym_block = 94,
  sym_boolean = 95,
  sym_connection_method = 96,
  sym_level = 97,
  sym__fileish = 98,
  sym_file = 99,
  sym_mask = 100,
  sym__boolean_directive = 101,
  sym__boolean_keyword = 102,
  sym__time_directive = 103,
  sym__time_keyword = 104,
  sym__number_directive = 105,
  sym__number_keyword = 106,
  sym__file_directive = 107,
  sym__file_keyword = 108,
  sym__include_directive = 109,
  sym__number_or_auto_directive = 110,
  sym__debug_points_directive = 111,
  sym__use_directive = 112,
  sym__working_directory_directive = 113,
  sym__working_core_directive = 114,
  sym__affinity_directive = 115,
  sym__abstract_directive = 116,
  sym__return_directive = 117,
  sym__env_directive = 118,
  sym__error_log_directive = 119,
  sym__thread_poll_variable = 120,
  sym__thread_pool_directive = 121,
  sym__user_directive = 122,
  sym__events_directive = 123,
  aux_sym_attribute_repeat1 = 124,
  aux_sym_file_repeat1 = 125,
  aux_sym_mask_repeat1 = 126,
  aux_sym__affinity_directive_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym__comment_content] = "_comment_content",
  [sym_random_value] = "value",
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
  [sym__word] = "value",
  [sym_string_literal] = "string_literal",
  [sym_numeric_literal] = "numeric_literal",
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
  [sym_connection_method] = "connection_method",
  [sym_level] = "level",
  [sym__fileish] = "_fileish",
  [sym_file] = "file",
  [sym_mask] = "mask",
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
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_mask_repeat1] = "mask_repeat1",
  [aux_sym__affinity_directive_repeat1] = "_affinity_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__comment_content] = sym__comment_content,
  [sym_random_value] = sym_random_value,
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
  [sym__word] = sym_random_value,
  [sym_string_literal] = sym_string_literal,
  [sym_numeric_literal] = sym_numeric_literal,
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
  [anon_sym_include] = anon_sym_include,
  [anon_sym_worker_processes] = anon_sym_include,
  [anon_sym_debug_points] = anon_sym_include,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_stop] = anon_sym_abort,
  [anon_sym_use] = anon_sym_include,
  [anon_sym_working_directory] = anon_sym_include,
  [anon_sym_worker_rlimit_core] = anon_sym_include,
  [anon_sym_worker_cpu_affinity] = anon_sym_include,
  [anon_sym_debug_connection] = anon_sym_include,
  [anon_sym_ssl_engine] = anon_sym_include,
  [aux_sym__abstract_directive_token1] = sym_random_value,
  [anon_sym_return] = anon_sym_include,
  [anon_sym_env] = anon_sym_include,
  [aux_sym__env_directive_token1] = aux_sym__env_directive_token1,
  [anon_sym_error_log] = anon_sym_include,
  [anon_sym_threads] = anon_sym_include,
  [anon_sym_max_queue] = anon_sym_include,
  [anon_sym_thread_pool] = anon_sym_include,
  [anon_sym_user] = anon_sym_include,
  [anon_sym_events] = anon_sym_include,
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
  [sym__boolean_directive] = sym__boolean_directive,
  [sym__boolean_keyword] = anon_sym_include,
  [sym__time_directive] = sym__time_directive,
  [sym__time_keyword] = anon_sym_include,
  [sym__number_directive] = sym__number_directive,
  [sym__number_keyword] = anon_sym_include,
  [sym__file_directive] = sym__file_directive,
  [sym__file_keyword] = anon_sym_include,
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
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_mask_repeat1] = aux_sym_mask_repeat1,
  [aux_sym__affinity_directive_repeat1] = aux_sym__affinity_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym_random_value] = {
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
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
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
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mask_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_sym_include,
  },
  [3] = {
    [1] = anon_sym_abort,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
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
  [21] = 14,
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
  [39] = 13,
  [40] = 15,
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
  [62] = 58,
  [63] = 60,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 66,
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
  [129] = 101,
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
  [157] = 150,
  [158] = 98,
  [159] = 145,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 148,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 134,
  [173] = 173,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_random_value);
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 43,
        '\'', 51,
        '*', 164,
        '-', 162,
        '.', 161,
        '/', 160,
        ';', 124,
        '=', 130,
        '^', 117,
        '_', 163,
        '{', 135,
        '}', 136,
        '~', 131,
        '0', 140,
        '1', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(159);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '_') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(159);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ';') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(408);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(443);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(436);
      END_STATE();
    case 25:
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 37:
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(446);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 43,
        '(', 10,
        ';', 124,
        '=', 130,
        'a', 192,
        'd', 182,
        'e', 292,
        'i', 243,
        'l', 310,
        'm', 185,
        'p', 193,
        'r', 213,
        's', 362,
        't', 253,
        'u', 364,
        'w', 313,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 430, lookahead)) ADVANCE(408);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(443);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '#') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '#', 43,
        '\'', 51,
        '/', 58,
        'a', 80,
        'c', 99,
        'd', 59,
        'e', 84,
        'i', 85,
        'k', 98,
        'n', 91,
        'o', 70,
        'p', 88,
        's', 64,
        'w', 54,
        '{', 135,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '#', 43,
        '\'', 51,
        '/', 58,
        'a', 80,
        'c', 99,
        'd', 59,
        'e', 84,
        'i', 85,
        'k', 98,
        'n', 91,
        'o', 70,
        'p', 88,
        's', 64,
        'w', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ';') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'q') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(443);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_if);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_location);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_on);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_off);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_cpumask);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_poll);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_kqueue);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_epoll);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASHdev_SLASHpoll);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_eventport);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_notice);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_warn);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_crit);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_emerg);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__fileish_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(244);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(273);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(199);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(189);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(201);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(337);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(190);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(288);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(335);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(184);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(280);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(208);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(228);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(382);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(287);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(349);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(351);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(191);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(187);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(245);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(277);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(406);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'k') ADVANCE(165);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(210);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(252);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(202);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'b') ADVANCE(391);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(195);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(205);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(278);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(216);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(386);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(231);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(232);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'p') ADVANCE(318);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(237);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(332);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(200);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(390);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(431);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(179);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(399);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(270);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(218);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(173);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(311);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(233);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(375);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(299);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(437);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(334);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(188);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(432);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(430);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(442);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(403);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(429);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(338);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(439);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(428);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(286);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(203);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(298);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(166);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(366);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(365);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(369);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(279);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(359);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(367);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(329);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(336);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(196);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(346);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(348);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(305);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(204);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(194);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(256);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(246);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(262);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(269);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(447);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(167);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(259);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(176);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(394);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(289);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(291);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(317);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(283);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(371);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(171);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(302);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(373);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(331);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(307);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(378);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(290);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(300);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(198);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(324);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(285);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(354);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(325);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(326);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'j') ADVANCE(257);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(241);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(177);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(450);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(370);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(392);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(186);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(314);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(254);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(400);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(219);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(222);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(225);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(312);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(316);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(398);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(239);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(236);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(266);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == 'v') ADVANCE(214);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(418);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(444);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(134);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(441);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(424);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(250);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(377);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(379);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(360);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(220);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(227);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(178);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(251);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(303);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(263);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(242);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(308);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(183);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(402);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(293);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(339);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(248);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(344);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(207);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(295);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(265);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(355);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(276);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(306);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(341);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(320);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(296);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(297);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(301);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(197);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(282);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(396);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(352);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(181);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(247);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(395);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(381);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(323);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(372);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(347);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'q') ADVANCE(397);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(274);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(267);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(405);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(294);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(229);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(175);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(217);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(180);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(327);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(170);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(230);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(168);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(223);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(224);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(315);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(238);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(260);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(452);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(434);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(419);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(433);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(426);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(425);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(275);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(388);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(215);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(358);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(328);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(383);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(234);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(368);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(258);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(421);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(420);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(404);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(423);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(393);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(255);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(356);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(407);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(357);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(211);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(172);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(264);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(361);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(221);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(169);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(322);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(268);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(240);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(271);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(272);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(249);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(209);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(342);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(380);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(174);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(374);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(235);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(384);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(284);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(389);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(445);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(304);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'x') ADVANCE(417);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(427);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(438);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(422);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(440);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_numeric_literal);
      ADVANCE_MAP(
        '.', 120,
        'M', 155,
        'm', 156,
        'E', 118,
        'e', 118,
        'G', 157,
        'K', 157,
        'g', 157,
        'k', 157,
        'd', 155,
        'h', 155,
        's', 155,
        'w', 155,
        'y', 155,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_accept_mutex);
      if (lookahead == '_') ADVANCE(212);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_daemon);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_master_process);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_multi_accept);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_pcre_jit);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_accept_mutex_delay);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_worker_shutdown_timeout);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_timer_resolution);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_worker_aio_requests);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_worker_connections);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_worker_priority);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_nofile);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_load_module);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_lock_file);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_pid);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_worker_processes);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_debug_points);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == 'r') ADVANCE(451);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_working_directory);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_core);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_worker_cpu_affinity);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_debug_connection);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_ssl_engine);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__abstract_directive_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_return);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_env);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__env_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_error_log);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_max_queue);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_thread_pool);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_user);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_events);
      if (set_contains(sym__word_character_set_1, 433, lookahead)) ADVANCE(408);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41, .external_lex_state = 2},
  [3] = {.lex_state = 41, .external_lex_state = 2},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41, .external_lex_state = 2},
  [13] = {.lex_state = 41, .external_lex_state = 2},
  [14] = {.lex_state = 41, .external_lex_state = 2},
  [15] = {.lex_state = 41, .external_lex_state = 2},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 50},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 46},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 48},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 48},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 41},
  [173] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_random_value] = ACTIONS(1),
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
    [sym_string_literal] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(161),
    [sym_comment] = STATE(1),
    [aux_sym__body] = STATE(11),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym__body] = STATE(8),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
    [sym__newline] = ACTIONS(53),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym__body] = STATE(7),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
    [sym__newline] = ACTIONS(57),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_location] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym__word] = ACTIONS(70),
    [anon_sym_accept_mutex] = ACTIONS(73),
    [anon_sym_daemon] = ACTIONS(73),
    [anon_sym_master_process] = ACTIONS(73),
    [anon_sym_multi_accept] = ACTIONS(73),
    [anon_sym_pcre_jit] = ACTIONS(73),
    [anon_sym_accept_mutex_delay] = ACTIONS(76),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(76),
    [anon_sym_timer_resolution] = ACTIONS(76),
    [anon_sym_worker_aio_requests] = ACTIONS(79),
    [anon_sym_worker_connections] = ACTIONS(79),
    [anon_sym_worker_priority] = ACTIONS(79),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(79),
    [anon_sym_load_module] = ACTIONS(82),
    [anon_sym_lock_file] = ACTIONS(82),
    [anon_sym_pid] = ACTIONS(82),
    [anon_sym_include] = ACTIONS(85),
    [anon_sym_worker_processes] = ACTIONS(88),
    [anon_sym_debug_points] = ACTIONS(91),
    [anon_sym_use] = ACTIONS(94),
    [anon_sym_working_directory] = ACTIONS(97),
    [anon_sym_worker_rlimit_core] = ACTIONS(100),
    [anon_sym_worker_cpu_affinity] = ACTIONS(103),
    [anon_sym_debug_connection] = ACTIONS(106),
    [anon_sym_ssl_engine] = ACTIONS(106),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_env] = ACTIONS(112),
    [anon_sym_error_log] = ACTIONS(115),
    [anon_sym_thread_pool] = ACTIONS(118),
    [anon_sym_user] = ACTIONS(121),
    [anon_sym_events] = ACTIONS(124),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym__body] = STATE(5),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [aux_sym__body] = STATE(6),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym__body] = STATE(4),
    [sym_attribute] = STATE(27),
    [sym_if] = STATE(27),
    [sym_location] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block] = STATE(27),
    [sym__boolean_directive] = STATE(28),
    [sym__boolean_keyword] = STATE(80),
    [sym__time_directive] = STATE(28),
    [sym__time_keyword] = STATE(160),
    [sym__number_directive] = STATE(28),
    [sym__number_keyword] = STATE(156),
    [sym__file_directive] = STATE(28),
    [sym__file_keyword] = STATE(70),
    [sym__include_directive] = STATE(28),
    [sym__number_or_auto_directive] = STATE(28),
    [sym__debug_points_directive] = STATE(28),
    [sym__use_directive] = STATE(28),
    [sym__working_directory_directive] = STATE(28),
    [sym__working_core_directive] = STATE(28),
    [sym__affinity_directive] = STATE(28),
    [sym__abstract_directive] = STATE(28),
    [sym__return_directive] = STATE(28),
    [sym__env_directive] = STATE(28),
    [sym__error_log_directive] = STATE(28),
    [sym__thread_pool_directive] = STATE(28),
    [sym__user_directive] = STATE(28),
    [sym__events_directive] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_location] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym__word] = ACTIONS(13),
    [anon_sym_accept_mutex] = ACTIONS(15),
    [anon_sym_daemon] = ACTIONS(15),
    [anon_sym_master_process] = ACTIONS(15),
    [anon_sym_multi_accept] = ACTIONS(15),
    [anon_sym_pcre_jit] = ACTIONS(15),
    [anon_sym_accept_mutex_delay] = ACTIONS(17),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(17),
    [anon_sym_timer_resolution] = ACTIONS(17),
    [anon_sym_worker_aio_requests] = ACTIONS(19),
    [anon_sym_worker_connections] = ACTIONS(19),
    [anon_sym_worker_priority] = ACTIONS(19),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(19),
    [anon_sym_load_module] = ACTIONS(21),
    [anon_sym_lock_file] = ACTIONS(21),
    [anon_sym_pid] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_worker_processes] = ACTIONS(25),
    [anon_sym_debug_points] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_working_directory] = ACTIONS(31),
    [anon_sym_worker_rlimit_core] = ACTIONS(33),
    [anon_sym_worker_cpu_affinity] = ACTIONS(35),
    [anon_sym_debug_connection] = ACTIONS(37),
    [anon_sym_ssl_engine] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_env] = ACTIONS(41),
    [anon_sym_error_log] = ACTIONS(43),
    [anon_sym_thread_pool] = ACTIONS(45),
    [anon_sym_user] = ACTIONS(47),
    [anon_sym_events] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(141), 1,
      sym__newline,
    STATE(12), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(139), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [53] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(143), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(145), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [104] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(147), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [155] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(151), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(157), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [256] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(161), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(165), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [356] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(169), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [406] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(173), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [506] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(177), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(181), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [606] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(185), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [656] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(189), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(193), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [756] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(197), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(201), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [856] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(205), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [906] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(209), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [956] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(213), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1006] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(217), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1056] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(221), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1106] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(225), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1156] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(229), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(233), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1256] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(237), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(241), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(145), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1406] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(245), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1506] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(249), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(253), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1606] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(257), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1656] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(261), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(265), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1756] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(269), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(273), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1856] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(277), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1906] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(281), 33,
      anon_sym_if,
      anon_sym_location,
      sym__word,
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
  [1956] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_comment,
    STATE(85), 1,
      sym__attribute_value,
    STATE(144), 1,
      sym_block,
    ACTIONS(287), 2,
      sym_on,
      sym_off,
    ACTIONS(283), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(289), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(151), 3,
      sym_boolean,
      sym_connection_method,
      sym_level,
    ACTIONS(291), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(293), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2012] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(52), 1,
      sym_comment,
    STATE(112), 1,
      sym__attribute_value,
    ACTIONS(287), 2,
      sym_on,
      sym_off,
    ACTIONS(283), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(289), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(151), 3,
      sym_boolean,
      sym_connection_method,
      sym_level,
    ACTIONS(291), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(293), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2062] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_STAR,
    STATE(53), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_mask_repeat1,
    STATE(61), 1,
      aux_sym_file_repeat1,
    STATE(68), 1,
      sym__fileish,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2095] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_mask_repeat1,
    STATE(69), 1,
      sym__fileish,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2125] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_STAR,
    STATE(69), 1,
      sym__fileish,
    STATE(55), 2,
      sym_comment,
      aux_sym_mask_repeat1,
    ACTIONS(306), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2153] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_STAR,
    STATE(53), 1,
      sym__fileish,
    STATE(56), 1,
      sym_comment,
    STATE(143), 2,
      sym_file,
      sym_mask,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2181] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_mask_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(69), 1,
      sym__fileish,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2211] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym__fileish,
    STATE(58), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(318), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2236] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(59), 1,
      sym_comment,
    STATE(132), 1,
      sym_level,
    ACTIONS(321), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2259] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_file_repeat1,
    STATE(74), 1,
      sym__fileish,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2286] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      aux_sym_file_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(74), 1,
      sym__fileish,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(316), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    STATE(62), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(327), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2336] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_file_repeat1,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(323), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(330), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2361] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(62), 1,
      aux_sym_file_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(325), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(330), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2386] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(63), 1,
      sym__fileish,
    STATE(65), 1,
      sym_comment,
    STATE(133), 1,
      sym_file,
    ACTIONS(330), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2410] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(332), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2430] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(60), 1,
      sym__fileish,
    STATE(67), 1,
      sym_comment,
    STATE(139), 1,
      sym_file,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(337), 1,
      anon_sym_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2476] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(337), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2496] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(60), 1,
      sym__fileish,
    STATE(70), 1,
      sym_comment,
    STATE(125), 1,
      sym_file,
    ACTIONS(298), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2520] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(71), 1,
      sym_comment,
    STATE(140), 1,
      sym_connection_method,
    ACTIONS(339), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
  [2541] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(332), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2558] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_comment,
    ACTIONS(341), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2575] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(341), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2594] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(343), 1,
      sym_location_route,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    STATE(75), 1,
      sym_comment,
    STATE(152), 1,
      sym_location_modifier,
    ACTIONS(345), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(349), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2636] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym__affinity_directive_repeat1,
    ACTIONS(353), 2,
      sym_auto,
      sym_cpumask,
  [2656] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym__affinity_directive_repeat1,
    ACTIONS(353), 2,
      sym_auto,
      sym_cpumask,
  [2676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(359), 2,
      sym_auto,
      sym_cpumask,
    STATE(79), 2,
      sym_comment,
      aux_sym__affinity_directive_repeat1,
  [2694] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(80), 1,
      sym_comment,
    STATE(130), 1,
      sym_boolean,
    ACTIONS(362), 2,
      sym_on,
      sym_off,
  [2711] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(81), 1,
      sym_comment,
    STATE(149), 1,
      sym__thread_poll_variable,
    ACTIONS(364), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [2728] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_SEMI,
      sym_auto,
      sym_cpumask,
  [2743] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(83), 1,
      sym_comment,
    STATE(102), 1,
      sym__thread_poll_variable,
    ACTIONS(368), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [2760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      sym__word,
    STATE(84), 1,
      sym_comment,
  [2776] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_attribute_token1,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_attribute_repeat1,
  [2792] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_abort,
      anon_sym_stop,
  [2806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
    STATE(87), 1,
      sym_comment,
  [2822] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    STATE(88), 1,
      sym_comment,
  [2838] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    STATE(89), 1,
      sym_comment,
  [2854] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_comment,
  [2870] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(384), 2,
      sym_auto,
      sym_numeric_literal,
  [2884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(386), 1,
      sym_random_value,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
  [2900] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_attribute_token1,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_attribute_repeat1,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(392), 2,
      sym_on,
      sym_off,
  [2930] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(394), 1,
      aux_sym_attribute_token1,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(95), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [2944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_auto,
      sym_cpumask,
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
    STATE(97), 1,
      sym_comment,
  [2974] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(401), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [2985] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
  [2998] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(405), 1,
      sym__newline,
    STATE(100), 1,
      sym_comment,
  [3011] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(407), 1,
      anon_sym_EQ,
    STATE(101), 1,
      sym_comment,
  [3024] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      aux_sym_attribute_token1,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
  [3037] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(413), 1,
      sym__newline,
    STATE(103), 1,
      sym_comment,
  [3050] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_comment,
  [3063] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(417), 1,
      sym__newline,
    STATE(105), 1,
      sym_comment,
  [3076] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(419), 1,
      sym__newline,
    STATE(106), 1,
      sym_comment,
  [3089] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(421), 1,
      sym__newline,
    STATE(107), 1,
      sym_comment,
  [3102] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(423), 1,
      sym__newline,
    STATE(108), 1,
      sym_comment,
  [3115] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(425), 1,
      sym__newline,
    STATE(109), 1,
      sym_comment,
  [3128] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(427), 1,
      sym__newline,
    STATE(110), 1,
      sym_comment,
  [3141] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(429), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
  [3154] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(397), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3165] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(431), 1,
      sym__newline,
    STATE(113), 1,
      sym_comment,
  [3178] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(433), 1,
      sym__newline,
    STATE(114), 1,
      sym_comment,
  [3191] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_comment,
  [3204] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(437), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [3217] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(439), 1,
      sym__newline,
    STATE(117), 1,
      sym_comment,
  [3230] = 4,
    ACTIONS(441), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      aux_sym_attribute_token1,
    ACTIONS(445), 1,
      aux_sym__abstract_directive_token1,
    STATE(118), 1,
      sym_comment,
  [3243] = 4,
    ACTIONS(441), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      aux_sym_attribute_token1,
    ACTIONS(447), 1,
      sym__comment_content,
    STATE(119), 1,
      sym_comment,
  [3256] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(449), 1,
      sym__newline,
    STATE(120), 1,
      sym_comment,
  [3269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(451), 1,
      sym__newline,
    STATE(121), 1,
      sym_comment,
  [3282] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(453), 1,
      sym__newline,
    STATE(122), 1,
      sym_comment,
  [3295] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(455), 1,
      sym__newline,
    STATE(123), 1,
      sym_comment,
  [3308] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(457), 1,
      sym__newline,
    STATE(124), 1,
      sym_comment,
  [3321] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      sym_comment,
  [3334] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_comment,
  [3347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(463), 1,
      sym__newline,
    STATE(127), 1,
      sym_comment,
  [3360] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_comment,
  [3373] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(467), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
  [3386] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_comment,
  [3399] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_comment,
  [3412] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(473), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_comment,
  [3425] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      aux_sym_attribute_token1,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_comment,
  [3438] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(479), 1,
      sym_numeric_literal,
    STATE(134), 1,
      sym_comment,
  [3451] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(481), 1,
      sym__newline,
    STATE(135), 1,
      sym_comment,
  [3464] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(483), 1,
      sym__newline,
    STATE(136), 1,
      sym_comment,
  [3477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_comment,
  [3490] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(487), 1,
      sym__newline,
    STATE(138), 1,
      sym_comment,
  [3503] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_comment,
  [3516] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_comment,
  [3529] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_comment,
  [3542] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_comment,
  [3555] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_comment,
  [3568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(499), 1,
      sym__newline,
    STATE(144), 1,
      sym_comment,
  [3581] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(501), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3592] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(503), 1,
      sym__newline,
    STATE(146), 1,
      sym_comment,
  [3605] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(505), 1,
      sym__newline,
    STATE(147), 1,
      sym_comment,
  [3618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(507), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3629] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
  [3642] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(511), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3653] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(513), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3664] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(515), 1,
      sym_location_route,
    STATE(152), 1,
      sym_comment,
  [3677] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(517), 1,
      sym_location_route,
    STATE(153), 1,
      sym_comment,
  [3690] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(519), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [3703] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(521), 1,
      sym__newline,
    STATE(155), 1,
      sym_comment,
  [3716] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(523), 1,
      sym_numeric_literal,
    STATE(156), 1,
      sym_comment,
  [3729] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
  [3742] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_comment,
  [3755] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_comment,
  [3768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(525), 1,
      sym_time,
    STATE(160), 1,
      sym_comment,
  [3781] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_comment,
  [3794] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(529), 1,
      sym__word,
    STATE(162), 1,
      sym_comment,
  [3807] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(531), 1,
      sym__word,
    STATE(163), 1,
      sym_comment,
  [3820] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(533), 1,
      aux_sym__env_directive_token1,
    STATE(164), 1,
      sym_comment,
  [3833] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(535), 1,
      sym_numeric_literal,
    STATE(165), 1,
      sym_comment,
  [3846] = 4,
    ACTIONS(441), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      aux_sym_attribute_token1,
    ACTIONS(537), 1,
      aux_sym__abstract_directive_token1,
    STATE(166), 1,
      sym_comment,
  [3859] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      sym_comment,
  [3872] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(539), 1,
      sym_size,
    STATE(168), 1,
      sym_comment,
  [3885] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(541), 1,
      sym_numeric_literal,
    STATE(169), 1,
      sym_comment,
  [3898] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(543), 1,
      sym_time,
    STATE(170), 1,
      sym_comment,
  [3911] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(545), 1,
      sym_condition,
    STATE(171), 1,
      sym_comment,
  [3924] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(547), 1,
      sym_numeric_literal,
    STATE(172), 1,
      sym_comment,
  [3937] = 1,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 53,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 406,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 506,
  [SMALL_STATE(23)] = 556,
  [SMALL_STATE(24)] = 606,
  [SMALL_STATE(25)] = 656,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 756,
  [SMALL_STATE(28)] = 806,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 906,
  [SMALL_STATE(31)] = 956,
  [SMALL_STATE(32)] = 1006,
  [SMALL_STATE(33)] = 1056,
  [SMALL_STATE(34)] = 1106,
  [SMALL_STATE(35)] = 1156,
  [SMALL_STATE(36)] = 1206,
  [SMALL_STATE(37)] = 1256,
  [SMALL_STATE(38)] = 1306,
  [SMALL_STATE(39)] = 1356,
  [SMALL_STATE(40)] = 1406,
  [SMALL_STATE(41)] = 1456,
  [SMALL_STATE(42)] = 1506,
  [SMALL_STATE(43)] = 1556,
  [SMALL_STATE(44)] = 1606,
  [SMALL_STATE(45)] = 1656,
  [SMALL_STATE(46)] = 1706,
  [SMALL_STATE(47)] = 1756,
  [SMALL_STATE(48)] = 1806,
  [SMALL_STATE(49)] = 1856,
  [SMALL_STATE(50)] = 1906,
  [SMALL_STATE(51)] = 1956,
  [SMALL_STATE(52)] = 2012,
  [SMALL_STATE(53)] = 2062,
  [SMALL_STATE(54)] = 2095,
  [SMALL_STATE(55)] = 2125,
  [SMALL_STATE(56)] = 2153,
  [SMALL_STATE(57)] = 2181,
  [SMALL_STATE(58)] = 2211,
  [SMALL_STATE(59)] = 2236,
  [SMALL_STATE(60)] = 2259,
  [SMALL_STATE(61)] = 2286,
  [SMALL_STATE(62)] = 2313,
  [SMALL_STATE(63)] = 2336,
  [SMALL_STATE(64)] = 2361,
  [SMALL_STATE(65)] = 2386,
  [SMALL_STATE(66)] = 2410,
  [SMALL_STATE(67)] = 2430,
  [SMALL_STATE(68)] = 2454,
  [SMALL_STATE(69)] = 2476,
  [SMALL_STATE(70)] = 2496,
  [SMALL_STATE(71)] = 2520,
  [SMALL_STATE(72)] = 2541,
  [SMALL_STATE(73)] = 2558,
  [SMALL_STATE(74)] = 2575,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2618,
  [SMALL_STATE(77)] = 2636,
  [SMALL_STATE(78)] = 2656,
  [SMALL_STATE(79)] = 2676,
  [SMALL_STATE(80)] = 2694,
  [SMALL_STATE(81)] = 2711,
  [SMALL_STATE(82)] = 2728,
  [SMALL_STATE(83)] = 2743,
  [SMALL_STATE(84)] = 2760,
  [SMALL_STATE(85)] = 2776,
  [SMALL_STATE(86)] = 2792,
  [SMALL_STATE(87)] = 2806,
  [SMALL_STATE(88)] = 2822,
  [SMALL_STATE(89)] = 2838,
  [SMALL_STATE(90)] = 2854,
  [SMALL_STATE(91)] = 2870,
  [SMALL_STATE(92)] = 2884,
  [SMALL_STATE(93)] = 2900,
  [SMALL_STATE(94)] = 2916,
  [SMALL_STATE(95)] = 2930,
  [SMALL_STATE(96)] = 2944,
  [SMALL_STATE(97)] = 2958,
  [SMALL_STATE(98)] = 2974,
  [SMALL_STATE(99)] = 2985,
  [SMALL_STATE(100)] = 2998,
  [SMALL_STATE(101)] = 3011,
  [SMALL_STATE(102)] = 3024,
  [SMALL_STATE(103)] = 3037,
  [SMALL_STATE(104)] = 3050,
  [SMALL_STATE(105)] = 3063,
  [SMALL_STATE(106)] = 3076,
  [SMALL_STATE(107)] = 3089,
  [SMALL_STATE(108)] = 3102,
  [SMALL_STATE(109)] = 3115,
  [SMALL_STATE(110)] = 3128,
  [SMALL_STATE(111)] = 3141,
  [SMALL_STATE(112)] = 3154,
  [SMALL_STATE(113)] = 3165,
  [SMALL_STATE(114)] = 3178,
  [SMALL_STATE(115)] = 3191,
  [SMALL_STATE(116)] = 3204,
  [SMALL_STATE(117)] = 3217,
  [SMALL_STATE(118)] = 3230,
  [SMALL_STATE(119)] = 3243,
  [SMALL_STATE(120)] = 3256,
  [SMALL_STATE(121)] = 3269,
  [SMALL_STATE(122)] = 3282,
  [SMALL_STATE(123)] = 3295,
  [SMALL_STATE(124)] = 3308,
  [SMALL_STATE(125)] = 3321,
  [SMALL_STATE(126)] = 3334,
  [SMALL_STATE(127)] = 3347,
  [SMALL_STATE(128)] = 3360,
  [SMALL_STATE(129)] = 3373,
  [SMALL_STATE(130)] = 3386,
  [SMALL_STATE(131)] = 3399,
  [SMALL_STATE(132)] = 3412,
  [SMALL_STATE(133)] = 3425,
  [SMALL_STATE(134)] = 3438,
  [SMALL_STATE(135)] = 3451,
  [SMALL_STATE(136)] = 3464,
  [SMALL_STATE(137)] = 3477,
  [SMALL_STATE(138)] = 3490,
  [SMALL_STATE(139)] = 3503,
  [SMALL_STATE(140)] = 3516,
  [SMALL_STATE(141)] = 3529,
  [SMALL_STATE(142)] = 3542,
  [SMALL_STATE(143)] = 3555,
  [SMALL_STATE(144)] = 3568,
  [SMALL_STATE(145)] = 3581,
  [SMALL_STATE(146)] = 3592,
  [SMALL_STATE(147)] = 3605,
  [SMALL_STATE(148)] = 3618,
  [SMALL_STATE(149)] = 3629,
  [SMALL_STATE(150)] = 3642,
  [SMALL_STATE(151)] = 3653,
  [SMALL_STATE(152)] = 3664,
  [SMALL_STATE(153)] = 3677,
  [SMALL_STATE(154)] = 3690,
  [SMALL_STATE(155)] = 3703,
  [SMALL_STATE(156)] = 3716,
  [SMALL_STATE(157)] = 3729,
  [SMALL_STATE(158)] = 3742,
  [SMALL_STATE(159)] = 3755,
  [SMALL_STATE(160)] = 3768,
  [SMALL_STATE(161)] = 3781,
  [SMALL_STATE(162)] = 3794,
  [SMALL_STATE(163)] = 3807,
  [SMALL_STATE(164)] = 3820,
  [SMALL_STATE(165)] = 3833,
  [SMALL_STATE(166)] = 3846,
  [SMALL_STATE(167)] = 3859,
  [SMALL_STATE(168)] = 3872,
  [SMALL_STATE(169)] = 3885,
  [SMALL_STATE(170)] = 3898,
  [SMALL_STATE(171)] = 3911,
  [SMALL_STATE(172)] = 3924,
  [SMALL_STATE(173)] = 3937,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(171),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(75),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(51),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(94),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(170),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(169),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(76),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(56),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(91),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(86),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(71),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(67),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(168),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(96),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(166),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(165),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(164),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(65),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(163),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(162),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(87),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_directive, 4, 0, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use_directive, 4, 0, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 6, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 6, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 5, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_directive, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time_directive, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, 0, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_directive, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_directive, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_directive, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_directive, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_directive, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_directive, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_file, 1, 0, 0), REDUCE(sym_mask, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileish, 1, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0), REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_keyword, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_keyword, 1, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_method, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_poll_variable, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_modifier, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [527] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_keyword, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_keyword, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
