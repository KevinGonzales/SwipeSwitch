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

#include "AssemblyU2DCSharp_PlayAd2393080471.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoReward
struct  VideoReward_t2668457834  : public PlayAd_t2393080471
{
public:
	// UnityEngine.GameObject VideoReward::imageAskToWatch
	GameObject_t4012695102 * ___imageAskToWatch_3;
	// UnityEngine.GameObject VideoReward::no
	GameObject_t4012695102 * ___no_4;
	// UnityEngine.GameObject VideoReward::yes
	GameObject_t4012695102 * ___yes_5;

public:
	inline static int32_t get_offset_of_imageAskToWatch_3() { return static_cast<int32_t>(offsetof(VideoReward_t2668457834, ___imageAskToWatch_3)); }
	inline GameObject_t4012695102 * get_imageAskToWatch_3() const { return ___imageAskToWatch_3; }
	inline GameObject_t4012695102 ** get_address_of_imageAskToWatch_3() { return &___imageAskToWatch_3; }
	inline void set_imageAskToWatch_3(GameObject_t4012695102 * value)
	{
		___imageAskToWatch_3 = value;
		Il2CppCodeGenWriteBarrier(&___imageAskToWatch_3, value);
	}

	inline static int32_t get_offset_of_no_4() { return static_cast<int32_t>(offsetof(VideoReward_t2668457834, ___no_4)); }
	inline GameObject_t4012695102 * get_no_4() const { return ___no_4; }
	inline GameObject_t4012695102 ** get_address_of_no_4() { return &___no_4; }
	inline void set_no_4(GameObject_t4012695102 * value)
	{
		___no_4 = value;
		Il2CppCodeGenWriteBarrier(&___no_4, value);
	}

	inline static int32_t get_offset_of_yes_5() { return static_cast<int32_t>(offsetof(VideoReward_t2668457834, ___yes_5)); }
	inline GameObject_t4012695102 * get_yes_5() const { return ___yes_5; }
	inline GameObject_t4012695102 ** get_address_of_yes_5() { return &___yes_5; }
	inline void set_yes_5(GameObject_t4012695102 * value)
	{
		___yes_5 = value;
		Il2CppCodeGenWriteBarrier(&___yes_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
