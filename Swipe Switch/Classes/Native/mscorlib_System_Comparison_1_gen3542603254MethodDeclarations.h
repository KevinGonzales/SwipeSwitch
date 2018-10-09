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

// System.Comparison`1<Invoker/InvokableItem>
struct Comparison_1_t3542603254;
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

// System.Void System.Comparison`1<Invoker/InvokableItem>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m888722412_gshared (Comparison_1_t3542603254 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m888722412(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3542603254 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m888722412_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Invoker/InvokableItem>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m912134868_gshared (Comparison_1_t3542603254 * __this, InvokableItem_t838928378  ___x, InvokableItem_t838928378  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m912134868(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3542603254 *, InvokableItem_t838928378 , InvokableItem_t838928378 , const MethodInfo*))Comparison_1_Invoke_m912134868_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Invoker/InvokableItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m3182923853_gshared (Comparison_1_t3542603254 * __this, InvokableItem_t838928378  ___x, InvokableItem_t838928378  ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m3182923853(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t3542603254 *, InvokableItem_t838928378 , InvokableItem_t838928378 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m3182923853_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Invoker/InvokableItem>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1679910168_gshared (Comparison_1_t3542603254 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1679910168(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3542603254 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m1679910168_gshared)(__this, ___result, method)
