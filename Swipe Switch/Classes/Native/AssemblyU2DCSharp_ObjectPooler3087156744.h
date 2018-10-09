#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPooler
struct ObjectPooler_t3087156744;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPooler
struct  ObjectPooler_t3087156744  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] ObjectPooler::objectsToInstantiate
	GameObjectU5BU5D_t3499186955* ___objectsToInstantiate_3;
	// System.Boolean ObjectPooler::willGrow
	bool ___willGrow_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::pooledObjects
	List_1_t514686775 * ___pooledObjects_5;

public:
	inline static int32_t get_offset_of_objectsToInstantiate_3() { return static_cast<int32_t>(offsetof(ObjectPooler_t3087156744, ___objectsToInstantiate_3)); }
	inline GameObjectU5BU5D_t3499186955* get_objectsToInstantiate_3() const { return ___objectsToInstantiate_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_objectsToInstantiate_3() { return &___objectsToInstantiate_3; }
	inline void set_objectsToInstantiate_3(GameObjectU5BU5D_t3499186955* value)
	{
		___objectsToInstantiate_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToInstantiate_3, value);
	}

	inline static int32_t get_offset_of_willGrow_4() { return static_cast<int32_t>(offsetof(ObjectPooler_t3087156744, ___willGrow_4)); }
	inline bool get_willGrow_4() const { return ___willGrow_4; }
	inline bool* get_address_of_willGrow_4() { return &___willGrow_4; }
	inline void set_willGrow_4(bool value)
	{
		___willGrow_4 = value;
	}

	inline static int32_t get_offset_of_pooledObjects_5() { return static_cast<int32_t>(offsetof(ObjectPooler_t3087156744, ___pooledObjects_5)); }
	inline List_1_t514686775 * get_pooledObjects_5() const { return ___pooledObjects_5; }
	inline List_1_t514686775 ** get_address_of_pooledObjects_5() { return &___pooledObjects_5; }
	inline void set_pooledObjects_5(List_1_t514686775 * value)
	{
		___pooledObjects_5 = value;
		Il2CppCodeGenWriteBarrier(&___pooledObjects_5, value);
	}
};

struct ObjectPooler_t3087156744_StaticFields
{
public:
	// ObjectPooler ObjectPooler::current
	ObjectPooler_t3087156744 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ObjectPooler_t3087156744_StaticFields, ___current_2)); }
	inline ObjectPooler_t3087156744 * get_current_2() const { return ___current_2; }
	inline ObjectPooler_t3087156744 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(ObjectPooler_t3087156744 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
