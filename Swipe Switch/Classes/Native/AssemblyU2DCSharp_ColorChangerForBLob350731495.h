#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer[]
struct RendererU5BU5D_t3623042065;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChangerForBLob
struct  ColorChangerForBLob_t350731495  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ColorChangerForBLob::timeLeft
	float ___timeLeft_2;
	// UnityEngine.Color ColorChangerForBLob::targetColor
	Color_t1588175760  ___targetColor_3;
	// UnityEngine.Renderer[] ColorChangerForBLob::rend
	RendererU5BU5D_t3623042065* ___rend_4;

public:
	inline static int32_t get_offset_of_timeLeft_2() { return static_cast<int32_t>(offsetof(ColorChangerForBLob_t350731495, ___timeLeft_2)); }
	inline float get_timeLeft_2() const { return ___timeLeft_2; }
	inline float* get_address_of_timeLeft_2() { return &___timeLeft_2; }
	inline void set_timeLeft_2(float value)
	{
		___timeLeft_2 = value;
	}

	inline static int32_t get_offset_of_targetColor_3() { return static_cast<int32_t>(offsetof(ColorChangerForBLob_t350731495, ___targetColor_3)); }
	inline Color_t1588175760  get_targetColor_3() const { return ___targetColor_3; }
	inline Color_t1588175760 * get_address_of_targetColor_3() { return &___targetColor_3; }
	inline void set_targetColor_3(Color_t1588175760  value)
	{
		___targetColor_3 = value;
	}

	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(ColorChangerForBLob_t350731495, ___rend_4)); }
	inline RendererU5BU5D_t3623042065* get_rend_4() const { return ___rend_4; }
	inline RendererU5BU5D_t3623042065** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(RendererU5BU5D_t3623042065* value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier(&___rend_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
