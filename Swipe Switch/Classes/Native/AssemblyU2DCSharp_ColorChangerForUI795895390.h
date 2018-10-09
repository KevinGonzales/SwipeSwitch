#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChangerForUI
struct  ColorChangerForUI_t795895390  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ColorChangerForUI::timeLeft
	float ___timeLeft_2;
	// UnityEngine.Color ColorChangerForUI::targetColor
	Color_t1588175760  ___targetColor_3;
	// UnityEngine.UI.Text ColorChangerForUI::text
	Text_t3286458198 * ___text_4;

public:
	inline static int32_t get_offset_of_timeLeft_2() { return static_cast<int32_t>(offsetof(ColorChangerForUI_t795895390, ___timeLeft_2)); }
	inline float get_timeLeft_2() const { return ___timeLeft_2; }
	inline float* get_address_of_timeLeft_2() { return &___timeLeft_2; }
	inline void set_timeLeft_2(float value)
	{
		___timeLeft_2 = value;
	}

	inline static int32_t get_offset_of_targetColor_3() { return static_cast<int32_t>(offsetof(ColorChangerForUI_t795895390, ___targetColor_3)); }
	inline Color_t1588175760  get_targetColor_3() const { return ___targetColor_3; }
	inline Color_t1588175760 * get_address_of_targetColor_3() { return &___targetColor_3; }
	inline void set_targetColor_3(Color_t1588175760  value)
	{
		___targetColor_3 = value;
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(ColorChangerForUI_t795895390, ___text_4)); }
	inline Text_t3286458198 * get_text_4() const { return ___text_4; }
	inline Text_t3286458198 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t3286458198 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
