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

// System.Predicate`1<Invoker/InvokableItem>
struct Predicate_1_t1409892276;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Invoker_InvokableItem838928378.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<Invoker/InvokableItem>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2104372954_gshared (Predicate_1_t1409892276 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2104372954(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1409892276 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2104372954_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Invoker/InvokableItem>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m272664108_gshared (Predicate_1_t1409892276 * __this, InvokableItem_t838928378  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m272664108(__this, ___obj, method) ((  bool (*) (Predicate_1_t1409892276 *, InvokableItem_t838928378 , const MethodInfo*))Predicate_1_Invoke_m272664108_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Invoker/InvokableItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m424520063_gshared (Predicate_1_t1409892276 * __this, InvokableItem_t838928378  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m424520063(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t1409892276 *, InvokableItem_t838928378 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m424520063_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Invoker/InvokableItem>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m4114583848_gshared (Predicate_1_t1409892276 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m4114583848(__this, ___result, method) ((  bool (*) (Predicate_1_t1409892276 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m4114583848_gshared)(__this, ___result, method)
