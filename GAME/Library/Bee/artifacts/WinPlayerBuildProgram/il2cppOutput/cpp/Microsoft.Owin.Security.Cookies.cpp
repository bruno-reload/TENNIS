#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

struct Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A;
struct Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352;
struct Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17;
struct Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5;
struct Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8;
struct BaseContext_1_t6285246A14E5E7A8C5E949A6575BF58D0010E24A;
struct Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
struct IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1;
struct List_1_tE2156FEC3BC446DDE7EEAA73B48272439B783113;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95;
struct AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04;
struct AuthenticationProperties_t2163DBF56BB34AD78A451DEB2E1AF58E30FC09A6;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7;
struct CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6;
struct CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0;
struct CookieExceptionContext_t42B1218ED9AB136DA1FEEEED1206276EA4C49115;
struct CookieResponseSignInContext_t7AE78A86C7023662912A24C3756AC1470DF92BB4;
struct CookieResponseSignOutContext_t2AB4A7D89FBFEE078D041ADACF4DF027D92F5267;
struct CookieResponseSignedInContext_t2D2F20DBF4D7F7960CC57DDCF0A38E132D0BE9EE;
struct CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D;
struct DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A;
struct DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1;
struct DateTimeFormat_tBFAECD63AF557E9DFC51CBA1410F55C4FC930B81;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9;
struct ICookieAuthenticationProvider_tA283C7B3739A48AFB521D576488449FEB648A336;
struct IDataContractSurrogate_t6CB3907D2B711AF4091D8E2D3927FE04E0E9C40A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IOwinContext_t8F8DFD394A5F89561A3EFBCF2BBA662EE13BB27E;
struct IOwinRequest_tDF92A3F16C81586EB8BCFC282AD656EA00B1FE53;
struct IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2;
struct ISystemClock_tBA3F9FE5466B3EABB78BF07DD99EDE4D834F97D0;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XmlDictionaryString_t989B6E9A1B692ED81496ED30E9EC32BFC1D7BDC2;
struct RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHeaderDictionary_t0000859D62B4B34413DF3904554B8079490E92AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOwinRequest_tDF92A3F16C81586EB8BCFC282AD656EA00B1FE53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadableStringCollection_tC2A9199AA5DC18ED900101B9E74584DBAA14FB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3115D003162F592091E6205C4547892A9AC416;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral884B18CB7418EA33C294CC525B070E9AAA9BE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE263ACD0B994D3BE52A427E3279DE126BB0E6A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A;
IL2CPP_EXTERN_C String_t* _stringLiteralC8CFDF845C6182E86EA14BBF7065163D2D78586F;
IL2CPP_EXTERN_C String_t* _stringLiteralEAC49C2C42EEA76F9D5B41F50BC564BE68923B88;
IL2CPP_EXTERN_C const RuntimeMethod* BaseContext_1_get_Request_m938BEB1563716C7BE57198A196497E28BD683A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationExtensions_UseCookieAuthentication_m69B51D423582A4C5971D1227826216364D0BE4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationOptions_set_CookieName_mC145CD481C72A32EBA55049059916256387593C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationProvider_U3C_ctorU3Eb__0_m9241A34ED4A39C523E7DFC7AF77D58EDD79E70EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationProvider_U3C_ctorU3Eb__1_mF02DC60EC678F20DD8F187F5D2EBA0DA8FF0E7D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationProvider_U3C_ctorU3Eb__2_m3842E80F5A18056E6575A6985213DA0CE19A4553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationProvider_U3C_ctorU3Eb__3_m5939AA41AF6D01318EBA1965977FD64551E73F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieAuthenticationProvider_U3C_ctorU3Eb__4_m9288C7D0454929355933C28513EA07E163DA0DBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultBehavior_U3C_cctorU3Eb__2_m5FDD85A216D3CC9385C7EC5C2D08187CA0F06D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CookieAuthenticationMiddleware_tE3327C7B91DFB0D5AED51AC2A8ACBB89587AFBA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5C6A47557775275EBD055D08C35B77A5468955EE 
{
};
struct BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8  : public RuntimeObject
{
	RuntimeObject* ___U3COwinContextU3Ek__BackingField;
	CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* ___U3COptionsU3Ek__BackingField;
};
struct AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04  : public RuntimeObject
{
	String_t* ____authenticationType;
	int32_t ___U3CAuthenticationModeU3Ek__BackingField;
	AuthenticationDescription_t6DB7DF9F14567718C1C750A85E0F8E24C082CF95* ___U3CDescriptionU3Ek__BackingField;
};
struct AuthenticationProperties_t2163DBF56BB34AD78A451DEB2E1AF58E30FC09A6  : public RuntimeObject
{
	RuntimeObject* ____dictionary;
};
struct ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_userSerializationData;
	List_1_tE2156FEC3BC446DDE7EEAA73B48272439B783113* ___m_instanceClaims;
	Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F* ___m_externalClaims;
	String_t* ___m_nameType;
	String_t* ___m_roleType;
	String_t* ___m_version;
	ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* ___m_actor;
	String_t* ___m_authenticationType;
	RuntimeObject* ___m_bootstrapContext;
	String_t* ___m_label;
	String_t* ___m_serializedNameType;
	String_t* ___m_serializedRoleType;
	String_t* ___m_serializedClaims;
};
struct CookieAuthenticationExtensions_t9C1DE576007E1FC9771CEB615677E3C16F64AFFB  : public RuntimeObject
{
};
struct CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0  : public RuntimeObject
{
	Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* ___U3COnValidateIdentityU3Ek__BackingField;
	Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* ___U3COnResponseSignInU3Ek__BackingField;
	Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* ___U3COnResponseSignedInU3Ek__BackingField;
	Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* ___U3COnResponseSignOutU3Ek__BackingField;
	Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___U3COnApplyRedirectU3Ek__BackingField;
	Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* ___U3COnExceptionU3Ek__BackingField;
};
struct DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct OwinMiddleware_t079DD861D1EF9648ACAE730844C1052888274181  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB  : public RuntimeObject
{
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F  : public RuntimeObject
{
};
struct RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183  : public RuntimeObject
{
	int32_t ___U3CStatusU3Ek__BackingField;
	RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* ___U3CHeadersU3Ek__BackingField;
};
struct RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C  : public RuntimeObject
{
	String_t* ___U3CLocationU3Ek__BackingField;
};
struct AuthenticationMiddleware_1_t1482D5A799B6E31C7902DA78072281C90BA82177  : public OwinMiddleware_t079DD861D1EF9648ACAE730844C1052888274181
{
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	RuntimeObject* ___m_result;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
	String_t* ___U3CRedirectUriU3Ek__BackingField;
};
struct CookieExceptionContext_t42B1218ED9AB136DA1FEEEED1206276EA4C49115  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
};
struct CookieResponseSignInContext_t7AE78A86C7023662912A24C3756AC1470DF92BB4  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
};
struct CookieResponseSignOutContext_t2AB4A7D89FBFEE078D041ADACF4DF027D92F5267  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
};
struct CookieResponseSignedInContext_t2D2F20DBF4D7F7960CC57DDCF0A38E132D0BE9EE  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
};
struct CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D  : public BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8
{
	ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* ___U3CIdentityU3Ek__BackingField;
	AuthenticationProperties_t2163DBF56BB34AD78A451DEB2E1AF58E30FC09A6* ___U3CPropertiesU3Ek__BackingField;
};
struct DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1  : public XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F
{
	RuntimeObject* ___knownTypeList;
	Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719* ___knownDataContracts;
	int32_t ___emitTypeInformation;
	RuntimeObject* ___dataContractSurrogate;
	bool ___ignoreExtensionDataObject;
	int32_t ___maxItemsInObjectGraph;
	DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A* ___rootContract;
	XmlDictionaryString_t989B6E9A1B692ED81496ED30E9EC32BFC1D7BDC2* ___rootName;
	bool ___rootNameRequiresMapping;
	Type_t* ___rootType;
	bool ___serializeReadOnlyTypes;
	DateTimeFormat_tBFAECD63AF557E9DFC51CBA1410F55C4FC930B81* ___dateTimeFormat;
	bool ___useSimpleDictionaryFormat;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A 
{
	String_t* ____value;
};
struct PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A_marshaled_pinvoke
{
	char* ____value;
};
struct PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A_marshaled_com
{
	Il2CppChar* ____value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
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
struct CookieAuthenticationMiddleware_tE3327C7B91DFB0D5AED51AC2A8ACBB89587AFBA8  : public AuthenticationMiddleware_1_t1482D5A799B6E31C7902DA78072281C90BA82177
{
};
struct CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6  : public AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04
{
	String_t* ____cookieName;
	String_t* ___U3CCookiePathU3Ek__BackingField;
	bool ___U3CCookieHttpOnlyU3Ek__BackingField;
	int32_t ___U3CCookieSecureU3Ek__BackingField;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CExpireTimeSpanU3Ek__BackingField;
	bool ___U3CSlidingExpirationU3Ek__BackingField;
	PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A ___U3CLoginPathU3Ek__BackingField;
	String_t* ___U3CReturnUrlParameterU3Ek__BackingField;
	RuntimeObject* ___U3CProviderU3Ek__BackingField;
	RuntimeObject* ___U3CSystemClockU3Ek__BackingField;
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
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A  : public MulticastDelegate_t
{
};
struct Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352  : public MulticastDelegate_t
{
};
struct Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17  : public MulticastDelegate_t
{
};
struct Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5  : public MulticastDelegate_t
{
};
struct Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D  : public MulticastDelegate_t
{
};
struct Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields
{
	Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5;
	Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6;
	Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7;
	Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8;
	Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9;
};
struct DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields
{
	Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___ApplyRedirect;
	Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F_StaticFields
{
	RuntimeObject* ___formatterConverter;
};
struct RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_StaticFields
{
	DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* ___Serializer;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A_StaticFields
{
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___EscapeDataString;
	PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A ___Empty;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseContext_1_get_Request_m7CB8D9F53D28150BE0450F8AEB45E02F203E0AD6_gshared (BaseContext_1_t6285246A14E5E7A8C5E949A6575BF58D0010E24A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseContext_1_get_Response_mAEDD28525F2C17F9A1B7617FA84FE23BAD26B184_gshared (BaseContext_1_t6285246A14E5E7A8C5E949A6575BF58D0010E24A* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CookieAuthenticationExtensions_UseCookieAuthentication_m69B51D423582A4C5971D1227826216364D0BE4CE (RuntimeObject* ___0_app, CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* ___1_options, int32_t ___2_stage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedPipelineExtensions_UseStageMarker_mDDCF7A4559BA59E499EAB517858020AD91E61E8B (RuntimeObject* ___0_app, int32_t ___1_stage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationOptions__ctor_m5A4F4F91F894637161F8B402D9A5D16DE63278BF (AuthenticationOptions_t2CC795802859A4D55C6F677F395526E084687D04* __this, String_t* ___0_authenticationType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ReturnUrlParameter_m95F7340C974B7DC51487E919D83C779EEAFBAE41_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookiePath_mBD099B80F4588E252121035CC84AC4ACA6E1AE48_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromDays_mCFEAEBBA8CF0C9EEE18ABC0999D5BF52701EA539 (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ExpireTimeSpan_m29F0E8009C5F30208B020F7F3105472EA40DC6EC_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SlidingExpiration_mC1F944767522BF3C70EE7F3192C91977B4406722_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieHttpOnly_m5922EE4D322B48F71B7610B06691529C1D239C61_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieSecure_m4A2598F6238AD957B9EFB2D4C68AC463F699149F_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m5A0BA3C8737A5D20B5BFF883ECA65386522726A8 (SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SystemClock_m8FE0BB4774C35FC1758B5D8CE01810E03A93AFBB_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider__ctor_mE60174E36552C8EB66666DF9AF241D72E37F86F4 (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_Provider_m027091B0EA3B4142344A21DEFD658E716F4788B6_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m166274737E04F60F1BE224929935C0AE3DA6527A (Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnValidateIdentity_m45ABA2A7A8844F4E6686F1CA8FCFA2E469000D6A_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_m77C69E76EAA01C3D9C1D323B3400DDFC906AC884 (Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignIn_m7AB27596FBBECCA5B335EC1F98CB579DE279093E_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_mB04A20A2DE24264865F59A9598479A99EE37208F (Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignedIn_m7C72B5E8CC847290F102FB0EC595FE6E10FAC2B7_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_mF4B154BB79818B57079DD06DD5509435AF7A4672 (Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignOut_mAB223C1C7D41E844D591A643CF7DE04961D52F6D_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnApplyRedirect_mDB5F53E70D8EAA1EEA98054FFDA7D03A85C3E3B5_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_m855C1EDA8F771B0D4EA7F445E525527552E07BBE (Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnException_m455E3C6932D952A53D6A6B2D238C8FB878F7E86B_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* ___0_value, const RuntimeMethod* method) ;
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521 (RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (RuntimeObject*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared)(___0_result, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieValidateIdentityContext_set_Identity_m7CFBF0F0FD52755641478EB04ED1960F1B5B78A5_inline (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline void Action_1__ctor_mED53C63FD08E8D9F19EC36D4DDE63D0323FE76A3 (Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* BaseContext_1_get_Request_m938BEB1563716C7BE57198A196497E28BD683A04 (BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8*, const RuntimeMethod*))BaseContext_1_get_Request_m7CB8D9F53D28150BE0450F8AEB45E02F203E0AD6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultBehavior_IsAjaxRequest_m946FA6E5453BD83C7B36B96E3D16C9B0FB66B3EF (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJson__ctor_m16ED6B0FA190C8E609FD49980EC362F25C4E951A (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, const RuntimeMethod* method) ;
inline RuntimeObject* BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B (BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseContext_1_tB78F9C8CD55594EA558E36494B0168D176D516E8*, const RuntimeMethod*))BaseContext_1_get_Response_mAEDD28525F2C17F9A1B7617FA84FE23BAD26B184_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJson_set_Status_m2859D87C3B6A270CD043F742900D9E4F694C9522_inline (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJsonHeaders__ctor_mEFBF29C50BB16445DD52135A080B5940AE4F05ED (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CookieApplyRedirectContext_get_RedirectUri_mCEF60D58550EDF5EBCE947E7A12169C4ADD0413B_inline (CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJsonHeaders_set_Location_mCCEDE3C19EE75BA1E086AC5DBEF2D6E7EDA229EC_inline (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJson_set_Headers_m584BE4429EE007CF570ACDC0D0EF9757D33CE115_inline (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractJsonSerializer__ctor_mDBAD2FB5F119218821A9805D8F576DD2FAF7F639 (DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CookieAuthenticationExtensions_UseCookieAuthentication_mD3655F4D50D708DB4D23E204D31A554888123D61 (RuntimeObject* ___0_app, CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* ___1_options, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_app;
		CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* L_1 = ___1_options;
		RuntimeObject* L_2;
		L_2 = CookieAuthenticationExtensions_UseCookieAuthentication_m69B51D423582A4C5971D1227826216364D0BE4CE(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CookieAuthenticationExtensions_UseCookieAuthentication_m69B51D423582A4C5971D1227826216364D0BE4CE (RuntimeObject* ___0_app, CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* ___1_options, int32_t ___2_stage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationMiddleware_tE3327C7B91DFB0D5AED51AC2A8ACBB89587AFBA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieAuthenticationExtensions_UseCookieAuthentication_m69B51D423582A4C5971D1227826216364D0BE4CE_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_app;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CookieAuthenticationMiddleware_tE3327C7B91DFB0D5AED51AC2A8ACBB89587AFBA8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		RuntimeObject* L_7 = ___0_app;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* L_9 = ___1_options;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1, IAppBuilder_t5256A21F9C6E3D1BA46B42B99817A31635BD48F9_il2cpp_TypeInfo_var, L_2, L_4, L_10);
		RuntimeObject* L_12 = ___0_app;
		int32_t L_13 = ___2_stage;
		RuntimeObject* L_14;
		L_14 = IntegratedPipelineExtensions_UseStageMarker_mDDCF7A4559BA59E499EAB517858020AD91E61E8B(L_12, L_13, NULL);
		RuntimeObject* L_15 = ___0_app;
		return L_15;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions__ctor_m6000FDC5FC867FB9069E4C18C8DC611F7D93A1BA (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAC49C2C42EEA76F9D5B41F50BC564BE68923B88);
		s_Il2CppMethodInitialized = true;
	}
	{
		AuthenticationOptions__ctor_m5A4F4F91F894637161F8B402D9A5D16DE63278BF(__this, _stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A, NULL);
		CookieAuthenticationOptions_set_ReturnUrlParameter_m95F7340C974B7DC51487E919D83C779EEAFBAE41_inline(__this, _stringLiteralEAC49C2C42EEA76F9D5B41F50BC564BE68923B88, NULL);
		CookieAuthenticationOptions_set_CookiePath_mBD099B80F4588E252121035CC84AC4ACA6E1AE48_inline(__this, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromDays_mCFEAEBBA8CF0C9EEE18ABC0999D5BF52701EA539((14.0), NULL);
		CookieAuthenticationOptions_set_ExpireTimeSpan_m29F0E8009C5F30208B020F7F3105472EA40DC6EC_inline(__this, L_0, NULL);
		CookieAuthenticationOptions_set_SlidingExpiration_mC1F944767522BF3C70EE7F3192C91977B4406722_inline(__this, (bool)1, NULL);
		CookieAuthenticationOptions_set_CookieHttpOnly_m5922EE4D322B48F71B7610B06691529C1D239C61_inline(__this, (bool)1, NULL);
		CookieAuthenticationOptions_set_CookieSecure_m4A2598F6238AD957B9EFB2D4C68AC463F699149F_inline(__this, 0, NULL);
		SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB* L_1 = (SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB*)il2cpp_codegen_object_new(SystemClock_t2E425901FCB1EAB4EF1BCB7BDD49E4B603375ECB_il2cpp_TypeInfo_var);
		SystemClock__ctor_m5A0BA3C8737A5D20B5BFF883ECA65386522726A8(L_1, NULL);
		CookieAuthenticationOptions_set_SystemClock_m8FE0BB4774C35FC1758B5D8CE01810E03A93AFBB_inline(__this, L_1, NULL);
		CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* L_2 = (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0*)il2cpp_codegen_object_new(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var);
		CookieAuthenticationProvider__ctor_mE60174E36552C8EB66666DF9AF241D72E37F86F4(L_2, NULL);
		CookieAuthenticationOptions_set_Provider_m027091B0EA3B4142344A21DEFD658E716F4788B6_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieName_mC145CD481C72A32EBA55049059916256387593C0 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CookieAuthenticationOptions_set_CookieName_mC145CD481C72A32EBA55049059916256387593C0_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___0_value;
		__this->____cookieName = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cookieName), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookiePath_mBD099B80F4588E252121035CC84AC4ACA6E1AE48 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCookiePathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCookiePathU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieHttpOnly_m5922EE4D322B48F71B7610B06691529C1D239C61 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCookieHttpOnlyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieSecure_m4A2598F6238AD957B9EFB2D4C68AC463F699149F (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCookieSecureU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ExpireTimeSpan_m29F0E8009C5F30208B020F7F3105472EA40DC6EC (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CExpireTimeSpanU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SlidingExpiration_mC1F944767522BF3C70EE7F3192C91977B4406722 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSlidingExpirationU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_LoginPath_m89E581AA2CBCC5B27DFDB8E2878D1B1730756826 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A ___0_value, const RuntimeMethod* method) 
{
	{
		PathString_tE47F30AD6331148AD1F9F2DCED72B99ECD3F2F1A L_0 = ___0_value;
		__this->___U3CLoginPathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CLoginPathU3Ek__BackingField))->____value), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ReturnUrlParameter_m95F7340C974B7DC51487E919D83C779EEAFBAE41 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReturnUrlParameterU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnUrlParameterU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_Provider_m027091B0EA3B4142344A21DEFD658E716F4788B6 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CookieAuthenticationOptions_get_SystemClock_m7206253C0716E143FA90BDECECEC5F7BC0AC9467 (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSystemClockU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SystemClock_m8FE0BB4774C35FC1758B5D8CE01810E03A93AFBB (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSystemClockU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemClockU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieApplyRedirectContext_get_RedirectUri_mCEF60D58550EDF5EBCE947E7A12169C4ADD0413B (CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRedirectUriU3Ek__BackingField;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider__ctor_mE60174E36552C8EB66666DF9AF241D72E37F86F4 (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_U3C_ctorU3Eb__0_m9241A34ED4A39C523E7DFC7AF77D58EDD79E70EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_U3C_ctorU3Eb__1_mF02DC60EC678F20DD8F187F5D2EBA0DA8FF0E7D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_U3C_ctorU3Eb__2_m3842E80F5A18056E6575A6985213DA0CE19A4553_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_U3C_ctorU3Eb__3_m5939AA41AF6D01318EBA1965977FD64551E73F80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_U3C_ctorU3Eb__4_m9288C7D0454929355933C28513EA07E163DA0DBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B2_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B1_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B4_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B3_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B6_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B5_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B8_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B7_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B10_0 = NULL;
	CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* G_B9_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* L_0 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
		G_B1_0 = __this;
	}
	{
		Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* L_1 = (Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE*)il2cpp_codegen_object_new(Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE_il2cpp_TypeInfo_var);
		Func_2__ctor_m166274737E04F60F1BE224929935C0AE3DA6527A(L_1, NULL, (intptr_t)((void*)CookieAuthenticationProvider_U3C_ctorU3Eb__0_m9241A34ED4A39C523E7DFC7AF77D58EDD79E70EE_RuntimeMethod_var), NULL);
		((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5), (void*)L_1);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* L_2 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5;
		NullCheck(G_B2_0);
		CookieAuthenticationProvider_set_OnValidateIdentity_m45ABA2A7A8844F4E6686F1CA8FCFA2E469000D6A_inline(G_B2_0, L_2, NULL);
		Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* L_3 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6;
		if (L_3)
		{
			G_B4_0 = __this;
			goto IL_0042;
		}
		G_B3_0 = __this;
	}
	{
		Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* L_4 = (Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17*)il2cpp_codegen_object_new(Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17_il2cpp_TypeInfo_var);
		Action_1__ctor_m77C69E76EAA01C3D9C1D323B3400DDFC906AC884(L_4, NULL, (intptr_t)((void*)CookieAuthenticationProvider_U3C_ctorU3Eb__1_mF02DC60EC678F20DD8F187F5D2EBA0DA8FF0E7D4_RuntimeMethod_var), NULL);
		((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6), (void*)L_4);
		G_B4_0 = G_B3_0;
	}

IL_0042:
	{
		Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* L_5 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6;
		NullCheck(G_B4_0);
		CookieAuthenticationProvider_set_OnResponseSignIn_m7AB27596FBBECCA5B335EC1F98CB579DE279093E_inline(G_B4_0, L_5, NULL);
		Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* L_6 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate7;
		if (L_6)
		{
			G_B6_0 = __this;
			goto IL_0065;
		}
		G_B5_0 = __this;
	}
	{
		Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* L_7 = (Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D*)il2cpp_codegen_object_new(Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D_il2cpp_TypeInfo_var);
		Action_1__ctor_mB04A20A2DE24264865F59A9598479A99EE37208F(L_7, NULL, (intptr_t)((void*)CookieAuthenticationProvider_U3C_ctorU3Eb__2_m3842E80F5A18056E6575A6985213DA0CE19A4553_RuntimeMethod_var), NULL);
		((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate7), (void*)L_7);
		G_B6_0 = G_B5_0;
	}

IL_0065:
	{
		Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* L_8 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate7;
		NullCheck(G_B6_0);
		CookieAuthenticationProvider_set_OnResponseSignedIn_m7C72B5E8CC847290F102FB0EC595FE6E10FAC2B7_inline(G_B6_0, L_8, NULL);
		Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* L_9 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate8;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_0088;
		}
		G_B7_0 = __this;
	}
	{
		Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* L_10 = (Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5*)il2cpp_codegen_object_new(Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5_il2cpp_TypeInfo_var);
		Action_1__ctor_mF4B154BB79818B57079DD06DD5509435AF7A4672(L_10, NULL, (intptr_t)((void*)CookieAuthenticationProvider_U3C_ctorU3Eb__3_m5939AA41AF6D01318EBA1965977FD64551E73F80_RuntimeMethod_var), NULL);
		((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate8), (void*)L_10);
		G_B8_0 = G_B7_0;
	}

IL_0088:
	{
		Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* L_11 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate8;
		NullCheck(G_B8_0);
		CookieAuthenticationProvider_set_OnResponseSignOut_mAB223C1C7D41E844D591A643CF7DE04961D52F6D_inline(G_B8_0, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var);
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_12 = ((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___ApplyRedirect;
		CookieAuthenticationProvider_set_OnApplyRedirect_mDB5F53E70D8EAA1EEA98054FFDA7D03A85C3E3B5_inline(__this, L_12, NULL);
		Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* L_13 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9;
		if (L_13)
		{
			G_B10_0 = __this;
			goto IL_00b6;
		}
		G_B9_0 = __this;
	}
	{
		Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* L_14 = (Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352*)il2cpp_codegen_object_new(Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352_il2cpp_TypeInfo_var);
		Action_1__ctor_m855C1EDA8F771B0D4EA7F445E525527552E07BBE(L_14, NULL, (intptr_t)((void*)CookieAuthenticationProvider_U3C_ctorU3Eb__4_m9288C7D0454929355933C28513EA07E163DA0DBA_RuntimeMethod_var), NULL);
		((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9), (void*)L_14);
		G_B10_0 = G_B9_0;
	}

IL_00b6:
	{
		Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* L_15 = ((CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_StaticFields*)il2cpp_codegen_static_fields_for(CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate9;
		NullCheck(G_B10_0);
		CookieAuthenticationProvider_set_OnException_m455E3C6932D952A53D6A6B2D238C8FB878F7E86B_inline(G_B10_0, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnValidateIdentity_m45ABA2A7A8844F4E6686F1CA8FCFA2E469000D6A (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* L_0 = ___0_value;
		__this->___U3COnValidateIdentityU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnValidateIdentityU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignIn_m7AB27596FBBECCA5B335EC1F98CB579DE279093E (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* L_0 = ___0_value;
		__this->___U3COnResponseSignInU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignInU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignedIn_m7C72B5E8CC847290F102FB0EC595FE6E10FAC2B7 (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* L_0 = ___0_value;
		__this->___U3COnResponseSignedInU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignedInU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignOut_mAB223C1C7D41E844D591A643CF7DE04961D52F6D (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* L_0 = ___0_value;
		__this->___U3COnResponseSignOutU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignOutU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnApplyRedirect_mDB5F53E70D8EAA1EEA98054FFDA7D03A85C3E3B5 (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_0 = ___0_value;
		__this->___U3COnApplyRedirectU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnApplyRedirectU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnException_m455E3C6932D952A53D6A6B2D238C8FB878F7E86B (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* L_0 = ___0_value;
		__this->___U3COnExceptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnExceptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CookieAuthenticationProvider_U3C_ctorU3Eb__0_m9241A34ED4A39C523E7DFC7AF77D58EDD79E70EE (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0;
		L_0 = Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521(NULL, Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_RuntimeMethod_var);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_U3C_ctorU3Eb__1_mF02DC60EC678F20DD8F187F5D2EBA0DA8FF0E7D4 (CookieResponseSignInContext_t7AE78A86C7023662912A24C3756AC1470DF92BB4* ___0_context, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_U3C_ctorU3Eb__2_m3842E80F5A18056E6575A6985213DA0CE19A4553 (CookieResponseSignedInContext_t2D2F20DBF4D7F7960CC57DDCF0A38E132D0BE9EE* ___0_context, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_U3C_ctorU3Eb__3_m5939AA41AF6D01318EBA1965977FD64551E73F80 (CookieResponseSignOutContext_t2AB4A7D89FBFEE078D041ADACF4DF027D92F5267* ___0_context, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_U3C_ctorU3Eb__4_m9288C7D0454929355933C28513EA07E163DA0DBA (CookieExceptionContext_t42B1218ED9AB136DA1FEEEED1206276EA4C49115* ___0_context, const RuntimeMethod* method) 
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* CookieValidateIdentityContext_get_Identity_m978D736F83D55D22E3BADC4DD7896DBF914019E2 (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, const RuntimeMethod* method) 
{
	{
		ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* L_0 = __this->___U3CIdentityU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieValidateIdentityContext_set_Identity_m7CFBF0F0FD52755641478EB04ED1960F1B5B78A5 (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* ___0_value, const RuntimeMethod* method) 
{
	{
		ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* L_0 = ___0_value;
		__this->___U3CIdentityU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentityU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationProperties_t2163DBF56BB34AD78A451DEB2E1AF58E30FC09A6* CookieValidateIdentityContext_get_Properties_mC1AD8800478D38C6D420A12F4FD5DC0CC01361D4 (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationProperties_t2163DBF56BB34AD78A451DEB2E1AF58E30FC09A6* L_0 = __this->___U3CPropertiesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieValidateIdentityContext_RejectIdentity_m700BDA4F94CFCEA5ECA2DB6870C54EF33FDF87F6 (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, const RuntimeMethod* method) 
{
	{
		CookieValidateIdentityContext_set_Identity_m7CFBF0F0FD52755641478EB04ED1960F1B5B78A5_inline(__this, (ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206*)NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultBehavior_IsAjaxRequest_m946FA6E5453BD83C7B36B96E3D16C9B0FB66B3EF (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHeaderDictionary_t0000859D62B4B34413DF3904554B8079490E92AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOwinRequest_tDF92A3F16C81586EB8BCFC282AD656EA00B1FE53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadableStringCollection_tC2A9199AA5DC18ED900101B9E74584DBAA14FB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884B18CB7418EA33C294CC525B070E9AAA9BE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8CFDF845C6182E86EA14BBF7065163D2D78586F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IOwinRequest_tDF92A3F16C81586EB8BCFC282AD656EA00B1FE53_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0, IReadableStringCollection_tC2A9199AA5DC18ED900101B9E74584DBAA14FB4E_il2cpp_TypeInfo_var, L_3, _stringLiteralC8CFDF845C6182E86EA14BBF7065163D2D78586F);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral884B18CB7418EA33C294CC525B070E9AAA9BE4E5, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)1;
	}

IL_0023:
	{
		RuntimeObject* L_6 = ___0_request;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IOwinRequest_tDF92A3F16C81586EB8BCFC282AD656EA00B1FE53_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		RuntimeObject* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0, IHeaderDictionary_t0000859D62B4B34413DF3904554B8079490E92AB_il2cpp_TypeInfo_var, L_9, _stringLiteralC8CFDF845C6182E86EA14BBF7065163D2D78586F);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral884B18CB7418EA33C294CC525B070E9AAA9BE4E5, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBehavior__cctor_m8C8DE0AF04918E4E0FC6EE64B25D36DE64503EFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBehavior_U3C_cctorU3Eb__2_m5FDD85A216D3CC9385C7EC5C2D08187CA0F06D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_0 = ((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_1 = (Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A*)il2cpp_codegen_object_new(Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A_il2cpp_TypeInfo_var);
		Action_1__ctor_mED53C63FD08E8D9F19EC36D4DDE63D0323FE76A3(L_1, NULL, (intptr_t)((void*)DefaultBehavior_U3C_cctorU3Eb__2_m5FDD85A216D3CC9385C7EC5C2D08187CA0F06D4C_RuntimeMethod_var), NULL);
		((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3), (void*)L_1);
	}

IL_0018:
	{
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_2 = ((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3;
		((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___ApplyRedirect = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var))->___ApplyRedirect), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBehavior_U3C_cctorU3Eb__2_m5FDD85A216D3CC9385C7EC5C2D08187CA0F06D4C (CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseContext_1_get_Request_m938BEB1563716C7BE57198A196497E28BD683A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHeaderDictionary_t0000859D62B4B34413DF3904554B8079490E92AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A3115D003162F592091E6205C4547892A9AC416);
		s_Il2CppMethodInitialized = true;
	}
	RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* V_0 = NULL;
	RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* V_1 = NULL;
	RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* V_2 = NULL;
	{
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_0 = ___0_context;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BaseContext_1_get_Request_m938BEB1563716C7BE57198A196497E28BD683A04(L_0, BaseContext_1_get_Request_m938BEB1563716C7BE57198A196497E28BD683A04_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DefaultBehavior_t9226B0A412A553C3F0538FE8C917F45EA571930A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DefaultBehavior_IsAjaxRequest_m946FA6E5453BD83C7B36B96E3D16C9B0FB66B3EF(L_1, NULL);
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* L_3 = (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183*)il2cpp_codegen_object_new(RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var);
		RespondedJson__ctor_m16ED6B0FA190C8E609FD49980EC362F25C4E951A(L_3, NULL);
		V_1 = L_3;
		RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* L_4 = V_1;
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_5 = ___0_context;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B(L_5, BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_4);
		RespondedJson_set_Status_m2859D87C3B6A270CD043F742900D9E4F694C9522_inline(L_4, L_7, NULL);
		RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* L_8 = V_1;
		RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* L_9 = (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C*)il2cpp_codegen_object_new(RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C_il2cpp_TypeInfo_var);
		RespondedJsonHeaders__ctor_mEFBF29C50BB16445DD52135A080B5940AE4F05ED(L_9, NULL);
		V_2 = L_9;
		RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* L_10 = V_2;
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_11 = ___0_context;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = CookieApplyRedirectContext_get_RedirectUri_mCEF60D58550EDF5EBCE947E7A12169C4ADD0413B_inline(L_11, NULL);
		NullCheck(L_10);
		RespondedJsonHeaders_set_Location_mCCEDE3C19EE75BA1E086AC5DBEF2D6E7EDA229EC_inline(L_10, L_12, NULL);
		RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* L_13 = V_2;
		NullCheck(L_8);
		RespondedJson_set_Headers_m584BE4429EE007CF570ACDC0D0EF9757D33CE115_inline(L_8, L_13, NULL);
		RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* L_14 = V_1;
		V_0 = L_14;
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_15 = ___0_context;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B(L_15, BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< int32_t >::Invoke(1, IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var, L_16, ((int32_t)200));
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_17 = ___0_context;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B(L_17, BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var, L_18);
		RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_20);
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1, IHeaderDictionary_t0000859D62B4B34413DF3904554B8079490E92AB_il2cpp_TypeInfo_var, L_19, _stringLiteral4A3115D003162F592091E6205C4547892A9AC416, L_21);
		return;
	}

IL_006b:
	{
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_22 = ___0_context;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B(L_22, BaseContext_1_get_Response_m7B1F8F02BA245CFA8AEC6CBB5A1501F107F6F03B_RuntimeMethod_var);
		CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* L_24 = ___0_context;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = CookieApplyRedirectContext_get_RedirectUri_mCEF60D58550EDF5EBCE947E7A12169C4ADD0413B_inline(L_24, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< String_t* >::Invoke(3, IOwinResponse_tBF51608794BECE2BAE0644343A200AFAB14D5DE2_il2cpp_TypeInfo_var, L_23, L_25);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJson_set_Status_m2859D87C3B6A270CD043F742900D9E4F694C9522 (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJson_set_Headers_m584BE4429EE007CF570ACDC0D0EF9757D33CE115 (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* ___0_value, const RuntimeMethod* method) 
{
	{
		RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* L_0 = ___0_value;
		__this->___U3CHeadersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RespondedJson_ToString_m4E83C725EFBA939E44B7BA51C5C13B9C97816482 (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var);
			DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* L_3 = ((RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_StaticFields*)il2cpp_codegen_static_fields_for(RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var))->___Serializer;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			NullCheck(L_3);
			VirtualActionInvoker2< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, RuntimeObject* >::Invoke(7, L_3, L_4, __this);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42, L_6);
			NullCheck(L_5);
			String_t* L_8;
			L_8 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43, L_5, L_7);
			V_1 = L_8;
			String_t* L_9 = V_1;
			V_2 = L_9;
			goto IL_0031;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		String_t* L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJson__ctor_m16ED6B0FA190C8E609FD49980EC362F25C4E951A (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJson__cctor_mC3BBEB5526395DEBEDB944E9CE120F8E6BCE82CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* L_2 = (DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1*)il2cpp_codegen_object_new(DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
		DataContractJsonSerializer__ctor_mDBAD2FB5F119218821A9805D8F576DD2FAF7F639(L_2, L_1, NULL);
		((RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_StaticFields*)il2cpp_codegen_static_fields_for(RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var))->___Serializer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_StaticFields*)il2cpp_codegen_static_fields_for(RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183_il2cpp_TypeInfo_var))->___Serializer), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJsonHeaders_set_Location_mCCEDE3C19EE75BA1E086AC5DBEF2D6E7EDA229EC (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CLocationU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocationU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondedJsonHeaders__ctor_mEFBF29C50BB16445DD52135A080B5940AE4F05ED (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ReturnUrlParameter_m95F7340C974B7DC51487E919D83C779EEAFBAE41_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReturnUrlParameterU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReturnUrlParameterU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookiePath_mBD099B80F4588E252121035CC84AC4ACA6E1AE48_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCookiePathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCookiePathU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_ExpireTimeSpan_m29F0E8009C5F30208B020F7F3105472EA40DC6EC_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CExpireTimeSpanU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SlidingExpiration_mC1F944767522BF3C70EE7F3192C91977B4406722_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSlidingExpirationU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieHttpOnly_m5922EE4D322B48F71B7610B06691529C1D239C61_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCookieHttpOnlyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_CookieSecure_m4A2598F6238AD957B9EFB2D4C68AC463F699149F_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCookieSecureU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_SystemClock_m8FE0BB4774C35FC1758B5D8CE01810E03A93AFBB_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSystemClockU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSystemClockU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationOptions_set_Provider_m027091B0EA3B4142344A21DEFD658E716F4788B6_inline (CookieAuthenticationOptions_tFDAA11D73CCEFE211D0F25F102C34DF1EA8687E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnValidateIdentity_m45ABA2A7A8844F4E6686F1CA8FCFA2E469000D6A_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_2_tCFF7774505583626F3F7203FC2A32C31DB0AC2CE* L_0 = ___0_value;
		__this->___U3COnValidateIdentityU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnValidateIdentityU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignIn_m7AB27596FBBECCA5B335EC1F98CB579DE279093E_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_tBB3E95BA99C7FB90312DB829D7A8E0BE53077B17* L_0 = ___0_value;
		__this->___U3COnResponseSignInU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignInU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignedIn_m7C72B5E8CC847290F102FB0EC595FE6E10FAC2B7_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t91C0C8A0D58544495B57EE94A92F0FC03CDDF31D* L_0 = ___0_value;
		__this->___U3COnResponseSignedInU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignedInU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnResponseSignOut_mAB223C1C7D41E844D591A643CF7DE04961D52F6D_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t545332267E71E4B07CDE49F336250D7CC0C45BE5* L_0 = ___0_value;
		__this->___U3COnResponseSignOutU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResponseSignOutU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnApplyRedirect_mDB5F53E70D8EAA1EEA98054FFDA7D03A85C3E3B5_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_tFFA26E6931A275A9636D78C6D110D72BA2F7B44A* L_0 = ___0_value;
		__this->___U3COnApplyRedirectU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnApplyRedirectU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieAuthenticationProvider_set_OnException_m455E3C6932D952A53D6A6B2D238C8FB878F7E86B_inline (CookieAuthenticationProvider_tA23837071CBBB506D160029D0368DC8FC8F82ED0* __this, Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_1_t7F04F02E9B82C059FFA53FCD9D6733A431D7F352* L_0 = ___0_value;
		__this->___U3COnExceptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnExceptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieValidateIdentityContext_set_Identity_m7CFBF0F0FD52755641478EB04ED1960F1B5B78A5_inline (CookieValidateIdentityContext_tE0727B0D0E3A49EA87AF327C157B15013470929D* __this, ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* ___0_value, const RuntimeMethod* method) 
{
	{
		ClaimsIdentity_tF926D758CB543B2C0FC3D0620E1F9BC597889206* L_0 = ___0_value;
		__this->___U3CIdentityU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentityU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJson_set_Status_m2859D87C3B6A270CD043F742900D9E4F694C9522_inline (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CookieApplyRedirectContext_get_RedirectUri_mCEF60D58550EDF5EBCE947E7A12169C4ADD0413B_inline (CookieApplyRedirectContext_t4932A841B86F82A914DFBC90573081B0EDAF98D7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRedirectUriU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJsonHeaders_set_Location_mCCEDE3C19EE75BA1E086AC5DBEF2D6E7EDA229EC_inline (RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CLocationU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocationU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondedJson_set_Headers_m584BE4429EE007CF570ACDC0D0EF9757D33CE115_inline (RespondedJson_t6CE2CCCDFEA8B8097F85504B6DD5EEF4998F0183* __this, RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* ___0_value, const RuntimeMethod* method) 
{
	{
		RespondedJsonHeaders_tEB3365DF82FAEF0AE96FD3904DDDD33DAA1D521C* L_0 = ___0_value;
		__this->___U3CHeadersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
