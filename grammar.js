const terminator = ";",
  softTerminator = choice(terminator),
  unicodeLetter = /\p{L}/,
  unicodeDigit = /[0-9]/;

module.exports = grammar({
  name: "nginx",
  extras: ($) => [/\s/, $.comment],
  externals: ($) => [$._newline, $._indent, $._dedent],
  conflicts: ($) => [[$.file, $.mask]],
  rules: {
    source_file: ($) => $._body,
    comment: (_) => prec.left(token(seq("#", /.*/))),

    _body: ($) =>
      repeat1(
        choice($.directive, $.block, $.if, $.map, $.attribute, $.location),
      ),

    random_value: (_) => token(prec(-1, /[^;\s]*/)), // https://github.com/tree-sitter/tree-sitter/issues/1655

    _attribute_value: ($) =>
      choice(
        $.quoted_string_literal,
        $.string_literal,
        $.auto,
        $.level,
        $.boolean,
        $.connection_method,
        $.size,
        $.time,
        $.numeric_literal,
        alias($.random_value, $.value),
      ),
    attribute: ($) =>
      seq(
        alias(choice($._word, "''"), $.keyword),
        choice(
          $.block,
          seq(
            $._attribute_value,
            repeat(seq(/\s/, $._attribute_value)),
            terminator,
          ),
        ),
        $._newline,
      ),

    condition: (_) => token(seq("(", repeat(/[^)]|(\\\))/), ")")),
    if: ($) => seq("if", field("condition", $.condition), $.block),

    location_route: (_) => token(prec(-1, /[^{]+/)),
    location_modifier: (_) =>
      choice(
        "=", // An exact match of the URI path.
        "~", // A case-sensitive regular expression match.
        "~*", //A case-insensitive regular expression match.
        "^~", //Indicates that the following path should be considered the best non-regular expression match.
      ),

    location: ($) =>
      seq("location", optional($.location_modifier), $.location_route, $.block),

    directive: ($) =>
      choice(
        $._boolean_directive,
        $._time_directive,
        $._number_directive,
        $._number_or_auto_directive,
        $._debug_points_directive,
        $._file_directive,
        $._include_directive,
        $._use_directive,
        $._working_directory_directive,
        $._working_core_directive,
        $._affinity_directive,
        $._abstract_directive,
        $._env_directive,
        $._error_log_directive,
        $._thread_pool_directive,
        $._user_directive,
        $._events_directive,
        $._return_directive,
      ),

    block: ($) => seq("{", optional($._newline), optional($._body), "}"),
    on: (_) => "on",
    off: (_) => "off",
    boolean: ($) => choice($.on, $.off),
    auto: (_) => "auto",
    cpumask: (_) => token(/[01]+/),
    connection_method: (_) =>
      choice("select", "poll", "kqueue", "epoll", "/dev/poll", "eventport"), // https://nginx.org/en/docs/events.html
    level: (_) =>
      choice(
        "debug",
        "info",
        "notice",
        "warn",
        "error",
        "crit",
        "alert",
        "emerg",
      ), //https://nginx.org/en/docs/ngx_core_module.html#error_log
    time: (_) => token(seq(repeat1(unicodeDigit), /(ms|s|m|h|d|w|M|y)/)), // https://nginx.org/en/docs/syntax.html
    size: (_) => token(seq(repeat1(unicodeDigit), /[mkgMKG]/)),
    _fileish: (_) => choice(unicodeDigit, unicodeLetter, "/", ".", "-", "_"),
    file: ($) => prec.left(seq($._fileish, repeat($._fileish))),
    mask: ($) =>
      prec.right(seq(choice($._fileish, "*"), repeat(choice($._fileish, "*")))),
    _word: (_) =>
      token(
        seq(
          unicodeLetter,
          repeat(choice(unicodeLetter, unicodeDigit, "-", "_")),
        ),
      ),
    var: (_) =>
      token(
        seq(
          choice(unicodeLetter, "$"),
          repeat(choice(unicodeLetter, unicodeDigit, "_", "$")),
        ),
      ),
    quoted_string_literal: (_) =>
      prec.right(token(seq("'", repeat(/[^']|(\\\')/), "'"))),
    string_literal: (_) => token(seq('"', repeat(/[^"]|(\\\")/), '"')),
    numeric_literal: (_) =>
      token(
        seq(
          repeat1(/[0-9]/),
          optional(seq(".", repeat1(/[0-9]/))),
          optional(
            seq(choice("e", "E"), optional(choice("+", "-")), repeat1(/[0-9]/)),
          ),
        ),
      ),

    map: ($) => seq("map", repeat1(choice($.var, $._word)), $.block),

    _boolean_directive: ($) =>
      seq(
        alias($._boolean_keyword, $.keyword),
        $.boolean,
        terminator,
        $._newline,
      ),
    _boolean_keyword: (_) =>
      choice(
        "accept_mutex",
        "daemon",
        "master_process",
        "multi_accept",
        "pcre_jit",
      ),

    _time_directive: ($) =>
      seq(alias($._time_keyword, $.keyword), $.time, terminator, $._newline),
    _time_keyword: (_) =>
      choice(
        "accept_mutex_delay",
        "worker_shutdown_timeout",
        "timer_resolution",
      ),

    _number_directive: ($) =>
      seq(
        alias($._number_keyword, $.keyword),
        $.numeric_literal,
        terminator,
        $._newline,
      ),
    _number_keyword: (_) =>
      choice(
        "worker_aio_requests",
        "worker_connections",
        "worker_priority",
        "worker_rlimit_nofile",
      ),

    _file_directive: ($) =>
      seq(alias($._file_keyword, $.keyword), $.file, terminator, $._newline),
    _file_keyword: (_) => choice("load_module", "lock_file", "pid"),

    _include_directive: ($) =>
      seq(
        alias("include", $.keyword),
        choice($.file, $.mask),
        terminator,
        $._newline,
      ),

    _number_or_auto_directive: ($) =>
      seq(
        alias("worker_processes", $.keyword),
        choice($.numeric_literal, $.auto),
        terminator,
        $._newline,
      ),

    _debug_points_directive: ($) =>
      seq(
        alias("debug_points", $.keyword),
        alias(choice("abort", "stop"), $.constant),
        terminator,
        $._newline,
      ),

    _use_directive: ($) =>
      seq(
        alias("use", $.keyword),
        alias($.connection_method, $.constant),
        terminator,
        $._newline,
      ),

    _working_directory_directive: ($) =>
      seq(
        alias("working_directory", $.keyword),
        $.file,
        terminator,
        $._newline,
      ),

    _working_core_directive: ($) =>
      seq(
        alias("worker_rlimit_core", $.keyword),
        $.size,
        terminator,
        $._newline,
      ),

    _affinity_directive: ($) =>
      seq(
        alias("worker_cpu_affinity", $.keyword),
        seq(choice($.auto, $.cpumask), repeat(choice($.auto, $.cpumask))),
        terminator,
        $._newline,
      ),

    _abstract_directive: ($) =>
      seq(
        alias(choice("debug_connection", "ssl_engine"), $.keyword),
        alias(/[^;]+/, $.value),
        terminator,
        $._newline,
      ),

    _return_directive: ($) =>
      seq(
        alias("return", $.keyword),
        $.numeric_literal,
        optional(alias($.random_value, $.value)),
        terminator,
        $._newline,
      ),

    _env_directive: ($) =>
      seq(
        alias("env", $.keyword),
        alias(/[A-Z][A-Z0-9_]+/, $.variable),
        optional(seq("=", alias(/[^;]+/, $.value))),
        terminator,
        $._newline,
      ),

    _error_log_directive: ($) =>
      seq(
        alias("error_log", $.keyword),
        $.file,
        optional(seq(/\s/, $.level)),
        terminator,
        $._newline,
      ),

    _thread_poll_variable: ($) =>
      seq(
        alias(choice("threads", "max_queue"), $.keyword),
        "=",
        $.numeric_literal,
      ),

    _thread_pool_directive: ($) =>
      seq(
        alias("thread_pool", $.keyword),
        alias($._word, $.value),
        alias($._thread_poll_variable, $.variable),
        optional(seq(/\s/, alias($._thread_poll_variable, $.variable))),
        terminator,
        $._newline,
      ),

    _user_directive: ($) =>
      seq(
        alias("user", $.keyword),
        alias($._word, $.value),
        optional(alias($._word, $.value)),
        terminator,
        $._newline,
      ),

    _events_directive: ($) =>
      seq(alias("events", $.keyword), $.block, optional($._newline)),
  },
});
