﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.WWW
struct WWW_t1522972100;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m1985874080 (WWW_t1522972100 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2446678367 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382 (WWW_t1522972100 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m3594284248 (WWW_t1522972100 * __this, String_t* ___url, ByteU5BU5D_t58506160* ___postData, StringU5BU5D_t2956870243* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C"  String_t* WWW_EscapeURL_m1167392721 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
extern "C"  String_t* WWW_EscapeURL_m1690274784 (Il2CppObject * __this /* static, unused */, String_t* ___s, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * WWW_get_DefaultEncoding_m2507364293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C"  ByteU5BU5D_t58506160* WWW_get_bytes_m2080623436 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m1787423074 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
