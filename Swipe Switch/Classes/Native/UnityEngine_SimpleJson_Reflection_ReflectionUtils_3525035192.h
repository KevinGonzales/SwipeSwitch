﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t4132158723;
// System.Collections.Generic.Dictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_t1890530050;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionary_2_t3525035192  : public Il2CppObject
{
public:
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	Il2CppObject * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t4132158723 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t1890530050 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3525035192, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3525035192, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t4132158723 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t4132158723 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t4132158723 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____valueFactory_1, value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t3525035192, ____dictionary_2)); }
	inline Dictionary_2_t1890530050 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t1890530050 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t1890530050 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
