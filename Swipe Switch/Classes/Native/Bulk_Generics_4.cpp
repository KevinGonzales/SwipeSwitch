#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_816448501.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_816448501MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Boolean211005341MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21493839180.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21493839180MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m11197230_gshared (KeyValuePair_2_t816448501 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		((  void (*) (KeyValuePair_2_t816448501 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t816448501 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value;
		((  void (*) (KeyValuePair_2_t816448501 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t816448501 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m494458106_gshared (KeyValuePair_2_t816448501 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4229413435_gshared (KeyValuePair_2_t816448501 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->set_key_0(L_0);
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m1563175098_gshared (KeyValuePair_2_t816448501 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1296398523_gshared (KeyValuePair_2_t816448501 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_value_1(L_0);
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t KeyValuePair_2_ToString_m491888647_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m491888647_gshared (KeyValuePair_2_t816448501 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m491888647_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2956870243* G_B2_1 = NULL;
	StringU5BU5D_t2956870243* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2956870243* G_B1_1 = NULL;
	StringU5BU5D_t2956870243* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2956870243* G_B3_2 = NULL;
	StringU5BU5D_t2956870243* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2956870243* G_B5_1 = NULL;
	StringU5BU5D_t2956870243* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2956870243* G_B4_1 = NULL;
	StringU5BU5D_t2956870243* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2956870243* G_B6_2 = NULL;
	StringU5BU5D_t2956870243* G_B6_3 = NULL;
	{
		StringU5BU5D_t2956870243* L_0 = (StringU5BU5D_t2956870243*)((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral91);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral91);
		StringU5BU5D_t2956870243* L_1 = (StringU5BU5D_t2956870243*)L_0;
		int32_t L_2 = ((  int32_t (*) (KeyValuePair_2_t816448501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t816448501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = ((  int32_t (*) (KeyValuePair_2_t816448501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t816448501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1286526384((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2956870243* L_6 = (StringU5BU5D_t2956870243*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral1396);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1396);
		StringU5BU5D_t2956870243* L_7 = (StringU5BU5D_t2956870243*)L_6;
		Il2CppObject * L_8 = ((  Il2CppObject * (*) (KeyValuePair_2_t816448501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t816448501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = ((  Il2CppObject * (*) (KeyValuePair_2_t816448501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t816448501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		NullCheck((Il2CppObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2956870243* L_12 = (StringU5BU5D_t2956870243*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral93);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, (StringU5BU5D_t2956870243*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2040323320_gshared (KeyValuePair_2_t2686855369 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key;
		((  void (*) (KeyValuePair_2_t2686855369 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2686855369 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value;
		((  void (*) (KeyValuePair_2_t2686855369 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2686855369 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m700889072_gshared (KeyValuePair_2_t2686855369 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1751794225_gshared (KeyValuePair_2_t2686855369 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_key_0(L_0);
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m3809014448_gshared (KeyValuePair_2_t2686855369 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3162969521_gshared (KeyValuePair_2_t2686855369 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->set_value_1(L_0);
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t KeyValuePair_2_ToString_m3396952209_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m3396952209_gshared (KeyValuePair_2_t2686855369 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3396952209_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2956870243* G_B2_1 = NULL;
	StringU5BU5D_t2956870243* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2956870243* G_B1_1 = NULL;
	StringU5BU5D_t2956870243* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2956870243* G_B3_2 = NULL;
	StringU5BU5D_t2956870243* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2956870243* G_B5_1 = NULL;
	StringU5BU5D_t2956870243* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2956870243* G_B4_1 = NULL;
	StringU5BU5D_t2956870243* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2956870243* G_B6_2 = NULL;
	StringU5BU5D_t2956870243* G_B6_3 = NULL;
	{
		StringU5BU5D_t2956870243* L_0 = (StringU5BU5D_t2956870243*)((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral91);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral91);
		StringU5BU5D_t2956870243* L_1 = (StringU5BU5D_t2956870243*)L_0;
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (KeyValuePair_2_t2686855369 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2686855369 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (KeyValuePair_2_t2686855369 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2686855369 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		NullCheck((Il2CppObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2956870243* L_6 = (StringU5BU5D_t2956870243*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral1396);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1396);
		StringU5BU5D_t2956870243* L_7 = (StringU5BU5D_t2956870243*)L_6;
		bool L_8 = ((  bool (*) (KeyValuePair_2_t2686855369 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2686855369 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = ((  bool (*) (KeyValuePair_2_t2686855369 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2686855369 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m2512358154((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2956870243* L_12 = (StringU5BU5D_t2956870243*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral93);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, (StringU5BU5D_t2956870243*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m828809412_gshared (KeyValuePair_2_t1493839180 * __this, Il2CppObject * ___key, KeyValuePair_2_t3312956448  ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key;
		((  void (*) (KeyValuePair_2_t1493839180 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1493839180 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3312956448  L_1 = ___value;
		((  void (*) (KeyValuePair_2_t1493839180 *, KeyValuePair_2_t3312956448 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1493839180 *)__this, (KeyValuePair_2_t3312956448 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m4107894436_gshared (KeyValuePair_2_t1493839180 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m967855845_gshared (KeyValuePair_2_t1493839180 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_key_0(L_0);
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t3312956448  KeyValuePair_2_get_Value_m4235623012_gshared (KeyValuePair_2_t1493839180 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3312956448  L_0 = (KeyValuePair_2_t3312956448 )__this->get_value_1();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m768583781_gshared (KeyValuePair_2_t1493839180 * __this, KeyValuePair_2_t3312956448  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3312956448  L_0 = ___value;
		__this->set_value_1(L_0);
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_ToString_m1313859518_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t KeyValuePair_2_ToString_m1076548957_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m1076548957_gshared (KeyValuePair_2_t1493839180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1076548957_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	KeyValuePair_2_t3312956448  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2956870243* G_B2_1 = NULL;
	StringU5BU5D_t2956870243* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2956870243* G_B1_1 = NULL;
	StringU5BU5D_t2956870243* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2956870243* G_B3_2 = NULL;
	StringU5BU5D_t2956870243* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2956870243* G_B5_1 = NULL;
	StringU5BU5D_t2956870243* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2956870243* G_B4_1 = NULL;
	StringU5BU5D_t2956870243* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2956870243* G_B6_2 = NULL;
	StringU5BU5D_t2956870243* G_B6_3 = NULL;
	{
		StringU5BU5D_t2956870243* L_0 = (StringU5BU5D_t2956870243*)((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral91);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral91);
		StringU5BU5D_t2956870243* L_1 = (StringU5BU5D_t2956870243*)L_0;
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (KeyValuePair_2_t1493839180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1493839180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (KeyValuePair_2_t1493839180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1493839180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		NullCheck((Il2CppObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2956870243* L_6 = (StringU5BU5D_t2956870243*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral1396);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1396);
		StringU5BU5D_t2956870243* L_7 = (StringU5BU5D_t2956870243*)L_6;
		KeyValuePair_2_t3312956448  L_8 = ((  KeyValuePair_2_t3312956448  (*) (KeyValuePair_2_t1493839180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1493839180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		KeyValuePair_2_t3312956448  L_9 = ((  KeyValuePair_2_t3312956448  (*) (KeyValuePair_2_t1493839180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1493839180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t3312956448 )L_9;
		String_t* L_10 = KeyValuePair_2_ToString_m1313859518((KeyValuePair_2_t3312956448 *)(&V_1), /*hidden argument*/KeyValuePair_2_ToString_m1313859518_MethodInfo_var);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2956870243* L_12 = (StringU5BU5D_t2956870243*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral93);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, (StringU5BU5D_t2956870243*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2730552978_gshared (KeyValuePair_2_t1028297519 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key;
		((  void (*) (KeyValuePair_2_t1028297519 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1028297519 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		((  void (*) (KeyValuePair_2_t1028297519 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1028297519 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m4285571350_gshared (KeyValuePair_2_t1028297519 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1188304983_gshared (KeyValuePair_2_t1028297519 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_key_0(L_0);
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2690735574_gshared (KeyValuePair_2_t1028297519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m137193687_gshared (KeyValuePair_2_t1028297519 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->set_value_1(L_0);
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t KeyValuePair_2_ToString_m2052282219_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m2052282219_gshared (KeyValuePair_2_t1028297519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2052282219_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2956870243* G_B2_1 = NULL;
	StringU5BU5D_t2956870243* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2956870243* G_B1_1 = NULL;
	StringU5BU5D_t2956870243* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2956870243* G_B3_2 = NULL;
	StringU5BU5D_t2956870243* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2956870243* G_B5_1 = NULL;
	StringU5BU5D_t2956870243* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2956870243* G_B4_1 = NULL;
	StringU5BU5D_t2956870243* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2956870243* G_B6_2 = NULL;
	StringU5BU5D_t2956870243* G_B6_3 = NULL;
	{
		StringU5BU5D_t2956870243* L_0 = (StringU5BU5D_t2956870243*)((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral91);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral91);
		StringU5BU5D_t2956870243* L_1 = (StringU5BU5D_t2956870243*)L_0;
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (KeyValuePair_2_t1028297519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1028297519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (KeyValuePair_2_t1028297519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1028297519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		NullCheck((Il2CppObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2956870243* L_6 = (StringU5BU5D_t2956870243*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral1396);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1396);
		StringU5BU5D_t2956870243* L_7 = (StringU5BU5D_t2956870243*)L_6;
		int32_t L_8 = ((  int32_t (*) (KeyValuePair_2_t1028297519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1028297519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = ((  int32_t (*) (KeyValuePair_2_t1028297519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1028297519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m1286526384((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2956870243* L_12 = (StringU5BU5D_t2956870243*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral93);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, (StringU5BU5D_t2956870243*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4168265535_gshared (KeyValuePair_2_t3312956448 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key;
		((  void (*) (KeyValuePair_2_t3312956448 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3312956448 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value;
		((  void (*) (KeyValuePair_2_t3312956448 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3312956448 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m3256475977_gshared (KeyValuePair_2_t3312956448 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1278074762_gshared (KeyValuePair_2_t3312956448 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_key_0(L_0);
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m3899079597_gshared (KeyValuePair_2_t3312956448 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2954518154_gshared (KeyValuePair_2_t3312956448 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value;
		__this->set_value_1(L_0);
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t KeyValuePair_2_ToString_m1313859518_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m1313859518_gshared (KeyValuePair_2_t3312956448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1313859518_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2956870243* G_B2_1 = NULL;
	StringU5BU5D_t2956870243* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2956870243* G_B1_1 = NULL;
	StringU5BU5D_t2956870243* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2956870243* G_B3_2 = NULL;
	StringU5BU5D_t2956870243* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2956870243* G_B5_1 = NULL;
	StringU5BU5D_t2956870243* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2956870243* G_B4_1 = NULL;
	StringU5BU5D_t2956870243* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2956870243* G_B6_2 = NULL;
	StringU5BU5D_t2956870243* G_B6_3 = NULL;
	{
		StringU5BU5D_t2956870243* L_0 = (StringU5BU5D_t2956870243*)((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral91);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral91);
		StringU5BU5D_t2956870243* L_1 = (StringU5BU5D_t2956870243*)L_0;
		Il2CppObject * L_2 = ((  Il2CppObject * (*) (KeyValuePair_2_t3312956448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3312956448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (KeyValuePair_2_t3312956448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3312956448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		NullCheck((Il2CppObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2956870243* L_6 = (StringU5BU5D_t2956870243*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral1396);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1396);
		StringU5BU5D_t2956870243* L_7 = (StringU5BU5D_t2956870243*)L_6;
		Il2CppObject * L_8 = ((  Il2CppObject * (*) (KeyValuePair_2_t3312956448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3312956448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = ((  Il2CppObject * (*) (KeyValuePair_2_t3312956448 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3312956448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		NullCheck((Il2CppObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2956870243* L_12 = (StringU5BU5D_t2956870243*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral93);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral93);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, (StringU5BU5D_t2956870243*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
