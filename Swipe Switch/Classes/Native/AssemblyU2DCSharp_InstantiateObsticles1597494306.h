#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InstantiateObsticles
struct InstantiateObsticles_t1597494306;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstantiateObsticles
struct  InstantiateObsticles_t1597494306  : public MonoBehaviour_t3012272455
{
public:
	// System.Single InstantiateObsticles::speed
	float ___speed_3;
	// System.Single InstantiateObsticles::spawningTime
	float ___spawningTime_4;
	// System.Boolean InstantiateObsticles::isSpawning
	bool ___isSpawning_5;
	// System.Single InstantiateObsticles::currentTime
	float ___currentTime_6;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(InstantiateObsticles_t1597494306, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_spawningTime_4() { return static_cast<int32_t>(offsetof(InstantiateObsticles_t1597494306, ___spawningTime_4)); }
	inline float get_spawningTime_4() const { return ___spawningTime_4; }
	inline float* get_address_of_spawningTime_4() { return &___spawningTime_4; }
	inline void set_spawningTime_4(float value)
	{
		___spawningTime_4 = value;
	}

	inline static int32_t get_offset_of_isSpawning_5() { return static_cast<int32_t>(offsetof(InstantiateObsticles_t1597494306, ___isSpawning_5)); }
	inline bool get_isSpawning_5() const { return ___isSpawning_5; }
	inline bool* get_address_of_isSpawning_5() { return &___isSpawning_5; }
	inline void set_isSpawning_5(bool value)
	{
		___isSpawning_5 = value;
	}

	inline static int32_t get_offset_of_currentTime_6() { return static_cast<int32_t>(offsetof(InstantiateObsticles_t1597494306, ___currentTime_6)); }
	inline float get_currentTime_6() const { return ___currentTime_6; }
	inline float* get_address_of_currentTime_6() { return &___currentTime_6; }
	inline void set_currentTime_6(float value)
	{
		___currentTime_6 = value;
	}
};

struct InstantiateObsticles_t1597494306_StaticFields
{
public:
	// InstantiateObsticles InstantiateObsticles::current
	InstantiateObsticles_t1597494306 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(InstantiateObsticles_t1597494306_StaticFields, ___current_2)); }
	inline InstantiateObsticles_t1597494306 * get_current_2() const { return ___current_2; }
	inline InstantiateObsticles_t1597494306 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(InstantiateObsticles_t1597494306 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
