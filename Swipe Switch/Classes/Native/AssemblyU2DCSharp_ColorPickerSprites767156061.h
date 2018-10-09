#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPickerSprites
struct  ColorPickerSprites_t767156061  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color ColorPickerSprites::targetColor
	Color_t1588175760  ___targetColor_2;
	// UnityEngine.Renderer ColorPickerSprites::rend
	Renderer_t1092684080 * ___rend_3;

public:
	inline static int32_t get_offset_of_targetColor_2() { return static_cast<int32_t>(offsetof(ColorPickerSprites_t767156061, ___targetColor_2)); }
	inline Color_t1588175760  get_targetColor_2() const { return ___targetColor_2; }
	inline Color_t1588175760 * get_address_of_targetColor_2() { return &___targetColor_2; }
	inline void set_targetColor_2(Color_t1588175760  value)
	{
		___targetColor_2 = value;
	}

	inline static int32_t get_offset_of_rend_3() { return static_cast<int32_t>(offsetof(ColorPickerSprites_t767156061, ___rend_3)); }
	inline Renderer_t1092684080 * get_rend_3() const { return ___rend_3; }
	inline Renderer_t1092684080 ** get_address_of_rend_3() { return &___rend_3; }
	inline void set_rend_3(Renderer_t1092684080 * value)
	{
		___rend_3 = value;
		Il2CppCodeGenWriteBarrier(&___rend_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
