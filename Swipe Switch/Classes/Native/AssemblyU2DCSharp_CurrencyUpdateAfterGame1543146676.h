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
// CurrencyUpdateAfterGame
struct CurrencyUpdateAfterGame_t1543146676;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurrencyUpdateAfterGame
struct  CurrencyUpdateAfterGame_t1543146676  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 CurrencyUpdateAfterGame::CurrencyWon
	int32_t ___CurrencyWon_2;
	// UnityEngine.UI.Text CurrencyUpdateAfterGame::textCurruncyWon
	Text_t3286458198 * ___textCurruncyWon_3;
	// System.Int32 CurrencyUpdateAfterGame::oldCurrency
	int32_t ___oldCurrency_4;

public:
	inline static int32_t get_offset_of_CurrencyWon_2() { return static_cast<int32_t>(offsetof(CurrencyUpdateAfterGame_t1543146676, ___CurrencyWon_2)); }
	inline int32_t get_CurrencyWon_2() const { return ___CurrencyWon_2; }
	inline int32_t* get_address_of_CurrencyWon_2() { return &___CurrencyWon_2; }
	inline void set_CurrencyWon_2(int32_t value)
	{
		___CurrencyWon_2 = value;
	}

	inline static int32_t get_offset_of_textCurruncyWon_3() { return static_cast<int32_t>(offsetof(CurrencyUpdateAfterGame_t1543146676, ___textCurruncyWon_3)); }
	inline Text_t3286458198 * get_textCurruncyWon_3() const { return ___textCurruncyWon_3; }
	inline Text_t3286458198 ** get_address_of_textCurruncyWon_3() { return &___textCurruncyWon_3; }
	inline void set_textCurruncyWon_3(Text_t3286458198 * value)
	{
		___textCurruncyWon_3 = value;
		Il2CppCodeGenWriteBarrier(&___textCurruncyWon_3, value);
	}

	inline static int32_t get_offset_of_oldCurrency_4() { return static_cast<int32_t>(offsetof(CurrencyUpdateAfterGame_t1543146676, ___oldCurrency_4)); }
	inline int32_t get_oldCurrency_4() const { return ___oldCurrency_4; }
	inline int32_t* get_address_of_oldCurrency_4() { return &___oldCurrency_4; }
	inline void set_oldCurrency_4(int32_t value)
	{
		___oldCurrency_4 = value;
	}
};

struct CurrencyUpdateAfterGame_t1543146676_StaticFields
{
public:
	// CurrencyUpdateAfterGame CurrencyUpdateAfterGame::current
	CurrencyUpdateAfterGame_t1543146676 * ___current_5;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(CurrencyUpdateAfterGame_t1543146676_StaticFields, ___current_5)); }
	inline CurrencyUpdateAfterGame_t1543146676 * get_current_5() const { return ___current_5; }
	inline CurrencyUpdateAfterGame_t1543146676 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(CurrencyUpdateAfterGame_t1543146676 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier(&___current_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
