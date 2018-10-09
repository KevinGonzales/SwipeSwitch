#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaunchSquares
struct  LaunchSquares_t894594979  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody2D LaunchSquares::rb
	Rigidbody2D_t3632243084 * ___rb_2;
	// System.Single LaunchSquares::force
	float ___force_3;
	// UnityEngine.Vector2 LaunchSquares::direction
	Vector2_t3525329788  ___direction_4;
	// System.Single LaunchSquares::randomNumber
	float ___randomNumber_5;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(LaunchSquares_t894594979, ___rb_2)); }
	inline Rigidbody2D_t3632243084 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody2D_t3632243084 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody2D_t3632243084 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(LaunchSquares_t894594979, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(LaunchSquares_t894594979, ___direction_4)); }
	inline Vector2_t3525329788  get_direction_4() const { return ___direction_4; }
	inline Vector2_t3525329788 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t3525329788  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_randomNumber_5() { return static_cast<int32_t>(offsetof(LaunchSquares_t894594979, ___randomNumber_5)); }
	inline float get_randomNumber_5() const { return ___randomNumber_5; }
	inline float* get_address_of_randomNumber_5() { return &___randomNumber_5; }
	inline void set_randomNumber_5(float value)
	{
		___randomNumber_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
