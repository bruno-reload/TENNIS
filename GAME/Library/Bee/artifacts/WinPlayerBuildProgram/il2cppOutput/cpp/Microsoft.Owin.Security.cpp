#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6;
struct Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
struct Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C;
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95;
struct AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9;
struct IDataProtectionProvider_t2CA3E239BB51DC1BC4A694AFFC87B3EAA38D620C;
struct IDataProtector_t1C019DD5A7E7C98C6A3A599729F03AEA6E02DD20;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902;
struct CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11B687A11D58D842F1C91BAB16821B5528BAB84F;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE263ACD0B994D3BE52A427E3279DE126BB0E6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F8BED8B4672BCF4F24D9C9ED5B48EBC9D7C2D4;
IL2CPP_EXTERN_C String_t* _stringLiteralE39FB1190FAB45389F6862B8066D2258E1538DAB;
IL2CPP_EXTERN_C const RuntimeMethod* AppBuilderExtensions_GetDataProtectionProvider_m72B612CBEB869698AB9304639B190647FD028BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppBuilderSecurityExtensions_SetDefaultSignInAsAuthenticationType_m1D0AAB2DB9401C270E93CA1295B60F771164CBC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mA55DE9BBADA9F4A8A81C36709CB23E9027A53B9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_mD63CB2BBB7B81E2C114BA8257E163F66299F39D7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tC5E6D686A9D7D9FE1A24B8B21BEDC16471AC3DA6 
{
};
struct Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C  : public RuntimeObject
{
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___m_Item1;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___m_Item2;
};
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct AppBuilderExtensions_tBCF19221E85970793506B4A282F01BE2852E0814  : public RuntimeObject
{
};
struct AppBuilderSecurityExtensions_tE92460915213332980FDA082CE9803970AD9E0DE  : public RuntimeObject
{
};
struct AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95  : public RuntimeObject
{
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField;
};
struct AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04  : public RuntimeObject
{
	String_t* ____authenticationType;
	int32_t ___U3CAuthenticationModeU3Ek__BackingField;
	AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* ___U3CDescriptionU3Ek__BackingField;
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
struct CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902  : public RuntimeObject
{
	Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* ____create;
};
struct CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457  : public RuntimeObject
{
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ____protect;
	Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ____unprotect;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6  : public MulticastDelegate_t
{
};
struct Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationDescription__ctor_mD1BBDA6766BD49F3BB1F504F920A60783A961569 (AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationOptions_set_Description_mF356391C0BBA3839ABFF69A04E6E940C01794F89_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions_set_AuthenticationType_m6548E0B9C249AD67D751BA7B0EB772DA7350BE84 (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationOptions_set_AuthenticationMode_m548BEFA79317B955A7ECFA25956DD92A0F66242F_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* AuthenticationOptions_get_Description_mE6EB1712610BFB3E87A866BA9B9164E0581C73D5_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationDescription_set_AuthenticationType_mBCC2F0EBCA70920B76BD793A1020D45694E1BDC5 (AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallDataProtectionProvider__ctor_m409FF5D6F0A06C3AAFD742F071E814C5D68839CF (CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902* __this, Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* ___0_create, const RuntimeMethod* method) ;
inline Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* Func_2_Invoke_m9BA58D89C0D8A485F6B5231B07051DE16123DF64_inline (Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_arg, const RuntimeMethod* method)
{
	return ((  Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* (*) (Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* Tuple_2_get_Item1_mA55DE9BBADA9F4A8A81C36709CB23E9027A53B9B_inline (Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* __this, const RuntimeMethod* method)
{
	return ((  Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* (*) (Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
inline Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* Tuple_2_get_Item2_mD63CB2BBB7B81E2C114BA8257E163F66299F39D7_inline (Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* __this, const RuntimeMethod* method)
{
	return ((  Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* (*) (Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallDataProtection__ctor_m5CCFF2EEE66B929B9BF954D2389BAD831745A6F6 (CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457* __this, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___0_protect, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___1_unprotect, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Func_2_Invoke_m0E6F5E562E2A42805C208B002C8B366416E0E6FD_inline (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arg, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppBuilderSecurityExtensions_SetDefaultSignInAsAuthenticationType_m1D0AAB2DB9401C270E93CA1295B60F771164CBC0 (RuntimeObject* ___0_app, String_t* ___1_authenticationType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE39FB1190FAB45389F6862B8066D2258E1538DAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE263ACD0B994D3BE52A427E3279DE126BB0E6A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppBuilderSecurityExtensions_SetDefaultSignInAsAuthenticationType_m1D0AAB2DB9401C270E93CA1295B60F771164CBC0_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___1_authenticationType;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9F8BED8B4672BCF4F24D9C9ED5B48EBC9D7C2D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppBuilderSecurityExtensions_SetDefaultSignInAsAuthenticationType_m1D0AAB2DB9401C270E93CA1295B60F771164CBC0_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_app;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var, L_4);
		String_t* L_6 = ___1_authenticationType;
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_5, _stringLiteralE39FB1190FAB45389F6862B8066D2258E1538DAB, L_6);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions__ctor_m5A4F4F91F894637161F8B402D9A5D16DE63278BF (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, String_t* ___0_authenticationType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_0 = (AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95*)il2cpp_codegen_object_new(AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95_il2cpp_TypeInfo_var);
		AuthenticationDescription__ctor_mD1BBDA6766BD49F3BB1F504F920A60783A961569(L_0, NULL);
		AuthenticationOptions_set_Description_mF356391C0BBA3839ABFF69A04E6E940C01794F89_inline(__this, L_0, NULL);
		String_t* L_1 = ___0_authenticationType;
		AuthenticationOptions_set_AuthenticationType_m6548E0B9C249AD67D751BA7B0EB772DA7350BE84(__this, L_1, NULL);
		AuthenticationOptions_set_AuthenticationMode_m548BEFA79317B955A7ECFA25956DD92A0F66242F_inline(__this, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationOptions_get_AuthenticationType_mC7AFE3B8DE54E6A57BBF847097C373C4F8076D26 (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____authenticationType;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions_set_AuthenticationType_m6548E0B9C249AD67D751BA7B0EB772DA7350BE84 (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____authenticationType = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authenticationType), (void*)L_0);
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_1;
		L_1 = AuthenticationOptions_get_Description_mE6EB1712610BFB3E87A866BA9B9164E0581C73D5_inline(__this, NULL);
		String_t* L_2 = ___0_value;
		NullCheck(L_1);
		AuthenticationDescription_set_AuthenticationType_mBCC2F0EBCA70920B76BD793A1020D45694E1BDC5(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions_set_AuthenticationMode_m548BEFA79317B955A7ECFA25956DD92A0F66242F (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CAuthenticationModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* AuthenticationOptions_get_Description_mE6EB1712610BFB3E87A866BA9B9164E0581C73D5 (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_0 = __this->___U3CDescriptionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions_set_Description_mF356391C0BBA3839ABFF69A04E6E940C01794F89 (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* ___0_value, const RuntimeMethod* method) 
{
	{
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppBuilderExtensions_GetDataProtectionProvider_m72B612CBEB869698AB9304639B190647FD028BC9 (RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B687A11D58D842F1C91BAB16821B5528BAB84F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE263ACD0B994D3BE52A427E3279DE126BB0E6A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppBuilderExtensions_GetDataProtectionProvider_m72B612CBEB869698AB9304639B190647FD028BC9_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_app;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(7, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_3, _stringLiteral11B687A11D58D842F1C91BAB16821B5528BAB84F, (&V_0));
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		V_1 = ((Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075*)IsInst((RuntimeObject*)L_5, Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075_il2cpp_TypeInfo_var));
		Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* L_7 = V_1;
		CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902* L_8 = (CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902*)il2cpp_codegen_object_new(CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902_il2cpp_TypeInfo_var);
		CallDataProtectionProvider__ctor_m409FF5D6F0A06C3AAFD742F071E814C5D68839CF(L_8, L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		return (RuntimeObject*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallDataProtectionProvider__ctor_m409FF5D6F0A06C3AAFD742F071E814C5D68839CF (CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902* __this, Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* ___0_create, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* L_0 = ___0_create;
		__this->____create = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____create), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallDataProtectionProvider_Create_m896F640C950CF0C9875A7D2584683B0441894749 (CallDataProtectionProvider_t5686009513C4D92AD5FB04A9A54EB3C3EE7D4902* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_purposes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mA55DE9BBADA9F4A8A81C36709CB23E9027A53B9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_mD63CB2BBB7B81E2C114BA8257E163F66299F39D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* V_0 = NULL;
	{
		Func_2_t606EAAE6909308A0CFD847901546AFB5D5F0D075* L_0 = __this->____create;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_purposes;
		NullCheck(L_0);
		Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* L_2;
		L_2 = Func_2_Invoke_m9BA58D89C0D8A485F6B5231B07051DE16123DF64_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* L_3 = V_0;
		NullCheck(L_3);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_4;
		L_4 = Tuple_2_get_Item1_mA55DE9BBADA9F4A8A81C36709CB23E9027A53B9B_inline(L_3, Tuple_2_get_Item1_mA55DE9BBADA9F4A8A81C36709CB23E9027A53B9B_RuntimeMethod_var);
		Tuple_2_tF8946D4E997CE5B548C8952F6346A83C6522240C* L_5 = V_0;
		NullCheck(L_5);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_6;
		L_6 = Tuple_2_get_Item2_mD63CB2BBB7B81E2C114BA8257E163F66299F39D7_inline(L_5, Tuple_2_get_Item2_mD63CB2BBB7B81E2C114BA8257E163F66299F39D7_RuntimeMethod_var);
		CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457* L_7 = (CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457*)il2cpp_codegen_object_new(CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457_il2cpp_TypeInfo_var);
		CallDataProtection__ctor_m5CCFF2EEE66B929B9BF954D2389BAD831745A6F6(L_7, L_4, L_6, NULL);
		return L_7;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallDataProtection__ctor_m5CCFF2EEE66B929B9BF954D2389BAD831745A6F6 (CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457* __this, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___0_protect, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___1_unprotect, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_0 = ___0_protect;
		__this->____protect = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____protect), (void*)L_0);
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_1 = ___1_unprotect;
		__this->____unprotect = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unprotect), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CallDataProtection_Protect_mC60435DF4EFEA212ECF41EBE7572107BF5278702 (CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_userData, const RuntimeMethod* method) 
{
	{
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_0 = __this->____protect;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_userData;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Func_2_Invoke_m0E6F5E562E2A42805C208B002C8B366416E0E6FD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CallDataProtection_Unprotect_m04DE40CEFCEDE6A568CA580FDD5A57AD8C565E29 (CallDataProtection_t0957B44AEFECB61D4A1B8D66A6EF060164560457* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_protectedData, const RuntimeMethod* method) 
{
	{
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_0 = __this->____unprotect;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_protectedData;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Func_2_Invoke_m0E6F5E562E2A42805C208B002C8B366416E0E6FD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationOptions_set_Description_mF356391C0BBA3839ABFF69A04E6E940C01794F89_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* ___0_value, const RuntimeMethod* method) 
{
	{
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationOptions_set_AuthenticationMode_m548BEFA79317B955A7ECFA25956DD92A0F66242F_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CAuthenticationModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* AuthenticationOptions_get_Description_mE6EB1712610BFB3E87A866BA9B9164E0581C73D5_inline (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* L_0 = __this->___U3CDescriptionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_Item2;
		return L_0;
	}
}
