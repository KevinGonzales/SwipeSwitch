#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// Continue
struct Continue_t3792408775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Continue
struct  Continue_t3792408775  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Continue::ContinueText
	GameObject_t4012695102 * ___ContinueText_3;
	// UnityEngine.GameObject Continue::YesText
	GameObject_t4012695102 * ___YesText_4;
	// UnityEngine.GameObject Continue::NoText
	GameObject_t4012695102 * ___NoText_5;
	// UnityEngine.GameObject Continue::Pannel
	GameObject_t4012695102 * ___Pannel_6;
	// UnityEngine.GameObject Continue::ImageNotEnoughMoney
	GameObject_t4012695102 * ___ImageNotEnoughMoney_7;
	// UnityEngine.GameObject Continue::ImageCurrency
	GameObject_t4012695102 * ___ImageCurrency_8;
	// System.Boolean Continue::yes
	bool ___yes_10;
	// System.Boolean Continue::no
	bool ___no_11;
	// System.Boolean Continue::lost
	bool ___lost_12;

public:
	inline static int32_t get_offset_of_ContinueText_3() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___ContinueText_3)); }
	inline GameObject_t4012695102 * get_ContinueText_3() const { return ___ContinueText_3; }
	inline GameObject_t4012695102 ** get_address_of_ContinueText_3() { return &___ContinueText_3; }
	inline void set_ContinueText_3(GameObject_t4012695102 * value)
	{
		___ContinueText_3 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueText_3, value);
	}

	inline static int32_t get_offset_of_YesText_4() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___YesText_4)); }
	inline GameObject_t4012695102 * get_YesText_4() const { return ___YesText_4; }
	inline GameObject_t4012695102 ** get_address_of_YesText_4() { return &___YesText_4; }
	inline void set_YesText_4(GameObject_t4012695102 * value)
	{
		___YesText_4 = value;
		Il2CppCodeGenWriteBarrier(&___YesText_4, value);
	}

	inline static int32_t get_offset_of_NoText_5() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___NoText_5)); }
	inline GameObject_t4012695102 * get_NoText_5() const { return ___NoText_5; }
	inline GameObject_t4012695102 ** get_address_of_NoText_5() { return &___NoText_5; }
	inline void set_NoText_5(GameObject_t4012695102 * value)
	{
		___NoText_5 = value;
		Il2CppCodeGenWriteBarrier(&___NoText_5, value);
	}

	inline static int32_t get_offset_of_Pannel_6() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___Pannel_6)); }
	inline GameObject_t4012695102 * get_Pannel_6() const { return ___Pannel_6; }
	inline GameObject_t4012695102 ** get_address_of_Pannel_6() { return &___Pannel_6; }
	inline void set_Pannel_6(GameObject_t4012695102 * value)
	{
		___Pannel_6 = value;
		Il2CppCodeGenWriteBarrier(&___Pannel_6, value);
	}

	inline static int32_t get_offset_of_ImageNotEnoughMoney_7() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___ImageNotEnoughMoney_7)); }
	inline GameObject_t4012695102 * get_ImageNotEnoughMoney_7() const { return ___ImageNotEnoughMoney_7; }
	inline GameObject_t4012695102 ** get_address_of_ImageNotEnoughMoney_7() { return &___ImageNotEnoughMoney_7; }
	inline void set_ImageNotEnoughMoney_7(GameObject_t4012695102 * value)
	{
		___ImageNotEnoughMoney_7 = value;
		Il2CppCodeGenWriteBarrier(&___ImageNotEnoughMoney_7, value);
	}

	inline static int32_t get_offset_of_ImageCurrency_8() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___ImageCurrency_8)); }
	inline GameObject_t4012695102 * get_ImageCurrency_8() const { return ___ImageCurrency_8; }
	inline GameObject_t4012695102 ** get_address_of_ImageCurrency_8() { return &___ImageCurrency_8; }
	inline void set_ImageCurrency_8(GameObject_t4012695102 * value)
	{
		___ImageCurrency_8 = value;
		Il2CppCodeGenWriteBarrier(&___ImageCurrency_8, value);
	}

	inline static int32_t get_offset_of_yes_10() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___yes_10)); }
	inline bool get_yes_10() const { return ___yes_10; }
	inline bool* get_address_of_yes_10() { return &___yes_10; }
	inline void set_yes_10(bool value)
	{
		___yes_10 = value;
	}

	inline static int32_t get_offset_of_no_11() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___no_11)); }
	inline bool get_no_11() const { return ___no_11; }
	inline bool* get_address_of_no_11() { return &___no_11; }
	inline void set_no_11(bool value)
	{
		___no_11 = value;
	}

	inline static int32_t get_offset_of_lost_12() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___lost_12)); }
	inline bool get_lost_12() const { return ___lost_12; }
	inline bool* get_address_of_lost_12() { return &___lost_12; }
	inline void set_lost_12(bool value)
	{
		___lost_12 = value;
	}
};

struct Continue_t3792408775_StaticFields
{
public:
	// Continue Continue::current
	Continue_t3792408775 * ___current_9;

public:
	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(Continue_t3792408775_StaticFields, ___current_9)); }
	inline Continue_t3792408775 * get_current_9() const { return ___current_9; }
	inline Continue_t3792408775 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(Continue_t3792408775 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier(&___current_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
