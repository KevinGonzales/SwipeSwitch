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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DailyReward
struct  DailyReward_t1378486920  : public MonoBehaviour_t3012272455
{
public:
	// System.TimeSpan DailyReward::difference
	TimeSpan_t763862892  ___difference_2;
	// System.DateTime DailyReward::oldDate
	DateTime_t339033936  ___oldDate_3;
	// System.DateTime DailyReward::newDate
	DateTime_t339033936  ___newDate_4;
	// UnityEngine.UI.Text DailyReward::hours
	Text_t3286458198 * ___hours_5;
	// UnityEngine.UI.Text DailyReward::minutes
	Text_t3286458198 * ___minutes_6;
	// UnityEngine.UI.Text DailyReward::Seconds
	Text_t3286458198 * ___Seconds_7;
	// UnityEngine.GameObject DailyReward::rewardButton
	GameObject_t4012695102 * ___rewardButton_8;
	// UnityEngine.GameObject DailyReward::curruncy
	GameObject_t4012695102 * ___curruncy_9;

public:
	inline static int32_t get_offset_of_difference_2() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___difference_2)); }
	inline TimeSpan_t763862892  get_difference_2() const { return ___difference_2; }
	inline TimeSpan_t763862892 * get_address_of_difference_2() { return &___difference_2; }
	inline void set_difference_2(TimeSpan_t763862892  value)
	{
		___difference_2 = value;
	}

	inline static int32_t get_offset_of_oldDate_3() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___oldDate_3)); }
	inline DateTime_t339033936  get_oldDate_3() const { return ___oldDate_3; }
	inline DateTime_t339033936 * get_address_of_oldDate_3() { return &___oldDate_3; }
	inline void set_oldDate_3(DateTime_t339033936  value)
	{
		___oldDate_3 = value;
	}

	inline static int32_t get_offset_of_newDate_4() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___newDate_4)); }
	inline DateTime_t339033936  get_newDate_4() const { return ___newDate_4; }
	inline DateTime_t339033936 * get_address_of_newDate_4() { return &___newDate_4; }
	inline void set_newDate_4(DateTime_t339033936  value)
	{
		___newDate_4 = value;
	}

	inline static int32_t get_offset_of_hours_5() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___hours_5)); }
	inline Text_t3286458198 * get_hours_5() const { return ___hours_5; }
	inline Text_t3286458198 ** get_address_of_hours_5() { return &___hours_5; }
	inline void set_hours_5(Text_t3286458198 * value)
	{
		___hours_5 = value;
		Il2CppCodeGenWriteBarrier(&___hours_5, value);
	}

	inline static int32_t get_offset_of_minutes_6() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___minutes_6)); }
	inline Text_t3286458198 * get_minutes_6() const { return ___minutes_6; }
	inline Text_t3286458198 ** get_address_of_minutes_6() { return &___minutes_6; }
	inline void set_minutes_6(Text_t3286458198 * value)
	{
		___minutes_6 = value;
		Il2CppCodeGenWriteBarrier(&___minutes_6, value);
	}

	inline static int32_t get_offset_of_Seconds_7() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___Seconds_7)); }
	inline Text_t3286458198 * get_Seconds_7() const { return ___Seconds_7; }
	inline Text_t3286458198 ** get_address_of_Seconds_7() { return &___Seconds_7; }
	inline void set_Seconds_7(Text_t3286458198 * value)
	{
		___Seconds_7 = value;
		Il2CppCodeGenWriteBarrier(&___Seconds_7, value);
	}

	inline static int32_t get_offset_of_rewardButton_8() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___rewardButton_8)); }
	inline GameObject_t4012695102 * get_rewardButton_8() const { return ___rewardButton_8; }
	inline GameObject_t4012695102 ** get_address_of_rewardButton_8() { return &___rewardButton_8; }
	inline void set_rewardButton_8(GameObject_t4012695102 * value)
	{
		___rewardButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___rewardButton_8, value);
	}

	inline static int32_t get_offset_of_curruncy_9() { return static_cast<int32_t>(offsetof(DailyReward_t1378486920, ___curruncy_9)); }
	inline GameObject_t4012695102 * get_curruncy_9() const { return ___curruncy_9; }
	inline GameObject_t4012695102 ** get_address_of_curruncy_9() { return &___curruncy_9; }
	inline void set_curruncy_9(GameObject_t4012695102 * value)
	{
		___curruncy_9 = value;
		Il2CppCodeGenWriteBarrier(&___curruncy_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
