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
// PauseMenuScript
struct PauseMenuScript_t987778432;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenuScript
struct  PauseMenuScript_t987778432  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PauseMenuScript::PauseMenuPannelInstantance
	GameObject_t4012695102 * ___PauseMenuPannelInstantance_2;
	// UnityEngine.GameObject PauseMenuScript::ResumeButtonInstance
	GameObject_t4012695102 * ___ResumeButtonInstance_3;
	// UnityEngine.GameObject PauseMenuScript::TextPause
	GameObject_t4012695102 * ___TextPause_4;
	// UnityEngine.GameObject PauseMenuScript::Squares
	GameObject_t4012695102 * ___Squares_5;
	// System.Boolean PauseMenuScript::enableDrag
	bool ___enableDrag_6;

public:
	inline static int32_t get_offset_of_PauseMenuPannelInstantance_2() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432, ___PauseMenuPannelInstantance_2)); }
	inline GameObject_t4012695102 * get_PauseMenuPannelInstantance_2() const { return ___PauseMenuPannelInstantance_2; }
	inline GameObject_t4012695102 ** get_address_of_PauseMenuPannelInstantance_2() { return &___PauseMenuPannelInstantance_2; }
	inline void set_PauseMenuPannelInstantance_2(GameObject_t4012695102 * value)
	{
		___PauseMenuPannelInstantance_2 = value;
		Il2CppCodeGenWriteBarrier(&___PauseMenuPannelInstantance_2, value);
	}

	inline static int32_t get_offset_of_ResumeButtonInstance_3() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432, ___ResumeButtonInstance_3)); }
	inline GameObject_t4012695102 * get_ResumeButtonInstance_3() const { return ___ResumeButtonInstance_3; }
	inline GameObject_t4012695102 ** get_address_of_ResumeButtonInstance_3() { return &___ResumeButtonInstance_3; }
	inline void set_ResumeButtonInstance_3(GameObject_t4012695102 * value)
	{
		___ResumeButtonInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResumeButtonInstance_3, value);
	}

	inline static int32_t get_offset_of_TextPause_4() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432, ___TextPause_4)); }
	inline GameObject_t4012695102 * get_TextPause_4() const { return ___TextPause_4; }
	inline GameObject_t4012695102 ** get_address_of_TextPause_4() { return &___TextPause_4; }
	inline void set_TextPause_4(GameObject_t4012695102 * value)
	{
		___TextPause_4 = value;
		Il2CppCodeGenWriteBarrier(&___TextPause_4, value);
	}

	inline static int32_t get_offset_of_Squares_5() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432, ___Squares_5)); }
	inline GameObject_t4012695102 * get_Squares_5() const { return ___Squares_5; }
	inline GameObject_t4012695102 ** get_address_of_Squares_5() { return &___Squares_5; }
	inline void set_Squares_5(GameObject_t4012695102 * value)
	{
		___Squares_5 = value;
		Il2CppCodeGenWriteBarrier(&___Squares_5, value);
	}

	inline static int32_t get_offset_of_enableDrag_6() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432, ___enableDrag_6)); }
	inline bool get_enableDrag_6() const { return ___enableDrag_6; }
	inline bool* get_address_of_enableDrag_6() { return &___enableDrag_6; }
	inline void set_enableDrag_6(bool value)
	{
		___enableDrag_6 = value;
	}
};

struct PauseMenuScript_t987778432_StaticFields
{
public:
	// PauseMenuScript PauseMenuScript::current
	PauseMenuScript_t987778432 * ___current_7;

public:
	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(PauseMenuScript_t987778432_StaticFields, ___current_7)); }
	inline PauseMenuScript_t987778432 * get_current_7() const { return ___current_7; }
	inline PauseMenuScript_t987778432 ** get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(PauseMenuScript_t987778432 * value)
	{
		___current_7 = value;
		Il2CppCodeGenWriteBarrier(&___current_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
