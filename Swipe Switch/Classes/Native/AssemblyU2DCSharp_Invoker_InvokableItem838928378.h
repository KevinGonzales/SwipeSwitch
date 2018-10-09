#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Invokable
struct Invokable_t266310727;
// Invoker
struct Invoker_t3624854234;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invoker/InvokableItem
struct  InvokableItem_t838928378 
{
public:
	// Invokable Invoker/InvokableItem::func
	Invokable_t266310727 * ___func_0;
	// System.Single Invoker/InvokableItem::executeAtTime
	float ___executeAtTime_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(InvokableItem_t838928378, ___func_0)); }
	inline Invokable_t266310727 * get_func_0() const { return ___func_0; }
	inline Invokable_t266310727 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Invokable_t266310727 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier(&___func_0, value);
	}

	inline static int32_t get_offset_of_executeAtTime_1() { return static_cast<int32_t>(offsetof(InvokableItem_t838928378, ___executeAtTime_1)); }
	inline float get_executeAtTime_1() const { return ___executeAtTime_1; }
	inline float* get_address_of_executeAtTime_1() { return &___executeAtTime_1; }
	inline void set_executeAtTime_1(float value)
	{
		___executeAtTime_1 = value;
	}
};

struct InvokableItem_t838928378_StaticFields
{
public:
	// Invoker Invoker/InvokableItem::_instance
	Invoker_t3624854234 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(InvokableItem_t838928378_StaticFields, ____instance_2)); }
	inline Invoker_t3624854234 * get__instance_2() const { return ____instance_2; }
	inline Invoker_t3624854234 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(Invoker_t3624854234 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
