#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Score
struct Score_t79711858;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t79711858  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text Score::textScore
	Text_t3286458198 * ___textScore_3;
	// System.Int32 Score::intScore
	int32_t ___intScore_4;
	// UnityEngine.UI.Text Score::HighScore
	Text_t3286458198 * ___HighScore_5;

public:
	inline static int32_t get_offset_of_textScore_3() { return static_cast<int32_t>(offsetof(Score_t79711858, ___textScore_3)); }
	inline Text_t3286458198 * get_textScore_3() const { return ___textScore_3; }
	inline Text_t3286458198 ** get_address_of_textScore_3() { return &___textScore_3; }
	inline void set_textScore_3(Text_t3286458198 * value)
	{
		___textScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___textScore_3, value);
	}

	inline static int32_t get_offset_of_intScore_4() { return static_cast<int32_t>(offsetof(Score_t79711858, ___intScore_4)); }
	inline int32_t get_intScore_4() const { return ___intScore_4; }
	inline int32_t* get_address_of_intScore_4() { return &___intScore_4; }
	inline void set_intScore_4(int32_t value)
	{
		___intScore_4 = value;
	}

	inline static int32_t get_offset_of_HighScore_5() { return static_cast<int32_t>(offsetof(Score_t79711858, ___HighScore_5)); }
	inline Text_t3286458198 * get_HighScore_5() const { return ___HighScore_5; }
	inline Text_t3286458198 ** get_address_of_HighScore_5() { return &___HighScore_5; }
	inline void set_HighScore_5(Text_t3286458198 * value)
	{
		___HighScore_5 = value;
		Il2CppCodeGenWriteBarrier(&___HighScore_5, value);
	}
};

struct Score_t79711858_StaticFields
{
public:
	// Score Score::current
	Score_t79711858 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Score_t79711858_StaticFields, ___current_2)); }
	inline Score_t79711858 * get_current_2() const { return ___current_2; }
	inline Score_t79711858 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Score_t79711858 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
