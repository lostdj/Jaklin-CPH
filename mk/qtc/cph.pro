TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt


INCLUDEPATH += ../../common_portable_headers/native/inc
INCLUDEPATH += /nix/store/g85fla31jhmm0ckfwgsclcvrh2ack9zf-oraclejdk-7u71/include/
INCLUDEPATH += /nix/store/g85fla31jhmm0ckfwgsclcvrh2ack9zf-oraclejdk-7u71/include/linux/


include(deployment.pri)
qtcAddDeployment()


SOURCES +=


HEADERS += \
		../../common_portable_headers/native/inc/cph/base/base.h \
		../../common_portable_headers/native/inc/cph/base/config_cph_1.h \
		../../common_portable_headers/native/inc/cph/base/config_cph_2.h \
		../../common_portable_headers/native/inc/cph/private/bits.h \
		../../common_portable_headers/native/inc/cph/private/bits_endian.h \
		../../common_portable_headers/native/inc/cph/private/chrono.h \
		../../common_portable_headers/native/inc/cph/private/debug_callstack_printer.h \
		../../common_portable_headers/native/inc/cph/private/debug_log.h \
		../../common_portable_headers/native/inc/cph/private/debug_log_simple.h \
		../../common_portable_headers/native/inc/cph/private/debug_print_simple.h \
		../../common_portable_headers/native/inc/cph/private/flts.h \
		../../common_portable_headers/native/inc/cph/private/math.h \
		../../common_portable_headers/native/inc/cph/private/mem.h \
		../../common_portable_headers/native/inc/cph/private/platform.h \
		../../common_portable_headers/native/inc/cph/bits.h \
		../../common_portable_headers/native/inc/cph/bits_endian.h \
		../../common_portable_headers/native/inc/cph/chrono.h \
		../../common_portable_headers/native/inc/cph/chrono_conv.h \
		../../common_portable_headers/native/inc/cph/chrono_counter.h \
		../../common_portable_headers/native/inc/cph/chrono_k.h \
		../../common_portable_headers/native/inc/cph/chrono_sleep.h \
		../../common_portable_headers/native/inc/cph/chrono_units.h \
		../../common_portable_headers/native/inc/cph/date.h \
		../../common_portable_headers/native/inc/cph/date_conv.h \
		../../common_portable_headers/native/inc/cph/date_now.h \
		../../common_portable_headers/native/inc/cph/date_sym.h \
		../../common_portable_headers/native/inc/cph/debug_assert_static.h \
		../../common_portable_headers/native/inc/cph/debug_callstack_printer.h \
		../../common_portable_headers/native/inc/cph/debug_log.h \
		../../common_portable_headers/native/inc/cph/debug_log_simple.h \
		../../common_portable_headers/native/inc/cph/debug_print_simple.h \
		../../common_portable_headers/native/inc/cph/flts.h \
		../../common_portable_headers/native/inc/cph/ints_cmp.h \
		../../common_portable_headers/native/inc/cph/java.h \
		../../common_portable_headers/native/inc/cph/math.h \
		../../common_portable_headers/native/inc/cph/math_rnd.h \
		../../common_portable_headers/native/inc/cph/mem.h \
		../../common_portable_headers/native/inc/cph/platform.h \
		../../common_portable_headers/native/inc/cph/text_char.h \
		../../common_portable_headers/native/inc/cph/text_string.h \
		../../common_portable_headers/native/inc/cph/time_now.h \
		../../common_portable_headers/native/inc/cph/time_tz.h \
		../../common_portable_headers/native/inc/cph/typedef.h \
		../../common_portable_headers/native/inc/cph/cph.h \
		../../common_portable_headers/native/inc/cph/all.h

