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

// Invoker
struct Invoker_t3624854234;
// Invokable
struct Invokable_t266310727;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Invokable266310727.h"

// System.Void Invoker::.ctor()
extern "C"  void Invoker__ctor_m3863142865 (Invoker_t3624854234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Invoker::.cctor()
extern "C"  void Invoker__cctor_m3311215612 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Invoker Invoker::get_Instance()
extern "C"  Invoker_t3624854234 * Invoker_get_Instance_m3159601560 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Invoker::RealDeltaTime()
extern "C"  float Invoker_RealDeltaTime_m2938143394 (Invoker_t3624854234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Invoker::InvokeDelayed(Invokable,System.Single)
extern "C"  void Invoker_InvokeDelayed_m3067541015 (Il2CppObject * __this /* static, unused */, Invokable_t266310727 * ___func, float ___delaySeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Invoker::Update()
extern "C"  void Invoker_Update_m1225206620 (Invoker_t3624854234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
