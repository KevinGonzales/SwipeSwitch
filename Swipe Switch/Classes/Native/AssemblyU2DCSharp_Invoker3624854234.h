#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Invoker
struct Invoker_t3624854234;
// System.Collections.Generic.List`1<Invoker/InvokableItem>
struct List_1_t1635887347;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invoker
struct  Invoker_t3624854234  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Invoker::fRealTimeLastFrame
	float ___fRealTimeLastFrame_3;
	// System.Single Invoker::fRealDeltaTime
	float ___fRealDeltaTime_4;
	// System.Collections.Generic.List`1<Invoker/InvokableItem> Invoker::invokeList
	List_1_t1635887347 * ___invokeList_5;
	// System.Collections.Generic.List`1<Invoker/InvokableItem> Invoker::invokeListPendingAddition
	List_1_t1635887347 * ___invokeListPendingAddition_6;
	// System.Collections.Generic.List`1<Invoker/InvokableItem> Invoker::invokeListExecuted
	List_1_t1635887347 * ___invokeListExecuted_7;

public:
	inline static int32_t get_offset_of_fRealTimeLastFrame_3() { return static_cast<int32_t>(offsetof(Invoker_t3624854234, ___fRealTimeLastFrame_3)); }
	inline float get_fRealTimeLastFrame_3() const { return ___fRealTimeLastFrame_3; }
	inline float* get_address_of_fRealTimeLastFrame_3() { return &___fRealTimeLastFrame_3; }
	inline void set_fRealTimeLastFrame_3(float value)
	{
		___fRealTimeLastFrame_3 = value;
	}

	inline static int32_t get_offset_of_fRealDeltaTime_4() { return static_cast<int32_t>(offsetof(Invoker_t3624854234, ___fRealDeltaTime_4)); }
	inline float get_fRealDeltaTime_4() const { return ___fRealDeltaTime_4; }
	inline float* get_address_of_fRealDeltaTime_4() { return &___fRealDeltaTime_4; }
	inline void set_fRealDeltaTime_4(float value)
	{
		___fRealDeltaTime_4 = value;
	}

	inline static int32_t get_offset_of_invokeList_5() { return static_cast<int32_t>(offsetof(Invoker_t3624854234, ___invokeList_5)); }
	inline List_1_t1635887347 * get_invokeList_5() const { return ___invokeList_5; }
	inline List_1_t1635887347 ** get_address_of_invokeList_5() { return &___invokeList_5; }
	inline void set_invokeList_5(List_1_t1635887347 * value)
	{
		___invokeList_5 = value;
		Il2CppCodeGenWriteBarrier(&___invokeList_5, value);
	}

	inline static int32_t get_offset_of_invokeListPendingAddition_6() { return static_cast<int32_t>(offsetof(Invoker_t3624854234, ___invokeListPendingAddition_6)); }
	inline List_1_t1635887347 * get_invokeListPendingAddition_6() const { return ___invokeListPendingAddition_6; }
	inline List_1_t1635887347 ** get_address_of_invokeListPendingAddition_6() { return &___invokeListPendingAddition_6; }
	inline void set_invokeListPendingAddition_6(List_1_t1635887347 * value)
	{
		___invokeListPendingAddition_6 = value;
		Il2CppCodeGenWriteBarrier(&___invokeListPendingAddition_6, value);
	}

	inline static int32_t get_offset_of_invokeListExecuted_7() { return static_cast<int32_t>(offsetof(Invoker_t3624854234, ___invokeListExecuted_7)); }
	inline List_1_t1635887347 * get_invokeListExecuted_7() const { return ___invokeListExecuted_7; }
	inline List_1_t1635887347 ** get_address_of_invokeListExecuted_7() { return &___invokeListExecuted_7; }
	inline void set_invokeListExecuted_7(List_1_t1635887347 * value)
	{
		___invokeListExecuted_7 = value;
		Il2CppCodeGenWriteBarrier(&___invokeListExecuted_7, value);
	}
};

struct Invoker_t3624854234_StaticFields
{
public:
	// Invoker Invoker::_instance
	Invoker_t3624854234 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Invoker_t3624854234_StaticFields, ____instance_2)); }
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
