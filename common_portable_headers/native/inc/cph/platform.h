#pragma once
#ifndef _cph_h__platform
#define _cph_h__platform

//
#define _cph_arch_32 0
#define _cph_arch_64 0

#define _cph_arch_x86 0
#define _cph_arch_x32 0
#define _cph_arch_x64 0
#define _cph_arch_arm 0
#define _cph_arch_armt 0
#define _cph_arch_arm32 0
#define _cph_arch_arm64 0

#define _cph_arch_web 0

#define _cph_arch_ems 0

#define _cph_arch_nacl 0 // Either nacl or pnacl.
#define _cph_arch_npnacl 0
#define _cph_arch_pnacl 0

//
#define _cph_bo_id 0
#define _cph_bo_be 0 // 1
#define _cph_bo_le 0 // 2
#define _cph_bo_net 0

//
#define _cph_os_win 0
#define _cph_os_winnt 0
#define _cph_os_win32 0
#define _cph_os_win64 0

#define _cph_os_web 0

#define _cph_os_ems 0

#define _cph_os_nacl 0 // Either NaCl or PNaCl.
#define _cph_os_npnacl 0
#define _cph_os_pnacl 0

#define _cph_posix 0

#define _cph_os_unix 0
#define _cph_os_linux 0 // TODO: Rename to tux.

#define _cph_os_rob 0
#define _cph_os_rob_major 0
#define _cph_os_rob_minor 0
#define _cph_os_rob_patch 0

#define _cph_os_aapl 0 // OS X / iOS and later.
#define _cph_os_appl_emb 0
#define _cph_os_ios 0
#define _cph_os_iosim 0
#define _cph_os_osx 0

#define _cph_os_tasked 0

//
#define _cph_cc_msc 0
#define _cph_cc_msc6 0
#define _cph_cc_msc7 0
#define _cph_cc_msc8 0
#define _cph_cc_msc9 0
#define _cph_cc_msc10 0
#define _cph_cc_msc11 0
#define _cph_cc_msc12 0
#define _cph_cc_msc_major 0

#define _cph_cc_clang 0
#define _cph_cc_clang_major 0
#define _cph_cc_clang_minor 0
#define _cph_cc_clang_patch 0

#define _cph_cc_gnu 0
#define _cph_cc_gnucompat 0
#define _cph_cc_mingw 0
#define _cph_cc_mingw32 0
#define _cph_cc_mingw64 0
#define _cph_cc_gnu3 0
#define _cph_cc_gnu4 0
#define _cph_cc_gnu_major 0
#define _cph_cc_gnu_minor 0
#define _cph_cc_gnu_patch 0

// Force inline.
#define _cph_inl_pre
#define _cph_inl_post

// No inline.
#define _cph_noinl

// Fastcall.
#define _cph_fc_pre
#define _cph_fc_post

// Dll.
#define _cph_dll_imp
#define _cph_dll_exp

// Etc.
#define COMMA ,
#define _cph_quotemac(arg) #arg
#define _cph_quoteval(arg) _cph_quotemac(arg)
#define _cph_eval(x) x
#define _cph_concat_(x, y) x ## y
#define _cph_concat(x, y) _cph_concat_(x, y)
#define _cph_funcname
#define _cph_file __FILE__
#define _cph_line _cph_quoteval(__LINE__)
#define _cph_file_line /*__BASE_FILE__*/__FILE__ ":" _cph_quoteval(__LINE__)

//
#define _cph_c 0 // Meaning pure C.
#define _cph_c_v 0
#define _cph_c89 0
#define _cph_c90 0
#define _cph_c94 0
#define _cph_c99 0
#define _cph_c1x 0 // >= 11.
#define _cph_c11 0

#define _cph_cpp 0
#define _cph_cpp_v 0
#define _cph_cpp98 0
#define _cph_cpp1x 0 // >= 11.
#define _cph_cpp11 0
#define _cph_cpp14 0
#define _cph_cpp2x 0

#define _cph_objc 0


//
#define null 0

#define likely
#define unlikely

#define unused(_cph_unused_x__) ((void)_cph_unused_x__)

#define elif    else if
#define forever for(;;)

#define isdef(macro) // macro is defined && == 1 ? 1 : 0.

#define doif(cond, true_, optfalse_) // cond ? true_ : optfalse_. // Broken.

#define doifdef(macro, true_, optfalse_) doif(isdef(macro), true_, optfalse_)

#define _cph_wbytes
#define _cph_wbits

#define arrlen


//
#if defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) \
		|| defined(__i586__) || defined(__i686__) || defined(__IA32__) \
		|| defined(_M_I386) || defined(__X86__) || defined(_X86_) \
		|| defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) \
		|| defined(__386)
	#undef _cph_arch_32
	#define _cph_arch_32 1

	#undef _cph_arch_x86
	#define _cph_arch_x86 1

#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64) \
		|| defined(__amd64__ ) || defined(_M_X64) || defined(_M_AMD64)
	#undef _cph_arch_64
	#define _cph_arch_64 1

	#undef _cph_arch_x64
	#define _cph_arch_x64 1

#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) \
		|| defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
	#undef _cph_arch_arm
	#define _cph_arch_arm 1

	#undef _cph_arch_arm32
	#define _cph_arch_arm32 1

#elif defined(__aarch64__)
	#undef _cph_arch_arm
	#define _cph_arch_arm 1

	#undef _cph_arch_arm64
	#define _cph_arch_arm64 1

#elif defined(EMSCRIPTEN) || defined(_EMSCRIPTEN_) || defined(__EMSCRIPTEN__)
	#undef _cph_arch_32
	#define _cph_arch_32 1

	#undef _cph_arch_web
	#define _cph_arch_web 1

	#undef _cph_arch_ems
	#define _cph_arch_ems 1

#else
	#error "Unsupported architecture."
#endif

#if _cph_arch_arm && (defined(__thumb__) || defined(_M_ARMT))
	#undef _cph_arch_armt
	#define _cph_arch_armt 1
#endif


//
#if defined(WIN64) || defined(_WIN64) || defined(__WIN64__)
	#undef _cph_os_win
	#define _cph_os_win 1

	#ifdef __NT__
		#undef _cph_os_winnt
		#define _cph_os_winnt 1
	#endif

	#undef _cph_os_win64
	#define _cph_os_win64 1

	#define WIN32_LEAN_AND_MEAN
	//#ifndef _UNICODE
	//	#define _UNICODE
	//#endif

#elif defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
	#undef _cph_os_win
	#define _cph_os_win 1

	#ifdef __NT__
		#undef _cph_os_winnt
		#define _cph_os_winnt 1
	#endif

	#undef _cph_os_win32
	#define _cph_os_win32 1

	#define WIN32_LEAN_AND_MEAN
	//#ifndef _UNICODE
	//	#define _UNICODE
	//#endif

// http://sourceforge.net/p/predef/wiki/Home/
// Type 'cpp -dM some.h', or 'gcc -dM -E - < /dev/null' to get a list of
// predefined macros.
#elif defined(EMSCRIPTEN) || defined(_EMSCRIPTEN_) || defined(__EMSCRIPTEN__)
	#undef _cph_os_web
	#define _cph_os_web 1

	#undef _cph_os_ems
	#define _cph_os_ems 1

	#undef _cph_posix
	#define _cph_posix 1

#elif defined(linux) || defined(__linux) || defined(__linux__) \
		|| defined(__gnu_linux__) || defined(__ANDROID__) \
		|| defined(__ANDROID_API__)
	#undef _cph_posix
	#define _cph_posix 1

	#undef _cph_os_unix
	#define _cph_os_unix 1

	#undef _cph_os_linux
	#define _cph_os_linux 1

	#if defined(__ANDROID__) || defined(__ANDROID_API__)
		#undef _cph_os_rob
		#define _cph_os_rob 1

		#if !defined(__ANDROID_API__)
			#warning "Unknown Android version. Let there be bugs."
		#else
			#undef _cph_os_rob_major
			#undef _cph_os_rob_minor
			#undef _cph_os_rob_patch
		#endif

		#if __ANDROID_API__ == 1
			#define _cph_os_rob_major 1
			#define _cph_os_rob_minor 0
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 2
			#define _cph_os_rob_major 1
			#define _cph_os_rob_minor 1
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 3
			#define _cph_os_rob_major 1
			#define _cph_os_rob_minor 5
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 4
			#define _cph_os_rob_major 1
			#define _cph_os_rob_minor 6
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 5
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 0
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 6
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 0
			#define _cph_os_rob_patch 1
		#elif __ANDROID_API__ == 7
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 1
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 8
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 2
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 9
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 3
			#define _cph_os_rob_patch 0
		#elif __ANDROID_API__ == 10
			#define _cph_os_rob_major 2
			#define _cph_os_rob_minor 3
			#define _cph_os_rob_patch 3
		#elif __ANDROID_API__ == 11
			#define _cph_os_rob_major 3
			#define _cph_os_rob_minor 0
			#define _cph_os_rob_patch 0
		#else
			#warning "Unknown Android version. Let there be bugs. Version: " \
				__ANDROID_API__

			#define _cph_os_rob_major 0
			#define _cph_os_rob_minor 0
			#define _cph_os_rob_patch 0
		#endif
	#endif

#elif defined(__APPLE__) && defined(__MACH__)
	#undef _cph_posix
	#define _cph_posix 1

	#undef _cph_os_unix
	#define _cph_os_unix 1

	#undef _cph_os_aapl
	#define _cph_os_aapl 1

	#include <TargetConditionals.h>

	#if !defined(TARGET_OS_MAC) || !TARGET_OS_MAC
		#error "TARGET_OS_MAC is not defined."
	#endif

	#if (defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE) \
			|| (defined(TARGET_IPHONE_SIMULATOR) && TARGET_IPHONE_SIMULATOR)
		#if !defined(TARGET_OS_EMBEDDED) || !TARGET_OS_EMBEDDED
			#error "TARGET_OS_EMBEDDED is not defined."
		#endif

		#undef _cph_os_ios
		#define _cph_os_ios 1

		#if defined(TARGET_IPHONE_SIMULATOR) && TARGET_IPHONE_SIMULATOR
			#undef _cph_os_iosim
			#define _cph_os_iosim 1
		#endif
	#elif defined(TARGET_OS_EMBEDDED) && TARGET_OS_EMBEDDED
		#undef _cph_os_appl_emb
		#define _cph_os_appl_emb 1
	#else
		#undef _cph_os_osx
		#define _cph_os_osx 1
	#endif

#else
	#error "Unsupported target OS."
#endif

#if _cph_os_web || _cph_os_rob || _cph_os_ios
	#undef _cph_os_tasked
	#define _cph_os_tasked 1
#endif


// http://sourceforge.net/p/predef/wiki/Compilers/
//
#if defined(_MSC_VER)
	#undef _cph_cc_msc
	#define _cph_cc_msc 1

	#if _MSC_VER == 1200
		#undef _cph_cc_msc6
		#define _cph_cc_msc6 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 6
	#elif _MSC_VER == 1300
		#undef _cph_cc_msc7
		#define _cph_cc_msc7 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 7
	#elif _MSC_VER == 1400
		#undef _cph_cc_msc8
		#define _cph_cc_msc8 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 8
	#elif _MSC_VER == 1500
		#undef _cph_cc_msc9
		#define _cph_cc_msc9 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 9
	#elif _MSC_VER == 1600
		#undef _cph_cc_msc10
		#define _cph_cc_msc10 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 10
	#elif _MSC_VER == 1700
		#undef _cph_cc_msc11
		#define _cph_cc_msc11 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 11
	#elif _MSC_VER == 1800
		#undef _cph_cc_msc12
		#define _cph_cc_msc12 1

		#undef _cph_cc_msc_major
		#define _cph_cc_msc_major 12
	#else
		#warning "Unknown MSC version. Version: " _MSC_VER
	#endif

	#undef _cph_funcname
	#define _cph_funcname __FUNCSIG__

	// Warning C4201: nonstandard extension used : nameless struct/union.
	#pragma warning(disable: 4201)

#elif defined(__clang__)
	// Notice that clang also defines the GNU C version macros, but you should use
	// the clang feature checking macros to detect the availability of various
	// features. http://clang.llvm.org/docs/LanguageExtensions.html#feature_check

	// The values of the __clang_major__, __clang_minor__, and
	// __clang_patchlevel__ macros are not consistent across distributions of the
	// Clang compiler. For example, the Clang 3.1 distribution available at
	// http://clang.llvm.org defines __clang_major__ and __clang_minor__ as 3 and
	// 1 respectively. The version of Clang distributed with Apple XCode 4.4 is
	// branded as "Apple Clang 4.0" and derives from the open source Clang 3.1
	// distribution, but defines these macros with the values 4 and 0
	// respectively. Apple's Clang distribution can be identified by the presence
	// of the __apple_build_version__ macro.

	#undef _cph_cc_clang
	#define _cph_cc_clang 1

	#undef _cph_cc_clang_major
	#undef _cph_cc_clang_minor
	#undef _cph_cc_clang_patch
	#define _cph_cc_clang_major __clang_major__
	#define _cph_cc_clang_minor __clang_minor__
	#define _cph_cc_clang_patch __clang_patchlevel__

	#undef _cph_cc_gnucompat
	#define _cph_cc_gnucompat 1

	#undef _cph_funcname
	#define _cph_funcname __PRETTY_FUNCTION__

#elif defined(__GNUC__)
	#undef _cph_cc_gnu
	#define _cph_cc_gnu 1

	#undef _cph_cc_gnucompat
	#define _cph_cc_gnucompat 1

	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef _cph_cc_mingw
		#define _cph_cc_mingw 1
	#endif

	#ifdef __MINGW32__
		#undef _cph_cc_mingw32
		#define _cph_cc_mingw32 1
	#endif

	#ifdef __MINGW64__
		#undef _cph_cc_mingw64
		#define _cph_cc_mingw64 1
	#endif

	#if __GNUC__ == 3
		#undef _cph_cc_gnu3
		#define _cph_cc_gnu3 1
	#elif __GNUC__ == 4
		#undef _cph_cc_gnu4
		#define _cph_cc_gnu4 1
	#else
		#warning "Unknown __GNUC__. __GNUC__: " __GNUC__
	#endif

	#undef _cph_cc_gnu_major
	#undef _cph_cc_gnu_minor
	#undef _cph_cc_gnu_patch
	#define _cph_cc_gnu_major __GNUC__
	#define _cph_cc_gnu_minor __GNUC_MINOR__
	#define _cph_cc_gnu_patch __GNUC_PATCHLEVEL__

	#undef _cph_funcname
	#define _cph_funcname __PRETTY_FUNCTION__

#else
	#error "Unsupported compiler."
#endif

#if !_cph_cc_clang && !_cph_cc_gnu
	#define __extension__
#endif


//
#if _cph_arch_x86 || _cph_arch_x64 || _cph_arch_web \
		|| defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) \
		|| defined(__THUMBEL__) || defined(__AARCH64EL__) \
		|| (defined(TARGET_RT_LITTLE_ENDIAN ) && TARGET_RT_LITTLE_ENDIAN)
	#undef _cph_bo_le
	#define _cph_bo_le 2

	#undef _cph_bo_id
	#define _cph_bo_id _cph_bo_le

#elif defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) \
		|| defined(__AARCH64EB__) \
		|| (defined(TARGET_RT_BIG_ENDIAN ) && TARGET_RT_BIG_ENDIAN)
	#undef _cph_bo_be
	#define _cph_bo_be 2

	#undef _cph_bo_id
	#define _cph_bo_id _cph_bo_be

#else
	#error "Unknown endianness."
#endif


//
#if _cph_cc_msc
	#undef _cph_inl_pre
	#define _cph_inl_pre __forceinline

	#undef _cph_inl_post
	#define _cph_inl_post

	#undef _cph_noinl
	#define _cph_noinl __declspec(noinline)

#elif _cph_cc_gnucompat
	#undef _cph_inl_pre
	#define _cph_inl_pre __inline

	#if _cph_cc_clang || _cph_cc_gnu_major > 3
		#undef _cph_inl_post
		#define _cph_inl_post __attribute__((always_inline))
	#else
		#undef _cph_inl_post
		#define _cph_inl_post
	#endif

	#undef _cph_noinl
	#define _cph_noinl __attribute__((noinline))
#endif


//
#if _cph_arch_x86
	#if _cph_cc_msc
		#undef _cph_fc_pre
		#define _cph_fc_pre __fastcall

		#undef _cph_fc_post
		#define _cph_fc_post
	#elif _cph_cc_gnucompat
		#if _cph_cc_clang || _cph_cc_gnu_major > 3 || (_cph_cc_gnu3 \
				&& _cph_cc_gnu_minor > 3)
			#undef _cph_fc_pre
			#define _cph_fc_pre

			#undef _cph_fc_post
			#define _cph_fc_post __attribute__((fastcall))
		#else
			#undef _cph_fc_pre
			#define _cph_fc_pre

			#undef _cph_fc_post
			#define _cph_fc_post
		#endif
	#endif
#endif


//
#if _cph_cc_msc || _cph_cc_mingw
	#undef _cph_dll_imp
	#define _cph_dll_imp __declspec(dllimport)

	#undef _cph_dll_exp
	#define _cph_dll_exp __declspec(dllexport)
#elif _cph_cc_gnucompat
	#undef _cph_dll_imp
	#define _cph_dll_imp

	#undef _cph_dll_exp
	#define _cph_dll_exp __attribute__((visibility("default")))
#endif


//
#ifdef __cplusplus
	#undef _cph_cpp
	#define _cph_cpp 1

	#if __cplusplus >= 201103L
		#undef _cph_cpp1x
		#define _cph_cpp1x 1
	#endif

	#if __cplusplus == 199711L
		#undef _cph_cpp_v
		#define _cph_cpp_v 1998

		#undef _cph_cpp98
		#define _cph_cpp98 1
	#elif __cplusplus == 201103L
		#undef _cph_cpp_v
		#define _cph_cpp_v 2011

		#undef _cph_cpp11
		#define _cph_cpp11 1
	#elif __cplusplus == 201402L
		#undef _cph_cpp_v
		#define _cph_cpp_v 2014

		#undef _cph_cpp14
		#define _cph_cpp14 1
	#else
		#warning "Unknown C++ standard. Let there be bugs. Std: " __cplusplus
	#endif

	#if _cph_cpp_v >= 2011
		#undef _cph_cpp1x
		#define _cph_cpp1x 1
	#endif

	#if _cph_cc_msc && _cph_cc_msc_major >= 10
		#undef null
		#define null nullptr
	#elif _cph_cc_clang || (_cph_cc_gnu && (_cph_cc_gnu_major > 4 \
			|| (_cph_cc_gnu4 && _cph_cc_gnu_minor >= 6)))
		#undef null
		#define null nullptr
	#elif _cph_arch_32
		#undef null
		#define null 0
	#elif _cph_arch_64
		#undef null
		#define null (0L)
	#else
		#error "Undefined: null."
	#endif
#endif

#ifdef __OBJC__
	#undef _cph_objc
	#define _cph_objc
#endif

#if defined(__STDC__) \
		&& (defined(__STDC_VERSION__) || !defined(_cph_cpp) /*TODO: ObjC?*/)
	#undef _cph_c
	#define _cph_c 1
/*
	#if !defined(__STDC__) && !defined(__STDC_VERSION__)
		#warning "None of the '__cplusplus', '__STDC__' or '__STDC_VERSION__' are \
			defined. Let there be bugs."
	#endif
*/
	#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199409L
		#undef _cph_c_v
		#define _cph_c_v 1989

		#undef _cph_c89
		#define _cph_c89 1

		#undef _cph_c90
		#define _cph_c90 1
	#elif __STDC_VERSION__ == 199409L
		#undef _cph_c_v
		#define _cph_c_v 1994

		#undef _cph_c94
		#define _cph_c94 1
	#elif __STDC_VERSION__ == 199901L
		#undef _cph_c_v
		#define _cph_c_v 1999

		#undef _cph_c99
		#define _cph_c99 1
	#elif __STDC_VERSION__ == 201112L
		#undef _cph_c_v
		#define _cph_c_v 2011

		#undef _cph_c11
		#define _cph_c11 1
	#else
		#warning "Unknown C standard. Let there be bugs. Std: " __STDC_VERSION__
	#endif

	#if _cph_c_v >= 2011
		#undef _cph_c1x
		#define _cph_c1x 1
	#endif

	#undef null
	#define null ((void *)0)
#endif


//
#if _cph_cc_gnucompat
	#undef likely
	#define likely(exp) __builtin_expect((exp) != 0, true)

	#undef unlikely
	#define unlikely(exp) __builtin_expect((exp) != 0, false)

#else
	#undef likely
	#define likely(exp) exp

	#undef unlikely
	#define unlikely(exp) exp
#endif


//
#undef isdef
#define isdef(macro) _cph_private_isdef_(macro)
#define _cph_private_isdef_macrotest_1 ,
#define _cph_private_isdef_(value) \
	_cph_private_isdef__(_cph_private_isdef_macrotest_##value)
#define _cph_private_isdef__(comma) _cph_private_isdef___(comma 1, 0)
#define _cph_private_isdef___(_, v, ...) v


//
#undef doif
#define _cph_private_doif_e(...) __VA_ARGS__
#define doif(macro, t, ...) \
	_cph_private_doif___(macro, _cph_private_doif_e(t), __VA_ARGS__)
#define _cph_private_doif_test_1(t, ...) t
#define _cph_private_doif_test_0(_, ...) __VA_ARGS__
//#define doif(macro, t, ...) _cph_private_doif_test_ ## macro(t, __VA_ARGS__)
#define _cph_private_doif___(v, t, ...) \
	_cph_private_doif_test_##v(_cph_private_doif_e(t), __VA_ARGS__)
//#define _cph_private_doif__(v, ...) _cph_private_doif___(v, __VA_ARGS__)
//#define _cph_private_doif_(v, ...) _cph_private_doif___(v, __VA_ARGS__)


//
#undef doifdef
#define doifdef(macro, t, ...) \
	doif(isdef(macro), _cph_private_doif_e(t), __VA_ARGS__)


//
#if _cph_cpp
namespace cph { namespace {
#endif
	typedef unsigned char      b1;
	typedef unsigned char      byte;
	typedef unsigned char      octet;
	typedef signed char        s1;
	typedef unsigned char      u1;
	typedef signed short int   s2;
	typedef unsigned short int u2;

	#if _cph_cc_msc
		typedef signed   __int32 s4;
		typedef unsigned __int32 u4;
		typedef signed   __int64 s8;
		typedef unsigned __int64 u8;
	#elif _cph_cc_gnucompat
		#if _cph_arch_32
			typedef signed int         s4;
			typedef unsigned int       u4;
			typedef signed long long   s8;
			typedef unsigned long long u8;
		#elif _cph_arch_64
			typedef signed int         s4;
			typedef unsigned int       u4;
			typedef signed long int    s8;
			typedef unsigned long int  u8;
		#endif
	#endif

	#if _cph_arch_32
		#undef _cph_wbytes
		#define _cph_wbytes 4

		typedef s4 sw;
		typedef u4 uw;
	#elif _cph_arch_64
		#undef _cph_wbytes
		#define _cph_wbytes 8

		typedef s8 sw;
		typedef u8 uw;
	#else
		#error "Undeclared: sw, uw, ptrd."
	#endif

	#undef _cph_wbits
	#define _cph_wbits (_cph_wbytes*8)

	typedef sw ptrd;

	static const uw wbytes = _cph_wbytes;
	static const uw wbits = _cph_wbits;

	typedef float  f4;
	typedef double f8;
#if _cph_cpp
}}
#endif


//
#if _cph_cpp
namespace cph
{
#endif
//TODO: http://stackoverflow.com/questions/834179/wtf-is-wtf-in-webkit-code-base
	#if _cph_cpp
		template<typename R, typename T>
		inline
		R scast(T t)
		{
			return static_cast<R>(t);
		}

		template<typename R, typename T>
		inline
		R rcast(T t)
		{
			return reinterpret_cast<R>(t);
		}
	#else
		// TODO:
		//#error "TODO:"
	#endif
#if _cph_cpp
}
#endif


//
#if _cph_cpp
namespace cph
{
#endif
	#if _cph_cpp && !_cph_cpp1x
		namespace platform { namespace cph__private { namespace {
//			template <typename T, cph::uw N>
//			char (&cph_arrsz(T (&a)[N]))[N];

//			template <typename T, cph::uw N>
//			char (&cph_arrsz(const T (&a)[N]))[N];

//			#undef arrlen
//			#define arrlen(_cph_arrsz_x) (sizeof(cph_arrsz(_cph_arrsz_x)))

			// http://stackoverflow.com/a/6256085
			struct cph_arrsz//Bad_arg_to_COUNTOF
			{
				class Is_pointer; // Incomplete.
				class Is_array {};
				template <typename T>
				static Is_pointer check_type(const T*, const T* const*);
				static Is_array check_type(const void*, const void*);
			};

			#undef arrlen
			#define arrlen(_cph_arrsz_x) ( \
				0 * sizeof(reinterpret_cast<const cph::platform::cph__private::cph_arrsz*>(_cph_arrsz_x)) + \
				0 * sizeof(cph::platform::cph__private::cph_arrsz::check_type((_cph_arrsz_x), &(_cph_arrsz_x))) + \
				sizeof(_cph_arrsz_x) / sizeof((_cph_arrsz_x)[0]) )
		}}}
	#elif _cph_cpp && _cph_cpp1x
		namespace platform { namespace cph__private { namespace {
			template <typename T, cph::uw N>
			constexpr cph::uw cph_arrsz(T(&)[N])
			{
				return N;
			}

			#undef arrlen
			#define arrlen(_cph_arrsz_x) cph::platform::cph__private::cph_arrsz(_cph_arrsz_x)
		}}}
	#else
		#undef arrlen
		#define arrlen(_cph_arrsz_x) (sizeof(_cph_arrsz_x)/sizeof(_cph_arrsz_x[0]))
	#endif
#if _cph_cpp
}
#endif


#endif // #ifndef _cph_h__platform

