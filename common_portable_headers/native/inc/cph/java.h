#pragma once
#ifndef _cph_h_java
#define _cph_h_java

namespace cph
{
	namespace jni
	{
		#undef _JAVASOFT_JNI_H_
		#undef _JAVASOFT_JNI_MD_H_
		// #if _cph_cpp
		// 	#define _cph_h_java_cpp __cplusplus
		// 	#undef __cplusplus
		// #endif
		#include <jni.h>
		// #ifdef _cph_h_java_cpp
		// 	#define __cplusplus _cph_h_java_cpp
		// 	#undef _cph_h_java_cpp
		// #endif
	}
}

#endif // #ifndef _cph_h_java

