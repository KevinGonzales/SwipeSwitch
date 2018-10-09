#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Invoker_InvokableItem838928378.h"

#pragma once
// Invoker/InvokableItem[]
struct InvokableItemU5BU5D_t2417100511  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) InvokableItem_t838928378  m_Items[1];

public:
	inline InvokableItem_t838928378  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline InvokableItem_t838928378 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, InvokableItem_t838928378  value)
	{
		m_Items[index] = value;
	}
};
