#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Invokable
struct Invokable_t266310727;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Invokable::.ctor(System.Object,System.IntPtr)
extern "C"  void Invokable__ctor_m3348117662 (Invokable_t266310727 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Invokable::Invoke()
extern "C"  void Invokable_Invoke_m3963055736 (Invokable_t266310727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Invokable_t266310727(Il2CppObject* delegate);
// System.IAsyncResult Invokable::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Invokable_BeginInvoke_m289036563 (Invokable_t266310727 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Invokable::EndInvoke(System.IAsyncResult)
extern "C"  void Invokable_EndInvoke_m816097710 (Invokable_t266310727 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
