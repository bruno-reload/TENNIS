#include "pch-cpp.hpp"





template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
struct HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA;
struct String_t;
struct WebMethodAttribute_t5A1A1818C493265137E870EF20A35A039AABEA6D;
struct WebService_tB2C38272F7824CFBB8805233E1514D6469B63365;
struct WebServiceAttribute_t9DB21813C7AFD07CF7E3048C160273172F1D8374;
struct WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739;

IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoapProtocolVersion_t35D1E4F787526E6BEAFCE28967580F33A2C36094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9436E9CEFAEC72264CA14C70CA3D9343BBE3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralF14F42FF9BAC34B415905F7DE4BEB807336BAF2E;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t75901BEA22336B50B9256FAC89CC61058F03483D 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4  : public RuntimeObject
{
};
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA  : public RuntimeObject
{
	RuntimeObject* ____site;
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ____events;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WebMethodAttribute_t5A1A1818C493265137E870EF20A35A039AABEA6D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___bufferResponse;
	int32_t ___cacheDuration;
	String_t* ___description;
	bool ___enableSession;
	String_t* ___messageName;
	int32_t ___transactionOption;
};
struct WebService_tB2C38272F7824CFBB8805233E1514D6469B63365  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* ____context;
	int32_t ____soapVersion;
};
struct WebServiceAttribute_t9DB21813C7AFD07CF7E3048C160273172F1D8374  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___description;
	String_t* ___name;
	String_t* ___ns;
};
struct WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___location;
	String_t* ___name;
	String_t* ___ns;
	int32_t ___conformsTo;
};
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_StaticFields
{
	RuntimeObject* ___s_eventDisposed;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebMethodAttribute__ctor_m7E0FAD0A7CFF2C984379371147352204EE86EB7B (WebMethodAttribute_t5A1A1818C493265137E870EF20A35A039AABEA6D* __this, bool ___0_enableSession, int32_t ___1_transactionOption, int32_t ___2_cacheDuration, bool ___3_bufferResponse, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalByValueComponent__ctor_mBB8FD86B5A8057E2B9EBAB10B43E4C394AE932A6 (MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* HttpContext_get_Current_mC8F3AB5CF3E092FA142A9650E6BAF1F5C1E5534C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HttpContext_get_Items_mA92F352722B86AAF0BD6BE5D92312C6FB87A028D (HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceBindingAttribute__ctor_m1BF93C66C734A5AF8355AB9008AC9A811058627C (WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739* __this, String_t* ___0_name, String_t* ___1_ns, String_t* ___2_location, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebMethodAttribute__ctor_m137B295C77C0B13258640445FC573671C4D19D4F (WebMethodAttribute_t5A1A1818C493265137E870EF20A35A039AABEA6D* __this, const RuntimeMethod* method) 
{
	{
		WebMethodAttribute__ctor_m7E0FAD0A7CFF2C984379371147352204EE86EB7B(__this, (bool)0, 0, 0, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebMethodAttribute__ctor_m7E0FAD0A7CFF2C984379371147352204EE86EB7B (WebMethodAttribute_t5A1A1818C493265137E870EF20A35A039AABEA6D* __this, bool ___0_enableSession, int32_t ___1_transactionOption, int32_t ___2_cacheDuration, bool ___3_bufferResponse, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___3_bufferResponse;
		__this->___bufferResponse = L_0;
		int32_t L_1 = ___2_cacheDuration;
		__this->___cacheDuration = L_1;
		bool L_2 = ___0_enableSession;
		__this->___enableSession = L_2;
		int32_t L_3 = ___1_transactionOption;
		__this->___transactionOption = L_3;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		__this->___description = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description), (void*)L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		__this->___messageName = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageName), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebService__ctor_mFCF0231F6FDCB1CDC1CC4DDAA642BC2122BC80B9 (WebService_tB2C38272F7824CFBB8805233E1514D6469B63365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoapProtocolVersion_t35D1E4F787526E6BEAFCE28967580F33A2C36094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9436E9CEFAEC72264CA14C70CA3D9343BBE3AF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_il2cpp_TypeInfo_var);
		MarshalByValueComponent__ctor_mBB8FD86B5A8057E2B9EBAB10B43E4C394AE932A6(__this, NULL);
		HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* L_0;
		L_0 = HttpContext_get_Current_mC8F3AB5CF3E092FA142A9650E6BAF1F5C1E5534C(NULL);
		__this->____context = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context), (void*)L_0);
		HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* L_1 = __this->____context;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		HttpContext_tBF5D52B125DC4DE4A55C88F9A41E5C8EBE1C6FE4* L_2 = __this->____context;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HttpContext_get_Items_mA92F352722B86AAF0BD6BE5D92312C6FB87A028D(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3, _stringLiteral2B9436E9CEFAEC72264CA14C70CA3D9343BBE3AF);
		G_B3_0 = L_4;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = NULL;
	}

IL_0037:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_5 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, SoapProtocolVersion_t35D1E4F787526E6BEAFCE28967580F33A2C36094_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		__this->____soapVersion = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, il2cpp_defaults.int32_class))));
	}

IL_004f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceAttribute__ctor_m60B9C2AB34AAEB5BBE37FC2442AF2F3CA429A342 (WebServiceAttribute_t9DB21813C7AFD07CF7E3048C160273172F1D8374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF14F42FF9BAC34B415905F7DE4BEB807336BAF2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		__this->___description = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		__this->___name = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_1);
		__this->___ns = _stringLiteralF14F42FF9BAC34B415905F7DE4BEB807336BAF2E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ns), (void*)_stringLiteralF14F42FF9BAC34B415905F7DE4BEB807336BAF2E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceAttribute_set_Namespace_m6127E9D92201F71DC0498160894C8DFC94A56297 (WebServiceAttribute_t9DB21813C7AFD07CF7E3048C160273172F1D8374* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___ns = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ns), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceBindingAttribute__ctor_mB7636FF96A51AABCE898EB844B24029550D97596 (WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		WebServiceBindingAttribute__ctor_m1BF93C66C734A5AF8355AB9008AC9A811058627C(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceBindingAttribute__ctor_m1BF93C66C734A5AF8355AB9008AC9A811058627C (WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739* __this, String_t* ___0_name, String_t* ___1_ns, String_t* ___2_location, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_name;
		__this->___name = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_0);
		String_t* L_1 = ___1_ns;
		__this->___ns = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ns), (void*)L_1);
		String_t* L_2 = ___2_location;
		__this->___location = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___location), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebServiceBindingAttribute_set_ConformsTo_mCD4495D07BCCA0D0DA3B4FEB606ABF8146660178 (WebServiceBindingAttribute_t18A72D65D6D3E18A75E4C1B93C989B3982FD1739* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___conformsTo = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
